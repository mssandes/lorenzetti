#ifndef CaloClusterXTConverter_h
#define CaloClusterXTConverter_h

/** simulator includes **/
#include "CaloCluster/CaloClusterXT.h"
#include "CaloCell/CaloCellConverter.h"
#include <map>

namespace xAOD{

   // typedef std::map<const xAOD::CaloClusterXT*, int> cluster_links_t;

    struct CaloClusterXT_t{
        float e;
        float et;
        float eta;
        float phi;
        float deta;
        float dphi;
        float e0;
        float e1;
        float e2;
        float e3;
        float ehad1;
        float ehad2;
        float ehad3;
        float etot;
        float e233;
        float e237;
        float e277;
        float emaxs1;
        float emaxs2;
        float e2tsts1;
        float reta;
        float rphi;
        float rhad;
        float rhad1;
        float eratio;
        float f0;
        float f1;
        float f2;
        float f3;
        float weta2;
        //std::vector<double> ampXTc;
        //std::vector<double> ampXTl;
        //std::vector<double> ampXTr;
        std::vector<int> cell_links;
    };

    class CaloClusterXTConverter{

        public:
            CaloClusterXTConverter()=default;
            ~CaloClusterXTConverter()=default;

            // convert a class object into a struct
            bool convert(const CaloClusterXT *, CaloClusterXT_t & , cell_links_t &);

        private:

    };
}
#endif


