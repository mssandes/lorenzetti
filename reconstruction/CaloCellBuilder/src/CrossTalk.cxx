#include "CrossTalk.h"
#include "CaloCell/CaloDetDescriptor.h"
#include "CaloCell/CaloDetDescriptorCollection.h"
#include "G4Kernel/CaloPhiRange.h"
#include "G4Kernel/constants.h"
#include "G4SystemOfUnits.hh"


using namespace Gaugi;


CrossTalk::CrossTalk( std::string name ) : 
  IMsgService(name),
  AlgTool()
{
  declareProperty( "MinEnergy"       , m_minEnergy=1*GeV          );
  declareProperty( "CollectionKey"   , m_collectionKey="CaloDetDescriptorCollection"  ); // input
  declareProperty( "HistogramPath"   , m_histPath="Clusters"             );
}

//!=====================================================================

CrossTalk::~CrossTalk()
{}

//!=====================================================================

StatusCode CrossTalk::initialize()
{
  setMsgLevel(m_outputLevel);
  return StatusCode::SUCCESS;
}

/* //!=====================================================================
StatusCode CrossTalk::bookHistograms( SG::EventContext &ctx ) const
{
  auto store = ctx.getStoreGateSvc();

  store->mkdir( m_histPath );  
  store->add( new TH1F("cl_e_xt"        , ";Count;E_{XT};"      , 100,-10*GeV,10*GeV ) );
  store->add( new TH1F("cl_tau0"        , ";Count;#tau_{0};"    , 100, -1.5 , 1.5 ) );
  store->add( new TH1F("cl_etaCluster"  , ";Count;#eta;"        , 100, -3.2 , 3.2 ) );
  store->add( new TH1F("cl_phiCluster"  , ";Count;#phi;"        , 100, -3.2 , 3.2 ) );

  store->add( new TH1F("cl_AmpCoeff"    , ";Count;E_{rec};"     , 100, -1.5 , 1.5 ) );
  store->add( new TH1F("cl_TimeCoeff"   , ";Count;#tau;"        , 100, -1.5 , 1.5 ) );

  store->add( new TH1F("vectorTau_0"    , ";Count;vectorTau_0;"  , 100, 0 , 1.0 ) );
  store->add( new TH1F("delayPerCell"   , ";Count;delayPerCell;" , 100, 0 , 3.2 ) );
  
  store->add( new TH1F("RelativeAmpXTc" , ";Count;RelatXTc;"    , 100,-10*GeV,10*GeV ) );
  store->add( new TH1F("RelativeAmpXTl" , ";Count;RelatXTl;"    , 100,-10*GeV,10*GeV ) );

  store->add( new TH1F("SampClusNoise"  , ";Count;SampClusNoise;"  , 100,-0.08*GeV,0.08*GeV ) );
  store->add( new TH1F("SampRelClusXTc" , ";Count;SampRelClusXTc;" , 100,-10*GeV,10*GeV ) );
  store->add( new TH1F("SampRelClusXTl" , ";Count;SampRelClusXTl;" , 100,-10*GeV,10*GeV ) );
  store->add( new TH1F("CellSigSamples" , ";Count;CellSigSamples;" , 100,-10*GeV,10*GeV ) );

  return StatusCode::SUCCESS;
} */


//!=====================================================================

