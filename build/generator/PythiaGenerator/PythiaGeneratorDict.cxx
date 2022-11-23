// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME PythiaGeneratorDict

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
#include "/home/marton.sandes/lzt/lorenzetti/generator/PythiaGenerator/src/BoostedEvents.h"
#include "/home/marton.sandes/lzt/lorenzetti/generator/PythiaGenerator/src/FixedRegion.h"
#include "/home/marton.sandes/lzt/lorenzetti/generator/PythiaGenerator/src/JF17.h"
#include "/home/marton.sandes/lzt/lorenzetti/generator/PythiaGenerator/src/LLPGun.h"
#include "/home/marton.sandes/lzt/lorenzetti/generator/PythiaGenerator/src/ParticleGun.h"
#include "/home/marton.sandes/lzt/lorenzetti/generator/PythiaGenerator/src/Pileup.h"
#include "/home/marton.sandes/lzt/lorenzetti/generator/PythiaGenerator/src/Zee.h"
#include "src/Pileup.h"
#include "src/Zee.h"
#include "src/JF17.h"
#include "src/ParticleGun.h"
#include "src/LLPGun.h"
#include "src/FixedRegion.h"
#include "src/BoostedEvents.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static TClass *generatorcLcLPileup_Dictionary();
   static void generatorcLcLPileup_TClassManip(TClass*);
   static void *new_generatorcLcLPileup(void *p = 0);
   static void *newArray_generatorcLcLPileup(Long_t size, void *p);
   static void delete_generatorcLcLPileup(void *p);
   static void deleteArray_generatorcLcLPileup(void *p);
   static void destruct_generatorcLcLPileup(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::generator::Pileup*)
   {
      ::generator::Pileup *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::generator::Pileup));
      static ::ROOT::TGenericClassInfo 
         instance("generator::Pileup", "src/Pileup.h", 9,
                  typeid(::generator::Pileup), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &generatorcLcLPileup_Dictionary, isa_proxy, 4,
                  sizeof(::generator::Pileup) );
      instance.SetNew(&new_generatorcLcLPileup);
      instance.SetNewArray(&newArray_generatorcLcLPileup);
      instance.SetDelete(&delete_generatorcLcLPileup);
      instance.SetDeleteArray(&deleteArray_generatorcLcLPileup);
      instance.SetDestructor(&destruct_generatorcLcLPileup);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::generator::Pileup*)
   {
      return GenerateInitInstanceLocal((::generator::Pileup*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::generator::Pileup*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *generatorcLcLPileup_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::generator::Pileup*)0x0)->GetClass();
      generatorcLcLPileup_TClassManip(theClass);
   return theClass;
   }

   static void generatorcLcLPileup_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *generatorcLcLZee_Dictionary();
   static void generatorcLcLZee_TClassManip(TClass*);
   static void *new_generatorcLcLZee(void *p = 0);
   static void *newArray_generatorcLcLZee(Long_t size, void *p);
   static void delete_generatorcLcLZee(void *p);
   static void deleteArray_generatorcLcLZee(void *p);
   static void destruct_generatorcLcLZee(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::generator::Zee*)
   {
      ::generator::Zee *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::generator::Zee));
      static ::ROOT::TGenericClassInfo 
         instance("generator::Zee", "src/Zee.h", 9,
                  typeid(::generator::Zee), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &generatorcLcLZee_Dictionary, isa_proxy, 4,
                  sizeof(::generator::Zee) );
      instance.SetNew(&new_generatorcLcLZee);
      instance.SetNewArray(&newArray_generatorcLcLZee);
      instance.SetDelete(&delete_generatorcLcLZee);
      instance.SetDeleteArray(&deleteArray_generatorcLcLZee);
      instance.SetDestructor(&destruct_generatorcLcLZee);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::generator::Zee*)
   {
      return GenerateInitInstanceLocal((::generator::Zee*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::generator::Zee*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *generatorcLcLZee_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::generator::Zee*)0x0)->GetClass();
      generatorcLcLZee_TClassManip(theClass);
   return theClass;
   }

   static void generatorcLcLZee_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *generatorcLcLJF17_Dictionary();
   static void generatorcLcLJF17_TClassManip(TClass*);
   static void *new_generatorcLcLJF17(void *p = 0);
   static void *newArray_generatorcLcLJF17(Long_t size, void *p);
   static void delete_generatorcLcLJF17(void *p);
   static void deleteArray_generatorcLcLJF17(void *p);
   static void destruct_generatorcLcLJF17(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::generator::JF17*)
   {
      ::generator::JF17 *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::generator::JF17));
      static ::ROOT::TGenericClassInfo 
         instance("generator::JF17", "src/JF17.h", 8,
                  typeid(::generator::JF17), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &generatorcLcLJF17_Dictionary, isa_proxy, 4,
                  sizeof(::generator::JF17) );
      instance.SetNew(&new_generatorcLcLJF17);
      instance.SetNewArray(&newArray_generatorcLcLJF17);
      instance.SetDelete(&delete_generatorcLcLJF17);
      instance.SetDeleteArray(&deleteArray_generatorcLcLJF17);
      instance.SetDestructor(&destruct_generatorcLcLJF17);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::generator::JF17*)
   {
      return GenerateInitInstanceLocal((::generator::JF17*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::generator::JF17*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *generatorcLcLJF17_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::generator::JF17*)0x0)->GetClass();
      generatorcLcLJF17_TClassManip(theClass);
   return theClass;
   }

   static void generatorcLcLJF17_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *generatorcLcLParticleGun_Dictionary();
   static void generatorcLcLParticleGun_TClassManip(TClass*);
   static void *new_generatorcLcLParticleGun(void *p = 0);
   static void *newArray_generatorcLcLParticleGun(Long_t size, void *p);
   static void delete_generatorcLcLParticleGun(void *p);
   static void deleteArray_generatorcLcLParticleGun(void *p);
   static void destruct_generatorcLcLParticleGun(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::generator::ParticleGun*)
   {
      ::generator::ParticleGun *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::generator::ParticleGun));
      static ::ROOT::TGenericClassInfo 
         instance("generator::ParticleGun", "src/ParticleGun.h", 10,
                  typeid(::generator::ParticleGun), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &generatorcLcLParticleGun_Dictionary, isa_proxy, 4,
                  sizeof(::generator::ParticleGun) );
      instance.SetNew(&new_generatorcLcLParticleGun);
      instance.SetNewArray(&newArray_generatorcLcLParticleGun);
      instance.SetDelete(&delete_generatorcLcLParticleGun);
      instance.SetDeleteArray(&deleteArray_generatorcLcLParticleGun);
      instance.SetDestructor(&destruct_generatorcLcLParticleGun);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::generator::ParticleGun*)
   {
      return GenerateInitInstanceLocal((::generator::ParticleGun*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::generator::ParticleGun*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *generatorcLcLParticleGun_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::generator::ParticleGun*)0x0)->GetClass();
      generatorcLcLParticleGun_TClassManip(theClass);
   return theClass;
   }

   static void generatorcLcLParticleGun_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *generatorcLcLLLPGun_Dictionary();
   static void generatorcLcLLLPGun_TClassManip(TClass*);
   static void *new_generatorcLcLLLPGun(void *p = 0);
   static void *newArray_generatorcLcLLLPGun(Long_t size, void *p);
   static void delete_generatorcLcLLLPGun(void *p);
   static void deleteArray_generatorcLcLLLPGun(void *p);
   static void destruct_generatorcLcLLLPGun(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::generator::LLPGun*)
   {
      ::generator::LLPGun *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::generator::LLPGun));
      static ::ROOT::TGenericClassInfo 
         instance("generator::LLPGun", "src/LLPGun.h", 31,
                  typeid(::generator::LLPGun), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &generatorcLcLLLPGun_Dictionary, isa_proxy, 4,
                  sizeof(::generator::LLPGun) );
      instance.SetNew(&new_generatorcLcLLLPGun);
      instance.SetNewArray(&newArray_generatorcLcLLLPGun);
      instance.SetDelete(&delete_generatorcLcLLLPGun);
      instance.SetDeleteArray(&deleteArray_generatorcLcLLLPGun);
      instance.SetDestructor(&destruct_generatorcLcLLLPGun);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::generator::LLPGun*)
   {
      return GenerateInitInstanceLocal((::generator::LLPGun*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::generator::LLPGun*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *generatorcLcLLLPGun_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::generator::LLPGun*)0x0)->GetClass();
      generatorcLcLLLPGun_TClassManip(theClass);
   return theClass;
   }

   static void generatorcLcLLLPGun_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *generatorcLcLFixedRegion_Dictionary();
   static void generatorcLcLFixedRegion_TClassManip(TClass*);
   static void *new_generatorcLcLFixedRegion(void *p = 0);
   static void *newArray_generatorcLcLFixedRegion(Long_t size, void *p);
   static void delete_generatorcLcLFixedRegion(void *p);
   static void deleteArray_generatorcLcLFixedRegion(void *p);
   static void destruct_generatorcLcLFixedRegion(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::generator::FixedRegion*)
   {
      ::generator::FixedRegion *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::generator::FixedRegion));
      static ::ROOT::TGenericClassInfo 
         instance("generator::FixedRegion", "src/FixedRegion.h", 8,
                  typeid(::generator::FixedRegion), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &generatorcLcLFixedRegion_Dictionary, isa_proxy, 4,
                  sizeof(::generator::FixedRegion) );
      instance.SetNew(&new_generatorcLcLFixedRegion);
      instance.SetNewArray(&newArray_generatorcLcLFixedRegion);
      instance.SetDelete(&delete_generatorcLcLFixedRegion);
      instance.SetDeleteArray(&deleteArray_generatorcLcLFixedRegion);
      instance.SetDestructor(&destruct_generatorcLcLFixedRegion);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::generator::FixedRegion*)
   {
      return GenerateInitInstanceLocal((::generator::FixedRegion*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::generator::FixedRegion*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *generatorcLcLFixedRegion_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::generator::FixedRegion*)0x0)->GetClass();
      generatorcLcLFixedRegion_TClassManip(theClass);
   return theClass;
   }

   static void generatorcLcLFixedRegion_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *generatorcLcLBoostedEvents_Dictionary();
   static void generatorcLcLBoostedEvents_TClassManip(TClass*);
   static void *new_generatorcLcLBoostedEvents(void *p = 0);
   static void *newArray_generatorcLcLBoostedEvents(Long_t size, void *p);
   static void delete_generatorcLcLBoostedEvents(void *p);
   static void deleteArray_generatorcLcLBoostedEvents(void *p);
   static void destruct_generatorcLcLBoostedEvents(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::generator::BoostedEvents*)
   {
      ::generator::BoostedEvents *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::generator::BoostedEvents));
      static ::ROOT::TGenericClassInfo 
         instance("generator::BoostedEvents", "src/BoostedEvents.h", 10,
                  typeid(::generator::BoostedEvents), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &generatorcLcLBoostedEvents_Dictionary, isa_proxy, 4,
                  sizeof(::generator::BoostedEvents) );
      instance.SetNew(&new_generatorcLcLBoostedEvents);
      instance.SetNewArray(&newArray_generatorcLcLBoostedEvents);
      instance.SetDelete(&delete_generatorcLcLBoostedEvents);
      instance.SetDeleteArray(&deleteArray_generatorcLcLBoostedEvents);
      instance.SetDestructor(&destruct_generatorcLcLBoostedEvents);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::generator::BoostedEvents*)
   {
      return GenerateInitInstanceLocal((::generator::BoostedEvents*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::generator::BoostedEvents*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *generatorcLcLBoostedEvents_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::generator::BoostedEvents*)0x0)->GetClass();
      generatorcLcLBoostedEvents_TClassManip(theClass);
   return theClass;
   }

   static void generatorcLcLBoostedEvents_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_generatorcLcLPileup(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::generator::Pileup : new ::generator::Pileup;
   }
   static void *newArray_generatorcLcLPileup(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::generator::Pileup[nElements] : new ::generator::Pileup[nElements];
   }
   // Wrapper around operator delete
   static void delete_generatorcLcLPileup(void *p) {
      delete ((::generator::Pileup*)p);
   }
   static void deleteArray_generatorcLcLPileup(void *p) {
      delete [] ((::generator::Pileup*)p);
   }
   static void destruct_generatorcLcLPileup(void *p) {
      typedef ::generator::Pileup current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::generator::Pileup

namespace ROOT {
   // Wrappers around operator new
   static void *new_generatorcLcLZee(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::generator::Zee : new ::generator::Zee;
   }
   static void *newArray_generatorcLcLZee(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::generator::Zee[nElements] : new ::generator::Zee[nElements];
   }
   // Wrapper around operator delete
   static void delete_generatorcLcLZee(void *p) {
      delete ((::generator::Zee*)p);
   }
   static void deleteArray_generatorcLcLZee(void *p) {
      delete [] ((::generator::Zee*)p);
   }
   static void destruct_generatorcLcLZee(void *p) {
      typedef ::generator::Zee current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::generator::Zee

namespace ROOT {
   // Wrappers around operator new
   static void *new_generatorcLcLJF17(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::generator::JF17 : new ::generator::JF17;
   }
   static void *newArray_generatorcLcLJF17(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::generator::JF17[nElements] : new ::generator::JF17[nElements];
   }
   // Wrapper around operator delete
   static void delete_generatorcLcLJF17(void *p) {
      delete ((::generator::JF17*)p);
   }
   static void deleteArray_generatorcLcLJF17(void *p) {
      delete [] ((::generator::JF17*)p);
   }
   static void destruct_generatorcLcLJF17(void *p) {
      typedef ::generator::JF17 current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::generator::JF17

namespace ROOT {
   // Wrappers around operator new
   static void *new_generatorcLcLParticleGun(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::generator::ParticleGun : new ::generator::ParticleGun;
   }
   static void *newArray_generatorcLcLParticleGun(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::generator::ParticleGun[nElements] : new ::generator::ParticleGun[nElements];
   }
   // Wrapper around operator delete
   static void delete_generatorcLcLParticleGun(void *p) {
      delete ((::generator::ParticleGun*)p);
   }
   static void deleteArray_generatorcLcLParticleGun(void *p) {
      delete [] ((::generator::ParticleGun*)p);
   }
   static void destruct_generatorcLcLParticleGun(void *p) {
      typedef ::generator::ParticleGun current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::generator::ParticleGun

namespace ROOT {
   // Wrappers around operator new
   static void *new_generatorcLcLLLPGun(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::generator::LLPGun : new ::generator::LLPGun;
   }
   static void *newArray_generatorcLcLLLPGun(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::generator::LLPGun[nElements] : new ::generator::LLPGun[nElements];
   }
   // Wrapper around operator delete
   static void delete_generatorcLcLLLPGun(void *p) {
      delete ((::generator::LLPGun*)p);
   }
   static void deleteArray_generatorcLcLLLPGun(void *p) {
      delete [] ((::generator::LLPGun*)p);
   }
   static void destruct_generatorcLcLLLPGun(void *p) {
      typedef ::generator::LLPGun current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::generator::LLPGun

namespace ROOT {
   // Wrappers around operator new
   static void *new_generatorcLcLFixedRegion(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::generator::FixedRegion : new ::generator::FixedRegion;
   }
   static void *newArray_generatorcLcLFixedRegion(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::generator::FixedRegion[nElements] : new ::generator::FixedRegion[nElements];
   }
   // Wrapper around operator delete
   static void delete_generatorcLcLFixedRegion(void *p) {
      delete ((::generator::FixedRegion*)p);
   }
   static void deleteArray_generatorcLcLFixedRegion(void *p) {
      delete [] ((::generator::FixedRegion*)p);
   }
   static void destruct_generatorcLcLFixedRegion(void *p) {
      typedef ::generator::FixedRegion current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::generator::FixedRegion

namespace ROOT {
   // Wrappers around operator new
   static void *new_generatorcLcLBoostedEvents(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::generator::BoostedEvents : new ::generator::BoostedEvents;
   }
   static void *newArray_generatorcLcLBoostedEvents(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::generator::BoostedEvents[nElements] : new ::generator::BoostedEvents[nElements];
   }
   // Wrapper around operator delete
   static void delete_generatorcLcLBoostedEvents(void *p) {
      delete ((::generator::BoostedEvents*)p);
   }
   static void deleteArray_generatorcLcLBoostedEvents(void *p) {
      delete [] ((::generator::BoostedEvents*)p);
   }
   static void destruct_generatorcLcLBoostedEvents(void *p) {
      typedef ::generator::BoostedEvents current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::generator::BoostedEvents

namespace {
  void TriggerDictionaryInitialization_libPythiaGenerator_Impl() {
    static const char* headers[] = {
"/home/marton.sandes/lzt/lorenzetti/generator/PythiaGenerator/src/BoostedEvents.h",
"/home/marton.sandes/lzt/lorenzetti/generator/PythiaGenerator/src/FixedRegion.h",
"/home/marton.sandes/lzt/lorenzetti/generator/PythiaGenerator/src/JF17.h",
"/home/marton.sandes/lzt/lorenzetti/generator/PythiaGenerator/src/LLPGun.h",
"/home/marton.sandes/lzt/lorenzetti/generator/PythiaGenerator/src/ParticleGun.h",
"/home/marton.sandes/lzt/lorenzetti/generator/PythiaGenerator/src/Pileup.h",
"/home/marton.sandes/lzt/lorenzetti/generator/PythiaGenerator/src/Zee.h",
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
"/home/marton.sandes/lzt/lorenzetti/generator/PythiaGenerator",
"/home/marton.sandes/lzt/lorenzetti/generator/PythiaGenerator/../../core/GaugiKernel",
"/home/marton.sandes/lzt/lorenzetti/generator/PythiaGenerator/../../core/G4Kernel",
"/home/marton.sandes/lzt/lorenzetti/generator/PythiaGenerator/../../core/P8Kernel",
"/home/marton.sandes/lzt/lorenzetti/generator/PythiaGenerator/../../events/EventInfo",
"/opt/fastjet-3.3.3/include",
"/opt/pythia/include",
"/opt/root/buildthis/include",
"/home/marton.sandes/lzt/lorenzetti/build/generator/PythiaGenerator/",
0
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "libPythiaGenerator dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
namespace generator{class __attribute__((annotate("$clingAutoload$src/Pileup.h")))  Pileup;}
namespace generator{class __attribute__((annotate("$clingAutoload$src/Zee.h")))  Zee;}
namespace generator{class __attribute__((annotate("$clingAutoload$src/JF17.h")))  JF17;}
namespace generator{class __attribute__((annotate("$clingAutoload$src/ParticleGun.h")))  ParticleGun;}
namespace generator{class __attribute__((annotate("$clingAutoload$src/LLPGun.h")))  LLPGun;}
namespace generator{class __attribute__((annotate("$clingAutoload$src/FixedRegion.h")))  FixedRegion;}
namespace generator{class __attribute__((annotate("$clingAutoload$src/BoostedEvents.h")))  BoostedEvents;}
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "libPythiaGenerator dictionary payload"

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
#include "/home/marton.sandes/lzt/lorenzetti/generator/PythiaGenerator/src/BoostedEvents.h"
#include "/home/marton.sandes/lzt/lorenzetti/generator/PythiaGenerator/src/FixedRegion.h"
#include "/home/marton.sandes/lzt/lorenzetti/generator/PythiaGenerator/src/JF17.h"
#include "/home/marton.sandes/lzt/lorenzetti/generator/PythiaGenerator/src/LLPGun.h"
#include "/home/marton.sandes/lzt/lorenzetti/generator/PythiaGenerator/src/ParticleGun.h"
#include "/home/marton.sandes/lzt/lorenzetti/generator/PythiaGenerator/src/Pileup.h"
#include "/home/marton.sandes/lzt/lorenzetti/generator/PythiaGenerator/src/Zee.h"

#include "src/Pileup.h"
#include "src/Zee.h"
#include "src/JF17.h"
#include "src/ParticleGun.h"
#include "src/LLPGun.h"
#include "src/FixedRegion.h"
#include "src/BoostedEvents.h"


#ifdef __CINT__

#pragma link off all globals;
#pragma link off all classes;
#pragma link off all functions;
#pragma link C++ nestedclass;


#pragma link C++ class generator::Pileup+;
#pragma link C++ class generator::Zee+;
#pragma link C++ class generator::JF17+;
#pragma link C++ class generator::ParticleGun+;
#pragma link C++ class generator::LLPGun+;
#pragma link C++ class generator::FixedRegion+;
#pragma link C++ class generator::BoostedEvents+;


#endif

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"generator::BoostedEvents", payloadCode, "@",
"generator::FixedRegion", payloadCode, "@",
"generator::JF17", payloadCode, "@",
"generator::LLPGun", payloadCode, "@",
"generator::ParticleGun", payloadCode, "@",
"generator::Pileup", payloadCode, "@",
"generator::Zee", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("libPythiaGenerator",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libPythiaGenerator_Impl, {}, classesHeaders, /*has no C++ module*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libPythiaGenerator_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libPythiaGenerator() {
  TriggerDictionaryInitialization_libPythiaGenerator_Impl();
}
