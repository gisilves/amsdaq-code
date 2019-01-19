// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME rootElibdict

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
#include "Cluster.hh"
#include "LadderConf.hh"
#include "Event.hh"

// Header files passed via #pragma extra_include

namespace ROOT {
   static TClass *pairlEintcOpairlEdoublecOdoublegRsPgR_Dictionary();
   static void pairlEintcOpairlEdoublecOdoublegRsPgR_TClassManip(TClass*);
   static void *new_pairlEintcOpairlEdoublecOdoublegRsPgR(void *p = 0);
   static void *newArray_pairlEintcOpairlEdoublecOdoublegRsPgR(Long_t size, void *p);
   static void delete_pairlEintcOpairlEdoublecOdoublegRsPgR(void *p);
   static void deleteArray_pairlEintcOpairlEdoublecOdoublegRsPgR(void *p);
   static void destruct_pairlEintcOpairlEdoublecOdoublegRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const pair<int,pair<double,double> >*)
   {
      pair<int,pair<double,double> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(pair<int,pair<double,double> >));
      static ::ROOT::TGenericClassInfo 
         instance("pair<int,pair<double,double> >", "string", 198,
                  typeid(pair<int,pair<double,double> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &pairlEintcOpairlEdoublecOdoublegRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(pair<int,pair<double,double> >) );
      instance.SetNew(&new_pairlEintcOpairlEdoublecOdoublegRsPgR);
      instance.SetNewArray(&newArray_pairlEintcOpairlEdoublecOdoublegRsPgR);
      instance.SetDelete(&delete_pairlEintcOpairlEdoublecOdoublegRsPgR);
      instance.SetDeleteArray(&deleteArray_pairlEintcOpairlEdoublecOdoublegRsPgR);
      instance.SetDestructor(&destruct_pairlEintcOpairlEdoublecOdoublegRsPgR);

      ::ROOT::AddClassAlternate("pair<int,pair<double,double> >","pair<int,std::pair<double,double> >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const pair<int,pair<double,double> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *pairlEintcOpairlEdoublecOdoublegRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const pair<int,pair<double,double> >*)0x0)->GetClass();
      pairlEintcOpairlEdoublecOdoublegRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void pairlEintcOpairlEdoublecOdoublegRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static void *new_Cluster(void *p = 0);
   static void *newArray_Cluster(Long_t size, void *p);
   static void delete_Cluster(void *p);
   static void deleteArray_Cluster(void *p);
   static void destruct_Cluster(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::Cluster*)
   {
      ::Cluster *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::Cluster >(0);
      static ::ROOT::TGenericClassInfo 
         instance("Cluster", ::Cluster::Class_Version(), "Cluster.hh", 44,
                  typeid(::Cluster), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::Cluster::Dictionary, isa_proxy, 4,
                  sizeof(::Cluster) );
      instance.SetNew(&new_Cluster);
      instance.SetNewArray(&newArray_Cluster);
      instance.SetDelete(&delete_Cluster);
      instance.SetDeleteArray(&deleteArray_Cluster);
      instance.SetDestructor(&destruct_Cluster);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::Cluster*)
   {
      return GenerateInitInstanceLocal((::Cluster*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::Cluster*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_Event(void *p = 0);
   static void *newArray_Event(Long_t size, void *p);
   static void delete_Event(void *p);
   static void deleteArray_Event(void *p);
   static void destruct_Event(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::Event*)
   {
      ::Event *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::Event >(0);
      static ::ROOT::TGenericClassInfo 
         instance("Event", ::Event::Class_Version(), "Event.hh", 22,
                  typeid(::Event), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::Event::Dictionary, isa_proxy, 4,
                  sizeof(::Event) );
      instance.SetNew(&new_Event);
      instance.SetNewArray(&newArray_Event);
      instance.SetDelete(&delete_Event);
      instance.SetDeleteArray(&deleteArray_Event);
      instance.SetDestructor(&destruct_Event);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::Event*)
   {
      return GenerateInitInstanceLocal((::Event*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::Event*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_RHClass(void *p = 0);
   static void *newArray_RHClass(Long_t size, void *p);
   static void delete_RHClass(void *p);
   static void deleteArray_RHClass(void *p);
   static void destruct_RHClass(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RHClass*)
   {
      ::RHClass *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RHClass >(0);
      static ::ROOT::TGenericClassInfo 
         instance("RHClass", ::RHClass::Class_Version(), "Event.hh", 201,
                  typeid(::RHClass), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RHClass::Dictionary, isa_proxy, 4,
                  sizeof(::RHClass) );
      instance.SetNew(&new_RHClass);
      instance.SetNewArray(&newArray_RHClass);
      instance.SetDelete(&delete_RHClass);
      instance.SetDeleteArray(&deleteArray_RHClass);
      instance.SetDestructor(&destruct_RHClass);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RHClass*)
   {
      return GenerateInitInstanceLocal((::RHClass*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::RHClass*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr Cluster::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *Cluster::Class_Name()
{
   return "Cluster";
}

//______________________________________________________________________________
const char *Cluster::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::Cluster*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int Cluster::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::Cluster*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *Cluster::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::Cluster*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *Cluster::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::Cluster*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr Event::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *Event::Class_Name()
{
   return "Event";
}

//______________________________________________________________________________
const char *Event::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::Event*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int Event::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::Event*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *Event::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::Event*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *Event::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::Event*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr RHClass::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *RHClass::Class_Name()
{
   return "RHClass";
}

//______________________________________________________________________________
const char *RHClass::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RHClass*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int RHClass::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RHClass*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RHClass::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RHClass*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RHClass::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RHClass*)0x0)->GetClass(); }
   return fgIsA;
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_pairlEintcOpairlEdoublecOdoublegRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) pair<int,pair<double,double> > : new pair<int,pair<double,double> >;
   }
   static void *newArray_pairlEintcOpairlEdoublecOdoublegRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) pair<int,pair<double,double> >[nElements] : new pair<int,pair<double,double> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_pairlEintcOpairlEdoublecOdoublegRsPgR(void *p) {
      delete ((pair<int,pair<double,double> >*)p);
   }
   static void deleteArray_pairlEintcOpairlEdoublecOdoublegRsPgR(void *p) {
      delete [] ((pair<int,pair<double,double> >*)p);
   }
   static void destruct_pairlEintcOpairlEdoublecOdoublegRsPgR(void *p) {
      typedef pair<int,pair<double,double> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class pair<int,pair<double,double> >

//______________________________________________________________________________
void Cluster::Streamer(TBuffer &R__b)
{
   // Stream an object of class Cluster.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(Cluster::Class(),this);
   } else {
      R__b.WriteClassBuffer(Cluster::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_Cluster(void *p) {
      return  p ? new(p) ::Cluster : new ::Cluster;
   }
   static void *newArray_Cluster(Long_t nElements, void *p) {
      return p ? new(p) ::Cluster[nElements] : new ::Cluster[nElements];
   }
   // Wrapper around operator delete
   static void delete_Cluster(void *p) {
      delete ((::Cluster*)p);
   }
   static void deleteArray_Cluster(void *p) {
      delete [] ((::Cluster*)p);
   }
   static void destruct_Cluster(void *p) {
      typedef ::Cluster current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::Cluster

//______________________________________________________________________________
void Event::Streamer(TBuffer &R__b)
{
   // Stream an object of class Event.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(Event::Class(),this);
   } else {
      R__b.WriteClassBuffer(Event::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_Event(void *p) {
      return  p ? new(p) ::Event : new ::Event;
   }
   static void *newArray_Event(Long_t nElements, void *p) {
      return p ? new(p) ::Event[nElements] : new ::Event[nElements];
   }
   // Wrapper around operator delete
   static void delete_Event(void *p) {
      delete ((::Event*)p);
   }
   static void deleteArray_Event(void *p) {
      delete [] ((::Event*)p);
   }
   static void destruct_Event(void *p) {
      typedef ::Event current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::Event

//______________________________________________________________________________
void RHClass::Streamer(TBuffer &R__b)
{
   // Stream an object of class RHClass.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RHClass::Class(),this);
   } else {
      R__b.WriteClassBuffer(RHClass::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_RHClass(void *p) {
      return  p ? new(p) ::RHClass : new ::RHClass;
   }
   static void *newArray_RHClass(Long_t nElements, void *p) {
      return p ? new(p) ::RHClass[nElements] : new ::RHClass[nElements];
   }
   // Wrapper around operator delete
   static void delete_RHClass(void *p) {
      delete ((::RHClass*)p);
   }
   static void deleteArray_RHClass(void *p) {
      delete [] ((::RHClass*)p);
   }
   static void destruct_RHClass(void *p) {
      typedef ::RHClass current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::RHClass

namespace {
  void TriggerDictionaryInitialization_rootElibdict_Impl() {
    static const char* headers[] = {
"Cluster.hh",
"LadderConf.hh",
"Event.hh",
0
    };
    static const char* includePaths[] = {
"/usr/share/root/root/include",
"/usr/share/root/root/include",
"/home/gigi/amsdaq-code/Decode/",
0
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "rootElibdict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
namespace std{template <typename _T1, typename _T2> struct __attribute__((annotate("$clingAutoload$bits/stl_pair.h")))  __attribute__((annotate("$clingAutoload$string")))  pair;
}
class __attribute__((annotate("$clingAutoload$Cluster.hh")))  Cluster;
class __attribute__((annotate("$clingAutoload$Event.hh")))  Event;
class __attribute__((annotate("$clingAutoload$Event.hh")))  RHClass;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "rootElibdict dictionary payload"

#ifndef G__VECTOR_HAS_CLASS_ITERATOR
  #define G__VECTOR_HAS_CLASS_ITERATOR 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
#include "Cluster.hh"
#include "LadderConf.hh"
#include "Event.hh"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"Cluster", payloadCode, "@",
"Event", payloadCode, "@",
"RHClass", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("rootElibdict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_rootElibdict_Impl, {}, classesHeaders, /*has no C++ module*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_rootElibdict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_rootElibdict() {
  TriggerDictionaryInitialization_rootElibdict_Impl();
}
