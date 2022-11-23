// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME G4KernelDict

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
#include "/home/marton.sandes/lzt/lorenzetti/core/G4Kernel/G4Kernel/ActionInitialization.h"
#include "/home/marton.sandes/lzt/lorenzetti/core/G4Kernel/G4Kernel/Analysis.h"
#include "/home/marton.sandes/lzt/lorenzetti/core/G4Kernel/G4Kernel/CaloPhiRange.h"
#include "/home/marton.sandes/lzt/lorenzetti/core/G4Kernel/G4Kernel/EventAction.h"
#include "/home/marton.sandes/lzt/lorenzetti/core/G4Kernel/G4Kernel/PrimaryGenerator.h"
#include "/home/marton.sandes/lzt/lorenzetti/core/G4Kernel/G4Kernel/PrimaryGeneratorAction.h"
#include "/home/marton.sandes/lzt/lorenzetti/core/G4Kernel/G4Kernel/RunAction.h"
#include "/home/marton.sandes/lzt/lorenzetti/core/G4Kernel/G4Kernel/RunManager.h"
#include "/home/marton.sandes/lzt/lorenzetti/core/G4Kernel/G4Kernel/RunReconstruction.h"
#include "/home/marton.sandes/lzt/lorenzetti/core/G4Kernel/G4Kernel/SteppingAction.h"
#include "/home/marton.sandes/lzt/lorenzetti/core/G4Kernel/G4Kernel/constants.h"
#include "G4Kernel/RunManager.h"
#include "G4Kernel/PrimaryGenerator.h"
#include "G4Kernel/CaloPhiRange.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static TClass *PrimaryGenerator_Dictionary();
   static void PrimaryGenerator_TClassManip(TClass*);
   static void delete_PrimaryGenerator(void *p);
   static void deleteArray_PrimaryGenerator(void *p);
   static void destruct_PrimaryGenerator(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::PrimaryGenerator*)
   {
      ::PrimaryGenerator *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::PrimaryGenerator));
      static ::ROOT::TGenericClassInfo 
         instance("PrimaryGenerator", "G4Kernel/PrimaryGenerator.h", 12,
                  typeid(::PrimaryGenerator), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &PrimaryGenerator_Dictionary, isa_proxy, 4,
                  sizeof(::PrimaryGenerator) );
      instance.SetDelete(&delete_PrimaryGenerator);
      instance.SetDeleteArray(&deleteArray_PrimaryGenerator);
      instance.SetDestructor(&destruct_PrimaryGenerator);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::PrimaryGenerator*)
   {
      return GenerateInitInstanceLocal((::PrimaryGenerator*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::PrimaryGenerator*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *PrimaryGenerator_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::PrimaryGenerator*)0x0)->GetClass();
      PrimaryGenerator_TClassManip(theClass);
   return theClass;
   }

   static void PrimaryGenerator_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *RunManager_Dictionary();
   static void RunManager_TClassManip(TClass*);
   static void delete_RunManager(void *p);
   static void deleteArray_RunManager(void *p);
   static void destruct_RunManager(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RunManager*)
   {
      ::RunManager *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::RunManager));
      static ::ROOT::TGenericClassInfo 
         instance("RunManager", "G4Kernel/RunManager.h", 16,
                  typeid(::RunManager), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &RunManager_Dictionary, isa_proxy, 4,
                  sizeof(::RunManager) );
      instance.SetDelete(&delete_RunManager);
      instance.SetDeleteArray(&deleteArray_RunManager);
      instance.SetDestructor(&destruct_RunManager);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RunManager*)
   {
      return GenerateInitInstanceLocal((::RunManager*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::RunManager*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *RunManager_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::RunManager*)0x0)->GetClass();
      RunManager_TClassManip(theClass);
   return theClass;
   }

   static void RunManager_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *CaloPhiRange_Dictionary();
   static void CaloPhiRange_TClassManip(TClass*);
   static void *new_CaloPhiRange(void *p = 0);
   static void *newArray_CaloPhiRange(Long_t size, void *p);
   static void delete_CaloPhiRange(void *p);
   static void deleteArray_CaloPhiRange(void *p);
   static void destruct_CaloPhiRange(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CaloPhiRange*)
   {
      ::CaloPhiRange *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::CaloPhiRange));
      static ::ROOT::TGenericClassInfo 
         instance("CaloPhiRange", "G4Kernel/CaloPhiRange.h", 6,
                  typeid(::CaloPhiRange), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &CaloPhiRange_Dictionary, isa_proxy, 4,
                  sizeof(::CaloPhiRange) );
      instance.SetNew(&new_CaloPhiRange);
      instance.SetNewArray(&newArray_CaloPhiRange);
      instance.SetDelete(&delete_CaloPhiRange);
      instance.SetDeleteArray(&deleteArray_CaloPhiRange);
      instance.SetDestructor(&destruct_CaloPhiRange);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CaloPhiRange*)
   {
      return GenerateInitInstanceLocal((::CaloPhiRange*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::CaloPhiRange*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *CaloPhiRange_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::CaloPhiRange*)0x0)->GetClass();
      CaloPhiRange_TClassManip(theClass);
   return theClass;
   }

   static void CaloPhiRange_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrapper around operator delete
   static void delete_PrimaryGenerator(void *p) {
      delete ((::PrimaryGenerator*)p);
   }
   static void deleteArray_PrimaryGenerator(void *p) {
      delete [] ((::PrimaryGenerator*)p);
   }
   static void destruct_PrimaryGenerator(void *p) {
      typedef ::PrimaryGenerator current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::PrimaryGenerator

namespace ROOT {
   // Wrapper around operator delete
   static void delete_RunManager(void *p) {
      delete ((::RunManager*)p);
   }
   static void deleteArray_RunManager(void *p) {
      delete [] ((::RunManager*)p);
   }
   static void destruct_RunManager(void *p) {
      typedef ::RunManager current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::RunManager

namespace ROOT {
   // Wrappers around operator new
   static void *new_CaloPhiRange(void *p) {
      return  p ? new(p) ::CaloPhiRange : new ::CaloPhiRange;
   }
   static void *newArray_CaloPhiRange(Long_t nElements, void *p) {
      return p ? new(p) ::CaloPhiRange[nElements] : new ::CaloPhiRange[nElements];
   }
   // Wrapper around operator delete
   static void delete_CaloPhiRange(void *p) {
      delete ((::CaloPhiRange*)p);
   }
   static void deleteArray_CaloPhiRange(void *p) {
      delete [] ((::CaloPhiRange*)p);
   }
   static void destruct_CaloPhiRange(void *p) {
      typedef ::CaloPhiRange current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::CaloPhiRange

namespace ROOT {
   static TClass *vectorlEGaugicLcLAlgorithmmUgR_Dictionary();
   static void vectorlEGaugicLcLAlgorithmmUgR_TClassManip(TClass*);
   static void *new_vectorlEGaugicLcLAlgorithmmUgR(void *p = 0);
   static void *newArray_vectorlEGaugicLcLAlgorithmmUgR(Long_t size, void *p);
   static void delete_vectorlEGaugicLcLAlgorithmmUgR(void *p);
   static void deleteArray_vectorlEGaugicLcLAlgorithmmUgR(void *p);
   static void destruct_vectorlEGaugicLcLAlgorithmmUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<Gaugi::Algorithm*>*)
   {
      vector<Gaugi::Algorithm*> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<Gaugi::Algorithm*>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<Gaugi::Algorithm*>", -2, "vector", 216,
                  typeid(vector<Gaugi::Algorithm*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEGaugicLcLAlgorithmmUgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<Gaugi::Algorithm*>) );
      instance.SetNew(&new_vectorlEGaugicLcLAlgorithmmUgR);
      instance.SetNewArray(&newArray_vectorlEGaugicLcLAlgorithmmUgR);
      instance.SetDelete(&delete_vectorlEGaugicLcLAlgorithmmUgR);
      instance.SetDeleteArray(&deleteArray_vectorlEGaugicLcLAlgorithmmUgR);
      instance.SetDestructor(&destruct_vectorlEGaugicLcLAlgorithmmUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<Gaugi::Algorithm*> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<Gaugi::Algorithm*>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEGaugicLcLAlgorithmmUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<Gaugi::Algorithm*>*)0x0)->GetClass();
      vectorlEGaugicLcLAlgorithmmUgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEGaugicLcLAlgorithmmUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEGaugicLcLAlgorithmmUgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<Gaugi::Algorithm*> : new vector<Gaugi::Algorithm*>;
   }
   static void *newArray_vectorlEGaugicLcLAlgorithmmUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<Gaugi::Algorithm*>[nElements] : new vector<Gaugi::Algorithm*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEGaugicLcLAlgorithmmUgR(void *p) {
      delete ((vector<Gaugi::Algorithm*>*)p);
   }
   static void deleteArray_vectorlEGaugicLcLAlgorithmmUgR(void *p) {
      delete [] ((vector<Gaugi::Algorithm*>*)p);
   }
   static void destruct_vectorlEGaugicLcLAlgorithmmUgR(void *p) {
      typedef vector<Gaugi::Algorithm*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<Gaugi::Algorithm*>

namespace {
  void TriggerDictionaryInitialization_libG4Kernel_Impl() {
    static const char* headers[] = {
"/home/marton.sandes/lzt/lorenzetti/core/G4Kernel/G4Kernel/ActionInitialization.h",
"/home/marton.sandes/lzt/lorenzetti/core/G4Kernel/G4Kernel/Analysis.h",
"/home/marton.sandes/lzt/lorenzetti/core/G4Kernel/G4Kernel/CaloPhiRange.h",
"/home/marton.sandes/lzt/lorenzetti/core/G4Kernel/G4Kernel/EventAction.h",
"/home/marton.sandes/lzt/lorenzetti/core/G4Kernel/G4Kernel/PrimaryGenerator.h",
"/home/marton.sandes/lzt/lorenzetti/core/G4Kernel/G4Kernel/PrimaryGeneratorAction.h",
"/home/marton.sandes/lzt/lorenzetti/core/G4Kernel/G4Kernel/RunAction.h",
"/home/marton.sandes/lzt/lorenzetti/core/G4Kernel/G4Kernel/RunManager.h",
"/home/marton.sandes/lzt/lorenzetti/core/G4Kernel/G4Kernel/RunReconstruction.h",
"/home/marton.sandes/lzt/lorenzetti/core/G4Kernel/G4Kernel/SteppingAction.h",
"/home/marton.sandes/lzt/lorenzetti/core/G4Kernel/G4Kernel/constants.h",
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
"/home/marton.sandes/lzt/lorenzetti/core/G4Kernel",
"/home/marton.sandes/lzt/lorenzetti/core/G4Kernel/../GaugiKernel",
"/home/marton.sandes/lzt/lorenzetti/core/G4Kernel/../../events/EventInfo",
"/opt/root/buildthis/include",
"/home/marton.sandes/lzt/lorenzetti/build/core/G4Kernel/",
0
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "libG4Kernel dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
class __attribute__((annotate("$clingAutoload$G4Kernel/PrimaryGenerator.h")))  __attribute__((annotate("$clingAutoload$G4Kernel/RunManager.h")))  PrimaryGenerator;
class __attribute__((annotate("$clingAutoload$G4Kernel/RunManager.h")))  RunManager;
class __attribute__((annotate("$clingAutoload$G4Kernel/CaloPhiRange.h")))  CaloPhiRange;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "libG4Kernel dictionary payload"

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
#include "/home/marton.sandes/lzt/lorenzetti/core/G4Kernel/G4Kernel/ActionInitialization.h"
#include "/home/marton.sandes/lzt/lorenzetti/core/G4Kernel/G4Kernel/Analysis.h"
#include "/home/marton.sandes/lzt/lorenzetti/core/G4Kernel/G4Kernel/CaloPhiRange.h"
#include "/home/marton.sandes/lzt/lorenzetti/core/G4Kernel/G4Kernel/EventAction.h"
#include "/home/marton.sandes/lzt/lorenzetti/core/G4Kernel/G4Kernel/PrimaryGenerator.h"
#include "/home/marton.sandes/lzt/lorenzetti/core/G4Kernel/G4Kernel/PrimaryGeneratorAction.h"
#include "/home/marton.sandes/lzt/lorenzetti/core/G4Kernel/G4Kernel/RunAction.h"
#include "/home/marton.sandes/lzt/lorenzetti/core/G4Kernel/G4Kernel/RunManager.h"
#include "/home/marton.sandes/lzt/lorenzetti/core/G4Kernel/G4Kernel/RunReconstruction.h"
#include "/home/marton.sandes/lzt/lorenzetti/core/G4Kernel/G4Kernel/SteppingAction.h"
#include "/home/marton.sandes/lzt/lorenzetti/core/G4Kernel/G4Kernel/constants.h"

#include "G4Kernel/RunManager.h"
#include "G4Kernel/PrimaryGenerator.h"
#include "G4Kernel/CaloPhiRange.h"

#ifdef __CINT__

#pragma link off all globals;
#pragma link off all classes;
#pragma link off all functions;
#pragma link C++ nestedclass;


#pragma link C++ class RunManager+;
#pragma link C++ class PrimaryGenerator+;
#pragma link C++ class CaloPhiRange+;

#endif

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"CaloPhiRange", payloadCode, "@",
"PrimaryGenerator", payloadCode, "@",
"RunManager", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("libG4Kernel",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libG4Kernel_Impl, {}, classesHeaders, /*has no C++ module*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libG4Kernel_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libG4Kernel() {
  TriggerDictionaryInitialization_libG4Kernel_Impl();
}
