// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME P8KernelDict

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
#include "/home/marton.sandes/lzt/lorenzetti/core/P8Kernel/P8Kernel/Algorithm.h"
#include "/home/marton.sandes/lzt/lorenzetti/core/P8Kernel/P8Kernel/Event.h"
#include "/home/marton.sandes/lzt/lorenzetti/core/P8Kernel/P8Kernel/EventGenerator.h"
#include "/home/marton.sandes/lzt/lorenzetti/core/P8Kernel/P8Kernel/EventReader.h"
#include "/home/marton.sandes/lzt/lorenzetti/core/P8Kernel/P8Kernel/IAlgorithm.h"
#include "/home/marton.sandes/lzt/lorenzetti/core/P8Kernel/P8Kernel/ParticleFilter.h"
#include "/home/marton.sandes/lzt/lorenzetti/core/P8Kernel/P8Kernel/exceptions.h"
#include "P8Kernel/EventGenerator.h"
#include "P8Kernel/EventReader.h"
#include "P8Kernel/Algorithm.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static TClass *generatorcLcLAlgorithm_Dictionary();
   static void generatorcLcLAlgorithm_TClassManip(TClass*);
   static void delete_generatorcLcLAlgorithm(void *p);
   static void deleteArray_generatorcLcLAlgorithm(void *p);
   static void destruct_generatorcLcLAlgorithm(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::generator::Algorithm*)
   {
      ::generator::Algorithm *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::generator::Algorithm));
      static ::ROOT::TGenericClassInfo 
         instance("generator::Algorithm", "P8Kernel/Algorithm.h", 16,
                  typeid(::generator::Algorithm), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &generatorcLcLAlgorithm_Dictionary, isa_proxy, 4,
                  sizeof(::generator::Algorithm) );
      instance.SetDelete(&delete_generatorcLcLAlgorithm);
      instance.SetDeleteArray(&deleteArray_generatorcLcLAlgorithm);
      instance.SetDestructor(&destruct_generatorcLcLAlgorithm);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::generator::Algorithm*)
   {
      return GenerateInitInstanceLocal((::generator::Algorithm*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::generator::Algorithm*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *generatorcLcLAlgorithm_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::generator::Algorithm*)0x0)->GetClass();
      generatorcLcLAlgorithm_TClassManip(theClass);
   return theClass;
   }

   static void generatorcLcLAlgorithm_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *generatorcLcLEventGenerator_Dictionary();
   static void generatorcLcLEventGenerator_TClassManip(TClass*);
   static void *new_generatorcLcLEventGenerator(void *p = 0);
   static void *newArray_generatorcLcLEventGenerator(Long_t size, void *p);
   static void delete_generatorcLcLEventGenerator(void *p);
   static void deleteArray_generatorcLcLEventGenerator(void *p);
   static void destruct_generatorcLcLEventGenerator(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::generator::EventGenerator*)
   {
      ::generator::EventGenerator *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::generator::EventGenerator));
      static ::ROOT::TGenericClassInfo 
         instance("generator::EventGenerator", "P8Kernel/EventGenerator.h", 18,
                  typeid(::generator::EventGenerator), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &generatorcLcLEventGenerator_Dictionary, isa_proxy, 4,
                  sizeof(::generator::EventGenerator) );
      instance.SetNew(&new_generatorcLcLEventGenerator);
      instance.SetNewArray(&newArray_generatorcLcLEventGenerator);
      instance.SetDelete(&delete_generatorcLcLEventGenerator);
      instance.SetDeleteArray(&deleteArray_generatorcLcLEventGenerator);
      instance.SetDestructor(&destruct_generatorcLcLEventGenerator);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::generator::EventGenerator*)
   {
      return GenerateInitInstanceLocal((::generator::EventGenerator*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::generator::EventGenerator*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *generatorcLcLEventGenerator_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::generator::EventGenerator*)0x0)->GetClass();
      generatorcLcLEventGenerator_TClassManip(theClass);
   return theClass;
   }

   static void generatorcLcLEventGenerator_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *generatorcLcLEventReader_Dictionary();
   static void generatorcLcLEventReader_TClassManip(TClass*);
   static void delete_generatorcLcLEventReader(void *p);
   static void deleteArray_generatorcLcLEventReader(void *p);
   static void destruct_generatorcLcLEventReader(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::generator::EventReader*)
   {
      ::generator::EventReader *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::generator::EventReader));
      static ::ROOT::TGenericClassInfo 
         instance("generator::EventReader", "P8Kernel/EventReader.h", 13,
                  typeid(::generator::EventReader), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &generatorcLcLEventReader_Dictionary, isa_proxy, 4,
                  sizeof(::generator::EventReader) );
      instance.SetDelete(&delete_generatorcLcLEventReader);
      instance.SetDeleteArray(&deleteArray_generatorcLcLEventReader);
      instance.SetDestructor(&destruct_generatorcLcLEventReader);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::generator::EventReader*)
   {
      return GenerateInitInstanceLocal((::generator::EventReader*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::generator::EventReader*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *generatorcLcLEventReader_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::generator::EventReader*)0x0)->GetClass();
      generatorcLcLEventReader_TClassManip(theClass);
   return theClass;
   }

   static void generatorcLcLEventReader_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrapper around operator delete
   static void delete_generatorcLcLAlgorithm(void *p) {
      delete ((::generator::Algorithm*)p);
   }
   static void deleteArray_generatorcLcLAlgorithm(void *p) {
      delete [] ((::generator::Algorithm*)p);
   }
   static void destruct_generatorcLcLAlgorithm(void *p) {
      typedef ::generator::Algorithm current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::generator::Algorithm

namespace ROOT {
   // Wrappers around operator new
   static void *new_generatorcLcLEventGenerator(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::generator::EventGenerator : new ::generator::EventGenerator;
   }
   static void *newArray_generatorcLcLEventGenerator(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::generator::EventGenerator[nElements] : new ::generator::EventGenerator[nElements];
   }
   // Wrapper around operator delete
   static void delete_generatorcLcLEventGenerator(void *p) {
      delete ((::generator::EventGenerator*)p);
   }
   static void deleteArray_generatorcLcLEventGenerator(void *p) {
      delete [] ((::generator::EventGenerator*)p);
   }
   static void destruct_generatorcLcLEventGenerator(void *p) {
      typedef ::generator::EventGenerator current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::generator::EventGenerator

namespace ROOT {
   // Wrapper around operator delete
   static void delete_generatorcLcLEventReader(void *p) {
      delete ((::generator::EventReader*)p);
   }
   static void deleteArray_generatorcLcLEventReader(void *p) {
      delete [] ((::generator::EventReader*)p);
   }
   static void destruct_generatorcLcLEventReader(void *p) {
      typedef ::generator::EventReader current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::generator::EventReader

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
   static TClass *vectorlEgeneratorcLcLAlgorithmmUgR_Dictionary();
   static void vectorlEgeneratorcLcLAlgorithmmUgR_TClassManip(TClass*);
   static void *new_vectorlEgeneratorcLcLAlgorithmmUgR(void *p = 0);
   static void *newArray_vectorlEgeneratorcLcLAlgorithmmUgR(Long_t size, void *p);
   static void delete_vectorlEgeneratorcLcLAlgorithmmUgR(void *p);
   static void deleteArray_vectorlEgeneratorcLcLAlgorithmmUgR(void *p);
   static void destruct_vectorlEgeneratorcLcLAlgorithmmUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<generator::Algorithm*>*)
   {
      vector<generator::Algorithm*> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<generator::Algorithm*>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<generator::Algorithm*>", -2, "vector", 216,
                  typeid(vector<generator::Algorithm*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEgeneratorcLcLAlgorithmmUgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<generator::Algorithm*>) );
      instance.SetNew(&new_vectorlEgeneratorcLcLAlgorithmmUgR);
      instance.SetNewArray(&newArray_vectorlEgeneratorcLcLAlgorithmmUgR);
      instance.SetDelete(&delete_vectorlEgeneratorcLcLAlgorithmmUgR);
      instance.SetDeleteArray(&deleteArray_vectorlEgeneratorcLcLAlgorithmmUgR);
      instance.SetDestructor(&destruct_vectorlEgeneratorcLcLAlgorithmmUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<generator::Algorithm*> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<generator::Algorithm*>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEgeneratorcLcLAlgorithmmUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<generator::Algorithm*>*)0x0)->GetClass();
      vectorlEgeneratorcLcLAlgorithmmUgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEgeneratorcLcLAlgorithmmUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEgeneratorcLcLAlgorithmmUgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<generator::Algorithm*> : new vector<generator::Algorithm*>;
   }
   static void *newArray_vectorlEgeneratorcLcLAlgorithmmUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<generator::Algorithm*>[nElements] : new vector<generator::Algorithm*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEgeneratorcLcLAlgorithmmUgR(void *p) {
      delete ((vector<generator::Algorithm*>*)p);
   }
   static void deleteArray_vectorlEgeneratorcLcLAlgorithmmUgR(void *p) {
      delete [] ((vector<generator::Algorithm*>*)p);
   }
   static void destruct_vectorlEgeneratorcLcLAlgorithmmUgR(void *p) {
      typedef vector<generator::Algorithm*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<generator::Algorithm*>

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
  void TriggerDictionaryInitialization_libP8Kernel_Impl() {
    static const char* headers[] = {
"/home/marton.sandes/lzt/lorenzetti/core/P8Kernel/P8Kernel/Algorithm.h",
"/home/marton.sandes/lzt/lorenzetti/core/P8Kernel/P8Kernel/Event.h",
"/home/marton.sandes/lzt/lorenzetti/core/P8Kernel/P8Kernel/EventGenerator.h",
"/home/marton.sandes/lzt/lorenzetti/core/P8Kernel/P8Kernel/EventReader.h",
"/home/marton.sandes/lzt/lorenzetti/core/P8Kernel/P8Kernel/IAlgorithm.h",
"/home/marton.sandes/lzt/lorenzetti/core/P8Kernel/P8Kernel/ParticleFilter.h",
"/home/marton.sandes/lzt/lorenzetti/core/P8Kernel/P8Kernel/exceptions.h",
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
"/home/marton.sandes/lzt/lorenzetti/core/P8Kernel",
"/home/marton.sandes/lzt/lorenzetti/core/P8Kernel/../GaugiKernel",
"/home/marton.sandes/lzt/lorenzetti/core/P8Kernel/../G4Kernel",
"/home/marton.sandes/lzt/lorenzetti/core/P8Kernel/../../events/EventInfo",
"/home/marton.sandes/lzt/lorenzetti/core/P8Kernel/../../events/TruthParticle",
"/opt/fastjet-3.3.3/include",
"/opt/pythia/include",
"/opt/root/buildthis/include",
"/home/marton.sandes/lzt/lorenzetti/build/core/P8Kernel/",
0
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "libP8Kernel dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
namespace generator{class __attribute__((annotate("$clingAutoload$P8Kernel/Algorithm.h")))  __attribute__((annotate("$clingAutoload$P8Kernel/EventGenerator.h")))  Algorithm;}
namespace generator{class __attribute__((annotate("$clingAutoload$P8Kernel/EventGenerator.h")))  EventGenerator;}
namespace generator{class __attribute__((annotate("$clingAutoload$P8Kernel/EventReader.h")))  EventReader;}
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "libP8Kernel dictionary payload"

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
#include "/home/marton.sandes/lzt/lorenzetti/core/P8Kernel/P8Kernel/Algorithm.h"
#include "/home/marton.sandes/lzt/lorenzetti/core/P8Kernel/P8Kernel/Event.h"
#include "/home/marton.sandes/lzt/lorenzetti/core/P8Kernel/P8Kernel/EventGenerator.h"
#include "/home/marton.sandes/lzt/lorenzetti/core/P8Kernel/P8Kernel/EventReader.h"
#include "/home/marton.sandes/lzt/lorenzetti/core/P8Kernel/P8Kernel/IAlgorithm.h"
#include "/home/marton.sandes/lzt/lorenzetti/core/P8Kernel/P8Kernel/ParticleFilter.h"
#include "/home/marton.sandes/lzt/lorenzetti/core/P8Kernel/P8Kernel/exceptions.h"

#include "P8Kernel/EventGenerator.h"
#include "P8Kernel/EventReader.h"
//#include "P8Kernel/IAlgorithm.h"
#include "P8Kernel/Algorithm.h"


#ifdef __CINT__

#pragma link off all globals;
#pragma link off all classes;
#pragma link off all functions;
#pragma link C++ nestedclass;


#pragma link C++ class generator::EventGenerator+;
#pragma link C++ class generator::EventReader+;
#pragma link C++ class generator::Algorithm+;
//#pragma link C++ class IAlgorithm+;


#endif

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"generator::Algorithm", payloadCode, "@",
"generator::EventGenerator", payloadCode, "@",
"generator::EventReader", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("libP8Kernel",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libP8Kernel_Impl, {}, classesHeaders, /*has no C++ module*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libP8Kernel_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libP8Kernel() {
  TriggerDictionaryInitialization_libP8Kernel_Impl();
}
