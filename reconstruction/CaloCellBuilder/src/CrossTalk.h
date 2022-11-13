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
    //virtual StatusCode bookHistograms( SG::EventContext &ctx ) const;    
    virtual StatusCode execute( SG::EventContext &ctx, Gaugi::EDM * ) const override;
    //virtual StatusCode fillHistograms( SG::EventContext &ctx ) const ;
    virtual StatusCode finalize() override;

  private:

    double Heaviside(double x) const ;
    double CellFunction(double x, bool type) const ;
    double XTalk(double x, bool type) const ;
    double FindMax( vector<double> myVector, uint& idx ) const ;
    TMatrixD CorrMatrix(TMatrixD M) const  ;
    void AmpClusterNoise( vector<double> &myVector ) const ;    
    void BuildSampCluster(vector<double> BaseAmpXTc, vector<double> BaseAmpXTl,  vector<double> BaseAmpXTr, vector<double> delayPerCell, vector<double> &XTcSamples, vector<double> &XTlSamples, vector<double> &XTrSamples, vector<double> &CellSigSamples, vector<double> &SampClusNoise, uint m_Nsamples, double m_tau_0 ) const ;
    void BuildRelativeCluster( vector<double> &BaseAmpXTc, vector<double> &BaseAmpXTl, vector<double> &BaseAmpXTr, vector<double> &RelativeAmpXTc, vector<double> &RelativeAmpXTl, vector<double> &RelativeAmpXTr, uint nRow, uint nCol ) const ;
    //void OFcoeffs( vector<double> &AmpCoeff, vector<double> &TimeCoeff ) const ;

    float m_minEnergy;
    std::string m_collectionKey;
    std::string m_histPath;

    TRandom3 *noise = new TRandom3 ;

    uint m_Nsamples = 5 ;
    uint m_tSamp = 25 ;    

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
    double m_AmpXt_R   = 1.0/100  ;       // XTalk amplitude on % values of the Energy
    double m_AmpNoise  = 50 ;             // Noise amplitude 50 MeV
    double tau_0_mean  = 0 ;
    double tau_std     = 0.5 ;

};

#endif

