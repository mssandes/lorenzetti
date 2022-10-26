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
<<<<<<< HEAD
  declareProperty( "MinEnergy"        , m_minEnergy=1*GeV          );
  declareProperty( "CollectionKey"    , m_collectionKey="CaloDetDescriptorCollection"  ); // input
  declareProperty( "HistogramPath"   , m_histPath="Clusters"             );
=======
  declareProperty( "MinEnergy"       , m_minEnergy=1*GeV          );
  declareProperty( "CollectionKey"   , m_collectionKey="CaloDetDescriptorCollection"  ); // input
  declareProperty( "HistogramPath"   , m_histPath="Clusters"             );
  //declareProperty( "HistogramPath"   , m_clusterkey="Clusters"             );
>>>>>>> 9884491673e54bef35d9ea354af8cd4692d872a9
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

//!=====================================================================
/* StatusCode CrossTalk::bookHistograms( SG::EventContext &ctx ) const
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
//  TRandom3 *noise = new TRandom3 ;

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

    vector<xAOD::CaloDetDescriptor*> cells_around;    
    vector<double> BaseAmpXTc ,
                   BaseAmpXTl ,
                   etaCluster ,
                   phiCluster ,
                   RelativeAmpXTc ,
                   RelativeAmpXTl ,
                   SampRelatClusXTc ,
                   SampRelatClusXTl ,
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
      float deltaEta = std::abs( hotcell->eta() - cell->eta() );
      float deltaPhi = std::abs( CaloPhiRange::fix( hotcell->phi() - cell->phi() ) );
      if (cell == hotcell){
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
    // a tau per event.
    // mean = 0
    // std  = 0.5 ns

    double m_tau_0 = noise->Gaus(0, 0.5) ;
    vectorTau_0.push_back( m_tau_0 ) ;
    
    BuildRelativeCluster( BaseAmpXTc, BaseAmpXTl, RelativeAmpXTc, RelativeAmpXTl, nPhi, nEta ) ;
    BuildSampCluster(RelativeAmpXTc, RelativeAmpXTl, delayPerCell, SampRelatClusXTc, SampRelatClusXTl, CellSigSamples, SampClusNoise, m_Nsamples, m_tau_0 ) ;        
    OFcoeffs( AmpCoeff, TimeCoeff ) ;

    // Variables to store:
    // - RelativeAmpXTc
    // - RelativeAmpXTl
    // - delayPerCell
    // - vectorTau_0
    // - SampClusNoise
    // - CellSigSamples
    // - AmpCoeff   - to reconstruct Energy amplitude
    // - TimeCoeff  - to reconstruct time of flight of particle

/* 

  criar objeto calocel container com as informações

 */

    MSG_INFO("We find number of cells "<<cells_around.size() );

    // With cells_around and hotcell , we can apply the crosstalk logic.
    // NOTE: at this point we can modify all objects (CaloDet) since 
    // we not make this as const.

  }
  return StatusCode::SUCCESS;
}

//!=====================================================================

double CrossTalk::Heaviside(double x) const {
    if ( x < 0 ){
        return 0. ;
    }
    else{
        return 1. ;
    }
} // end of function

//!=====================================================================

