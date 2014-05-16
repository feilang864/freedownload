/* THIS FILE IS AUTOGENERATED - DO NOT EDIT */

#ifndef mozilla_dom_TextTrackBinding_h__
#define mozilla_dom_TextTrackBinding_h__

#include "js/RootingAPI.h"
#include "jspubtd.h"
#include "mozilla/ErrorResult.h"
#include "mozilla/dom/BindingDeclarations.h"
#include "mozilla/dom/Nullable.h"

namespace mozilla {
namespace dom {

class NativePropertyHooks;
class ProtoAndIfaceArray;
class TextTrack;

} // namespace dom
} // namespace mozilla

namespace mozilla {
namespace dom {


MOZ_BEGIN_ENUM_CLASS(TextTrackKind, uint32_t)
  Subtitles,
  Captions,
  Descriptions,
  Chapters,
  Metadata
MOZ_END_ENUM_CLASS(TextTrackKind)

namespace TextTrackKindValues {
extern const EnumEntry strings[6];
} // namespace TextTrackKindValues



MOZ_BEGIN_ENUM_CLASS(TextTrackMode, uint32_t)
  Disabled,
  Hidden,
  Showing
MOZ_END_ENUM_CLASS(TextTrackMode)

namespace TextTrackModeValues {
extern const EnumEntry strings[4];
} // namespace TextTrackModeValues


namespace TextTrackBinding {

  typedef mozilla::dom::TextTrack NativeType;

  // We declare this as an array so that retrieving a pointer to this
  // binding's property hooks only requires compile/link-time resolvable
  // address arithmetic.  Declaring it as a pointer instead would require
  // doing a run-time load to fetch a pointer to this binding's property
  // hooks.  And then structures which embedded a pointer to this structure
  // would require a run-time load for proper initialization, which would
  // then induce static constructors.  Lots of static constructors.
  extern const NativePropertyHooks sNativePropertyHooks[];
  JSObject*
  DefineDOMInterface(JSContext* aCx, JS::Handle<JSObject*> aGlobal, JS::Handle<jsid> id, bool aDefineOnGlobal);

  bool
  ConstructorEnabled(JSContext* aCx, JS::Handle<JSObject*> aObj);

  const JSClass*
  GetJSClass();

  JSObject*
  Wrap(JSContext* aCx, JS::Handle<JSObject*> aScope, mozilla::dom::TextTrack* aObject, nsWrapperCache* aCache);

  template <class T>
  inline JSObject* Wrap(JSContext* aCx, JS::Handle<JSObject*> aScope, T* aObject)
  {
    return Wrap(aCx, aScope, aObject, aObject);
  }

  void
  CreateInterfaceObjects(JSContext* aCx, JS::Handle<JSObject*> aGlobal, ProtoAndIfaceArray& aProtoAndIfaceArray, bool aDefineOnGlobal);

  JS::Handle<JSObject*>
  GetProtoObject(JSContext* aCx, JS::Handle<JSObject*> aGlobal);

  JS::Handle<JSObject*>
  GetConstructorObject(JSContext* aCx, JS::Handle<JSObject*> aGlobal, bool aDefineOnGlobal = true);

} // namespace TextTrackBinding



} // namespace dom
} // namespace mozilla

#endif // mozilla_dom_TextTrackBinding_h__