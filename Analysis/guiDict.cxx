// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME guiDict

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
#include "../Decode//Event.cxx"
#include "../Decode//Cluster.cxx"
#include "../Decode//LadderConf.cxx"
#include "./src//viewerGUI.hh"

// Header files passed via #pragma extra_include

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
         instance("Cluster", ::Cluster::Class_Version(), "../Decode/Cluster.hh", 44,
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
         instance("Event", ::Event::Class_Version(), "../Decode/Event.hh", 22,
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
         instance("RHClass", ::RHClass::Class_Version(), "../Decode/Event.hh", 201,
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

namespace ROOT {
   static TClass *MyMainFrame_Dictionary();
   static void MyMainFrame_TClassManip(TClass*);
   static void delete_MyMainFrame(void *p);
   static void deleteArray_MyMainFrame(void *p);
   static void destruct_MyMainFrame(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::MyMainFrame*)
   {
      ::MyMainFrame *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::MyMainFrame));
      static ::ROOT::TGenericClassInfo 
         instance("MyMainFrame", "src//viewerGUI.hh", 17,
                  typeid(::MyMainFrame), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &MyMainFrame_Dictionary, isa_proxy, 0,
                  sizeof(::MyMainFrame) );
      instance.SetDelete(&delete_MyMainFrame);
      instance.SetDeleteArray(&deleteArray_MyMainFrame);
      instance.SetDestructor(&destruct_MyMainFrame);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::MyMainFrame*)
   {
      return GenerateInitInstanceLocal((::MyMainFrame*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::MyMainFrame*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *MyMainFrame_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::MyMainFrame*)0x0)->GetClass();
      MyMainFrame_TClassManip(theClass);
   return theClass;
   }

   static void MyMainFrame_TClassManip(TClass* ){
   }

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

namespace ROOT {
   // Wrapper around operator delete
   static void delete_MyMainFrame(void *p) {
      delete ((::MyMainFrame*)p);
   }
   static void deleteArray_MyMainFrame(void *p) {
      delete [] ((::MyMainFrame*)p);
   }
   static void destruct_MyMainFrame(void *p) {
      typedef ::MyMainFrame current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::MyMainFrame

namespace {
  void TriggerDictionaryInitialization_guiDict_Impl() {
    static const char* headers[] = {
"../Decode//Event.cxx",
"../Decode//Cluster.cxx",
"../Decode//LadderConf.cxx",
"./src//viewerGUI.hh",
0
    };
    static const char* includePaths[] = {
"/usr/share/root/root/include",
"/home/gigi/amsdaq-code/Analysis/",
0
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "guiDict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
class __attribute__((annotate("$clingAutoload$../Decode//Event.cxx")))  Cluster;
class __attribute__((annotate("$clingAutoload$../Decode//Event.cxx")))  Event;
class __attribute__((annotate("$clingAutoload$../Decode//Event.cxx")))  RHClass;
class __attribute__((annotate("$clingAutoload$./src//viewerGUI.hh")))  MyMainFrame;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "guiDict dictionary payload"

#ifndef G__VECTOR_HAS_CLASS_ITERATOR
  #define G__VECTOR_HAS_CLASS_ITERATOR 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
#include "../Decode//Event.cxx"
#include "../Decode//Cluster.cxx"
#include "../Decode//LadderConf.cxx"
#include "./src//viewerGUI.hh"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"Cluster", payloadCode, "@",
"Event", payloadCode, "@",
"MyMainFrame", payloadCode, "@",
"RHClass", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("guiDict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_guiDict_Impl, {}, classesHeaders, /*has no C++ module*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_guiDict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_guiDict() {
  TriggerDictionaryInitialization_guiDict_Impl();
}
