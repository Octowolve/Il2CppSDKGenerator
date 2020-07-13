#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UsingTheirs.RemoteInspector {

class HelperRemoteGameObjectCreator
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "UsingTheirs.RemoteInspector", "HelperRemoteGameObjectCreator"));
	}

	template <typename T = uintptr_t> static T& __Hotfix0_CreateRemoteGameObject() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateRemoteComponentArray() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetComponentEnabled() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateRemoteFieldArray() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateRemotePropertyArray() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetExtraRemoteProperty() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateRemoteProperty() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = uintptr_t> static T CreateRemoteGameObject(uintptr_t gameObject, bool includeComponents, bool includeChildren) {
		return ((T (*)(void *, uintptr_t, bool, bool))(Il2CppBase() + 0x422E2B8))(0, gameObject, includeComponents, includeChildren);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T CreateRemoteComponentArray(uintptr_t gameObject) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x422F4C8))(0, gameObject);
	}
	template <typename T = void> static T GetComponentEnabled(uintptr_t component, uintptr_t* hasEnabled, uintptr_t* enabled) {
		return ((T (*)(void *, uintptr_t, uintptr_t*, uintptr_t*))(Il2CppBase() + 0x422FED8))(0, component, hasEnabled, enabled);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T CreateRemoteFieldArray(uintptr_t component) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x422F8C8))(0, component);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T CreateRemotePropertyArray(uintptr_t component) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x422FC6C))(0, component);
	}
	template <typename T = void> static T GetExtraRemoteProperty(uintptr_t component, uintptr_t currentRemoteProperty) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x42311F8))(0, component, currentRemoteProperty);
	}
	template <typename T = uintptr_t> static T CreateRemoteProperty(uintptr_t component, uintptr_t property) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x42303A0))(0, component, property);
	}

};

}
