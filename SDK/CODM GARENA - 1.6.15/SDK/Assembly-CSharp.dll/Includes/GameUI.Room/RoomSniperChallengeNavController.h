#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI.Room {

class RoomSniperChallengeNavController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI.Room", "RoomSniperChallengeNavController"));
	}

	template <typename T = uintptr_t> T& m_RoomSniperChallengeCtr() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNavigationShowed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNavigationWillClose() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(RoomSniperChallengeNavController*))(Il2CppBase() + 0x21075E4))(this);
	}
	template <typename T = void> T OnNavigationShowed(uintptr_t data, uintptr_t lastData) {
		return ((T (*)(RoomSniperChallengeNavController*, uintptr_t, uintptr_t))(Il2CppBase() + 0x2107684))(this, data, lastData);
	}
	template <typename T = void> T OnNavigationWillClose(uintptr_t data, uintptr_t nextData) {
		return ((T (*)(RoomSniperChallengeNavController*, uintptr_t, uintptr_t))(Il2CppBase() + 0x2107844))(this, data, nextData);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(RoomSniperChallengeNavController*))(Il2CppBase() + 0x2107928))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnNavigationShowed(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(RoomSniperChallengeNavController*, uintptr_t, uintptr_t))(Il2CppBase() + 0x2107930))(this, P0, P1);
	}
	template <typename T = void> T xLuaBaseProxy_OnNavigationWillClose(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(RoomSniperChallengeNavController*, uintptr_t, uintptr_t))(Il2CppBase() + 0x2107938))(this, P0, P1);
	}

};

}
