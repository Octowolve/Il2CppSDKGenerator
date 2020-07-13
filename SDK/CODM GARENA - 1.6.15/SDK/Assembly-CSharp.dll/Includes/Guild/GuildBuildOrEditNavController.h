#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Guild {

class GuildBuildOrEditNavController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Guild", "GuildBuildOrEditNavController"));
	}

	template <typename T = uintptr_t> T& m_Controller() {
		return *(T*)((uintptr_t)this + 0x48);
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
	template <typename T = uintptr_t> static T& __Hotfix0_OnNavigationShowed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNavigationWillClose() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(GuildBuildOrEditNavController*))(Il2CppBase() + 0x3E4479C))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(GuildBuildOrEditNavController*))(Il2CppBase() + 0x3E4483C))(this);
	}
	template <typename T = void> T OnNavigationShowed(uintptr_t data, uintptr_t lastData) {
		return ((T (*)(GuildBuildOrEditNavController*, uintptr_t, uintptr_t))(Il2CppBase() + 0x3E44950))(this, data, lastData);
	}
	template <typename T = void> T OnNavigationWillClose(uintptr_t data, uintptr_t nextData) {
		return ((T (*)(GuildBuildOrEditNavController*, uintptr_t, uintptr_t))(Il2CppBase() + 0x3E44A54))(this, data, nextData);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(GuildBuildOrEditNavController*))(Il2CppBase() + 0x3E44B48))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(GuildBuildOrEditNavController*))(Il2CppBase() + 0x3E44B50))(this);
	}

};

}
