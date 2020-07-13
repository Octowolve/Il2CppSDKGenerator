#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class PropHuntLoadoutUIViewController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "PropHuntLoadoutUIViewController"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGamepadMoveLeft() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGamepadMoveRight() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshLoadout() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(PropHuntLoadoutUIViewController*))(Il2CppBase() + 0x3A9CB5C))(this);
	}
	template <typename T = bool> T OnGamepadMoveLeft() {
		return ((T (*)(PropHuntLoadoutUIViewController*))(Il2CppBase() + 0x3A9CC00))(this);
	}
	template <typename T = bool> T OnGamepadMoveRight() {
		return ((T (*)(PropHuntLoadoutUIViewController*))(Il2CppBase() + 0x3A9CCA0))(this);
	}
	template <typename T = void> T RefreshLoadout() {
		return ((T (*)(PropHuntLoadoutUIViewController*))(Il2CppBase() + 0x3A9CD40))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(PropHuntLoadoutUIViewController*))(Il2CppBase() + 0x3A9D26C))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_OnGamepadMoveLeft() {
		return ((T (*)(PropHuntLoadoutUIViewController*))(Il2CppBase() + 0x3A9D274))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_OnGamepadMoveRight() {
		return ((T (*)(PropHuntLoadoutUIViewController*))(Il2CppBase() + 0x3A9D27C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RefreshLoadout() {
		return ((T (*)(PropHuntLoadoutUIViewController*))(Il2CppBase() + 0x3A9D284))(this);
	}

};

}
