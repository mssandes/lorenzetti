// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME CaloCellBuilderDict

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
#include "/home/marton.sandes/lzt/lorenzetti/reconstruction/CaloCellBuilder/src/CaloCellMaker.h"
#include "/home/marton.sandes/lzt/lorenzetti/reconstruction/CaloCellBuilder/src/CaloCellMerge.h"
#include "/home/marton.sandes/lzt/lorenzetti/reconstruction/CaloCellBuilder/src/CaloHitMaker.h"
#include "/home/marton.sandes/lzt/lorenzetti/reconstruction/CaloCellBuilder/src/CaloHitMerge.h"
#include "/home/marton.sandes/lzt/lorenzetti/reconstruction/CaloCellBuilder/src/CrossTalk.h"
#include "/home/marton.sandes/lzt/lorenzetti/reconstruction/CaloCellBuilder/src/OptimalFilter.h"
#include "src/CaloCellMaker.h"
#include "src/CaloCellMerge.h"
#include "src/PulseGenerator.h"
#include "src/OptimalFilter.h"
#include "src/CrossTalk.h"
#include "src/CaloHitMaker.h"
#include "src/CaloHitMerge.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static TClass *CaloCellMaker_Dictionary();
   static void CaloCellMaker_TClassManip(TClass*);
   static void delete_CaloCellMaker(void *p);
   static void deleteArray_CaloCellMaker(void *p);
   static void destruct_CaloCellMaker(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CaloCellMaker*)
   {
      ::CaloCellMaker *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::CaloCellMaker));
      static ::ROOT::TGenericClassInfo 
         instance("CaloCellMaker", "src/CaloCellMaker.h", 9,
                  typeid(::CaloCellMaker), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &CaloCellMaker_Dictionary, isa_proxy, 4,
                  sizeof(::CaloCellMaker) );
      instance.SetDelete(&delete_CaloCellMaker);
      instance.SetDeleteArray(&deleteArray_CaloCellMaker);
      instance.SetDestructor(&destruct_CaloCellMaker);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CaloCellMaker*)
   {
      return GenerateInitInstanceLocal((::CaloCellMaker*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::CaloCellMaker*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *CaloCellMaker_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::CaloCellMaker*)0x0)->GetClass();
      CaloCellMaker_TClassManip(theClass);
   return theClass;
   }

   static void CaloCellMaker_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *CaloCellMerge_Dictionary();
   static void CaloCellMerge_TClassManip(TClass*);
   static void delete_CaloCellMerge(void *p);
   static void deleteArray_CaloCellMerge(void *p);
   static void destruct_CaloCellMerge(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CaloCellMerge*)
   {
      ::CaloCellMerge *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::CaloCellMerge));
      static ::ROOT::TGenericClassInfo 
         instance("CaloCellMerge", "src/CaloCellMerge.h", 9,
                  typeid(::CaloCellMerge), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &CaloCellMerge_Dictionary, isa_proxy, 4,
                  sizeof(::CaloCellMerge) );
      instance.SetDelete(&delete_CaloCellMerge);
      instance.SetDeleteArray(&deleteArray_CaloCellMerge);
      instance.SetDestructor(&destruct_CaloCellMerge);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CaloCellMerge*)
   {
      return GenerateInitInstanceLocal((::CaloCellMerge*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::CaloCellMerge*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *CaloCellMerge_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::CaloCellMerge*)0x0)->GetClass();
      CaloCellMerge_TClassManip(theClass);
   return theClass;
   }

   static void CaloCellMerge_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *PulseGenerator_Dictionary();
   static void PulseGenerator_TClassManip(TClass*);
   static void delete_PulseGenerator(void *p);
   static void deleteArray_PulseGenerator(void *p);
   static void destruct_PulseGenerator(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::PulseGenerator*)
   {
      ::PulseGenerator *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::PulseGenerator));
      static ::ROOT::TGenericClassInfo 
         instance("PulseGenerator", "src/PulseGenerator.h", 10,
                  typeid(::PulseGenerator), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &PulseGenerator_Dictionary, isa_proxy, 4,
                  sizeof(::PulseGenerator) );
      instance.SetDelete(&delete_PulseGenerator);
      instance.SetDeleteArray(&deleteArray_PulseGenerator);
      instance.SetDestructor(&destruct_PulseGenerator);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::PulseGenerator*)
   {
      return GenerateInitInstanceLocal((::PulseGenerator*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::PulseGenerator*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *PulseGenerator_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::PulseGenerator*)0x0)->GetClass();
      PulseGenerator_TClassManip(theClass);
   return theClass;
   }

   static void PulseGenerator_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *OptimalFilter_Dictionary();
   static void OptimalFilter_TClassManip(TClass*);
   static void delete_OptimalFilter(void *p);
   static void deleteArray_OptimalFilter(void *p);
   static void destruct_OptimalFilter(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::OptimalFilter*)
   {
      ::OptimalFilter *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::OptimalFilter));
      static ::ROOT::TGenericClassInfo 
         instance("OptimalFilter", "src/OptimalFilter.h", 9,
                  typeid(::OptimalFilter), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &OptimalFilter_Dictionary, isa_proxy, 4,
                  sizeof(::OptimalFilter) );
      instance.SetDelete(&delete_OptimalFilter);
      instance.SetDeleteArray(&deleteArray_OptimalFilter);
      instance.SetDestructor(&destruct_OptimalFilter);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::OptimalFilter*)
   {
      return GenerateInitInstanceLocal((::OptimalFilter*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::OptimalFilter*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *OptimalFilter_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::OptimalFilter*)0x0)->GetClass();
      OptimalFilter_TClassManip(theClass);
   return theClass;
   }

   static void OptimalFilter_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *CrossTalk_Dictionary();
   static void CrossTalk_TClassManip(TClass*);
   static void delete_CrossTalk(void *p);
   static void deleteArray_CrossTalk(void *p);
   static void destruct_CrossTalk(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CrossTalk*)
   {
      ::CrossTalk *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::CrossTalk));
      static ::ROOT::TGenericClassInfo 
         instance("CrossTalk", "src/CrossTalk.h", 14,
                  typeid(::CrossTalk), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &CrossTalk_Dictionary, isa_proxy, 4,
                  sizeof(::CrossTalk) );
      instance.SetDelete(&delete_CrossTalk);
      instance.SetDeleteArray(&deleteArray_CrossTalk);
      instance.SetDestructor(&destruct_CrossTalk);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CrossTalk*)
   {
      return GenerateInitInstanceLocal((::CrossTalk*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::CrossTalk*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *CrossTalk_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::CrossTalk*)0x0)->GetClass();
      CrossTalk_TClassManip(theClass);
   return theClass;
   }

   static void CrossTalk_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *CaloHitMaker_Dictionary();
   static void CaloHitMaker_TClassManip(TClass*);
   static void delete_CaloHitMaker(void *p);
   static void deleteArray_CaloHitMaker(void *p);
   static void destruct_CaloHitMaker(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CaloHitMaker*)
   {
      ::CaloHitMaker *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::CaloHitMaker));
      static ::ROOT::TGenericClassInfo 
         instance("CaloHitMaker", "src/CaloHitMaker.h", 11,
                  typeid(::CaloHitMaker), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &CaloHitMaker_Dictionary, isa_proxy, 4,
                  sizeof(::CaloHitMaker) );
      instance.SetDelete(&delete_CaloHitMaker);
      instance.SetDeleteArray(&deleteArray_CaloHitMaker);
      instance.SetDestructor(&destruct_CaloHitMaker);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CaloHitMaker*)
   {
      return GenerateInitInstanceLocal((::CaloHitMaker*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::CaloHitMaker*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *CaloHitMaker_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::CaloHitMaker*)0x0)->GetClass();
      CaloHitMaker_TClassManip(theClass);
   return theClass;
   }

   static void CaloHitMaker_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *CaloHitMerge_Dictionary();
   static void CaloHitMerge_TClassManip(TClass*);
   static void delete_CaloHitMerge(void *p);
   static void deleteArray_CaloHitMerge(void *p);
   static void destruct_CaloHitMerge(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CaloHitMerge*)
   {
      ::CaloHitMerge *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::CaloHitMerge));
      static ::ROOT::TGenericClassInfo 
         instance("CaloHitMerge", "src/CaloHitMerge.h", 9,
                  typeid(::CaloHitMerge), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &CaloHitMerge_Dictionary, isa_proxy, 4,
                  sizeof(::CaloHitMerge) );
      instance.SetDelete(&delete_CaloHitMerge);
      instance.SetDeleteArray(&deleteArray_CaloHitMerge);
      instance.SetDestructor(&destruct_CaloHitMerge);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CaloHitMerge*)
   {
      return GenerateInitInstanceLocal((::CaloHitMerge*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::CaloHitMerge*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *CaloHitMerge_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::CaloHitMerge*)0x0)->GetClass();
      CaloHitMerge_TClassManip(theClass);
   return theClass;
   }

   static void CaloHitMerge_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrapper around operator delete
   static void delete_CaloCellMaker(void *p) {
      delete ((::CaloCellMaker*)p);
   }
   static void deleteArray_CaloCellMaker(void *p) {
      delete [] ((::CaloCellMaker*)p);
   }
   static void destruct_CaloCellMaker(void *p) {
      typedef ::CaloCellMaker current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::CaloCellMaker

namespace ROOT {
   // Wrapper around operator delete
   static void delete_CaloCellMerge(void *p) {
      delete ((::CaloCellMerge*)p);
   }
   static void deleteArray_CaloCellMerge(void *p) {
      delete [] ((::CaloCellMerge*)p);
   }
   static void destruct_CaloCellMerge(void *p) {
      typedef ::CaloCellMerge current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::CaloCellMerge

namespace ROOT {
   // Wrapper around operator delete
   static void delete_PulseGenerator(void *p) {
      delete ((::PulseGenerator*)p);
   }
   static void deleteArray_PulseGenerator(void *p) {
      delete [] ((::PulseGenerator*)p);
   }
   static void destruct_PulseGenerator(void *p) {
      typedef ::PulseGenerator current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::PulseGenerator

namespace ROOT {
   // Wrapper around operator delete
   static void delete_OptimalFilter(void *p) {
      delete ((::OptimalFilter*)p);
   }
   static void deleteArray_OptimalFilter(void *p) {
      delete [] ((::OptimalFilter*)p);
   }
   static void destruct_OptimalFilter(void *p) {
      typedef ::OptimalFilter current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::OptimalFilter

namespace ROOT {
   // Wrapper around operator delete
   static void delete_CrossTalk(void *p) {
      delete ((::CrossTalk*)p);
   }
   static void deleteArray_CrossTalk(void *p) {
      delete [] ((::CrossTalk*)p);
   }
   static void destruct_CrossTalk(void *p) {
      typedef ::CrossTalk current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::CrossTalk

namespace ROOT {
   // Wrapper around operator delete
   static void delete_CaloHitMaker(void *p) {
      delete ((::CaloHitMaker*)p);
   }
   static void deleteArray_CaloHitMaker(void *p) {
      delete [] ((::CaloHitMaker*)p);
   }
   static void destruct_CaloHitMaker(void *p) {
      typedef ::CaloHitMaker current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::CaloHitMaker

namespace ROOT {
   // Wrapper around operator delete
   static void delete_CaloHitMerge(void *p) {
      delete ((::CaloHitMerge*)p);
   }
   static void deleteArray_CaloHitMerge(void *p) {
      delete [] ((::CaloHitMerge*)p);
   }
   static void destruct_CaloHitMerge(void *p) {
      typedef ::CaloHitMerge current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::CaloHitMerge

namespace ROOT {
   static TClass *vectorlEstringgR_Dictionary();
   static void vectorlEstringgR_TClassManip(TClass*);
   static void *new_vectorlEstringgR(void *p = 0);
   static void *newArray_vectorlEstringgR(Long_t size, void *p);
   static void delete_vectorlEstringgR(void *p);
   static void deleteArray_vectorlEstringgR(void *p);
   static void destruct_vectorlEstringgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<string>*)
   {
      vector<string> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<string>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<string>", -2, "vector", 216,
                  typeid(vector<string>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEstringgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<string>) );
      instance.SetNew(&new_vectorlEstringgR);
      instance.SetNewArray(&newArray_vectorlEstringgR);
      instance.SetDelete(&delete_vectorlEstringgR);
      instance.SetDeleteArray(&deleteArray_vectorlEstringgR);
      instance.SetDestructor(&destruct_vectorlEstringgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<string> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<string>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEstringgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<string>*)0x0)->GetClass();
      vectorlEstringgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEstringgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEstringgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<string> : new vector<string>;
   }
   static void *newArray_vectorlEstringgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<string>[nElements] : new vector<string>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEstringgR(void *p) {
      delete ((vector<string>*)p);
   }
   static void deleteArray_vectorlEstringgR(void *p) {
      delete [] ((vector<string>*)p);
   }
   static void destruct_vectorlEstringgR(void *p) {
      typedef vector<string> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<string>

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

namespace ROOT {
   static TClass *vectorlEGaugicLcLAlgToolmUgR_Dictionary();
   static void vectorlEGaugicLcLAlgToolmUgR_TClassManip(TClass*);
   static void *new_vectorlEGaugicLcLAlgToolmUgR(void *p = 0);
   static void *newArray_vectorlEGaugicLcLAlgToolmUgR(Long_t size, void *p);
   static void delete_vectorlEGaugicLcLAlgToolmUgR(void *p);
   static void deleteArray_vectorlEGaugicLcLAlgToolmUgR(void *p);
   static void destruct_vectorlEGaugicLcLAlgToolmUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<Gaugi::AlgTool*>*)
   {
      vector<Gaugi::AlgTool*> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<Gaugi::AlgTool*>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<Gaugi::AlgTool*>", -2, "vector", 216,
                  typeid(vector<Gaugi::AlgTool*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEGaugicLcLAlgToolmUgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<Gaugi::AlgTool*>) );
      instance.SetNew(&new_vectorlEGaugicLcLAlgToolmUgR);
      instance.SetNewArray(&newArray_vectorlEGaugicLcLAlgToolmUgR);
      instance.SetDelete(&delete_vectorlEGaugicLcLAlgToolmUgR);
      instance.SetDeleteArray(&deleteArray_vectorlEGaugicLcLAlgToolmUgR);
      instance.SetDestructor(&destruct_vectorlEGaugicLcLAlgToolmUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<Gaugi::AlgTool*> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<Gaugi::AlgTool*>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEGaugicLcLAlgToolmUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<Gaugi::AlgTool*>*)0x0)->GetClass();
      vectorlEGaugicLcLAlgToolmUgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEGaugicLcLAlgToolmUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEGaugicLcLAlgToolmUgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<Gaugi::AlgTool*> : new vector<Gaugi::AlgTool*>;
   }
   static void *newArray_vectorlEGaugicLcLAlgToolmUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<Gaugi::AlgTool*>[nElements] : new vector<Gaugi::AlgTool*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEGaugicLcLAlgToolmUgR(void *p) {
      delete ((vector<Gaugi::AlgTool*>*)p);
   }
   static void deleteArray_vectorlEGaugicLcLAlgToolmUgR(void *p) {
      delete [] ((vector<Gaugi::AlgTool*>*)p);
   }
   static void destruct_vectorlEGaugicLcLAlgToolmUgR(void *p) {
      typedef vector<Gaugi::AlgTool*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<Gaugi::AlgTool*>

namespace {
  void TriggerDictionaryInitialization_libCaloCellBuilder_Impl() {
    static const char* headers[] = {
"/home/marton.sandes/lzt/lorenzetti/reconstruction/CaloCellBuilder/src/CaloCellMaker.h",
"/home/marton.sandes/lzt/lorenzetti/reconstruction/CaloCellBuilder/src/CaloCellMerge.h",
"/home/marton.sandes/lzt/lorenzetti/reconstruction/CaloCellBuilder/src/CaloHitMaker.h",
"/home/marton.sandes/lzt/lorenzetti/reconstruction/CaloCellBuilder/src/CaloHitMerge.h",
"/home/marton.sandes/lzt/lorenzetti/reconstruction/CaloCellBuilder/src/CrossTalk.h",
"/home/marton.sandes/lzt/lorenzetti/reconstruction/CaloCellBuilder/src/OptimalFilter.h",
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
"/home/marton.sandes/lzt/lorenzetti/reconstruction/CaloCellBuilder",
"/home/marton.sandes/lzt/lorenzetti/reconstruction/CaloCellBuilder/../../events/CaloCluster",
"/home/marton.sandes/lzt/lorenzetti/reconstruction/CaloCellBuilder/../../events/CaloClusterXT",
"/home/marton.sandes/lzt/lorenzetti/reconstruction/CaloCellBuilder/../../events/CaloCell",
"/home/marton.sandes/lzt/lorenzetti/reconstruction/CaloCellBuilder/../../events/CaloHit",
"/home/marton.sandes/lzt/lorenzetti/reconstruction/CaloCellBuilder/../../events/EventInfo",
"/home/marton.sandes/lzt/lorenzetti/reconstruction/CaloCellBuilder/../../events/TruthParticle",
"/home/marton.sandes/lzt/lorenzetti/reconstruction/CaloCellBuilder/../../events/CaloRings",
"/home/marton.sandes/lzt/lorenzetti/reconstruction/CaloCellBuilder/../../core/GaugiKernel",
"/home/marton.sandes/lzt/lorenzetti/reconstruction/CaloCellBuilder/../../core/G4Kernel",
"/opt/root/buildthis/include",
"/home/marton.sandes/lzt/lorenzetti/build/reconstruction/CaloCellBuilder/",
0
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "libCaloCellBuilder dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
class __attribute__((annotate("$clingAutoload$src/CaloCellMaker.h")))  CaloCellMaker;
class __attribute__((annotate("$clingAutoload$src/CaloCellMerge.h")))  CaloCellMerge;
class __attribute__((annotate("$clingAutoload$src/PulseGenerator.h")))  PulseGenerator;
class __attribute__((annotate("$clingAutoload$src/OptimalFilter.h")))  OptimalFilter;
class __attribute__((annotate("$clingAutoload$src/CrossTalk.h")))  CrossTalk;
class __attribute__((annotate("$clingAutoload$src/CaloHitMaker.h")))  CaloHitMaker;
class __attribute__((annotate("$clingAutoload$src/CaloHitMerge.h")))  CaloHitMerge;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "libCaloCellBuilder dictionary payload"

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
#include "/home/marton.sandes/lzt/lorenzetti/reconstruction/CaloCellBuilder/src/CaloCellMaker.h"
#include "/home/marton.sandes/lzt/lorenzetti/reconstruction/CaloCellBuilder/src/CaloCellMerge.h"
#include "/home/marton.sandes/lzt/lorenzetti/reconstruction/CaloCellBuilder/src/CaloHitMaker.h"
#include "/home/marton.sandes/lzt/lorenzetti/reconstruction/CaloCellBuilder/src/CaloHitMerge.h"
#include "/home/marton.sandes/lzt/lorenzetti/reconstruction/CaloCellBuilder/src/CrossTalk.h"
#include "/home/marton.sandes/lzt/lorenzetti/reconstruction/CaloCellBuilder/src/OptimalFilter.h"

#include "src/CaloCellMaker.h"
#include "src/CaloCellMerge.h"
#include "src/PulseGenerator.h"
#include "src/OptimalFilter.h"
#include "src/CrossTalk.h"
#include "src/CaloHitMaker.h"
#include "src/CaloHitMerge.h"

#ifdef __CINT__

#pragma link off all globals;
#pragma link off all classes;
#pragma link off all functions;
#pragma link C++ nestedclass;
#pragma link C++ class CaloCellMaker+;
#pragma link C++ class CaloCellMerge+;
#pragma link C++ class PulseGenerator+;
#pragma link C++ class OptimalFilter+;
#pragma link C++ class CrossTalk+;
#pragma link C++ class CaloHitMaker+;
#pragma link C++ class CaloHitMerge+;

#endif

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"CaloCellMaker", payloadCode, "@",
"CaloCellMerge", payloadCode, "@",
"CaloHitMaker", payloadCode, "@",
"CaloHitMerge", payloadCode, "@",
"CrossTalk", payloadCode, "@",
"OptimalFilter", payloadCode, "@",
"PulseGenerator", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("libCaloCellBuilder",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libCaloCellBuilder_Impl, {}, classesHeaders, /*has no C++ module*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libCaloCellBuilder_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libCaloCellBuilder() {
  TriggerDictionaryInitialization_libCaloCellBuilder_Impl();
}
