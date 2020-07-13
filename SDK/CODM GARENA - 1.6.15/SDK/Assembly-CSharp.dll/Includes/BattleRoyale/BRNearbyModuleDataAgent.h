#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattleRoyale {

class BRNearbyModuleDataAgent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattleRoyale", "BRNearbyModuleDataAgent"));
	}

	template <typename T = uintptr_t> static T& Instance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& m_DS() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = bool> T& IsDragingItemList() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SwitchNearbyListVisible() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetNearbyVisibleType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetNearbyUIVisibleType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CloseBoxList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SwitchMarkBtnState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetMarkBtnSelected() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsMarkBtnSelected() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}

	template <typename T = uintptr_t> T get_DS() {
		return ((T (*)(BRNearbyModuleDataAgent*))(Il2CppBase() + 0x1AB365C))(this);
	}
	template <typename T = void> T SwitchNearbyListVisible() {
		return ((T (*)(BRNearbyModuleDataAgent*))(Il2CppBase() + 0x1ABA7F4))(this);
	}
	template <typename T = void> T SetNearbyVisibleType(uintptr_t type, bool visible) {
		return ((T (*)(BRNearbyModuleDataAgent*, uintptr_t, bool))(Il2CppBase() + 0x1AB4FD4))(this, type, visible);
	}
	template <typename T = void> T SetNearbyUIVisibleType(uintptr_t type, bool visible) {
		return ((T (*)(BRNearbyModuleDataAgent*, uintptr_t, bool))(Il2CppBase() + 0x1AB52FC))(this, type, visible);
	}
	template <typename T = void> T CloseBoxList() {
		return ((T (*)(BRNearbyModuleDataAgent*))(Il2CppBase() + 0x1ABA8BC))(this);
	}
	template <typename T = void> T SwitchMarkBtnState() {
		return ((T (*)(BRNearbyModuleDataAgent*))(Il2CppBase() + 0x1ABA9E8))(this);
	}
	template <typename T = void> T SetMarkBtnSelected(bool IsSelected) {
		return ((T (*)(BRNearbyModuleDataAgent*, bool))(Il2CppBase() + 0x1ABAAD8))(this, IsSelected);
	}
	template <typename T = bool> T IsMarkBtnSelected() {
		return ((T (*)(BRNearbyModuleDataAgent*))(Il2CppBase() + 0x1ABABC8))(this);
	}

};

}
