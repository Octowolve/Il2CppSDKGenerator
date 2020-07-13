#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace WellFired.Shared {

class ReflectionHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "WellFired.Shared", "ReflectionHelper"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsAssignableFrom() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsEnum() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetBaseTypes() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetProperty() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetMethod() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetField() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsValueType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetNonPublicStaticMethod() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetNonPublicMethod() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetNonPublicInstanceProperty() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetNonPublicInstanceField() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_GetNonPublicMethod() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}

	template <typename T = bool> T IsAssignableFrom(uintptr_t first, uintptr_t second) {
		return ((T (*)(ReflectionHelper*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4A34E40))(this, first, second);
	}
	template <typename T = bool> T IsEnum(uintptr_t type) {
		return ((T (*)(ReflectionHelper*, uintptr_t))(Il2CppBase() + 0x4A34F24))(this, type);
	}
	template <typename T = uintptr_t> T GetBaseTypes(uintptr_t type) {
		return ((T (*)(ReflectionHelper*, uintptr_t))(Il2CppBase() + 0x4A34FE8))(this, type);
	}
	template <typename T = uintptr_t> T GetProperty(uintptr_t type, Il2CppString* name) {
		return ((T (*)(ReflectionHelper*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x4A350E4))(this, type, name);
	}
	template <typename T = uintptr_t> T GetMethod(uintptr_t type, Il2CppString* name) {
		return ((T (*)(ReflectionHelper*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x4A351C4))(this, type, name);
	}
	template <typename T = uintptr_t> T GetField(uintptr_t type, Il2CppString* name) {
		return ((T (*)(ReflectionHelper*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x4A352A4))(this, type, name);
	}
	template <typename T = bool> T IsValueType(uintptr_t type) {
		return ((T (*)(ReflectionHelper*, uintptr_t))(Il2CppBase() + 0x4A35384))(this, type);
	}
	template <typename T = uintptr_t> T GetNonPublicStaticMethod(uintptr_t type, Il2CppString* name) {
		return ((T (*)(ReflectionHelper*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x4A35448))(this, type, name);
	}
	template <typename T = uintptr_t> T GetNonPublicMethod(uintptr_t type, Il2CppString* name) {
		return ((T (*)(ReflectionHelper*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x4A3552C))(this, type, name);
	}
	template <typename T = uintptr_t> T GetNonPublicInstanceProperty(uintptr_t type, Il2CppString* name) {
		return ((T (*)(ReflectionHelper*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x4A35610))(this, type, name);
	}
	template <typename T = uintptr_t> T GetNonPublicInstanceField(uintptr_t type, Il2CppString* name) {
		return ((T (*)(ReflectionHelper*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x4A356F4))(this, type, name);
	}
	template <typename T = uintptr_t> T GetNonPublicMethod_1(uintptr_t type, Il2CppString* name, Il2CppArray<uintptr_t>* types) {
		return ((T (*)(ReflectionHelper*, uintptr_t, Il2CppString*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4A357E0))(this, type, name, types);
	}

};

}
