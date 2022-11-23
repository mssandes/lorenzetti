// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME CaloRingsDict

/*******************************************************************/
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#define G__DICTIONARY
#include "RConfig.h"
#include "TClass.h"
#include "TDictAttributeMap.h"
#include "TInterpreter.h"
#include "TROOT.h"
#include "TBuffer.h"
#include "TMemberInspector.h"
#include "TInterpreter.h"
#include "TVirtualMutex.h"
#include "TError.h"

#ifndef G__ROOT
#define G__ROOT
#endif

#include "RtypesImp.h"
#include "TIsAProxy.h"
#include "TFileMergeInfo.h"
#include <algorithm>
#include "TCollectionProxyInfo.h"
/*******************************************************************/

#include "TDataMember.h"

// Since CINT ignores the std namespace, we need to do so in this file.
namespace std {} using namespace std;

// Header files passed as explicit arguments
#include "/home/marton.sandes/lzt/lorenzetti/events/CaloRings/CaloRings/CaloRings.h"
#include "/home/marton.sandes/lzt/lorenzetti/events/CaloRings/CaloRings/CaloRingsContainer.h"
#include "/home/marton.sandes/lzt/lorenzetti/events/CaloRings/CaloRings/CaloRingsConverter.h"
#include "CaloRings/CaloRingsConverter.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static TClass *xAODcLcLCaloRings_t_Dictionary();
   static void xAODcLcLCaloRings_t_TClassManip(TClass*);
   static void *new_xAODcLcLCaloRings_t(void *p = 0);
   static void *newArray_xAODcLcLCaloRings_t(Long_t size, void *p);
   static void delete_xAODcLcLCaloRings_t(void *p);
   static void deleteArray_xAODcLcLCaloRings_t(void *p);
   static void destruct_xAODcLcLCaloRings_t(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::xAOD::CaloRings_t*)
   {
      ::xAOD::CaloRings_t *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::xAOD::CaloRings_t));
      static ::ROOT::TGenericClassInfo 
         instance("xAOD::CaloRings_t", "CaloRings/CaloRingsConverter.h", 10,
                  typeid(::xAOD::CaloRings_t), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &xAODcLcLCaloRings_t_Dictionary, isa_proxy, 4,
                  sizeof(::xAOD::CaloRings_t) );
      instance.SetNew(&new_xAODcLcLCaloRings_t);
      instance.SetNewArray(&newArray_xAODcLcLCaloRings_t);
      instance.SetDelete(&delete_xAODcLcLCaloRings_t);
      instance.SetDeleteArray(&deleteArray_xAODcLcLCaloRings_t);
      instance.SetDestructor(&destruct_xAODcLcLCaloRings_t);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::xAOD::CaloRings_t*)
   {
      return GenerateInitInstanceLocal((::xAOD::CaloRings_t*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::xAOD::CaloRings_t*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *xAODcLcLCaloRings_t_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::xAOD::CaloRings_t*)0x0)->GetClass();
      xAODcLcLCaloRings_t_TClassManip(theClass);
   return theClass;
   }

   static void xAODcLcLCaloRings_t_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_xAODcLcLCaloRings_t(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::xAOD::CaloRings_t : new ::xAOD::CaloRings_t;
   }
   static void *newArray_xAODcLcLCaloRings_t(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::xAOD::CaloRings_t[nElements] : new ::xAOD::CaloRings_t[nElements];
   }
   // Wrapper around operator delete
   static void delete_xAODcLcLCaloRings_t(void *p) {
      delete ((::xAOD::CaloRings_t*)p);
   }
   static void deleteArray_xAODcLcLCaloRings_t(void *p) {
      delete [] ((::xAOD::CaloRings_t*)p);
   }
   static void destruct_xAODcLcLCaloRings_t(void *p) {
      typedef ::xAOD::CaloRings_t current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::xAOD::CaloRings_t

namespace ROOT {
   static TClass *vectorlExAODcLcLCaloRings_tgR_Dictionary();
   static void vectorlExAODcLcLCaloRings_tgR_TClassManip(TClass*);
   static void *new_vectorlExAODcLcLCaloRings_tgR(void *p = 0);
   static void *newArray_vectorlExAODcLcLCaloRings_tgR(Long_t size, void *p);
   static void delete_vectorlExAODcLcLCaloRings_tgR(void *p);
   static void deleteArray_vectorlExAODcLcLCaloRings_tgR(void *p);
   static void destruct_vectorlExAODcLcLCaloRings_tgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<xAOD::CaloRings_t>*)
   {
      vector<xAOD::CaloRings_t> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<xAOD::CaloRings_t>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<xAOD::CaloRings_t>", -2, "vector", 216,
                  typeid(vector<xAOD::CaloRings_t>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlExAODcLcLCaloRings_tgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<xAOD::CaloRings_t>) );
      instance.SetNew(&new_vectorlExAODcLcLCaloRings_tgR);
      instance.SetNewArray(&newArray_vectorlExAODcLcLCaloRings_tgR);
      instance.SetDelete(&delete_vectorlExAODcLcLCaloRings_tgR);
      instance.SetDeleteArray(&deleteArray_vectorlExAODcLcLCaloRings_tgR);
      instance.SetDestructor(&destruct_vectorlExAODcLcLCaloRings_tgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<xAOD::CaloRings_t> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<xAOD::CaloRings_t>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlExAODcLcLCaloRings_tgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<xAOD::CaloRings_t>*)0x0)->GetClass();
      vectorlExAODcLcLCaloRings_tgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlExAODcLcLCaloRings_tgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlExAODcLcLCaloRings_tgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<xAOD::CaloRings_t> : new vector<xAOD::CaloRings_t>;
   }
   static void *newArray_vectorlExAODcLcLCaloRings_tgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<xAOD::CaloRings_t>[nElements] : new vector<xAOD::CaloRings_t>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlExAODcLcLCaloRings_tgR(void *p) {
      delete ((vector<xAOD::CaloRings_t>*)p);
   }
   static void deleteArray_vectorlExAODcLcLCaloRings_tgR(void *p) {
      delete [] ((vector<xAOD::CaloRings_t>*)p);
   }
   static void destruct_vectorlExAODcLcLCaloRings_tgR(void *p) {
      typedef vector<xAOD::CaloRings_t> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<xAOD::CaloRings_t>

namespace ROOT {
   static TClass *vectorlEfloatgR_Dictionary();
   static void vectorlEfloatgR_TClassManip(TClass*);
   static void *new_vectorlEfloatgR(void *p = 0);
   static void *newArray_vectorlEfloatgR(Long_t size, void *p);
   static void delete_vectorlEfloatgR(void *p);
   static void deleteArray_vectorlEfloatgR(void *p);
   static void destruct_vectorlEfloatgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<float>*)
   {
      vector<float> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<float>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<float>", -2, "vector", 216,
                  typeid(vector<float>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEfloatgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<float>) );
      instance.SetNew(&new_vectorlEfloatgR);
      instance.SetNewArray(&newArray_vectorlEfloatgR);
      instance.SetDelete(&delete_vectorlEfloatgR);
      instance.SetDeleteArray(&deleteArray_vectorlEfloatgR);
      instance.SetDestructor(&destruct_vectorlEfloatgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<float> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<float>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEfloatgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<float>*)0x0)->GetClass();
      vectorlEfloatgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEfloatgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEfloatgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<float> : new vector<float>;
   }
   static void *newArray_vectorlEfloatgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<float>[nElements] : new vector<float>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEfloatgR(void *p) {
      delete ((vector<float>*)p);
   }
   static void deleteArray_vectorlEfloatgR(void *p) {
      delete [] ((vector<float>*)p);
   }
   static void destruct_vectorlEfloatgR(void *p) {
      typedef vector<float> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<float>

namespace {
  void TriggerDictionaryInitialization_libCaloRings_Impl() {
    static const char* headers[] = {
"/home/marton.sandes/lzt/lorenzetti/events/CaloRings/CaloRings/CaloRings.h",
"/home/marton.sandes/lzt/lorenzetti/events/CaloRings/CaloRings/CaloRingsContainer.h",
"/home/marton.sandes/lzt/lorenzetti/events/CaloRings/CaloRings/CaloRingsConverter.h",
0
    };
    static const char* includePaths[] = {
"/opt/geant4/source/analysis/g4tools/include",
"/opt/geant4/source/analysis/accumulables/include",
"/opt/geant4/source/analysis/csv/include",
"/opt/geant4/source/analysis/hntools/include",
"/opt/geant4/source/analysis/management/include",
"/opt/geant4/source/analysis/root/include",
"/opt/geant4/source/analysis/xml/include",
"/opt/geant4/source/digits_hits/detector/include",
"/opt/geant4/source/digits_hits/digits/include",
"/opt/geant4/source/digits_hits/hits/include",
"/opt/geant4/source/digits_hits/scorer/include",
"/opt/geant4/source/digits_hits/utils/include",
"/opt/geant4/source/error_propagation/include",
"/opt/geant4/source/event/include",
"/opt/geant4/source/externals/clhep/include",
"/opt/geant4/source/geometry/biasing/include",
"/opt/geant4/source/geometry/divisions/include",
"/opt/geant4/source/geometry/magneticfield/include",
"/opt/geant4/source/geometry/management/include",
"/opt/geant4/source/geometry/navigation/include",
"/opt/geant4/source/geometry/solids/Boolean/include",
"/opt/geant4/source/geometry/solids/CSG/include",
"/opt/geant4/source/geometry/solids/specific/include",
"/opt/geant4/source/geometry/volumes/include",
"/opt/geant4/source/global/HEPGeometry/include",
"/opt/geant4/source/global/HEPNumerics/include",
"/opt/geant4/source/global/HEPRandom/include",
"/opt/geant4/source/global/management/include",
"/opt/geant4/source/graphics_reps/include",
"/opt/geant4/source/intercoms/include",
"/opt/geant4/source/interfaces/GAG/include",
"/opt/geant4/source/interfaces/basic/include",
"/opt/geant4/source/interfaces/common/include",
"/opt/geant4/source/materials/include",
"/opt/geant4/source/parameterisations/gflash/include",
"/opt/geant4/source/particles/adjoint/include",
"/opt/geant4/source/particles/bosons/include",
"/opt/geant4/source/particles/hadrons/barions/include",
"/opt/geant4/source/particles/hadrons/ions/include",
"/opt/geant4/source/particles/hadrons/mesons/include",
"/opt/geant4/source/particles/leptons/include",
"/opt/geant4/source/particles/management/include",
"/opt/geant4/source/particles/shortlived/include",
"/opt/geant4/source/particles/utils/include",
"/opt/geant4/source/persistency/ascii/include",
"/opt/geant4/source/persistency/gdml/include",
"/opt/geant4/source/persistency/mctruth/include",
"/opt/geant4/source/physics_lists/builders/include",
"/opt/geant4/source/physics_lists/constructors/decay/include",
"/opt/geant4/source/physics_lists/constructors/electromagnetic/include",
"/opt/geant4/source/physics_lists/constructors/factory/include",
"/opt/geant4/source/physics_lists/constructors/gamma_lepto_nuclear/include",
"/opt/geant4/source/physics_lists/constructors/hadron_elastic/include",
"/opt/geant4/source/physics_lists/constructors/hadron_inelastic/include",
"/opt/geant4/source/physics_lists/constructors/ions/include",
"/opt/geant4/source/physics_lists/constructors/limiters/include",
"/opt/geant4/source/physics_lists/constructors/stopping/include",
"/opt/geant4/source/physics_lists/lists/include",
"/opt/geant4/source/physics_lists/util/include",
"/opt/geant4/source/processes/biasing/management/include",
"/opt/geant4/source/processes/biasing/generic/include",
"/opt/geant4/source/processes/biasing/importance/include",
"/opt/geant4/source/processes/cuts/include",
"/opt/geant4/source/processes/decay/include",
"/opt/geant4/source/processes/electromagnetic/adjoint/include",
"/opt/geant4/source/processes/electromagnetic/dna/processes/include",
"/opt/geant4/source/processes/electromagnetic/dna/models/include",
"/opt/geant4/source/processes/electromagnetic/dna/utils/include",
"/opt/geant4/source/processes/electromagnetic/dna/management/include",
"/opt/geant4/source/processes/electromagnetic/dna/molecules/management/include",
"/opt/geant4/source/processes/electromagnetic/dna/molecules/types/include",
"/opt/geant4/source/processes/electromagnetic/highenergy/include",
"/opt/geant4/source/processes/electromagnetic/lowenergy/include",
"/opt/geant4/source/processes/electromagnetic/muons/include",
"/opt/geant4/source/processes/electromagnetic/pii/include",
"/opt/geant4/source/processes/electromagnetic/polarisation/include",
"/opt/geant4/source/processes/electromagnetic/standard/include",
"/opt/geant4/source/processes/electromagnetic/utils/include",
"/opt/geant4/source/processes/electromagnetic/xrays/include",
"/opt/geant4/source/processes/hadronic/cross_sections/include",
"/opt/geant4/source/processes/hadronic/management/include",
"/opt/geant4/source/processes/hadronic/models/abla/include",
"/opt/geant4/source/processes/hadronic/models/abrasion/include",
"/opt/geant4/source/processes/hadronic/models/binary_cascade/include",
"/opt/geant4/source/processes/hadronic/models/cascade/cascade/include",
"/opt/geant4/source/processes/hadronic/models/coherent_elastic/include",
"/opt/geant4/source/processes/hadronic/models/de_excitation/ablation/include",
"/opt/geant4/source/processes/hadronic/models/de_excitation/evaporation/include",
"/opt/geant4/source/processes/hadronic/models/de_excitation/fermi_breakup/include",
"/opt/geant4/source/processes/hadronic/models/de_excitation/fission/include",
"/opt/geant4/source/processes/hadronic/models/de_excitation/gem_evaporation/include",
"/opt/geant4/source/processes/hadronic/models/de_excitation/handler/include",
"/opt/geant4/source/processes/hadronic/models/de_excitation/management/include",
"/opt/geant4/source/processes/hadronic/models/de_excitation/multifragmentation/include",
"/opt/geant4/source/processes/hadronic/models/de_excitation/photon_evaporation/include",
"/opt/geant4/source/processes/hadronic/models/de_excitation/util/include",
"/opt/geant4/source/processes/hadronic/models/em_dissociation/include",
"/opt/geant4/source/processes/hadronic/models/fission/include",
"/opt/geant4/source/processes/hadronic/models/im_r_matrix/include",
"/opt/geant4/source/processes/hadronic/models/inclxx/utils/include",
"/opt/geant4/source/processes/hadronic/models/inclxx/incl_physics/include",
"/opt/geant4/source/processes/hadronic/models/inclxx/interface/include",
"/opt/geant4/source/processes/hadronic/models/gamma_nuclear/include",
"/opt/geant4/source/processes/hadronic/models/lend/include",
"/opt/geant4/source/processes/hadronic/models/lepto_nuclear/include",
"/opt/geant4/source/processes/hadronic/models/management/include",
"/opt/geant4/source/processes/hadronic/models/particle_hp/include",
"/opt/geant4/source/processes/hadronic/models/parton_string/diffraction/include",
"/opt/geant4/source/processes/hadronic/models/parton_string/hadronization/include",
"/opt/geant4/source/processes/hadronic/models/parton_string/management/include",
"/opt/geant4/source/processes/hadronic/models/parton_string/qgsm/include",
"/opt/geant4/source/processes/hadronic/models/pre_equilibrium/exciton_model/include",
"/opt/geant4/source/processes/hadronic/models/qmd/include",
"/opt/geant4/source/processes/hadronic/models/quasi_elastic/include",
"/opt/geant4/source/processes/hadronic/models/radioactive_decay/include",
"/opt/geant4/source/processes/hadronic/models/rpg/include",
"/opt/geant4/source/processes/hadronic/models/theo_high_energy/include",
"/opt/geant4/source/processes/hadronic/models/util/include",
"/opt/geant4/source/processes/hadronic/processes/include",
"/opt/geant4/source/processes/hadronic/stopping/include",
"/opt/geant4/source/processes/hadronic/util/include",
"/opt/geant4/source/processes/management/include",
"/opt/geant4/source/processes/optical/include",
"/opt/geant4/source/processes/solidstate/phonon/include",
"/opt/geant4/source/processes/solidstate/channeling/include",
"/opt/geant4/source/processes/parameterisation/include",
"/opt/geant4/source/processes/scoring/include",
"/opt/geant4/source/processes/transportation/include",
"/opt/geant4/source/readout/include",
"/opt/geant4/source/run/include",
"/opt/geant4/source/track/include",
"/opt/geant4/source/tracking/include",
"/opt/geant4/source/visualization/FukuiRenderer/include",
"/opt/geant4/source/visualization/HepRep/include",
"/opt/geant4/source/visualization/RayTracer/include",
"/opt/geant4/source/visualization/Tree/include",
"/opt/geant4/source/visualization/VRML/include",
"/opt/geant4/source/visualization/XXX/include",
"/opt/geant4/source/visualization/gMocren/include",
"/opt/geant4/source/visualization/management/include",
"/opt/geant4/source/visualization/modeling/include",
"/usr/include",
"/opt/root/buildthis/include",
"/home/marton.sandes/lzt/lorenzetti",
"/home/marton.sandes/lzt/lorenzetti/events/CaloRings",
"/home/marton.sandes/lzt/lorenzetti/events/CaloRings/../../core/GaugiKernel",
"/home/marton.sandes/lzt/lorenzetti/events/CaloRings/../../core/G4Kernel",
"/home/marton.sandes/lzt/lorenzetti/events/CaloRings/../CaloCell",
"/home/marton.sandes/lzt/lorenzetti/events/CaloRings/../CaloCluster",
"/opt/root/buildthis/include",
"/home/marton.sandes/lzt/lorenzetti/build/events/CaloRings/",
0
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "libCaloRings dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
namespace xAOD{struct __attribute__((annotate("$clingAutoload$CaloRings/CaloRingsConverter.h")))  CaloRings_t;}
namespace std{template <typename _Tp> class __attribute__((annotate("$clingAutoload$bits/allocator.h")))  __attribute__((annotate("$clingAutoload$string")))  allocator;
}
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "libCaloRings dictionary payload"

#ifndef G__VECTOR_HAS_CLASS_ITERATOR
  #define G__VECTOR_HAS_CLASS_ITERATOR 1
#endif
#ifndef G4_STORE_TRAJECTORY
  #define G4_STORE_TRAJECTORY 1
#endif
#ifndef G4VERBOSE
  #define G4VERBOSE 1
#endif
#ifndef G4UI_USE
  #define G4UI_USE 1
#endif
#ifndef G4VIS_USE
  #define G4VIS_USE 1
#endif
#ifndef G4MULTITHREADED
  #define G4MULTITHREADED 1
#endif
#ifndef G4UI_USE_TCSH
  #define G4UI_USE_TCSH 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
#include "/home/marton.sandes/lzt/lorenzetti/events/CaloRings/CaloRings/CaloRings.h"
#include "/home/marton.sandes/lzt/lorenzetti/events/CaloRings/CaloRings/CaloRingsContainer.h"
#include "/home/marton.sandes/lzt/lorenzetti/events/CaloRings/CaloRings/CaloRingsConverter.h"


#include "CaloRings/CaloRingsConverter.h"

#ifdef __CINT__


#pragma link off all globals;
#pragma link off all classes;
#pragma link off all functions;
#pragma link C++ nestedclass;
#pragma link C++ struct xAOD::CaloRings_t+;
#pragma link C++ class std::vector< xAOD::CaloRings_t >+;


#endif

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"xAOD::CaloRings_t", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("libCaloRings",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libCaloRings_Impl, {}, classesHeaders, /*has no C++ module*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libCaloRings_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libCaloRings() {
  TriggerDictionaryInitialization_libCaloRings_Impl();
}