double CrossTalk::CellFunction(double x, bool type) const {
    TF1* CellM = new TF1("CellM","((exp(-x/[0])*x*x)/(2 *[0]*[0]*([0] - [1])) - (exp(-(x/[0]))*x*[1])/([0]*pow([0] - [1],2)) + exp(-(x/[0]))*[1]*[1]/pow([0] - [1],3) + (exp(-(x/[1]))*[1]*[1])/pow(-[0] + [1],3) + (1/(2*[2]*[0] *pow(([0] - [1]),3)))*exp(-x* (1/[0] + 1/[1]))* (-2 *exp(x *(1/[0] + 1/[1]))*[0] *pow(([0] - [1]),3) - 2 *exp(x/[0])*[0]*pow([1],3) + exp(x/[1]) *(x*x *pow(([0] - [1]),2) + 2*x*[0]*([0]*[0] - 3*[0]*[1] + 2*[1]*[1]) + 2*[0]*[0]*([0]*[0] - 3*[0]*[1] + 3*[1]*[1]))) + ((1 - (exp((-x + [2])/[0])*(x - [2])*([0] - 2*[1]))/pow(([0] - [1]),2) - (exp((-x + [2])/[0])*(x - [2])*(x- [2]))/(2*[0]*([0] - [1])) + (exp((-x + [2])/[1])*[1]*[1]*[1])/pow(([0] - [1]),3) - (exp((-x + [2])/[0])*[0]*([0]*[0] - 3*[0]*[1] + 3*[1]*[1]))/pow(([0] - [1]),3))* Heaviside(x -[2]))/[2])*[3]*[4]*[3]*[0]*[0]",0., m_tmax2);

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
    TF1* CellM = new TF1("CellM","((exp(-x/[0])*x*x)/(2 *[0]*[0]*([0] - [1])) - (exp(-(x/[0]))*x*[1])/([0]*pow([0] - [1],2)) + exp(-(x/[0]))*[1]*[1]/pow([0] - [1],3) + (exp(-(x/[1]))*[1]*[1])/pow(-[0] + [1],3) + (1/(2*[2]*[0] *pow(([0] - [1]),3)))*exp(-x* (1/[0] + 1/[1]))* (-2 *exp(x *(1/[0] + 1/[1]))*[0] *pow(([0] - [1]),3) - 2 *exp(x/[0])*[0]*pow([1],3) + exp(x/[1]) *(x*x *pow(([0] - [1]),2) + 2*x*[0]*([0]*[0] - 3*[0]*[1] + 2*[1]*[1]) + 2*[0]*[0]*([0]*[0] - 3*[0]*[1] + 3*[1]*[1]))) + ((1 - (exp((-x + [2])/[0])*(x - [2])*([0] - 2*[1]))/pow(([0] - [1]),2) - (exp((-x + [2])/[0])*(x - [2])*(x- [2]))/(2*[0]*([0] - [1])) + (exp((-x + [2])/[1])*[1]*[1]*[1])/pow(([0] - [1]),3) - (exp((-x + [2])/[0])*[0]*([0]*[0] - 3*[0]*[1] + 3*[1]*[1]))/pow(([0] - [1]),3))* Heaviside(x -[2]))/[2])*[3]*[4]*[3]*[0]*[0]",0., m_tmax2);

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

void CrossTalk::BuildSampCluster(vector<double> BaseAmpXTc, vector<double> BaseAmpXTl, vector<double> delayPerCell, vector<double> &XTcSamples, vector<double> &XTlSamples, vector<double> &CellSigSamples, vector<double> &SampClusNoise, uint m_Nsamples, double m_tau_0 ) const {
     
  // build cluster wit cell signal samples and XT signals samples
  // adding sampling delay per cell and a arbitrary tau_0 to validate
  // XT mitigation methods.
  CellSigSamples.clear() ;
  XTcSamples.clear() ;
  XTlSamples.clear() ;
  SampClusNoise.clear() ;

  for (uint cell=0; cell < delayPerCell.size(); cell++ ){
    for (uint s=0; s < m_Nsamples; s++ ){
      CellSigSamples.push_back( CellFunction( 25*(s+1) + delayPerCell[cell] + m_tau_0, false ) ) ;
      XTcSamples.push_back( BaseAmpXTc[cell] * XTalk( 25*(s+1) + delayPerCell[cell] + m_tau_0, false ) ) ;
      XTlSamples.push_back( BaseAmpXTl[cell] * XTalk( 25*(s+1) + delayPerCell[cell] + m_tau_0, false ) ) ;
      SampClusNoise.push_back( noise->Gaus(0, 2) ) ;
    }
  }
  AmpClusterNoise( SampClusNoise ) ;
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
void CrossTalk::OFcoeffs( vector<double> &AmpCoeff, vector<double> &TimeCoeff ) const {
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

} // end function FilterCoefficients

//!=====================================================================
// Create the Correlation Matrix
TMatrixD CrossTalk::CorrMatrix(TMatrixD M) const {
    uint  nCols = M.GetNcols(),           // samples
    nRows = M.GetNrows(),                 // each row it is a vector
    k     = 1 ;                           // lag on the vector
    vector<double> meanM(nRows) ;
    
    for (uint i = 0; i < nRows; i++){
        for (uint j = 0; j < nCols; j++){
            meanM[i] += M(i,j)/nCols ;
        }
        for (uint j = 0; j < nCols; j++){
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
        for (uint k = 0; k <= nCols-1; k++){
            for (uint i = 0; i < nCols - k; i++){
                R(0, k) += M(0, i)*M(0, i+k)/r(0,0) ;
            }
        }
        for (int i = 0; i < R.GetNcols(); i++){
            for (int j = 0; j < R.GetNrows(); j++){
                for(uint idx = 1; idx < R.GetNcols(); idx++){
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


//!=====================================================================
void CrossTalk::BuildRelativeCluster( vector<double> &BaseAmpXTc, vector<double> &BaseAmpXTl, vector<double> &RelativeAmpXTc, vector<double> &RelativeAmpXTl, uint nRow, uint nCol ) const {  

  // build a relative cluster with respect capacitive effects and 
  // inductive effects a window size nEta x nPhi around hottest 
  // cell is considered to build the relative clusters

  for ( uint idx=0; idx < BaseAmpXTc.size(); idx++ ){
         // center
    if (idx > nCol && idx < nCol*(nRow-1)-1 && idx%nCol != 0 && (idx+1)%nCol != 0){        
      //cout << "idx: "<< idx << " | idx-1: "<< idx-1 <<" | idx+1: " << idx+1  <<" | idx - nCol: "<< idx-nCol << " | idx + nCol: "<< idx+nCol<< endl ; 
      RelativeAmpXTc.push_back( BaseAmpXTc[idx-1] + BaseAmpXTc[idx+1] + BaseAmpXTc[idx - nCol] + BaseAmpXTc[idx+nCol] ) ;
      RelativeAmpXTl.push_back( BaseAmpXTl[idx-1] + BaseAmpXTl[idx+1] + BaseAmpXTl[idx - nCol] + BaseAmpXTl[idx+nCol] + BaseAmpXTl[idx - nCol -1] + BaseAmpXTl[idx - nCol + 1] + BaseAmpXTl[idx + nCol -1] + BaseAmpXTl[idx + nCol + 1] ) ;
    }
      // first line eBaseAmpXTcept cells 00 && 0j
    if (idx>0 && idx<nCol-1){
      //cout << "idx: "<< idx << " | idx-1: "<< idx-1 <<" | idx+1: " << idx+1  <<" | idx + nCol -1: "<< idx+nCol-1 <<" | idx + nCol: "<< idx+nCol << " | idx + 1 + nCol: "<< idx+1+nCol<< endl ; 
      RelativeAmpXTc.push_back( BaseAmpXTc[idx-1] + BaseAmpXTc[idx+1] + BaseAmpXTc[idx+nCol] ) ;
      RelativeAmpXTl.push_back( BaseAmpXTl[idx-1] + BaseAmpXTl[idx+1] + BaseAmpXTl[idx+nCol] + BaseAmpXTl[idx+1+nCol] + BaseAmpXTl[idx+nCol-1] ) ;
    }
      // last line eBaseAmpXTcept cells i0 && ij
    if (idx>(nRow-1)*nCol && idx < nCol*nRow-1){    
        //cout << "idx: "<< idx << " | idx-1: "<< idx-1 <<" | idx+1: " << idx+1  <<" | idx - nCol -1: "<< idx-nCol-1 <<" | idx - nCol: "<< idx-nCol << " | idx + 1 - nCol: "<< idx+1-nCol<< endl ; 
      RelativeAmpXTc.push_back( BaseAmpXTc[idx-1] + BaseAmpXTc[idx+1] + BaseAmpXTc[idx-nCol] ) ;
      RelativeAmpXTl.push_back( BaseAmpXTl[idx-1] + BaseAmpXTl[idx+1] + BaseAmpXTl[idx-nCol] + BaseAmpXTl[idx-nCol-1] + BaseAmpXTl[idx-nCol+1] ) ;
    } 
      // first column eBaseAmpXTcept cells 00 && 0j
    if ( idx>0 && idx<nCol*(nRow-1) && idx%nCol == 0 ){
      //cout << "idx: "<< idx << " | idx+1: "<< idx+1 <<" | idx-nCol: " << idx-nCol  <<" | idx-nCol+1: "<< idx-nCol+1 << " | idx+nCol: " << idx+nCol <<" | idx+nCol+1: "<< idx+nCol+1 << endl ; 
      RelativeAmpXTc.push_back( BaseAmpXTc[idx+1] + BaseAmpXTc[idx-nCol] + BaseAmpXTc[idx+nCol] ) ;
      RelativeAmpXTl.push_back( BaseAmpXTl[idx+1] + BaseAmpXTl[idx-nCol] + BaseAmpXTl[idx+nCol] + BaseAmpXTl[idx+1+nCol] + BaseAmpXTl[idx-nCol+1] ) ;
    }
      // last column cells i0 && ij
    if ( idx>nCol && idx<nCol*(nRow-1) && (idx+1) %nCol == 0 ){
      //cout << "idx: "<< idx << " | idx-1: "<< idx-1 <<" | idx-nCol: " << idx-nCol  <<" | idx-nCol-1: "<< idx-nCol-1 << " | idx+nCol: " << idx+nCol <<" | idx+nCol-1: "<< idx+nCol-1 << endl ; 
      RelativeAmpXTc.push_back( BaseAmpXTc[idx-1] + BaseAmpXTc[idx-nCol] + BaseAmpXTc[idx+nCol] ) ;
      RelativeAmpXTl.push_back( BaseAmpXTl[idx-1] + BaseAmpXTl[idx-nCol] + BaseAmpXTl[idx+nCol] + BaseAmpXTl[idx-1+nCol] + BaseAmpXTl[idx-nCol-1] ) ;
    }
      // cell 00
    if (idx==0){
      //cout << "idx: "<< idx << " | idx+1: "<< idx+1 <<" | idx + nCol: "<< idx+nCol <<" | idx + nCol+1: "<< idx+nCol+1 << endl ; 
      RelativeAmpXTc.push_back( BaseAmpXTc[idx+1] + BaseAmpXTc[idx+nCol] ) ;
      RelativeAmpXTl.push_back( BaseAmpXTl[idx+1] + BaseAmpXTl[idx+nCol] + BaseAmpXTl[idx+nCol+1] ) ;
    }
      // cell 0j
    if (idx==nCol-1){
      //cout << "idx: "<< idx << " | idx-1: "<< idx-1 <<" | idx + nCol-1: "<< idx+nCol-1 <<" | idx + nCol: "<< idx+nCol << endl ; 
      RelativeAmpXTc.push_back( BaseAmpXTc[idx-1] + BaseAmpXTc[idx+nCol] ) ;
      RelativeAmpXTl.push_back( BaseAmpXTl[idx-1] + BaseAmpXTl[idx+nCol] + BaseAmpXTl[idx+nCol-1] );
    }
      // cell i0
    if (idx==(nRow-1)*nCol){
        //cout << "idx: "<< idx << " | idx+1: "<< idx+1 <<" | idx - nCol+1: "<< idx-nCol+1 <<" | idx - nCol: "<< idx-nCol << endl ; 
      RelativeAmpXTc.push_back( BaseAmpXTc[idx+1] + BaseAmpXTc[idx-nCol] ) ;
      RelativeAmpXTl.push_back( BaseAmpXTl[idx+1] + BaseAmpXTl[idx-nCol] + BaseAmpXTl[idx-nCol+1] ) ;
    }
      // cell ij
    if (idx==nRow*nCol-1){
      //cout << "idx: "<< idx << " | idx-1: "<< idx-1 <<" | idx - nCol-1: "<< idx-nCol-1 <<" | idx - nCol: "<< idx-nCol << endl ; 
      RelativeAmpXTc.push_back( BaseAmpXTc[idx-1] + BaseAmpXTc[idx-nCol] ) ;
      RelativeAmpXTl.push_back( BaseAmpXTl[idx-1] + BaseAmpXTl[idx-nCol] + BaseAmpXTl[idx-nCol-1] ) ;
    }
  }
}

//!=====================================================================

double CrossTalk::Heaviside(double x) const {
    if ( x < 0 ){
        return 0. ;
    }
    else{
        return 1. ;
    }
} // end of function

//!=====================================================================

double CrossTalk::CellFunction(double x, bool type) const {
    TF1* CellM = new TF1("CellM","((exp(-x/[0])*x*x)/(2 *[0]*[0]*([0] - [1])) - (exp(-(x/[0]))*x*[1])/([0]*pow([0] - [1],2)) + exp(-(x/[0]))*[1]*[1]/pow([0] - [1],3) + (exp(-(x/[1]))*[1]*[1])/pow(-[0] + [1],3) + (1/(2*[2]*[0] *pow(([0] - [1]),3)))*exp(-x* (1/[0] + 1/[1]))* (-2 *exp(x *(1/[0] + 1/[1]))*[0] *pow(([0] - [1]),3) - 2 *exp(x/[0])*[0]*pow([1],3) + exp(x/[1]) *(x*x *pow(([0] - [1]),2) + 2*x*[0]*([0]*[0] - 3*[0]*[1] + 2*[1]*[1]) + 2*[0]*[0]*([0]*[0] - 3*[0]*[1] + 3*[1]*[1]))) + ((1 - (exp((-x + [2])/[0])*(x - [2])*([0] - 2*[1]))/pow(([0] - [1]),2) - (exp((-x + [2])/[0])*(x - [2])*(x- [2]))/(2*[0]*([0] - [1])) + (exp((-x + [2])/[1])*[1]*[1]*[1])/pow(([0] - [1]),3) - (exp((-x + [2])/[0])*[0]*([0]*[0] - 3*[0]*[1] + 3*[1]*[1]))/pow(([0] - [1]),3))* Heaviside(x -[2]))/[2])*[3]*[4]*[3]*[0]*[0]",0., m_tmax2);

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

void CrossTalk::BuildSampCluster(vector<double> BaseAmpXTc, vector<double> BaseAmpXTl, vector<double> delayPerCell, vector<double> &XTcSamples, vector<double> &XTlSamples, vector<double> &CellSigSamples, vector<double> &SampClusNoise, uint m_Nsamples, double m_tau_0 ) const {
     
  // build cluster wit cell signal samples and XT signals samples
  // adding sampling delay per cell and a arbitrary tau_0 to validate
  // XT mitigation methods.
  CellSigSamples.clear() ;
  XTcSamples.clear() ;
  XTlSamples.clear() ;
  SampClusNoise.clear() ;

<<<<<<< HEAD
  for (uint cell=0; cell < delayPerCell.size(); cell++ ){
    for (uint s=0; s < m_Nsamples; s++ ){
      CellSigSamples.push_back( CellFunction( 25*(s+1) + delayPerCell[cell] + m_tau_0, false ) ) ;
      XTcSamples.push_back( BaseAmpXTc[cell] * XTalk( 25*(s+1) + delayPerCell[cell] + m_tau_0, false ) ) ;
      XTlSamples.push_back( BaseAmpXTl[cell] * XTalk( 25*(s+1) + delayPerCell[cell] + m_tau_0, false ) ) ;
      SampClusNoise.push_back( noise->Gaus(0, 2) ) ;
    }
  }
  AmpClusterNoise( SampClusNoise ) ;
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
void CrossTalk::OFcoeffs( vector<double> &AmpCoeff, vector<double> &TimeCoeff ) const {
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

} // end function FilterCoefficients

//!=====================================================================
// Create the Correlation Matrix
TMatrixD CrossTalk::CorrMatrix(TMatrixD M) const {
    uint  nCols = M.GetNcols(),           // samples
    nRows = M.GetNrows(),                 // each row it is a vector
    k     = 1 ;                           // lag on the vector
    vector<double> meanM(nRows) ;
    
    for (uint i = 0; i < nRows; i++){
        for (uint j = 0; j < nCols; j++){
            meanM[i] += M(i,j)/nCols ;
        }
        for (uint j = 0; j < nCols; j++){
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
        for (uint k = 0; k <= nCols-1; k++){
            for (uint i = 0; i < nCols - k; i++){
                R(0, k) += M(0, i)*M(0, i+k)/r(0,0) ;
            }
        }
        for (int i = 0; i < R.GetNcols(); i++){
            for (int j = 0; j < R.GetNrows(); j++){
                for(uint idx = 1; idx < R.GetNcols(); idx++){
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


//!=====================================================================
void CrossTalk::BuildRelativeCluster( vector<double> &BaseAmpXTc, vector<double> &BaseAmpXTl, vector<double> &RelativeAmpXTc, vector<double> &RelativeAmpXTl, uint nRow, uint nCol ) const {  

  // build a relative cluster with respect capacitive effects and 
  // inductive effects a window size nEta x nPhi around hottest 
  // cell is considered to build the relative clusters

  for ( uint idx=0; idx < BaseAmpXTc.size(); idx++ ){
         // center
    if (idx > nCol && idx < nCol*(nRow-1)-1 && idx%nCol != 0 && (idx+1)%nCol != 0){        
      //cout << "idx: "<< idx << " | idx-1: "<< idx-1 <<" | idx+1: " << idx+1  <<" | idx - nCol: "<< idx-nCol << " | idx + nCol: "<< idx+nCol<< endl ; 
      RelativeAmpXTc.push_back( BaseAmpXTc[idx-1] + BaseAmpXTc[idx+1] + BaseAmpXTc[idx - nCol] + BaseAmpXTc[idx+nCol] ) ;
      RelativeAmpXTl.push_back( BaseAmpXTl[idx-1] + BaseAmpXTl[idx+1] + BaseAmpXTl[idx - nCol] + BaseAmpXTl[idx+nCol] + BaseAmpXTl[idx - nCol -1] + BaseAmpXTl[idx - nCol + 1] + BaseAmpXTl[idx + nCol -1] + BaseAmpXTl[idx + nCol + 1] ) ;
    }
      // first line eBaseAmpXTcept cells 00 && 0j
    if (idx>0 && idx<nCol-1){
      //cout << "idx: "<< idx << " | idx-1: "<< idx-1 <<" | idx+1: " << idx+1  <<" | idx + nCol -1: "<< idx+nCol-1 <<" | idx + nCol: "<< idx+nCol << " | idx + 1 + nCol: "<< idx+1+nCol<< endl ; 
      RelativeAmpXTc.push_back( BaseAmpXTc[idx-1] + BaseAmpXTc[idx+1] + BaseAmpXTc[idx+nCol] ) ;
      RelativeAmpXTl.push_back( BaseAmpXTl[idx-1] + BaseAmpXTl[idx+1] + BaseAmpXTl[idx+nCol] + BaseAmpXTl[idx+1+nCol] + BaseAmpXTl[idx+nCol-1] ) ;
    }
      // last line eBaseAmpXTcept cells i0 && ij
    if (idx>(nRow-1)*nCol && idx < nCol*nRow-1){    
        //cout << "idx: "<< idx << " | idx-1: "<< idx-1 <<" | idx+1: " << idx+1  <<" | idx - nCol -1: "<< idx-nCol-1 <<" | idx - nCol: "<< idx-nCol << " | idx + 1 - nCol: "<< idx+1-nCol<< endl ; 
      RelativeAmpXTc.push_back( BaseAmpXTc[idx-1] + BaseAmpXTc[idx+1] + BaseAmpXTc[idx-nCol] ) ;
      RelativeAmpXTl.push_back( BaseAmpXTl[idx-1] + BaseAmpXTl[idx+1] + BaseAmpXTl[idx-nCol] + BaseAmpXTl[idx-nCol-1] + BaseAmpXTl[idx-nCol+1] ) ;
    } 
      // first column eBaseAmpXTcept cells 00 && 0j
    if ( idx>0 && idx<nCol*(nRow-1) && idx%nCol == 0 ){
      //cout << "idx: "<< idx << " | idx+1: "<< idx+1 <<" | idx-nCol: " << idx-nCol  <<" | idx-nCol+1: "<< idx-nCol+1 << " | idx+nCol: " << idx+nCol <<" | idx+nCol+1: "<< idx+nCol+1 << endl ; 
      RelativeAmpXTc.push_back( BaseAmpXTc[idx+1] + BaseAmpXTc[idx-nCol] + BaseAmpXTc[idx+nCol] ) ;
      RelativeAmpXTl.push_back( BaseAmpXTl[idx+1] + BaseAmpXTl[idx-nCol] + BaseAmpXTl[idx+nCol] + BaseAmpXTl[idx+1+nCol] + BaseAmpXTl[idx-nCol+1] ) ;
    }
      // last column cells i0 && ij
    if ( idx>nCol && idx<nCol*(nRow-1) && (idx+1) %nCol == 0 ){
      //cout << "idx: "<< idx << " | idx-1: "<< idx-1 <<" | idx-nCol: " << idx-nCol  <<" | idx-nCol-1: "<< idx-nCol-1 << " | idx+nCol: " << idx+nCol <<" | idx+nCol-1: "<< idx+nCol-1 << endl ; 
      RelativeAmpXTc.push_back( BaseAmpXTc[idx-1] + BaseAmpXTc[idx-nCol] + BaseAmpXTc[idx+nCol] ) ;
      RelativeAmpXTl.push_back( BaseAmpXTl[idx-1] + BaseAmpXTl[idx-nCol] + BaseAmpXTl[idx+nCol] + BaseAmpXTl[idx-1+nCol] + BaseAmpXTl[idx-nCol-1] ) ;
    }
      // cell 00
    if (idx==0){
      //cout << "idx: "<< idx << " | idx+1: "<< idx+1 <<" | idx + nCol: "<< idx+nCol <<" | idx + nCol+1: "<< idx+nCol+1 << endl ; 
      RelativeAmpXTc.push_back( BaseAmpXTc[idx+1] + BaseAmpXTc[idx+nCol] ) ;
      RelativeAmpXTl.push_back( BaseAmpXTl[idx+1] + BaseAmpXTl[idx+nCol] + BaseAmpXTl[idx+nCol+1] ) ;
    }
      // cell 0j
    if (idx==nCol-1){
      //cout << "idx: "<< idx << " | idx-1: "<< idx-1 <<" | idx + nCol-1: "<< idx+nCol-1 <<" | idx + nCol: "<< idx+nCol << endl ; 
      RelativeAmpXTc.push_back( BaseAmpXTc[idx-1] + BaseAmpXTc[idx+nCol] ) ;
      RelativeAmpXTl.push_back( BaseAmpXTl[idx-1] + BaseAmpXTl[idx+nCol] + BaseAmpXTl[idx+nCol-1] );
    }
      // cell i0
    if (idx==(nRow-1)*nCol){
        //cout << "idx: "<< idx << " | idx+1: "<< idx+1 <<" | idx - nCol+1: "<< idx-nCol+1 <<" | idx - nCol: "<< idx-nCol << endl ; 
      RelativeAmpXTc.push_back( BaseAmpXTc[idx+1] + BaseAmpXTc[idx-nCol] ) ;
      RelativeAmpXTl.push_back( BaseAmpXTl[idx+1] + BaseAmpXTl[idx-nCol] + BaseAmpXTl[idx-nCol+1] ) ;
    }
      // cell ij
    if (idx==nRow*nCol-1){
      //cout << "idx: "<< idx << " | idx-1: "<< idx-1 <<" | idx - nCol-1: "<< idx-nCol-1 <<" | idx - nCol: "<< idx-nCol << endl ; 
      RelativeAmpXTc.push_back( BaseAmpXTc[idx-1] + BaseAmpXTc[idx-nCol] ) ;
      RelativeAmpXTl.push_back( BaseAmpXTl[idx-1] + BaseAmpXTl[idx-nCol] + BaseAmpXTl[idx-nCol-1] ) ;
    }
  }
=======
//!=====================================================================
/* StatusCode CrossTalk::fillHistograms( SG::EventContext &ctx ) const {

  MSG_DEBUG( "Fill all histograms" );
  
  auto store = ctx.getStoreGateSvc();

  SG::ReadHandle<xAOD::CaloClusterContainer> clusters( m_clusterKey, ctx );

  if( !clusters.isValid() ){
    MSG_ERROR("It's not possible to get the CaloClusterContainer inside of this Context using this key: " << m_clusterKey);
    return StatusCode::FAILURE;
  }

  MSG_DEBUG( "We found " << clusters->size() << " clusters (RoIs) inside of this event." );

  SG::ReadHandle<xAOD::TruthParticleContainer> particles(m_truthKey, ctx);
  if( !particles.isValid() ){
    MSG_FATAL( "It's not possible to read the xAOD::TruthParticleContainer from this Context" );
  }

  store->cd(m_histPath);

  for( const auto& clus : **clusters.ptr() ){
  
    
    const xAOD::TruthParticle *particle=nullptr;

    // TODO: Probably some c++ expert can reduce this **var.ptr(), too verbose...
    // Try to find the associated truth particle
    for(const auto& part : **particles.ptr() ){
      if( dR(clus->eta(), clus->phi(), part->eta(), part->phi() ) < 0.4){
        particle=part;
        break;
      }
    }

    MSG_DEBUG("============== Cluster Information ==============");


    if(particle){
      store->hist1("res_eta")->Fill( (clus->eta() - particle->eta()) );
      store->hist1("res_phi")->Fill( (clus->phi() - particle->phi()) );
      // estimated transverse energy and truth
      store->hist1("res_et")->Fill( (clus->et() - particle->et() ) );
      // estimated energy and truth
      store->hist1("res_e")->Fill( (clus->e() - particle->e()) );
      MSG_DEBUG( "Truth Particle information:" );
      MSG_DEBUG( "E        : " << particle->e() );
      MSG_DEBUG( "Et       : " << particle->et() );
      MSG_DEBUG( "Eta      : " << particle->eta() );
      MSG_DEBUG( "Phi      : " << particle->phi() );
    }

    store->hist1("cl_e")->Fill( clus->e() / GeV);
    store->hist1("cl_et")->Fill( clus->et() / GeV);
    store->hist1("cl_eta")->Fill( clus->eta() );
    store->hist1("cl_phi")->Fill( clus->phi() );
    store->hist1("cl_reta")->Fill( clus->reta() );
    store->hist1("cl_rphi")->Fill( clus->rphi() );
    store->hist1("cl_rhad")->Fill( clus->rhad() );
    store->hist1("cl_eratio")->Fill( clus->eratio() );
    store->hist1("cl_f1")->Fill( clus->f1() );
    store->hist1("cl_f3")->Fill( clus->f3() );
    store->hist1("cl_weta2")->Fill( clus->weta2() );



    MSG_DEBUG( "Cluster information:" );
    MSG_DEBUG( "Eta      : " << clus->eta()    );
    MSG_DEBUG( "Phi      : " << clus->phi()    );
    MSG_DEBUG( "Et       : " << clus->et()     );
    MSG_DEBUG( "e1       : " << clus->e1()     );
    MSG_DEBUG( "e2       : " << clus->e2()     );
    MSG_DEBUG( "e3       : " << clus->e3()     );
    MSG_DEBUG( "ehad1    : " << clus->ehad1()  );
    MSG_DEBUG( "ehad2    : " << clus->ehad2()  );
    MSG_DEBUG( "ehad3    : " << clus->ehad3()  );
    MSG_DEBUG( "etot     : " << clus->etot()   );
    MSG_DEBUG( "Reta     : " << clus->reta()   );
    MSG_DEBUG( "Rphi     : " << clus->rphi()   );
    MSG_DEBUG( "Rhad     : " << clus->rhad()   );
    MSG_DEBUG( "Eratio   : " << clus->eratio() );
    MSG_DEBUG( "f1       : " << clus->f1()     );
    MSG_DEBUG( "f3       : " << clus->f3()     );
    MSG_DEBUG( "Weta2    : " << clus->weta2()  );
    MSG_DEBUG("=================================================");
  }

  return StatusCode::SUCCESS;
}
  */
//!=====================================================================

StatusCode CrossTalk::finalize()
{
  return StatusCode::SUCCESS;
>>>>>>> 9884491673e54bef35d9ea354af8cd4692d872a9
}