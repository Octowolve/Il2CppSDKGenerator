#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI.Room {

class RoomZombieEndlessNavController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI.Room", "RoomZombieEndlessNavController"));
	}

	template <typename T = Il2CppVector3> T& mDismissPosition() {
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
		return ((T (*)(RoomZombieEndlessNavController*))(Il2CppBase() + 0x2139E20))(this);
	}
	template <typename T = bool> T IsShowNone() {
		return ((T (*)(RoomZombieEndlessNavController*))(Il2CppBase() + 0x2139EC0))(this);
	}
	template <typename T = void> T OnNavigationShowed(uintptr_t data, uintptr_t lastData) {
		return ((T (*)(RoomZombieEndlessNavController*, uintptr_t, uintptr_t))(Il2CppBase() + 0x2139F60))(this, data, lastData);
	}
	template <typename T = void> T OnNavigationWillClose(uintptr_t data, uintptr_t nextData) {
		return ((T (*)(RoomZombieEndlessNavController*, uintptr_t, uintptr_t))(Il2CppBase() + 0x213A014))(this, data, nextData);
	}
	template <typename T = bool> T xLuaBaseProxy_IsShowSquad() {
		return ((T (*)(RoomZombieEndlessNavController*))(Il2CppBase() + 0x213A0C8))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_IsShowNone() {
		return ((T (*)(RoomZombieEndlessNavController*))(Il2CppBase() + 0x213A0D0))(this);
	}

};

}
