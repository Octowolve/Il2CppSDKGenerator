#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class SeasonShowTimeNavigation
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "SeasonShowTimeNavigation"));
	}

	template <typename T = uintptr_t> T& mController() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = Il2CppVector3> T& mHidePosition() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNavigationShowed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNavigationShowFinish() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNavigationWillClose() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T OnNavigationShowed(uintptr_t data, uintptr_t lastData) {
		return ((T (*)(SeasonShowTimeNavigation*, uintptr_t, uintptr_t))(Il2CppBase() + 0x448673C))(this, data, lastData);
	}
	template <typename T = void> T OnNavigationShowFinish(uintptr_t data) {
		return ((T (*)(SeasonShowTimeNavigation*, uintptr_t))(Il2CppBase() + 0x44867F0))(this, data);
	}
	template <typename T = void> T OnNavigationWillClose(uintptr_t data, uintptr_t nextData) {
		return ((T (*)(SeasonShowTimeNavigation*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4486B20))(this, data, nextData);
	}
	template <typename T = void> T xLuaBaseProxy_OnNavigationShowFinish(uintptr_t P0) {
		return ((T (*)(SeasonShowTimeNavigation*, uintptr_t))(Il2CppBase() + 0x4486C3C))(this, P0);
	}

};

}
