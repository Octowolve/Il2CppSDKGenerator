#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UsingTheirs.RemoteInspector {

class HandlerApplyGameObject
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "UsingTheirs.RemoteInspector", "HandlerApplyGameObject"));
	}

	template <typename T = uintptr_t> static T& __Hotfix0_HandlerMain() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ErrorString() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetComponentEnabled() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FindFieldInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FindPropertyInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FindComponent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = Il2CppString*> static T HandlerMain(Il2CppString* jsonRequest) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x422CDC4))(0, jsonRequest);
	}
	template <typename T = Il2CppString*> static T ErrorString(Il2CppString* reason) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x422D794))(0, reason);
	}
	template <typename T = void> static T SetComponentEnabled(uintptr_t component, bool enabled) {
		return ((T (*)(void *, uintptr_t, bool))(Il2CppBase() + 0x422D9D0))(0, component, enabled);
	}
	template <typename T = uintptr_t> static T FindFieldInfo(Il2CppString* name, uintptr_t component) {
		return ((T (*)(void *, Il2CppString*, uintptr_t))(Il2CppBase() + 0x422DB7C))(0, name, component);
	}
	template <typename T = uintptr_t> static T FindPropertyInfo(Il2CppString* name, uintptr_t component) {
		return ((T (*)(void *, Il2CppString*, uintptr_t))(Il2CppBase() + 0x422DC60))(0, name, component);
	}
	template <typename T = uintptr_t> static T FindComponent(int32_t instanceId, uintptr_t go) {
		return ((T (*)(void *, int32_t, uintptr_t))(Il2CppBase() + 0x422D880))(0, instanceId, go);
	}

};

}
