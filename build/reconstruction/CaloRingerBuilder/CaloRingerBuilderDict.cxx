// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME CaloRingerBuilderDict

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
#include "src/CaloRingerMaker.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static TClass *CaloRingerMaker_Dictionary();
   static void CaloRingerMaker_TClassManip(TClass*);
   static void delete_CaloRingerMaker(void *p);
   static void deleteArray_CaloRingerMaker(void *p);
   static void destruct_CaloRingerMaker(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CaloRingerMaker*)
   {
      ::CaloRingerMaker *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::CaloRingerMaker));
      static ::ROOT::TGenericClassInfo 
         instance("CaloRingerMaker", "src/CaloRingerMaker.h", 46,
                  typeid(::CaloRingerMaker), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &CaloRingerMaker_Dictionary, isa_proxy, 4,
                  sizeof(::CaloRingerMaker) );
      instance.SetDelete(&delete_CaloRingerMaker);
      instance.SetDeleteArray(&deleteArray_CaloRingerMaker);
      instance.SetDestructor(&destruct_CaloRingerMaker);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CaloRingerMaker*)
   {
      return GenerateInitInstanceLocal((::CaloRingerMaker*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::CaloRingerMaker*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *CaloRingerMaker_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::CaloRingerMaker*)0x0)->GetClass();
      CaloRingerMaker_TClassManip(theClass);
   return theClass;
   }

   static void CaloRingerMaker_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrapper around operator delete
   static void delete_CaloRingerMaker(void *p) {
      delete ((::CaloRingerMaker*)p);
   }
   static void deleteArray_CaloRingerMaker(void *p) {
      delete [] ((::CaloRingerMaker*)p);
   }
   static void destruct_CaloRingerMaker(void *p) {
      typedef ::CaloRingerMaker current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::CaloRingerMaker

namespace ROOT {
   static TClass *vectorlEvectorlEintgRsPgR_Dictionary();
   static void vectorlEvectorlEintgRsPgR_TClassManip(TClass*);
   static void *new_vectorlEvectorlEintgRsPgR(void *p = 0);
   static void *newArray_vectorlEvectorlEintgRsPgR(Long_t size, void *p);
   static void delete_vectorlEvectorlEintgRsPgR(void *p);
   static void deleteArray_vectorlEvectorlEintgRsPgR(void *p);
   static void destruct_vectorlEvectorlEintgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<vector<int> >*)
   {
      vector<vector<int> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<vector<int> >));
      static ::ROOT::TGenericClassInfo 
         instance("vector<vector<int> >", -2, "vector", 216,
                  typeid(vector<vector<int> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEvectorlEintgRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<vector<int> >) );
      instance.SetNew(&new_vectorlEvectorlEintgRsPgR);
      instance.SetNewArray(&newArray_vectorlEvectorlEintgRsPgR);
      instance.SetDelete(&delete_vectorlEvectorlEintgRsPgR);
      instance.SetDeleteArray(&deleteArray_vectorlEvectorlEintgRsPgR);
      instance.SetDestructor(&destruct_vectorlEvectorlEintgRsPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<vector<int> > >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<vector<int> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEvectorlEintgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<vector<int> >*)0x0)->GetClass();
      vectorlEvectorlEintgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEvectorlEintgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEvectorlEintgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<vector<int> > : new vector<vector<int> >;
   }
   static void *newArray_vectorlEvectorlEintgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<vector<int> >[nElements] : new vector<vector<int> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEvectorlEintgRsPgR(void *p) {
      delete ((vector<vector<int> >*)p);
   }
   static void deleteArray_vectorlEvectorlEintgRsPgR(void *p) {
      delete [] ((vector<vector<int> >*)p);
   }
   static void destruct_vectorlEvectorlEintgRsPgR(void *p) {
      typedef vector<vector<int> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<vector<int> >

namespace ROOT {
   static TClass *vectorlEintgR_Dictionary();
   static void vectorlEintgR_TClassManip(TClass*);
   static void *new_vectorlEintgR(void *p = 0);
   static void *newArray_vectorlEintgR(Long_t size, void *p);
   static void delete_vectorlEintgR(void *p);
   static void deleteArray_vectorlEintgR(void *p);
   static void destruct_vectorlEintgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<int>*)
   {
      vector<int> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<int>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<int>", -2, "vector", 216,
                  typeid(vector<int>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEintgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<int>) );
      instance.SetNew(&new_vectorlEintgR);
      instance.SetNewArray(&newArray_vectorlEintgR);
      instance.SetDelete(&delete_vectorlEintgR);
      instance.SetDeleteArray(&deleteArray_vectorlEintgR);
      instance.SetDestructor(&destruct_vectorlEintgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<int> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<int>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEintgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<int>*)0x0)->GetClass();
      vectorlEintgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEintgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEintgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<int> : new vector<int>;
   }
   static void *newArray_vectorlEintgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<int>[nElements] : new vector<int>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEintgR(void *p) {
      delete ((vector<int>*)p);
   }
   static void deleteArray_vectorlEintgR(void *p) {
      delete [] ((vector<int>*)p);
   }
   static void destruct_vectorlEintgR(void *p) {
      typedef vector<int> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<int>

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
  void TriggerDictionaryInitialization_libCaloRingerBuilder_Impl() {
    static const char* headers[] = {
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
"/home/marton.sandes/lzt/lorenzetti/reconstruction/CaloRingerBuilder",
"/home/marton.sandes/lzt/lorenzetti/reconstruction/CaloRingerBuilder/../../events/CaloCluster",
"/home/marton.sandes/lzt/lorenzetti/reconstruction/CaloRingerBuilder/../../events/CaloClusterXT",
"/home/marton.sandes/lzt/lorenzetti/reconstruction/CaloRingerBuilder/../../events/CaloCell",
"/home/marton.sandes/lzt/lorenzetti/reconstruction/CaloRingerBuilder/../../events/CaloRings",
"/home/marton.sandes/lzt/lorenzetti/reconstruction/CaloRingerBuilder/../../core/GaugiKernel",
"/home/marton.sandes/lzt/lorenzetti/reconstruction/CaloRingerBuilder/../../core/G4Kernel",
"/opt/root/buildthis/include",
"/home/marton.sandes/lzt/lorenzetti/build/reconstruction/CaloRingerBuilder/",
0
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "libCaloRingerBuilder dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
class __attribute__((annotate("$clingAutoload$src/CaloRingerMaker.h")))  CaloRingerMaker;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "libCaloRingerBuilder dictionary payload"

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

#include "src/CaloRingerMaker.h"


#ifdef __CINT__

#pragma link off all globals;
#pragma link off all classes;
#pragma link off all functions;
#pragma link C++ nestedclass;


#pragma link C++ class CaloRingerMaker+;


#endif

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"CaloRingerMaker", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("libCaloRingerBuilder",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libCaloRingerBuilder_Impl, {}, classesHeaders, /*has no C++ module*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libCaloRingerBuilder_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libCaloRingerBuilder() {
  TriggerDictionaryInitialization_libCaloRingerBuilder_Impl();
}
