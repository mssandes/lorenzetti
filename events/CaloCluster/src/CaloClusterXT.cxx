

#include "CaloCluster/CaloClusterXT.h"
//#include "G4Kernel/macros.h"

using namespace xAOD;

CaloClusterXT::CaloClusterXT()
{;}

CaloClusterXT::CaloClusterXT( float emaxs2, float eta, float phi, 
                          float deta, float dphi):
  EDM(),
  m_emaxs2(emaxs2),
  m_eta(eta),
  m_phi(phi),
  m_deta(deta),
  m_dphi(dphi)
{;}

CaloClusterXT::~CaloClusterXT()
{;}

void CaloClusterXT::clear(){
  m_container.clear();
}

void CaloClusterXT::push_back( const xAOD::CaloCell *cell ){
	m_container.push_back(cell);
}

size_t CaloClusterXT::size(){ 
  return m_container.size();
}

const std::vector<const xAOD::CaloCell*>& CaloClusterXT::cells() const{
  return m_container;
}
