#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UsingTheirs.RemoteInspector {

class ServerRemoteInspector
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "UsingTheirs.RemoteInspector", "ServerRemoteInspector"));
	}

	template <typename T = uintptr_t> T& httpServer() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& lastRefreashHierarchyRes() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> static T& f__mg$cache0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& f__mg$cache1() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& f__mg$cache2() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDestroy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HandlerConnectionTest() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = void> T Start() {
		return ((T (*)(ServerRemoteInspector*))(Il2CppBase() + 0x4884068))(this);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(ServerRemoteInspector*))(Il2CppBase() + 0x4884400))(this);
	}
	template <typename T = Il2CppString*> T HandlerConnectionTest(Il2CppString* jsonRequest) {
		return ((T (*)(ServerRemoteInspector*, Il2CppString*))(Il2CppBase() + 0x4884558))(this, jsonRequest);
	}

};

}
