#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVE.ZM {

class RoomZombieDailyChallengeNavController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVE.ZM", "RoomZombieDailyChallengeNavController"));
	}

	template <typename T = uintptr_t> T& m_Ctr() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsShowSquad() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsShowNone() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNavigationShowed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNavigationWillClose() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = bool> T IsShowSquad() {
		return ((T (*)(RoomZombieDailyChallengeNavController*))(Il2CppBase() + 0x405DBBC))(this);
	}
	template <typename T = bool> T IsShowNone() {
		return ((T (*)(RoomZombieDailyChallengeNavController*))(Il2CppBase() + 0x405DC5C))(this);
	}
	template <typename T = void> T OnNavigationShowed(uintptr_t data, uintptr_t lastData) {
		return ((T (*)(RoomZombieDailyChallengeNavController*, uintptr_t, uintptr_t))(Il2CppBase() + 0x405DCFC))(this, data, lastData);
	}
	template <typename T = void> T OnNavigationWillClose(uintptr_t data, uintptr_t nextData) {
		return ((T (*)(RoomZombieDailyChallengeNavController*, uintptr_t, uintptr_t))(Il2CppBase() + 0x405DF3C))(this, data, nextData);
	}
	template <typename T = bool> T xLuaBaseProxy_IsShowSquad() {
		return ((T (*)(RoomZombieDailyChallengeNavController*))(Il2CppBase() + 0x405E020))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_IsShowNone() {
		return ((T (*)(RoomZombieDailyChallengeNavController*))(Il2CppBase() + 0x405E028))(this);
	}

};

}