StatusCode CrossTalk::execute( SG::EventContext &ctx, Gaugi::EDM *edm ) const
{
  auto *hotcell = static_cast<xAOD::CaloDetDescriptor*>(edm);


  // Step 1: check if we need to apply cx methos. Only for cells higher than
  // min energy. At this point we dont have the estimated energy from pulse.
  // Here, lets use the truth energy from the main bunch crossing.
  if (hotcell->edep() > m_minEnergy){
    
    // Since this is a cell candidate, lets take all cells around this cells using a 3x3 window.
    // First lets retrieve the full container in memory (not const objects inside of the collection)
    SG::ReadHandle<xAOD::CaloDetDescriptorCollection> collection( m_collectionKey, ctx );
    if( !collection.isValid() ){
      MSG_FATAL("It's not possible to retrieve the CaloDetDescriptorCollection using this key: " << m_collectionKey);
    }

    std::vector<xAOD::CaloDetDescriptor*> cells_around ,
                                          cluster ;
    vector<double> BaseAmpXTc ,
                   BaseAmpXTl ,
                   BaseAmpXTr ,
                   etaHotCell ,
                   phiHotCell ,
                   etaCluster ,
                   phiCluster ,
                   RelativeAmpXTc ,
                   RelativeAmpXTl ,
                   RelativeAmpXTr ,
                   SampRelatClusXTc ,
                   SampRelatClusXTl ,
                   SampRelatClusXTr ,
                   SampClusNoise ,
                   vectorTau_0 ,
                   delayPerCell ,
                   CellSigSamples, 
                   AmpCoeff, 
                   TimeCoeff ;
    uint nEta = 7 ,
         nPhi = 7 ;    
    for (auto &pair : **collection.ptr()){
      auto *cell = pair.second;
      float deltaEta = std::abs( hotcell->eta() - cell->eta() ) ;
      float deltaPhi = std::abs( CaloPhiRange::fix( hotcell->phi() - cell->phi() ) ) ;
      if (cell == hotcell){
        cluster->push_back(cell) ;
        BaseAmpXTc.push_back( m_AmpXt_C*cell->e() ) ;
        BaseAmpXTl.push_back( m_AmpXt_L*cell->e() ) ;
        BaseAmpXTr.push_back( m_AmpXt_R*cell->e() ) ;
        etaCluster.push_back( cell->eta() ) ;
        phiCluster.push_back( cell->phi() ) ;

        etaHotCell.push_back( cell->eta() ) ;
        phiHotCell.push_back( cell->phi() ) ;

        delayPerCell.push_back( noise->Gaus(0, 0.2) ) ;
        
        MSG_INFO("Cell information "<<cell->pulse()[0] );

        continue;
      }
      // nEta x nPhi window around the hotcell
      // The standard cluster built in around hottest cell is defined
      // taking into account the max shower shapes cluster which contains
      // 7x7 (eta, phi) cells coordinates.

      if( deltaEta < nEta*cell->deltaEta()/2 && deltaPhi < nPhi*cell->deltaPhi()/2 ){
        cells_around.push_back(cell) ;
        BaseAmpXTc.push_back( m_AmpXt_C*cell->e() ) ;
        BaseAmpXTl.push_back( m_AmpXt_L*cell->e() ) ;
        BaseAmpXTr.push_back( m_AmpXt_R*cell->e() ) ;
        etaCluster.push_back( cell->eta() ) ;
        phiCluster.push_back( cell->phi() ) ;

        // In ATLAS LAr there exist a sampling delay between each FEB
        // each FEB controls a set of 128 cells to adjust delays due to
        // different lenghts in optical fibers.        
        delayPerCell.push_back( noise->Gaus(0, 0.2) ) ;
      }
    }

    // arbitrary time of flight of particles used to evaluate methods to study XT effects
    // tau is the time of flight of particle from a collision, this means that a cluster has
    // one tau per event.
    // mean = 0
    // std  = 0.5 ns

    double m_tau_0 = noise->Gaus(0, 0.5) ;
    vectorTau_0.push_back( m_tau_0 ) ;

    BuildRelativeCluster( BaseAmpXTc, BaseAmpXTl, BaseAmpXTr, RelativeAmpXTc, RelativeAmpXTl, RelativeAmpXTr, nPhi, nEta ) ;
    //BuildSampCluster(RelativeAmpXTc, RelativeAmpXTl, RelativeAmpXTr, delayPerCell, SampRelatClusXTc, SampRelatClusXTl, SampRelatClusXTr, CellSigSamples, SampClusNoise, m_Nsamples, m_tau_0 ) ;
    //OFcoeffs( AmpCoeff, TimeCoeff ) ;
    
    MSG_INFO("We find number of cells "<<cells_around.size() );
    //auto pulse = hotcell->pulse();
    for( unsigned sample=0; sample < cells_around[0]->pulse().size(); ++sample) {
      
      MSG_INFO("Cell information "<<cells_around[0]->pulse()[sample] );
    }
    
    // With cells_around and hotcell , we can apply the crosstalk logic.
    // NOTE: at this point we can modify all objects (CaloDet) since 
    // we not make this as const.

  }

  return StatusCode::SUCCESS;
}

