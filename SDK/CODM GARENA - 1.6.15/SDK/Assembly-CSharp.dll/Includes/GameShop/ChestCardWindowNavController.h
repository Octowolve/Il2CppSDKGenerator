#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameShop {

class ChestCardWindowNavController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameShop", "ChestCardWindowNavController"));
	}

	template <typename T = uintptr_t> T& m_ctr() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& previous() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = Il2CppVector3> T& mHidePosition() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsShowNone() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNavigationWillShow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNavigationShowed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNavigationWillClose() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(ChestCardWindowNavController*))(Il2CppBase() + 0x28C7BB4))(this);
	}
	template <typename T = bool> T IsShowNone() {
		return ((T (*)(ChestCardWindowNavController*))(Il2CppBase() + 0x28C7C54))(this);
	}
	template <typename T = void> T OnNavigationWillShow(uintptr_t data) {
		return ((T (*)(ChestCardWindowNavController*, uintptr_t))(Il2CppBase() + 0x28C7CF4))(this, data);
	}
	template <typename T = void> T OnNavigationShowed(uintptr_t data, uintptr_t lastData) {
		return ((T (*)(ChestCardWindowNavController*, uintptr_t, uintptr_t))(Il2CppBase() + 0x28C7DA8))(this, data, lastData);
	}
	template <typename T = void> T OnNavigationWillClose(uintptr_t data, uintptr_t nextData) {
		return ((T (*)(ChestCardWindowNavController*, uintptr_t, uintptr_t))(Il2CppBase() + 0x28C8048))(this, data, nextData);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(ChestCardWindowNavController*))(Il2CppBase() + 0x28C8164))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_IsShowNone() {
		return ((T (*)(ChestCardWindowNavController*))(Il2CppBase() + 0x28C816C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnNavigationWillShow(uintptr_t P0) {
		return ((T (*)(ChestCardWindowNavController*, uintptr_t))(Il2CppBase() + 0x28C8174))(this, P0);
	}

};

}
