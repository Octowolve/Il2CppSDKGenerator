#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattleRoyale {

class BREquipmentBagSlotItemView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattleRoyale", "BREquipmentBagSlotItemView"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshBackgroundColor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> T RefreshBackgroundColor() {
		return ((T (*)(BREquipmentBagSlotItemView*))(Il2CppBase() + 0x18DCE44))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RefreshBackgroundColor() {
		return ((T (*)(BREquipmentBagSlotItemView*))(Il2CppBase() + 0x18DCEE8))(this);
	}

};

}
