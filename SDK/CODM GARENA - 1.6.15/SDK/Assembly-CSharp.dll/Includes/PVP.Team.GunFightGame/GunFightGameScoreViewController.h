#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVP.Team.GunFightGame {

class GunFightGameScoreViewController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVP.Team.GunFightGame", "GunFightGameScoreViewController"));
	}

	template <typename T = uintptr_t> T& m_View() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(GunFightGameScoreViewController*))(Il2CppBase() + 0x4025578))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(GunFightGameScoreViewController*))(Il2CppBase() + 0x4025638))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(GunFightGameScoreViewController*))(Il2CppBase() + 0x4025744))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(GunFightGameScoreViewController*))(Il2CppBase() + 0x40257EC))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(GunFightGameScoreViewController*))(Il2CppBase() + 0x4025894))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(GunFightGameScoreViewController*))(Il2CppBase() + 0x402589C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(GunFightGameScoreViewController*))(Il2CppBase() + 0x40258A4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(GunFightGameScoreViewController*))(Il2CppBase() + 0x40258AC))(this);
	}

};

}
