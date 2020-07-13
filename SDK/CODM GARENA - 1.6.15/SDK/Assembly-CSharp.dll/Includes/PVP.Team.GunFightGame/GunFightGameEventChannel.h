#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVP.Team.GunFightGame {

class GunFightGameEventChannel
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVP.Team.GunFightGame", "GunFightGameEventChannel"));
	}

	template <typename T = uintptr_t> T& m_GunFightGameInfo() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& m_GunFightGame() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSyncGunFightFlagArea() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> T Init() {
		return ((T (*)(GunFightGameEventChannel*))(Il2CppBase() + 0x4021D54))(this);
	}
	template <typename T = void> T OnSyncGunFightFlagArea(uintptr_t Msg) {
		return ((T (*)(GunFightGameEventChannel*, uintptr_t))(Il2CppBase() + 0x4021F64))(this, Msg);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(GunFightGameEventChannel*))(Il2CppBase() + 0x40227A0))(this);
	}

};

}
