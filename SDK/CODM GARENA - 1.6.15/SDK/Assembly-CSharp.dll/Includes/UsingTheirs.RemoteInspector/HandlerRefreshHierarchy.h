#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UsingTheirs.RemoteInspector {

class HandlerRefreshHierarchy
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "UsingTheirs.RemoteInspector", "HandlerRefreshHierarchy"));
	}

	template <typename T = uintptr_t> static T& __Hotfix0_HandlerMain() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HandlerMainFromConnection() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateRemoteSceneArray() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateRemoteGameObjectArray() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ErrorString() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = Il2CppString*> static T HandlerMain(Il2CppString* jsonRequest) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x422E528))(0, jsonRequest);
	}
	template <typename T = Il2CppString*> static T HandlerMainFromConnection(Il2CppString* jsonRequest) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x422EC2C))(0, jsonRequest);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T CreateRemoteSceneArray() {
		return ((T (*)(void *))(Il2CppBase() + 0x422E8B0))(0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T CreateRemoteGameObjectArray(Il2CppArray<uintptr_t>* gameObjects) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x422F03C))(0, gameObjects);
	}
	template <typename T = Il2CppString*> static T ErrorString(Il2CppString* reason) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x422EB40))(0, reason);
	}

};

}
