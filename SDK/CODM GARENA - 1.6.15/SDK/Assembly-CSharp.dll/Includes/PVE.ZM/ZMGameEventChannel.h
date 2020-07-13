#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVE.ZM {

class ZMGameEventChannel
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVE.ZM", "ZMGameEventChannel"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSyncBuffInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> T OnSyncBuffInfo(uintptr_t inMsg) {
		return ((T (*)(ZMGameEventChannel*, uintptr_t))(Il2CppBase() + 0x405E6AC))(this, inMsg);
	}
	template <typename T = void> T xLuaBaseProxy_OnSyncBuffInfo(uintptr_t P0) {
		return ((T (*)(ZMGameEventChannel*, uintptr_t))(Il2CppBase() + 0x405EEA4))(this, P0);
	}

};

}