//!=====================================================================

StatusCode CrossTalk::finalize()
{
  return StatusCode::SUCCESS;
}

//!=====================================================================
double CrossTalk::FindMax( vector<double> myVector, uint& idx ) const {
    double max = myVector[0]; 

    for ( uint i = 0; i < uint(myVector.size()); i++ ){
        if ( myVector[i] > max ){
            max = myVector[i] ;
            idx = i ;
        }
    }
    return max ; 
} // end of function

//!=====================================================================

double CrossTalk::CellFunction(double x, bool type) const {
    TF1* CellM = new TF1("CellM","[5]*((exp(-x/[0])*x*x)/(2 *[0]*[0]*([0] - [1])) - (exp(-(x/[0]))*x*[1])/([0]*pow([0] - [1],2)) + exp(-(x/[0]))*[1]*[1]/pow([0] - [1],3) + (exp(-(x/[1]))*[1]*[1])/pow(-[0] + [1],3) + (1/(2*[2]*[0] *pow(([0] - [1]),3)))*exp(-x* (1/[0] + 1/[1]))* (-2 *exp(x *(1/[0] + 1/[1]))*[0] *pow(([0] - [1]),3) - 2 *exp(x/[0])*[0]*pow([1],3) + exp(x/[1]) *(x*x *pow(([0] - [1]),2) + 2*x*[0]*([0]*[0] - 3*[0]*[1] + 2*[1]*[1]) + 2*[0]*[0]*([0]*[0] - 3*[0]*[1] + 3*[1]*[1]))) + ((1 - (exp((-x + [2])/[0])*(x - [2])*([0] - 2*[1]))/pow(([0] - [1]),2) - (exp((-x + [2])/[0])*(x - [2])*(x- [2]))/(2*[0]*([0] - [1])) + (exp((-x + [2])/[1])*[1]*[1]*[1])/pow(([0] - [1]),3) - (exp((-x + [2])/[0])*[0]*([0]*[0] - 3*[0]*[1] + 3*[1]*[1]))/pow(([0] - [1]),3))* 0.5*( 1+Sign(1,x -[2]) ) )/[2])*[3]*[4]*[3]*[0]*[0]",0., m_tmax2);

    CellM->SetParameter(0, m_taud);
    CellM->SetParameter(1, m_taupa);
    CellM->SetParameter(2, m_td);
    CellM->SetParameter(3, m_Rf);
    CellM->SetParameter(4, m_C1);

    double cell = 0 ;

    if (type){
        cell = CellM->Derivative(x) ;        
    }
    else {
        cell = CellM->Eval(x) ;
    }

    delete CellM ;
 
    return cell ;
}// end of function

//!=====================================================================
 
double CrossTalk::XTalk(double x, bool type) const {
    TF1* XT_cell = new TF1("XT_cell","((exp(-x/[0])*x*x)/(2 *[0]*[0]*([0] - [1])) - (exp(-(x/[0]))*x*[1])/([0]*pow([0] - [1],2)) + exp(-(x/[0]))*[1]*[1]/pow([0] - [1],3) + (exp(-(x/[1]))*[1]*[1])/pow(-[0] + [1],3) + (1/(2*[2]*[0] *pow(([0] - [1]),3)))*exp(-x* (1/[0] + 1/[1]))* (-2 *exp(x *(1/[0] + 1/[1]))*[0] *pow(([0] - [1]),3) - 2 *exp(x/[0])*[0]*pow([1],3) + exp(x/[1]) *(x*x *pow(([0] - [1]),2) + 2*x*[0]*([0]*[0] - 3*[0]*[1] + 2*[1]*[1]) + 2*[0]*[0]*([0]*[0] - 3*[0]*[1] + 3*[1]*[1]))) + ((1 - (exp((-x + [2])/[0])*(x - [2])*([0] - 2*[1]))/pow(([0] - [1]),2) - (exp((-x + [2])/[0])*(x - [2])*(x- [2]))/(2*[0]*([0] - [1])) + (exp((-x + [2])/[1])*[1]*[1]*[1])/pow(([0] - [1]),3) - (exp((-x + [2])/[0])*[0]*([0]*[0] - 3*[0]*[1] + 3*[1]*[1]))/pow(([0] - [1]),3))* 0.5*( 1+Sign(1, x -[2]) ) )/[2])*[3]*[4]*[3]*[0]*[0]",0., m_tmax2);

    XT_cell->SetParameter(0, m_taud);
    XT_cell->SetParameter(1, m_taupa);
    XT_cell->SetParameter(2, m_td);
    XT_cell->SetParameter(3, m_Rf);
    XT_cell->SetParameter(4, m_C1);

    double xt_cell = 0 ;

    if (type){
        xt_cell = XT_cell->Derivative(x) ;        
    }
    else {
        xt_cell = XT_cell->Eval(x) ;
    }

    delete XT_cell ;
    return xt_cell ;
}// end of function

