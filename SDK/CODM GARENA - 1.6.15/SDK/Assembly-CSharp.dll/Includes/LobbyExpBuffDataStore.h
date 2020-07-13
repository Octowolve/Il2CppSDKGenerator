#pragma once
#include <Il2Cpp/Il2Cpp.h>

class LobbyExpBuffDataStore
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LobbyExpBuffDataStore"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& m_WeaponExpBuffList() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_PlayerExpBuffList() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGetCSActvExpBuffRes() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnAddExpBuffNtf() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsExpBuffValid() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_IsExpBuffValid() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetExpBuffSum() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetExpBuffNum() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0__CheckReachModeCategory() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetModeCategoryByPlayListId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0__CheckModeEquals() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetExpBuffListByType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}

	template <typename T = Il2CppList<uintptr_t>*> T get_WeaponExpBuffList() {
		return ((T (*)(LobbyExpBuffDataStore*))(Il2CppBase() + 0x433A7E0))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_PlayerExpBuffList() {
		return ((T (*)(LobbyExpBuffDataStore*))(Il2CppBase() + 0x433A7E8))(this);
	}
	template <typename T = void> T OnGetCSActvExpBuffRes(uintptr_t res) {
		return ((T (*)(LobbyExpBuffDataStore*, uintptr_t))(Il2CppBase() + 0x4338F0C))(this, res);
	}
	template <typename T = void> T OnAddExpBuffNtf(uintptr_t ntf) {
		return ((T (*)(LobbyExpBuffDataStore*, uintptr_t))(Il2CppBase() + 0x43393DC))(this, ntf);
	}
	template <typename T = bool> T IsExpBuffValid(uintptr_t type, double serverTime, uintptr_t modeCategory) {
		return ((T (*)(LobbyExpBuffDataStore*, uintptr_t, double, uintptr_t))(Il2CppBase() + 0x433A808))(this, type, serverTime, modeCategory);
	}
	template <typename T = bool> T IsExpBuffValid_1(uintptr_t type, double serverTime, uint32_t forceModeId) {
		return ((T (*)(LobbyExpBuffDataStore*, uintptr_t, double, uint32_t))(Il2CppBase() + 0x433B260))(this, type, serverTime, forceModeId);
	}
	template <typename T = int32_t> T GetExpBuffSum(uintptr_t type, double serverTime, uintptr_t modeCategory) {
		return ((T (*)(LobbyExpBuffDataStore*, uintptr_t, double, uintptr_t))(Il2CppBase() + 0x433BB80))(this, type, serverTime, modeCategory);
	}
	template <typename T = int32_t> T GetExpBuffNum(uintptr_t type, double serverTime, uintptr_t modeCategory) {
		return ((T (*)(LobbyExpBuffDataStore*, uintptr_t, double, uintptr_t))(Il2CppBase() + 0x433C37C))(this, type, serverTime, modeCategory);
	}
	template <typename T = bool> T _CheckReachModeCategory(Il2CppList<uint32_t>* effectModeList, uintptr_t modeCategory) {
		return ((T (*)(LobbyExpBuffDataStore*, Il2CppList<uint32_t>*, uintptr_t))(Il2CppBase() + 0x433AF98))(this, effectModeList, modeCategory);
	}
	template <typename T = uintptr_t> T GetModeCategoryByPlayListId(int32_t playListId) {
		return ((T (*)(LobbyExpBuffDataStore*, int32_t))(Il2CppBase() + 0x433CA24))(this, playListId);
	}
	template <typename T = bool> T _CheckModeEquals(Il2CppList<uint32_t>* effectModeList, uint32_t forceModeId) {
		return ((T (*)(LobbyExpBuffDataStore*, Il2CppList<uint32_t>*, uint32_t))(Il2CppBase() + 0x433B9F0))(this, effectModeList, forceModeId);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GetExpBuffListByType(uintptr_t type, double serverTime, uintptr_t modeCategory) {
		return ((T (*)(LobbyExpBuffDataStore*, uintptr_t, double, uintptr_t))(Il2CppBase() + 0x433CB7C))(this, type, serverTime, modeCategory);
	}

};

}
