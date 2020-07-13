#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVE {

class PVEGameBuilder
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVE", "PVEGameBuilder"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ActorInfoRegFunc() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LoadBanks() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = Il2CppString*> T get_m_GameCfgPath() {
		return ((T (*)(PVEGameBuilder*))(Il2CppBase() + 0x438B7F0))(this);
	}
	template <typename T = uintptr_t> T get_m_UISceneType() {
		return ((T (*)(PVEGameBuilder*))(Il2CppBase() + 0x438B868))(this);
	}
	template <typename T = void> T ActorInfoRegFunc(uintptr_t InActorInfo) {
		return ((T (*)(PVEGameBuilder*, uintptr_t))(Il2CppBase() + 0x438B924))(this, InActorInfo);
	}
	template <typename T = void> T LoadBanks() {
		return ((T (*)(PVEGameBuilder*))(Il2CppBase() + 0x438BBD8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_ActorInfoRegFunc(uintptr_t P0) {
		return ((T (*)(PVEGameBuilder*, uintptr_t))(Il2CppBase() + 0x438BD04))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_LoadBanks() {
		return ((T (*)(PVEGameBuilder*))(Il2CppBase() + 0x438BD0C))(this);
	}

};

}