//!=====================================================================

void CrossTalk::BuildSampCluster(vector<double> BaseAmpXTc, vector<double> BaseAmpXTl,  vector<double> BaseAmpXTr, vector<double> delayPerCell, vector<double> &XTcSamples, vector<double> &XTlSamples, vector<double> &XTrSamples, vector<double> &CellSigSamples, vector<double> &SampClusNoise, uint m_Nsamples, double m_tau_0 ) const {
     
  // build cluster wit cell signal samples and XT signals samples
  // adding sampling delay per cell and a arbitrary tau_0 to validate
  // XT mitigation methods.
  CellSigSamples.clear() ;
  XTcSamples.clear() ;
  XTlSamples.clear() ;
  XTrSamples.clear() ;
  SampClusNoise.clear() ;

  for (uint cell=0; cell < delayPerCell.size(); cell++ ){
    for (uint s=0; s < m_Nsamples; s++ ){
      CellSigSamples.push_back( CellFunction( 25*(s+1) + delayPerCell[cell] + m_tau_0, false ) ) ;
      XTcSamples.push_back( BaseAmpXTc[cell] * XTalk( 25*(s+1) + delayPerCell[cell] + m_tau_0, false ) ) ;
      XTlSamples.push_back( BaseAmpXTl[cell] * XTalk( 25*(s+1) + delayPerCell[cell] + m_tau_0, false ) ) ;
      XTrSamples.push_back( BaseAmpXTr[cell] * CellFunction( 25*(s+1) + delayPerCell[cell] + m_tau_0, false ) ) ;
      SampClusNoise.push_back( noise->Gaus(0, 2) ) ;
    }
  }
  AmpClusterNoise( SampClusNoise ) ;

}// end of function

//!=====================================================================
void CrossTalk::AmpClusterNoise( vector<double> &myVector ) const {

  uint idx ;
  FindMax(myVector, idx ) ;
  double max = myVector[idx] ; 

  for ( uint i=0; i<myVector.size(); i++ ){
    myVector[i] = myVector[i]*m_AmpNoise/max ;
  }

} // end of function

//!=====================================================================
// To compute amplitude and time optimal filter coefficients.
/* void CrossTalk::OFcoeffs( vector<double> &AmpCoeff, vector<double> &TimeCoeff ) const {
  TMatrixD NoiseMatrix(1, m_Nsamples) ,
            gSig(m_Nsamples, 1) , 
            gSigT(1, m_Nsamples) , 
            DgSig(m_Nsamples, 1) , 
            DgSigT(1, m_Nsamples) ,
            A(1,1) ,
            Atau(1,1) ;

  for (uint i=0; i<m_Nsamples; i++){
    NoiseMatrix(0, i) = noise->Gaus(0, 2) ;
    gSigT(0, i)  = gSig(i, 0)  = CellFunction( m_tSamp*(i+1), false ) ;
    DgSigT(0, i) = DgSig(i, 0) = CellFunction( m_tSamp*(i+1), true ) ;   
  }
  // Autocorrelation matrix

  TMatrixD Rxx = CorrMatrix(NoiseMatrix) ;
  // Inverse of Noise Correlation Matrix
  Rxx.Invert() ;

  double Delta, mu, lambda, k, ro ;

  TMatrixD Q1 = gSigT  * Rxx * gSig ;              // Q1  = g^T * R^{1} * g    
  TMatrixD Q2 = DgSigT * Rxx * DgSig ;             // Q2  = g'^T * R^{1} * g'    
  TMatrixD Q3 = DgSigT * Rxx * gSig ;              // Q3  = g'^T * R^{1} * g

  Delta  =  Q1(0,0) * Q2(0,0) - Q3(0,0) * Q3(0,0) ;
  mu     =  Q3(0,0)/Delta ;    
  lambda =  Q2(0,0)/Delta ;        
  ro     = -Q1(0,0)/Delta ;    
  k      = -Q3(0,0)/Delta ;        

  TMatrixD ai = lambda * (Rxx * gSig) +  k * (Rxx * DgSig);
  TMatrixD bi =  mu    * (Rxx * gSig) + ro * (Rxx * DgSig);

  for (uint i=0; i<ai.GetNrows(); i++){
    AmpCoeff.push_back( ai(i,0) ); 
    TimeCoeff.push_back( bi(i,0) ); 
  }

} // end function FilterCoefficients */

