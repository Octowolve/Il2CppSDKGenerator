#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UsingTheirs.RemoteInspector {

class SerializationCustom
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "UsingTheirs.RemoteInspector", "SerializationCustom"));
	}

	template <typename T = uintptr_t> static T& __Hotfix0_Serialize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Deserialize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetDefaultValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Serialize_string() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Deserialize_string() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Serialize_Vector3() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Deserialize_Vector3() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Deserialize_Enum() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Serialize_Vector2() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Deserialize_Vector2() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Serialize_Vector4() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Deserialize_Vector4() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Serialize_Bounds() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Deserialize_Bounds() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Serialize_Color() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Deserialize_Color() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Serialize_Rect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Deserialize_Rect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}

	template <typename T = Il2CppString*> static T Serialize(uintptr_t t, uintptr_t obj) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x487F9AC))(0, t, obj);
	}
	template <typename T = uintptr_t> static T Deserialize(uintptr_t t, Il2CppString* serialized) {
		return ((T (*)(void *, uintptr_t, Il2CppString*))(Il2CppBase() + 0x4881010))(0, t, serialized);
	}
	template <typename T = uintptr_t> static T GetDefaultValue(uintptr_t type) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x48826CC))(0, type);
	}
	template <typename T = Il2CppString*> static T Serialize_string(uintptr_t obj) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x487FF18))(0, obj);
	}
	template <typename T = uintptr_t> static T Deserialize_string(Il2CppString* serialized) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x488187C))(0, serialized);
	}
	template <typename T = Il2CppString*> static T Serialize_Vector3(uintptr_t obj) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x487FD88))(0, obj);
	}
	template <typename T = uintptr_t> static T Deserialize_Vector3(Il2CppString* serialized) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x4881618))(0, serialized);
	}
	template <typename T = uintptr_t> static T Deserialize_Enum(uintptr_t t, Il2CppString* serialized) {
		return ((T (*)(void *, uintptr_t, Il2CppString*))(Il2CppBase() + 0x488191C))(0, t, serialized);
	}
	template <typename T = Il2CppString*> static T Serialize_Vector2(uintptr_t obj) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x488010C))(0, obj);
	}
	template <typename T = uintptr_t> static T Deserialize_Vector2(Il2CppString* serialized) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x4881A0C))(0, serialized);
	}
	template <typename T = Il2CppString*> static T Serialize_Vector4(uintptr_t obj) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4880280))(0, obj);
	}
	template <typename T = uintptr_t> static T Deserialize_Vector4(Il2CppString* serialized) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x4881C44))(0, serialized);
	}
	template <typename T = Il2CppString*> static T Serialize_Bounds(uintptr_t obj) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4880594))(0, obj);
	}
	template <typename T = uintptr_t> static T Deserialize_Bounds(Il2CppString* serialized) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x4881EC8))(0, serialized);
	}
	template <typename T = Il2CppString*> static T Serialize_Color(uintptr_t obj) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x48809C0))(0, obj);
	}
	template <typename T = uintptr_t> static T Deserialize_Color(Il2CppString* serialized) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x4882190))(0, serialized);
	}
	template <typename T = Il2CppString*> static T Serialize_Rect(uintptr_t obj) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4880CD4))(0, obj);
	}
	template <typename T = uintptr_t> static T Deserialize_Rect(Il2CppString* serialized) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x4882414))(0, serialized);
	}

};

}
