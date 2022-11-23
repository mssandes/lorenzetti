// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME CaloClusterDict

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
#include "/home/marton.sandes/lzt/lorenzetti/events/CaloCluster/CaloCluster/CaloCluster.h"
#include "/home/marton.sandes/lzt/lorenzetti/events/CaloCluster/CaloCluster/CaloClusterContainer.h"
#include "/home/marton.sandes/lzt/lorenzetti/events/CaloCluster/CaloCluster/CaloClusterConverter.h"
#include "/home/marton.sandes/lzt/lorenzetti/events/CaloCluster/CaloCluster/CaloClusterXT.h"
#include "/home/marton.sandes/lzt/lorenzetti/events/CaloCluster/CaloCluster/CaloClusterXTContainer.h"
#include "/home/marton.sandes/lzt/lorenzetti/events/CaloCluster/CaloCluster/CaloClusterXTConverter.h"
#include "CaloCluster/CaloClusterConverter.h"
#include "CaloCluster/CaloClusterXTConverter.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static TClass *xAODcLcLCaloCluster_t_Dictionary();
   static void xAODcLcLCaloCluster_t_TClassManip(TClass*);
   static void *new_xAODcLcLCaloCluster_t(void *p = 0);
   static void *newArray_xAODcLcLCaloCluster_t(Long_t size, void *p);
   static void delete_xAODcLcLCaloCluster_t(void *p);
   static void deleteArray_xAODcLcLCaloCluster_t(void *p);
   static void destruct_xAODcLcLCaloCluster_t(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::xAOD::CaloCluster_t*)
   {
      ::xAOD::CaloCluster_t *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::xAOD::CaloCluster_t));
      static ::ROOT::TGenericClassInfo 
         instance("xAOD::CaloCluster_t", "CaloCluster/CaloClusterConverter.h", 13,
                  typeid(::xAOD::CaloCluster_t), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &xAODcLcLCaloCluster_t_Dictionary, isa_proxy, 4,
                  sizeof(::xAOD::CaloCluster_t) );
      instance.SetNew(&new_xAODcLcLCaloCluster_t);
      instance.SetNewArray(&newArray_xAODcLcLCaloCluster_t);
      instance.SetDelete(&delete_xAODcLcLCaloCluster_t);
      instance.SetDeleteArray(&deleteArray_xAODcLcLCaloCluster_t);
      instance.SetDestructor(&destruct_xAODcLcLCaloCluster_t);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::xAOD::CaloCluster_t*)
   {
      return GenerateInitInstanceLocal((::xAOD::CaloCluster_t*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::xAOD::CaloCluster_t*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *xAODcLcLCaloCluster_t_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::xAOD::CaloCluster_t*)0x0)->GetClass();
      xAODcLcLCaloCluster_t_TClassManip(theClass);
   return theClass;
   }

   static void xAODcLcLCaloCluster_t_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *xAODcLcLCaloClusterXT_t_Dictionary();
   static void xAODcLcLCaloClusterXT_t_TClassManip(TClass*);
   static void *new_xAODcLcLCaloClusterXT_t(void *p = 0);
   static void *newArray_xAODcLcLCaloClusterXT_t(Long_t size, void *p);
   static void delete_xAODcLcLCaloClusterXT_t(void *p);
   static void deleteArray_xAODcLcLCaloClusterXT_t(void *p);
   static void destruct_xAODcLcLCaloClusterXT_t(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::xAOD::CaloClusterXT_t*)
   {
      ::xAOD::CaloClusterXT_t *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::xAOD::CaloClusterXT_t));
      static ::ROOT::TGenericClassInfo 
         instance("xAOD::CaloClusterXT_t", "CaloCluster/CaloClusterXTConverter.h", 13,
                  typeid(::xAOD::CaloClusterXT_t), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &xAODcLcLCaloClusterXT_t_Dictionary, isa_proxy, 4,
                  sizeof(::xAOD::CaloClusterXT_t) );
      instance.SetNew(&new_xAODcLcLCaloClusterXT_t);
      instance.SetNewArray(&newArray_xAODcLcLCaloClusterXT_t);
      instance.SetDelete(&delete_xAODcLcLCaloClusterXT_t);
      instance.SetDeleteArray(&deleteArray_xAODcLcLCaloClusterXT_t);
      instance.SetDestructor(&destruct_xAODcLcLCaloClusterXT_t);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::xAOD::CaloClusterXT_t*)
   {
      return GenerateInitInstanceLocal((::xAOD::CaloClusterXT_t*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::xAOD::CaloClusterXT_t*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *xAODcLcLCaloClusterXT_t_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::xAOD::CaloClusterXT_t*)0x0)->GetClass();
      xAODcLcLCaloClusterXT_t_TClassManip(theClass);
   return theClass;
   }

   static void xAODcLcLCaloClusterXT_t_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_xAODcLcLCaloCluster_t(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::xAOD::CaloCluster_t : new ::xAOD::CaloCluster_t;
   }
   static void *newArray_xAODcLcLCaloCluster_t(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::xAOD::CaloCluster_t[nElements] : new ::xAOD::CaloCluster_t[nElements];
   }
   // Wrapper around operator delete
   static void delete_xAODcLcLCaloCluster_t(void *p) {
      delete ((::xAOD::CaloCluster_t*)p);
   }
   static void deleteArray_xAODcLcLCaloCluster_t(void *p) {
      delete [] ((::xAOD::CaloCluster_t*)p);
   }
   static void destruct_xAODcLcLCaloCluster_t(void *p) {
      typedef ::xAOD::CaloCluster_t current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::xAOD::CaloCluster_t

namespace ROOT {
   // Wrappers around operator new
   static void *new_xAODcLcLCaloClusterXT_t(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::xAOD::CaloClusterXT_t : new ::xAOD::CaloClusterXT_t;
   }
   static void *newArray_xAODcLcLCaloClusterXT_t(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::xAOD::CaloClusterXT_t[nElements] : new ::xAOD::CaloClusterXT_t[nElements];
   }
   // Wrapper around operator delete
   static void delete_xAODcLcLCaloClusterXT_t(void *p) {
      delete ((::xAOD::CaloClusterXT_t*)p);
   }
   static void deleteArray_xAODcLcLCaloClusterXT_t(void *p) {
      delete [] ((::xAOD::CaloClusterXT_t*)p);
   }
   static void destruct_xAODcLcLCaloClusterXT_t(void *p) {
      typedef ::xAOD::CaloClusterXT_t current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::xAOD::CaloClusterXT_t

namespace ROOT {
   static TClass *vectorlExAODcLcLCaloCluster_tgR_Dictionary();
   static void vectorlExAODcLcLCaloCluster_tgR_TClassManip(TClass*);
   static void *new_vectorlExAODcLcLCaloCluster_tgR(void *p = 0);
   static void *newArray_vectorlExAODcLcLCaloCluster_tgR(Long_t size, void *p);
   static void delete_vectorlExAODcLcLCaloCluster_tgR(void *p);
   static void deleteArray_vectorlExAODcLcLCaloCluster_tgR(void *p);
   static void destruct_vectorlExAODcLcLCaloCluster_tgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<xAOD::CaloCluster_t>*)
   {
      vector<xAOD::CaloCluster_t> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<xAOD::CaloCluster_t>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<xAOD::CaloCluster_t>", -2, "vector", 216,
                  typeid(vector<xAOD::CaloCluster_t>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlExAODcLcLCaloCluster_tgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<xAOD::CaloCluster_t>) );
      instance.SetNew(&new_vectorlExAODcLcLCaloCluster_tgR);
      instance.SetNewArray(&newArray_vectorlExAODcLcLCaloCluster_tgR);
      instance.SetDelete(&delete_vectorlExAODcLcLCaloCluster_tgR);
      instance.SetDeleteArray(&deleteArray_vectorlExAODcLcLCaloCluster_tgR);
      instance.SetDestructor(&destruct_vectorlExAODcLcLCaloCluster_tgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<xAOD::CaloCluster_t> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<xAOD::CaloCluster_t>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlExAODcLcLCaloCluster_tgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<xAOD::CaloCluster_t>*)0x0)->GetClass();
      vectorlExAODcLcLCaloCluster_tgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlExAODcLcLCaloCluster_tgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlExAODcLcLCaloCluster_tgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<xAOD::CaloCluster_t> : new vector<xAOD::CaloCluster_t>;
   }
   static void *newArray_vectorlExAODcLcLCaloCluster_tgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<xAOD::CaloCluster_t>[nElements] : new vector<xAOD::CaloCluster_t>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlExAODcLcLCaloCluster_tgR(void *p) {
      delete ((vector<xAOD::CaloCluster_t>*)p);
   }
   static void deleteArray_vectorlExAODcLcLCaloCluster_tgR(void *p) {
      delete [] ((vector<xAOD::CaloCluster_t>*)p);
   }
   static void destruct_vectorlExAODcLcLCaloCluster_tgR(void *p) {
      typedef vector<xAOD::CaloCluster_t> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<xAOD::CaloCluster_t>

namespace ROOT {
   static TClass *vectorlExAODcLcLCaloClusterXT_tgR_Dictionary();
   static void vectorlExAODcLcLCaloClusterXT_tgR_TClassManip(TClass*);
   static void *new_vectorlExAODcLcLCaloClusterXT_tgR(void *p = 0);
   static void *newArray_vectorlExAODcLcLCaloClusterXT_tgR(Long_t size, void *p);
   static void delete_vectorlExAODcLcLCaloClusterXT_tgR(void *p);
   static void deleteArray_vectorlExAODcLcLCaloClusterXT_tgR(void *p);
   static void destruct_vectorlExAODcLcLCaloClusterXT_tgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<xAOD::CaloClusterXT_t>*)
   {
      vector<xAOD::CaloClusterXT_t> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<xAOD::CaloClusterXT_t>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<xAOD::CaloClusterXT_t>", -2, "vector", 216,
                  typeid(vector<xAOD::CaloClusterXT_t>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlExAODcLcLCaloClusterXT_tgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<xAOD::CaloClusterXT_t>) );
      instance.SetNew(&new_vectorlExAODcLcLCaloClusterXT_tgR);
      instance.SetNewArray(&newArray_vectorlExAODcLcLCaloClusterXT_tgR);
      instance.SetDelete(&delete_vectorlExAODcLcLCaloClusterXT_tgR);
      instance.SetDeleteArray(&deleteArray_vectorlExAODcLcLCaloClusterXT_tgR);
      instance.SetDestructor(&destruct_vectorlExAODcLcLCaloClusterXT_tgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<xAOD::CaloClusterXT_t> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<xAOD::CaloClusterXT_t>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlExAODcLcLCaloClusterXT_tgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<xAOD::CaloClusterXT_t>*)0x0)->GetClass();
      vectorlExAODcLcLCaloClusterXT_tgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlExAODcLcLCaloClusterXT_tgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlExAODcLcLCaloClusterXT_tgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<xAOD::CaloClusterXT_t> : new vector<xAOD::CaloClusterXT_t>;
   }
   static void *newArray_vectorlExAODcLcLCaloClusterXT_tgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<xAOD::CaloClusterXT_t>[nElements] : new vector<xAOD::CaloClusterXT_t>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlExAODcLcLCaloClusterXT_tgR(void *p) {
      delete ((vector<xAOD::CaloClusterXT_t>*)p);
   }
   static void deleteArray_vectorlExAODcLcLCaloClusterXT_tgR(void *p) {
      delete [] ((vector<xAOD::CaloClusterXT_t>*)p);
   }
   static void destruct_vectorlExAODcLcLCaloClusterXT_tgR(void *p) {
      typedef vector<xAOD::CaloClusterXT_t> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<xAOD::CaloClusterXT_t>

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
   static TClass *vectorlEdoublegR_Dictionary();
   static void vectorlEdoublegR_TClassManip(TClass*);
   static void *new_vectorlEdoublegR(void *p = 0);
   static void *newArray_vectorlEdoublegR(Long_t size, void *p);
   static void delete_vectorlEdoublegR(void *p);
   static void deleteArray_vectorlEdoublegR(void *p);
   static void destruct_vectorlEdoublegR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<double>*)
   {
      vector<double> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<double>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<double>", -2, "vector", 216,
                  typeid(vector<double>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEdoublegR_Dictionary, isa_proxy, 0,
                  sizeof(vector<double>) );
      instance.SetNew(&new_vectorlEdoublegR);
      instance.SetNewArray(&newArray_vectorlEdoublegR);
      instance.SetDelete(&delete_vectorlEdoublegR);
      instance.SetDeleteArray(&deleteArray_vectorlEdoublegR);
      instance.SetDestructor(&destruct_vectorlEdoublegR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<double> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<double>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEdoublegR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<double>*)0x0)->GetClass();
      vectorlEdoublegR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEdoublegR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEdoublegR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<double> : new vector<double>;
   }
   static void *newArray_vectorlEdoublegR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<double>[nElements] : new vector<double>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEdoublegR(void *p) {
      delete ((vector<double>*)p);
   }
   static void deleteArray_vectorlEdoublegR(void *p) {
      delete [] ((vector<double>*)p);
   }
   static void destruct_vectorlEdoublegR(void *p) {
      typedef vector<double> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<double>

namespace {
  void TriggerDictionaryInitialization_libCaloCluster_Impl() {
    static const char* headers[] = {
"/home/marton.sandes/lzt/lorenzetti/events/CaloCluster/CaloCluster/CaloCluster.h",
"/home/marton.sandes/lzt/lorenzetti/events/CaloCluster/CaloCluster/CaloClusterContainer.h",
"/home/marton.sandes/lzt/lorenzetti/events/CaloCluster/CaloCluster/CaloClusterConverter.h",
"/home/marton.sandes/lzt/lorenzetti/events/CaloCluster/CaloCluster/CaloClusterXT.h",
"/home/marton.sandes/lzt/lorenzetti/events/CaloCluster/CaloCluster/CaloClusterXTContainer.h",
"/home/marton.sandes/lzt/lorenzetti/events/CaloCluster/CaloCluster/CaloClusterXTConverter.h",
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
"/home/marton.sandes/lzt/lorenzetti/events/CaloCluster",
"/home/marton.sandes/lzt/lorenzetti/events/CaloCluster/../../core/GaugiKernel",
"/home/marton.sandes/lzt/lorenzetti/events/CaloCluster/../../core/G4Kernel",
"/home/marton.sandes/lzt/lorenzetti/events/CaloCluster/../CaloCell",
"/opt/root/buildthis/include",
"/home/marton.sandes/lzt/lorenzetti/build/events/CaloCluster/",
0
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "libCaloCluster dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
namespace xAOD{struct __attribute__((annotate("$clingAutoload$CaloCluster/CaloClusterXTConverter.h")))  CaloClusterXT_t;}
namespace std{template <typename _Tp> class __attribute__((annotate("$clingAutoload$bits/allocator.h")))  __attribute__((annotate("$clingAutoload$string")))  allocator;
}
namespace xAOD{struct __attribute__((annotate("$clingAutoload$CaloCluster/CaloClusterConverter.h")))  CaloCluster_t;}
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "libCaloCluster dictionary payload"

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
#include "/home/marton.sandes/lzt/lorenzetti/events/CaloCluster/CaloCluster/CaloCluster.h"
#include "/home/marton.sandes/lzt/lorenzetti/events/CaloCluster/CaloCluster/CaloClusterContainer.h"
#include "/home/marton.sandes/lzt/lorenzetti/events/CaloCluster/CaloCluster/CaloClusterConverter.h"
#include "/home/marton.sandes/lzt/lorenzetti/events/CaloCluster/CaloCluster/CaloClusterXT.h"
#include "/home/marton.sandes/lzt/lorenzetti/events/CaloCluster/CaloCluster/CaloClusterXTContainer.h"
#include "/home/marton.sandes/lzt/lorenzetti/events/CaloCluster/CaloCluster/CaloClusterXTConverter.h"


#include "CaloCluster/CaloClusterConverter.h"
#include "CaloCluster/CaloClusterXTConverter.h"

#ifdef __CINT__

#pragma link off all globals;
#pragma link off all classes;
#pragma link off all functions;
#pragma link C++ nestedclass;
#pragma link C++ struct xAOD::CaloCluster_t+;
#pragma link C++ class std::vector< xAOD::CaloCluster_t >+;

#pragma link C++ struct xAOD::CaloClusterXT_t+;
#pragma link C++ class std::vector< xAOD::CaloClusterXT_t >+;


#endif

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"xAOD::CaloClusterXT_t", payloadCode, "@",
"xAOD::CaloCluster_t", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("libCaloCluster",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libCaloCluster_Impl, {}, classesHeaders, /*has no C++ module*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libCaloCluster_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libCaloCluster() {
  TriggerDictionaryInitialization_libCaloCluster_Impl();
}