//!=====================================================================
// Create the Correlation Matrix
/* TMatrixD CrossTalk::CorrMatrix(TMatrixD M) const {
    int  nCols = M.GetNcols(),           // samples
    nRows = M.GetNrows(),                 // each row it is a vector
    k     = 1 ;                           // lag on the vector
    vector<double> meanM(nRows) ;
    
    for (int i = 0; i < nRows; i++){
        for (int j = 0; j < nCols; j++){
            meanM[i] += M(i,j)/nCols ;
        }
        for (int j = 0; j < nCols; j++){
            M(i,j) -= meanM[i] ;
        }
    }
    
    TMatrixD M1 = M ,
             S  = M1.T()*M ,
             R  = S ,
             r  = M*M1 ;
    //M.Print();
    //// Matrix of the autocorrelation for a vector with samples
    if (nRows < 2){
        R.Zero();
        for (int k = 0; k <= nCols-1; k++){
            for (int i = 0; i < nCols - k; i++){
                R(0, k) += M(0, i)*M(0, i+k)/r(0,0) ;
            }
        }
        for (int i = 0; i < R.GetNcols(); i++){
            for (int j = 0; j < R.GetNrows(); j++){
                for(int idx = 1; idx < R.GetNcols(); idx++){
                    if (abs(i-j) == idx){
                        R(i,j) = R(0,idx) ;
                    }
                }
                if ( i == j ){
                    R(i,j) = R(0,0) ;
                }
            }
        }
        //// Matrix of the correlation for a banch of the row vectors
    }else{
        //cin.get();
        for (uint i = 0; i < nRows; i++){
            for (uint j = 0; j < nRows; j++){
                R(i,j) = S(i,j) / sqrt(S(i,i)*S(j,j));
            }
        }
    }
    return R ;
}// end of function
 */

