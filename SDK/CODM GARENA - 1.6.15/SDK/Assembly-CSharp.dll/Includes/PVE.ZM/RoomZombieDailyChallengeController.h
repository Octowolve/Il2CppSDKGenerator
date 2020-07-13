#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVE.ZM {

class RoomZombieDailyChallengeController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVE.ZM", "RoomZombieDailyChallengeController"));
	}

	template <typename T = uintptr_t> T& m_View() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_DailyList() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = int32_t> T& m_ServerDifficultyId() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = int32_t> T& m_ClientDifficulytId() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = int32_t> T& m_CurrentSpi() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> T& m_ZombieDailyDS() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGetRefreshView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnPlayClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}

	template <typename T = uintptr_t> T get_ZombieDailyDS() {
		return ((T (*)(RoomZombieDailyChallengeController*))(Il2CppBase() + 0x405D1F4))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(RoomZombieDailyChallengeController*))(Il2CppBase() + 0x405D2A4))(this);
	}
	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(RoomZombieDailyChallengeController*))(Il2CppBase() + 0x405D3AC))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(RoomZombieDailyChallengeController*))(Il2CppBase() + 0x405D450))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(RoomZombieDailyChallengeController*))(Il2CppBase() + 0x405D4F4))(this);
	}
	template <typename T = void> T OnGetRefreshView(uintptr_t msg) {
		return ((T (*)(RoomZombieDailyChallengeController*, uintptr_t))(Il2CppBase() + 0x405D598))(this, msg);
	}
	template <typename T = void> T InitView() {
		return ((T (*)(RoomZombieDailyChallengeController*))(Il2CppBase() + 0x405D650))(this);
	}
	template <typename T = void> T OnBtnPlayClick() {
		return ((T (*)(RoomZombieDailyChallengeController*))(Il2CppBase() + 0x405D6F4))(this);
	}
	template <typename T = bool> T OnBtnPlayClickm__0(uintptr_t it) {
		return ((T (*)(RoomZombieDailyChallengeController*, uintptr_t))(Il2CppBase() + 0x405DAB8))(this, it);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(RoomZombieDailyChallengeController*))(Il2CppBase() + 0x405DAFC))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(RoomZombieDailyChallengeController*))(Il2CppBase() + 0x405DB00))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(RoomZombieDailyChallengeController*))(Il2CppBase() + 0x405DB08))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(RoomZombieDailyChallengeController*))(Il2CppBase() + 0x405DB0C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_InitView() {
		return ((T (*)(RoomZombieDailyChallengeController*))(Il2CppBase() + 0x405DB10))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnBtnPlayClick() {
		return ((T (*)(RoomZombieDailyChallengeController*))(Il2CppBase() + 0x405DB14))(this);
	}

};

}
