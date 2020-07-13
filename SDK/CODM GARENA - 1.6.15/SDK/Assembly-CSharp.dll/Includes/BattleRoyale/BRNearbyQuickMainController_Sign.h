#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattleRoyale {

class BRNearbyQuickMainControllerSign
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattleRoyale", "BRNearbyQuickMainController_Sign"));
	}

	template <typename T = uintptr_t> T& View_Sign() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnMarkBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateMarkUI() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClickEventHandleBySignSystem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnReuseListItemClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = void> T Init() {
		return ((T (*)(BRNearbyQuickMainControllerSign*))(Il2CppBase() + 0x1ABDB90))(this);
	}
	template <typename T = void> T OnMarkBtnClick() {
		return ((T (*)(BRNearbyQuickMainControllerSign*))(Il2CppBase() + 0x1ABDDF8))(this);
	}
	template <typename T = void> T UpdateMarkUI(bool IsMarkBtnSelceted) {
		return ((T (*)(BRNearbyQuickMainControllerSign*, bool))(Il2CppBase() + 0x1ABDF34))(this, IsMarkBtnSelceted);
	}
	template <typename T = bool> T ClickEventHandleBySignSystem(uintptr_t ItemData) {
		return ((T (*)(BRNearbyQuickMainControllerSign*, uintptr_t))(Il2CppBase() + 0x1ABE0F0))(this, ItemData);
	}
	template <typename T = bool> T OnReuseListItemClick(uintptr_t list, int32_t index) {
		return ((T (*)(BRNearbyQuickMainControllerSign*, uintptr_t, int32_t))(Il2CppBase() + 0x1ABE388))(this, list, index);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(BRNearbyQuickMainControllerSign*))(Il2CppBase() + 0x1ABE4DC))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_OnReuseListItemClick(uintptr_t P0, int32_t P1) {
		return ((T (*)(BRNearbyQuickMainControllerSign*, uintptr_t, int32_t))(Il2CppBase() + 0x1ABE4E4))(this, P0, P1);
	}

};

}