//!=====================================================================
void CrossTalk::BuildRelativeCluster( vector<double> &BaseAmpXTc, vector<double> &BaseAmpXTl, vector<double> &BaseAmpXTr, vector<double> &RelativeAmpXTc, vector<double> &RelativeAmpXTl, vector<double> &RelativeAmpXTr, uint nRow, uint nCol ) const {  

  // build a relative cluster with respect capacitive effects and 
  // inductive effects a window size nEta x nPhi around hottest 
  // cell is considered to build the relative clusters

  for ( uint idx=0; idx < BaseAmpXTc.size(); idx++ ){
         // center
    if (idx > nCol && idx < nCol*(nRow-1)-1 && idx%nCol != 0 && (idx+1)%nCol != 0){        
      //cout << "idx: "<< idx << " | idx-1: "<< idx-1 <<" | idx+1: " << idx+1  <<" | idx - nCol: "<< idx-nCol << " | idx + nCol: "<< idx+nCol<< endl ; 
      RelativeAmpXTc.push_back( BaseAmpXTc[idx-1] + BaseAmpXTc[idx+1] + BaseAmpXTc[idx - nCol] + BaseAmpXTc[idx+nCol] ) ;
      RelativeAmpXTl.push_back( BaseAmpXTl[idx-1] + BaseAmpXTl[idx+1] + BaseAmpXTl[idx - nCol] + BaseAmpXTl[idx+nCol] + BaseAmpXTl[idx - nCol -1] + BaseAmpXTl[idx - nCol + 1] + BaseAmpXTl[idx + nCol -1] + BaseAmpXTl[idx + nCol + 1] ) ;      
      RelativeAmpXTr.push_back( BaseAmpXTr[idx-1] + BaseAmpXTr[idx+1] + BaseAmpXTr[idx - nCol] + BaseAmpXTr[idx+nCol] + BaseAmpXTr[idx - nCol -1] + BaseAmpXTr[idx - nCol + 1] + BaseAmpXTr[idx + nCol -1] + BaseAmpXTr[idx + nCol + 1] ) ;      
    }
      // first line eBaseAmpXTcept cells 00 && 0j
    if (idx>0 && idx<nCol-1){
      //cout << "idx: "<< idx << " | idx-1: "<< idx-1 <<" | idx+1: " << idx+1  <<" | idx + nCol -1: "<< idx+nCol-1 <<" | idx + nCol: "<< idx+nCol << " | idx + 1 + nCol: "<< idx+1+nCol<< endl ; 
      RelativeAmpXTc.push_back( BaseAmpXTc[idx-1] + BaseAmpXTc[idx+1] + BaseAmpXTc[idx+nCol] ) ;
      RelativeAmpXTl.push_back( BaseAmpXTl[idx-1] + BaseAmpXTl[idx+1] + BaseAmpXTl[idx+nCol] + BaseAmpXTl[idx+1+nCol] + BaseAmpXTl[idx+nCol-1] ) ;
      RelativeAmpXTr.push_back( BaseAmpXTr[idx-1] + BaseAmpXTr[idx+1] + BaseAmpXTr[idx+nCol] + BaseAmpXTr[idx+1+nCol] + BaseAmpXTr[idx+nCol-1] ) ;
    }
      // last line eBaseAmpXTcept cells i0 && ij
    if (idx>(nRow-1)*nCol && idx < nCol*nRow-1){    
        //cout << "idx: "<< idx << " | idx-1: "<< idx-1 <<" | idx+1: " << idx+1  <<" | idx - nCol -1: "<< idx-nCol-1 <<" | idx - nCol: "<< idx-nCol << " | idx + 1 - nCol: "<< idx+1-nCol<< endl ; 
      RelativeAmpXTc.push_back( BaseAmpXTc[idx-1] + BaseAmpXTc[idx+1] + BaseAmpXTc[idx-nCol] ) ;
      RelativeAmpXTl.push_back( BaseAmpXTl[idx-1] + BaseAmpXTl[idx+1] + BaseAmpXTl[idx-nCol] + BaseAmpXTl[idx-nCol-1] + BaseAmpXTl[idx-nCol+1] ) ;
      RelativeAmpXTr.push_back( BaseAmpXTr[idx-1] + BaseAmpXTr[idx+1] + BaseAmpXTr[idx-nCol] + BaseAmpXTr[idx-nCol-1] + BaseAmpXTr[idx-nCol+1] ) ;
    } 
      // first column eBaseAmpXTcept cells 00 && 0j
    if ( idx>0 && idx<nCol*(nRow-1) && idx%nCol == 0 ){
      //cout << "idx: "<< idx << " | idx+1: "<< idx+1 <<" | idx-nCol: " << idx-nCol  <<" | idx-nCol+1: "<< idx-nCol+1 << " | idx+nCol: " << idx+nCol <<" | idx+nCol+1: "<< idx+nCol+1 << endl ; 
      RelativeAmpXTc.push_back( BaseAmpXTc[idx+1] + BaseAmpXTc[idx-nCol] + BaseAmpXTc[idx+nCol] ) ;
      RelativeAmpXTl.push_back( BaseAmpXTl[idx+1] + BaseAmpXTl[idx-nCol] + BaseAmpXTl[idx+nCol] + BaseAmpXTl[idx+1+nCol] + BaseAmpXTl[idx-nCol+1] ) ;
      RelativeAmpXTr.push_back( BaseAmpXTr[idx+1] + BaseAmpXTr[idx-nCol] + BaseAmpXTr[idx+nCol] + BaseAmpXTr[idx+1+nCol] + BaseAmpXTr[idx-nCol+1] ) ;
    }
      // last column cells i0 && ij
    if ( idx>nCol && idx<nCol*(nRow-1) && (idx+1) %nCol == 0 ){
      //cout << "idx: "<< idx << " | idx-1: "<< idx-1 <<" | idx-nCol: " << idx-nCol  <<" | idx-nCol-1: "<< idx-nCol-1 << " | idx+nCol: " << idx+nCol <<" | idx+nCol-1: "<< idx+nCol-1 << endl ; 
      RelativeAmpXTc.push_back( BaseAmpXTc[idx-1] + BaseAmpXTc[idx-nCol] + BaseAmpXTc[idx+nCol] ) ;
      RelativeAmpXTl.push_back( BaseAmpXTl[idx-1] + BaseAmpXTl[idx-nCol] + BaseAmpXTl[idx+nCol] + BaseAmpXTl[idx-1+nCol] + BaseAmpXTl[idx-nCol-1] ) ;
      RelativeAmpXTr.push_back( BaseAmpXTr[idx-1] + BaseAmpXTr[idx-nCol] + BaseAmpXTr[idx+nCol] + BaseAmpXTr[idx-1+nCol] + BaseAmpXTr[idx-nCol-1] ) ;
    }
      // cell 00
    if (idx==0){
      //cout << "idx: "<< idx << " | idx+1: "<< idx+1 <<" | idx + nCol: "<< idx+nCol <<" | idx + nCol+1: "<< idx+nCol+1 << endl ; 
      RelativeAmpXTc.push_back( BaseAmpXTc[idx+1] + BaseAmpXTc[idx+nCol] ) ;
      RelativeAmpXTl.push_back( BaseAmpXTl[idx+1] + BaseAmpXTl[idx+nCol] + BaseAmpXTl[idx+nCol+1] ) ;
      RelativeAmpXTr.push_back( BaseAmpXTr[idx+1] + BaseAmpXTr[idx+nCol] + BaseAmpXTr[idx+nCol+1] ) ;
    }
      // cell 0j
    if (idx==nCol-1){
      //cout << "idx: "<< idx << " | idx-1: "<< idx-1 <<" | idx + nCol-1: "<< idx+nCol-1 <<" | idx + nCol: "<< idx+nCol << endl ; 
      RelativeAmpXTc.push_back( BaseAmpXTc[idx-1] + BaseAmpXTc[idx+nCol] ) ;
      RelativeAmpXTl.push_back( BaseAmpXTl[idx-1] + BaseAmpXTl[idx+nCol] + BaseAmpXTl[idx+nCol-1] );
      RelativeAmpXTr.push_back( BaseAmpXTr[idx-1] + BaseAmpXTr[idx+nCol] + BaseAmpXTr[idx+nCol-1] );
    }
      // cell i0
    if (idx==(nRow-1)*nCol){
        //cout << "idx: "<< idx << " | idx+1: "<< idx+1 <<" | idx - nCol+1: "<< idx-nCol+1 <<" | idx - nCol: "<< idx-nCol << endl ; 
      RelativeAmpXTc.push_back( BaseAmpXTc[idx+1] + BaseAmpXTc[idx-nCol] ) ;
      RelativeAmpXTl.push_back( BaseAmpXTl[idx+1] + BaseAmpXTl[idx-nCol] + BaseAmpXTl[idx-nCol+1] ) ;
      RelativeAmpXTr.push_back( BaseAmpXTr[idx+1] + BaseAmpXTr[idx-nCol] + BaseAmpXTr[idx-nCol+1] ) ;
    }
      // cell ij
    if (idx==nRow*nCol-1){
      //cout << "idx: "<< idx << " | idx-1: "<< idx-1 <<" | idx - nCol-1: "<< idx-nCol-1 <<" | idx - nCol: "<< idx-nCol << endl ; 
      RelativeAmpXTc.push_back( BaseAmpXTc[idx-1] + BaseAmpXTc[idx-nCol] ) ;
      RelativeAmpXTl.push_back( BaseAmpXTl[idx-1] + BaseAmpXTl[idx-nCol] + BaseAmpXTl[idx-nCol-1] ) ;
      RelativeAmpXTr.push_back( BaseAmpXTr[idx-1] + BaseAmpXTr[idx-nCol] + BaseAmpXTr[idx-nCol-1] ) ;
    }
  }
}// end of function
