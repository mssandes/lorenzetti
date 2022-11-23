// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME RootStreamBuilderDict

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
#include "src/RootStreamHITMaker.h"
#include "src/RootStreamAODMaker.h"
#include "src/RootStreamESDMaker.h"
#include "src/RootStreamHITReader.h"
#include "src/RootStreamESDReader.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static TClass *RootStreamHITMaker_Dictionary();
   static void RootStreamHITMaker_TClassManip(TClass*);
   static void delete_RootStreamHITMaker(void *p);
   static void deleteArray_RootStreamHITMaker(void *p);
   static void destruct_RootStreamHITMaker(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RootStreamHITMaker*)
   {
      ::RootStreamHITMaker *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::RootStreamHITMaker));
      static ::ROOT::TGenericClassInfo 
         instance("RootStreamHITMaker", "src/RootStreamHITMaker.h", 14,
                  typeid(::RootStreamHITMaker), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &RootStreamHITMaker_Dictionary, isa_proxy, 4,
                  sizeof(::RootStreamHITMaker) );
      instance.SetDelete(&delete_RootStreamHITMaker);
      instance.SetDeleteArray(&deleteArray_RootStreamHITMaker);
      instance.SetDestructor(&destruct_RootStreamHITMaker);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RootStreamHITMaker*)
   {
      return GenerateInitInstanceLocal((::RootStreamHITMaker*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::RootStreamHITMaker*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *RootStreamHITMaker_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::RootStreamHITMaker*)0x0)->GetClass();
      RootStreamHITMaker_TClassManip(theClass);
   return theClass;
   }

   static void RootStreamHITMaker_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *RootStreamAODMaker_Dictionary();
   static void RootStreamAODMaker_TClassManip(TClass*);
   static void delete_RootStreamAODMaker(void *p);
   static void deleteArray_RootStreamAODMaker(void *p);
   static void destruct_RootStreamAODMaker(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RootStreamAODMaker*)
   {
      ::RootStreamAODMaker *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::RootStreamAODMaker));
      static ::ROOT::TGenericClassInfo 
         instance("RootStreamAODMaker", "src/RootStreamAODMaker.h", 18,
                  typeid(::RootStreamAODMaker), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &RootStreamAODMaker_Dictionary, isa_proxy, 4,
                  sizeof(::RootStreamAODMaker) );
      instance.SetDelete(&delete_RootStreamAODMaker);
      instance.SetDeleteArray(&deleteArray_RootStreamAODMaker);
      instance.SetDestructor(&destruct_RootStreamAODMaker);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RootStreamAODMaker*)
   {
      return GenerateInitInstanceLocal((::RootStreamAODMaker*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::RootStreamAODMaker*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *RootStreamAODMaker_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::RootStreamAODMaker*)0x0)->GetClass();
      RootStreamAODMaker_TClassManip(theClass);
   return theClass;
   }

   static void RootStreamAODMaker_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *RootStreamESDMaker_Dictionary();
   static void RootStreamESDMaker_TClassManip(TClass*);
   static void delete_RootStreamESDMaker(void *p);
   static void deleteArray_RootStreamESDMaker(void *p);
   static void destruct_RootStreamESDMaker(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RootStreamESDMaker*)
   {
      ::RootStreamESDMaker *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::RootStreamESDMaker));
      static ::ROOT::TGenericClassInfo 
         instance("RootStreamESDMaker", "src/RootStreamESDMaker.h", 14,
                  typeid(::RootStreamESDMaker), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &RootStreamESDMaker_Dictionary, isa_proxy, 4,
                  sizeof(::RootStreamESDMaker) );
      instance.SetDelete(&delete_RootStreamESDMaker);
      instance.SetDeleteArray(&deleteArray_RootStreamESDMaker);
      instance.SetDestructor(&destruct_RootStreamESDMaker);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RootStreamESDMaker*)
   {
      return GenerateInitInstanceLocal((::RootStreamESDMaker*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::RootStreamESDMaker*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *RootStreamESDMaker_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::RootStreamESDMaker*)0x0)->GetClass();
      RootStreamESDMaker_TClassManip(theClass);
   return theClass;
   }

   static void RootStreamESDMaker_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *RootStreamHITReader_Dictionary();
   static void RootStreamHITReader_TClassManip(TClass*);
   static void delete_RootStreamHITReader(void *p);
   static void deleteArray_RootStreamHITReader(void *p);
   static void destruct_RootStreamHITReader(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RootStreamHITReader*)
   {
      ::RootStreamHITReader *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::RootStreamHITReader));
      static ::ROOT::TGenericClassInfo 
         instance("RootStreamHITReader", "src/RootStreamHITReader.h", 10,
                  typeid(::RootStreamHITReader), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &RootStreamHITReader_Dictionary, isa_proxy, 4,
                  sizeof(::RootStreamHITReader) );
      instance.SetDelete(&delete_RootStreamHITReader);
      instance.SetDeleteArray(&deleteArray_RootStreamHITReader);
      instance.SetDestructor(&destruct_RootStreamHITReader);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RootStreamHITReader*)
   {
      return GenerateInitInstanceLocal((::RootStreamHITReader*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::RootStreamHITReader*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *RootStreamHITReader_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::RootStreamHITReader*)0x0)->GetClass();
      RootStreamHITReader_TClassManip(theClass);
   return theClass;
   }

   static void RootStreamHITReader_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *RootStreamESDReader_Dictionary();
   static void RootStreamESDReader_TClassManip(TClass*);
   static void delete_RootStreamESDReader(void *p);
   static void deleteArray_RootStreamESDReader(void *p);
   static void destruct_RootStreamESDReader(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RootStreamESDReader*)
   {
      ::RootStreamESDReader *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::RootStreamESDReader));
      static ::ROOT::TGenericClassInfo 
         instance("RootStreamESDReader", "src/RootStreamESDReader.h", 12,
                  typeid(::RootStreamESDReader), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &RootStreamESDReader_Dictionary, isa_proxy, 4,
                  sizeof(::RootStreamESDReader) );
      instance.SetDelete(&delete_RootStreamESDReader);
      instance.SetDeleteArray(&deleteArray_RootStreamESDReader);
      instance.SetDestructor(&destruct_RootStreamESDReader);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RootStreamESDReader*)
   {
      return GenerateInitInstanceLocal((::RootStreamESDReader*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::RootStreamESDReader*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *RootStreamESDReader_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::RootStreamESDReader*)0x0)->GetClass();
      RootStreamESDReader_TClassManip(theClass);
   return theClass;
   }

   static void RootStreamESDReader_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrapper around operator delete
   static void delete_RootStreamHITMaker(void *p) {
      delete ((::RootStreamHITMaker*)p);
   }
   static void deleteArray_RootStreamHITMaker(void *p) {
      delete [] ((::RootStreamHITMaker*)p);
   }
   static void destruct_RootStreamHITMaker(void *p) {
      typedef ::RootStreamHITMaker current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::RootStreamHITMaker

namespace ROOT {
   // Wrapper around operator delete
   static void delete_RootStreamAODMaker(void *p) {
      delete ((::RootStreamAODMaker*)p);
   }
   static void deleteArray_RootStreamAODMaker(void *p) {
      delete [] ((::RootStreamAODMaker*)p);
   }
   static void destruct_RootStreamAODMaker(void *p) {
      typedef ::RootStreamAODMaker current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::RootStreamAODMaker

namespace ROOT {
   // Wrapper around operator delete
   static void delete_RootStreamESDMaker(void *p) {
      delete ((::RootStreamESDMaker*)p);
   }
   static void deleteArray_RootStreamESDMaker(void *p) {
      delete [] ((::RootStreamESDMaker*)p);
   }
   static void destruct_RootStreamESDMaker(void *p) {
      typedef ::RootStreamESDMaker current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::RootStreamESDMaker

namespace ROOT {
   // Wrapper around operator delete
   static void delete_RootStreamHITReader(void *p) {
      delete ((::RootStreamHITReader*)p);
   }
   static void deleteArray_RootStreamHITReader(void *p) {
      delete [] ((::RootStreamHITReader*)p);
   }
   static void destruct_RootStreamHITReader(void *p) {
      typedef ::RootStreamHITReader current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::RootStreamHITReader

namespace ROOT {
   // Wrapper around operator delete
   static void delete_RootStreamESDReader(void *p) {
      delete ((::RootStreamESDReader*)p);
   }
   static void deleteArray_RootStreamESDReader(void *p) {
      delete [] ((::RootStreamESDReader*)p);
   }
   static void destruct_RootStreamESDReader(void *p) {
      typedef ::RootStreamESDReader current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::RootStreamESDReader

namespace {
  void TriggerDictionaryInitialization_libRootStreamBuilder_Impl() {
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
"/home/marton.sandes/lzt/lorenzetti/reconstruction/RootStreamBuilder",
"/home/marton.sandes/lzt/lorenzetti/reconstruction/RootStreamBuilder/../../events/CaloCluster",
"/home/marton.sandes/lzt/lorenzetti/reconstruction/RootStreamBuilder/../../events/CaloClusterXT",
"/home/marton.sandes/lzt/lorenzetti/reconstruction/RootStreamBuilder/../../events/CaloCell",
"/home/marton.sandes/lzt/lorenzetti/reconstruction/RootStreamBuilder/../../events/CaloHit",
"/home/marton.sandes/lzt/lorenzetti/reconstruction/RootStreamBuilder/../../events/EventInfo",
"/home/marton.sandes/lzt/lorenzetti/reconstruction/RootStreamBuilder/../../events/TruthParticle",
"/home/marton.sandes/lzt/lorenzetti/reconstruction/RootStreamBuilder/../../events/CaloRings",
"/home/marton.sandes/lzt/lorenzetti/reconstruction/RootStreamBuilder/../../core/GaugiKernel",
"/home/marton.sandes/lzt/lorenzetti/reconstruction/RootStreamBuilder/../../core/G4Kernel",
"/home/marton.sandes/lzt/lorenzetti/reconstruction/RootStreamBuilder/../../external/cpk/include",
"/opt/root/buildthis/include",
"/home/marton.sandes/lzt/lorenzetti/build/reconstruction/RootStreamBuilder/",
0
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "libRootStreamBuilder dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
class __attribute__((annotate("$clingAutoload$src/RootStreamHITMaker.h")))  RootStreamHITMaker;
class __attribute__((annotate("$clingAutoload$src/RootStreamAODMaker.h")))  RootStreamAODMaker;
class __attribute__((annotate("$clingAutoload$src/RootStreamESDMaker.h")))  RootStreamESDMaker;
class __attribute__((annotate("$clingAutoload$src/RootStreamHITReader.h")))  RootStreamHITReader;
class __attribute__((annotate("$clingAutoload$src/RootStreamESDReader.h")))  RootStreamESDReader;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "libRootStreamBuilder dictionary payload"

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

#include "src/RootStreamHITMaker.h"
#include "src/RootStreamAODMaker.h"
#include "src/RootStreamESDMaker.h"

#include "src/RootStreamHITReader.h"
#include "src/RootStreamESDReader.h"


#ifdef __CINT__

#pragma link off all globals;
#pragma link off all classes;
#pragma link off all functions;
#pragma link C++ nestedclass;

#pragma link C++ class RootStreamHITMaker+;
#pragma link C++ class RootStreamAODMaker+;
#pragma link C++ class RootStreamESDMaker+;

#pragma link C++ class RootStreamHITReader+;
#pragma link C++ class RootStreamESDReader+;



#endif

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"RootStreamAODMaker", payloadCode, "@",
"RootStreamESDMaker", payloadCode, "@",
"RootStreamESDReader", payloadCode, "@",
"RootStreamHITMaker", payloadCode, "@",
"RootStreamHITReader", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("libRootStreamBuilder",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libRootStreamBuilder_Impl, {}, classesHeaders, /*has no C++ module*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libRootStreamBuilder_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libRootStreamBuilder() {
  TriggerDictionaryInitialization_libRootStreamBuilder_Impl();
}
