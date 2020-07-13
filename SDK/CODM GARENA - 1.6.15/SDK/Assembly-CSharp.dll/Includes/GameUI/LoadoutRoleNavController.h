#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class LoadoutRoleNavController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "LoadoutRoleNavController"));
	}

	template <typename T = int32_t> T& mCacheFrame() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = Il2CppVector3> T& mHidePosition() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uintptr_t> T& mCacheSquadType() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsShowSquad() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNavigationShowed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UploadEntranceClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNavigationWillClose() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = bool> T IsShowSquad() {
		return ((T (*)(LoadoutRoleNavController*))(Il2CppBase() + 0x1F3F7EC))(this);
	}
	template <typename T = void> T OnNavigationShowed(uintptr_t data, uintptr_t lastData) {
		return ((T (*)(LoadoutRoleNavController*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1F3F9D8))(this, data, lastData);
	}
	template <typename T = void> T UploadEntranceClick() {
		return ((T (*)(LoadoutRoleNavController*))(Il2CppBase() + 0x1F403EC))(this);
	}
	template <typename T = void> T OnNavigationWillClose(uintptr_t data, uintptr_t nextData) {
		return ((T (*)(LoadoutRoleNavController*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1F40830))(this, data, nextData);
	}
	template <typename T = bool> T xLuaBaseProxy_IsShowSquad() {
		return ((T (*)(LoadoutRoleNavController*))(Il2CppBase() + 0x1F40954))(this);
	}

};

}
