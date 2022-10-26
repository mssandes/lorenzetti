#ifndef CrossTalk_h
#define CrossTalk_h

#include "GaugiKernel/AlgTool.h"
#include "GaugiKernel/EDM.h"
#include "TF1.h"
#include "TMatrixD.h"
#include "TVectorD.h"
#include "TRandom3.h"

using namespace std ;

class CrossTalk : public Gaugi::AlgTool
{

  public:
    /** Constructor **/
    CrossTalk( std::string name );
    virtual ~CrossTalk();
    virtual StatusCode initialize() override;
    virtual StatusCode finalize() override;

    virtual StatusCode execute( SG::EventContext &ctx, Gaugi::EDM * ) const override;

  private:

    float m_minEnergy;
    std::string m_collectionKey;
    std::string m_histPath;

    double Heaviside(double x) const ;
    void AmpClusterNoise( vector<double> &myVector ) const ;
    double FindMax( vector<double> myVector, uint& idx ) const ;
    double CellFunction(double x, bool type) const ;
    double XTalk(double x, bool type) const ;        
    TMatrixD CorrMatrix(TMatrixD M) const  ;
    void OFcoeffs( vector<double> &AmpCoeff, vector<double> &TimeCoeff ) const ;    
    void BuildSampCluster(vector<double> AmpXT_c, vector<double> AmpXT_l, vector<double> delayPerCell, vector<double> &XTc, vector<double> &XTl, vector<double> &CellSigSamples,  vector<double> &SampClusNoise, uint m_Nsamples, double m_tau_0 ) const ;
    void BuildRelativeCluster( vector<double> &xc, vector<double> &xl, vector<double> &RelativeXTc, vector<double> &RelativeXTl, uint nRow, uint nCol ) const ;

    TRandom3 *noise = new TRandom3 ;

    uint m_Nsamples = 5 ;
    uint m_tSamp = 25 ;
    // Constants to defines LAr cell and XT signal
    double m_Cx      =  47.000 ;
    double m_Rf      =   0.078 ;
    double m_Rin     =   1.200 ;
    double m_taud    =  15.820 ;
    double m_taupa   =  17.310 ;
    double m_td      = 420.000 ;
    double m_tmax2   = 600.000 ;
    double m_C1      =  50.000 ;

    // This value normalize amplitude of the Xt_C to unit
    double m_ToNormXtC = 0.022206 ;       
    // This value normalize amplitude of the Xt_L to unit
    //double m_ToNormXtL = 0.0539463;
    // Noise amplitude on LAr is 50 MeV

    // XTalk amplitude on % values of the Energy
    double m_AmpXt_C   = 4.2/100  ;
    double m_AmpXt_L   = 2.3/100  ;       // XTalk amplitude on % values of the Energy
    double m_AmpNoise  = 50 ;             // Noise amplitude 50 MeV
    double tau_0_mean  = 0 ;
    double tau_std     = 0.5 ;

};

#endif

