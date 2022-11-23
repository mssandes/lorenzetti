// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME GaugiKernelDict

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
#include "/home/marton.sandes/lzt/lorenzetti/core/GaugiKernel/GaugiKernel/AlgTool.h"
#include "/home/marton.sandes/lzt/lorenzetti/core/GaugiKernel/GaugiKernel/Algorithm.h"
#include "/home/marton.sandes/lzt/lorenzetti/core/GaugiKernel/GaugiKernel/Collection.h"
#include "/home/marton.sandes/lzt/lorenzetti/core/GaugiKernel/GaugiKernel/ComponentAccumulator.h"
#include "/home/marton.sandes/lzt/lorenzetti/core/GaugiKernel/GaugiKernel/DataHandle.h"
#include "/home/marton.sandes/lzt/lorenzetti/core/GaugiKernel/GaugiKernel/DataVector.h"
#include "/home/marton.sandes/lzt/lorenzetti/core/GaugiKernel/GaugiKernel/EDM.h"
#include "/home/marton.sandes/lzt/lorenzetti/core/GaugiKernel/GaugiKernel/IAlgTool.h"
#include "/home/marton.sandes/lzt/lorenzetti/core/GaugiKernel/GaugiKernel/IAlgorithm.h"
#include "/home/marton.sandes/lzt/lorenzetti/core/GaugiKernel/GaugiKernel/MsgStream.h"
#include "/home/marton.sandes/lzt/lorenzetti/core/GaugiKernel/GaugiKernel/Property.h"
#include "/home/marton.sandes/lzt/lorenzetti/core/GaugiKernel/GaugiKernel/StatusCode.h"
#include "/home/marton.sandes/lzt/lorenzetti/core/GaugiKernel/GaugiKernel/StoreGate.h"
#include "/home/marton.sandes/lzt/lorenzetti/core/GaugiKernel/GaugiKernel/Timer.h"
#include "/home/marton.sandes/lzt/lorenzetti/core/GaugiKernel/GaugiKernel/defines.h"
#include "/home/marton.sandes/lzt/lorenzetti/core/GaugiKernel/GaugiKernel/macros.h"
#include "GaugiKernel/MsgStream.h"
#include "GaugiKernel/Property.h"
#include "GaugiKernel/Algorithm.h"
#include "GaugiKernel/AlgTool.h"
#include "GaugiKernel/IAlgTool.h"
#include "GaugiKernel/Timer.h"
#include "GaugiKernel/ComponentAccumulator.h"
#include "GaugiKernel/DataHandle.h"
#include "GaugiKernel/StoreGate.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static TClass *IMsgService_Dictionary();
   static void IMsgService_TClassManip(TClass*);
   static void delete_IMsgService(void *p);
   static void deleteArray_IMsgService(void *p);
   static void destruct_IMsgService(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::IMsgService*)
   {
      ::IMsgService *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::IMsgService));
      static ::ROOT::TGenericClassInfo 
         instance("IMsgService", "GaugiKernel/MsgStream.h", 572,
                  typeid(::IMsgService), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &IMsgService_Dictionary, isa_proxy, 4,
                  sizeof(::IMsgService) );
      instance.SetDelete(&delete_IMsgService);
      instance.SetDeleteArray(&deleteArray_IMsgService);
      instance.SetDestructor(&destruct_IMsgService);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::IMsgService*)
   {
      return GenerateInitInstanceLocal((::IMsgService*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::IMsgService*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *IMsgService_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::IMsgService*)0x0)->GetClass();
      IMsgService_TClassManip(theClass);
   return theClass;
   }

   static void IMsgService_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *MsgService_Dictionary();
   static void MsgService_TClassManip(TClass*);
   static void *new_MsgService(void *p = 0);
   static void *newArray_MsgService(Long_t size, void *p);
   static void delete_MsgService(void *p);
   static void deleteArray_MsgService(void *p);
   static void destruct_MsgService(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::MsgService*)
   {
      ::MsgService *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::MsgService));
      static ::ROOT::TGenericClassInfo 
         instance("MsgService", "GaugiKernel/MsgStream.h", 666,
                  typeid(::MsgService), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &MsgService_Dictionary, isa_proxy, 4,
                  sizeof(::MsgService) );
      instance.SetNew(&new_MsgService);
      instance.SetNewArray(&newArray_MsgService);
      instance.SetDelete(&delete_MsgService);
      instance.SetDeleteArray(&deleteArray_MsgService);
      instance.SetDestructor(&destruct_MsgService);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::MsgService*)
   {
      return GenerateInitInstanceLocal((::MsgService*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::MsgService*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *MsgService_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::MsgService*)0x0)->GetClass();
      MsgService_TClassManip(theClass);
   return theClass;
   }

   static void MsgService_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *GaugicLcLComponentAccumulator_Dictionary();
   static void GaugicLcLComponentAccumulator_TClassManip(TClass*);
   static void delete_GaugicLcLComponentAccumulator(void *p);
   static void deleteArray_GaugicLcLComponentAccumulator(void *p);
   static void destruct_GaugicLcLComponentAccumulator(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::Gaugi::ComponentAccumulator*)
   {
      ::Gaugi::ComponentAccumulator *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::Gaugi::ComponentAccumulator));
      static ::ROOT::TGenericClassInfo 
         instance("Gaugi::ComponentAccumulator", "GaugiKernel/ComponentAccumulator.h", 15,
                  typeid(::Gaugi::ComponentAccumulator), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &GaugicLcLComponentAccumulator_Dictionary, isa_proxy, 4,
                  sizeof(::Gaugi::ComponentAccumulator) );
      instance.SetDelete(&delete_GaugicLcLComponentAccumulator);
      instance.SetDeleteArray(&deleteArray_GaugicLcLComponentAccumulator);
      instance.SetDestructor(&destruct_GaugicLcLComponentAccumulator);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::Gaugi::ComponentAccumulator*)
   {
      return GenerateInitInstanceLocal((::Gaugi::ComponentAccumulator*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::Gaugi::ComponentAccumulator*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *GaugicLcLComponentAccumulator_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::Gaugi::ComponentAccumulator*)0x0)->GetClass();
      GaugicLcLComponentAccumulator_TClassManip(theClass);
   return theClass;
   }

   static void GaugicLcLComponentAccumulator_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrapper around operator delete
   static void delete_IMsgService(void *p) {
      delete ((::IMsgService*)p);
   }
   static void deleteArray_IMsgService(void *p) {
      delete [] ((::IMsgService*)p);
   }
   static void destruct_IMsgService(void *p) {
      typedef ::IMsgService current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::IMsgService

namespace ROOT {
   // Wrappers around operator new
   static void *new_MsgService(void *p) {
      return  p ? new(p) ::MsgService : new ::MsgService;
   }
   static void *newArray_MsgService(Long_t nElements, void *p) {
      return p ? new(p) ::MsgService[nElements] : new ::MsgService[nElements];
   }
   // Wrapper around operator delete
   static void delete_MsgService(void *p) {
      delete ((::MsgService*)p);
   }
   static void deleteArray_MsgService(void *p) {
      delete [] ((::MsgService*)p);
   }
   static void destruct_MsgService(void *p) {
      typedef ::MsgService current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::MsgService

namespace ROOT {
   // Wrapper around operator delete
   static void delete_GaugicLcLComponentAccumulator(void *p) {
      delete ((::Gaugi::ComponentAccumulator*)p);
   }
   static void deleteArray_GaugicLcLComponentAccumulator(void *p) {
      delete [] ((::Gaugi::ComponentAccumulator*)p);
   }
   static void destruct_GaugicLcLComponentAccumulator(void *p) {
      typedef ::Gaugi::ComponentAccumulator current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::Gaugi::ComponentAccumulator

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
  void TriggerDictionaryInitialization_libGaugiKernel_Impl() {
    static const char* headers[] = {
"/home/marton.sandes/lzt/lorenzetti/core/GaugiKernel/GaugiKernel/AlgTool.h",
"/home/marton.sandes/lzt/lorenzetti/core/GaugiKernel/GaugiKernel/Algorithm.h",
"/home/marton.sandes/lzt/lorenzetti/core/GaugiKernel/GaugiKernel/Collection.h",
"/home/marton.sandes/lzt/lorenzetti/core/GaugiKernel/GaugiKernel/ComponentAccumulator.h",
"/home/marton.sandes/lzt/lorenzetti/core/GaugiKernel/GaugiKernel/DataHandle.h",
"/home/marton.sandes/lzt/lorenzetti/core/GaugiKernel/GaugiKernel/DataVector.h",
"/home/marton.sandes/lzt/lorenzetti/core/GaugiKernel/GaugiKernel/EDM.h",
"/home/marton.sandes/lzt/lorenzetti/core/GaugiKernel/GaugiKernel/IAlgTool.h",
"/home/marton.sandes/lzt/lorenzetti/core/GaugiKernel/GaugiKernel/IAlgorithm.h",
"/home/marton.sandes/lzt/lorenzetti/core/GaugiKernel/GaugiKernel/MsgStream.h",
"/home/marton.sandes/lzt/lorenzetti/core/GaugiKernel/GaugiKernel/Property.h",
"/home/marton.sandes/lzt/lorenzetti/core/GaugiKernel/GaugiKernel/StatusCode.h",
"/home/marton.sandes/lzt/lorenzetti/core/GaugiKernel/GaugiKernel/StoreGate.h",
"/home/marton.sandes/lzt/lorenzetti/core/GaugiKernel/GaugiKernel/Timer.h",
"/home/marton.sandes/lzt/lorenzetti/core/GaugiKernel/GaugiKernel/defines.h",
"/home/marton.sandes/lzt/lorenzetti/core/GaugiKernel/GaugiKernel/macros.h",
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
"/home/marton.sandes/lzt/lorenzetti/core/GaugiKernel",
"/opt/root/buildthis/include",
"/home/marton.sandes/lzt/lorenzetti/build/core/GaugiKernel/",
0
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "libGaugiKernel dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
class __attribute__((annotate("$clingAutoload$GaugiKernel/MsgStream.h")))  IMsgService;
class __attribute__((annotate("$clingAutoload$GaugiKernel/MsgStream.h")))  MsgService;
namespace Gaugi{class __attribute__((annotate("$clingAutoload$GaugiKernel/ComponentAccumulator.h")))  ComponentAccumulator;}
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "libGaugiKernel dictionary payload"

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
#include "/home/marton.sandes/lzt/lorenzetti/core/GaugiKernel/GaugiKernel/AlgTool.h"
#include "/home/marton.sandes/lzt/lorenzetti/core/GaugiKernel/GaugiKernel/Algorithm.h"
#include "/home/marton.sandes/lzt/lorenzetti/core/GaugiKernel/GaugiKernel/Collection.h"
#include "/home/marton.sandes/lzt/lorenzetti/core/GaugiKernel/GaugiKernel/ComponentAccumulator.h"
#include "/home/marton.sandes/lzt/lorenzetti/core/GaugiKernel/GaugiKernel/DataHandle.h"
#include "/home/marton.sandes/lzt/lorenzetti/core/GaugiKernel/GaugiKernel/DataVector.h"
#include "/home/marton.sandes/lzt/lorenzetti/core/GaugiKernel/GaugiKernel/EDM.h"
#include "/home/marton.sandes/lzt/lorenzetti/core/GaugiKernel/GaugiKernel/IAlgTool.h"
#include "/home/marton.sandes/lzt/lorenzetti/core/GaugiKernel/GaugiKernel/IAlgorithm.h"
#include "/home/marton.sandes/lzt/lorenzetti/core/GaugiKernel/GaugiKernel/MsgStream.h"
#include "/home/marton.sandes/lzt/lorenzetti/core/GaugiKernel/GaugiKernel/Property.h"
#include "/home/marton.sandes/lzt/lorenzetti/core/GaugiKernel/GaugiKernel/StatusCode.h"
#include "/home/marton.sandes/lzt/lorenzetti/core/GaugiKernel/GaugiKernel/StoreGate.h"
#include "/home/marton.sandes/lzt/lorenzetti/core/GaugiKernel/GaugiKernel/Timer.h"
#include "/home/marton.sandes/lzt/lorenzetti/core/GaugiKernel/GaugiKernel/defines.h"
#include "/home/marton.sandes/lzt/lorenzetti/core/GaugiKernel/GaugiKernel/macros.h"

#include "GaugiKernel/MsgStream.h"
#include "GaugiKernel/Property.h"
#include "GaugiKernel/Algorithm.h"
#include "GaugiKernel/AlgTool.h"
#include "GaugiKernel/IAlgTool.h"
#include "GaugiKernel/Timer.h"
#include "GaugiKernel/ComponentAccumulator.h"

#include "GaugiKernel/DataHandle.h"
#include "GaugiKernel/StoreGate.h"


#ifdef __CINT__

#pragma link off all globals;
#pragma link off all classes;
#pragma link off all functions;
#pragma link C++ nestedclass;


#pragma link C++ class Timer+;
#pragma link C++ class MsgService+;
#pragma link C++ class IMsgService+;
#pragma link C++ class PropertyService+;
#pragma link C++ class Algorithm+;
#pragma link C++ class AlgTool+;
#pragma link C++ class IAlgTool+;
#pragma link C++ class Gaugi::ComponentAccumulator+;

#pragma link C++ class EventContext+;
#pragma link C++ class StoreGate+;


#endif

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"Gaugi::ComponentAccumulator", payloadCode, "@",
"IMsgService", payloadCode, "@",
"MsgService", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("libGaugiKernel",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libGaugiKernel_Impl, {}, classesHeaders, /*has no C++ module*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libGaugiKernel_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libGaugiKernel() {
  TriggerDictionaryInitialization_libGaugiKernel_Impl();
}
