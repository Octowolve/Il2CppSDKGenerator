#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattleRoyale {

class ElectricTripWireShockTargetIndicatorHUD
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattleRoyale", "ElectricTripWireShockTargetIndicatorHUD"));
	}

	template <typename T = Il2CppDictionary<uint32_t, uintptr_t>*> T& m_ItemDictionary() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RemoveItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RemoveAllItems() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T AddItem(uint32_t playerID) {
		return ((T (*)(ElectricTripWireShockTargetIndicatorHUD*, uint32_t))(Il2CppBase() + 0x3D4D6EC))(this, playerID);
	}
	template <typename T = void> T RemoveItem(uint32_t playerID) {
		return ((T (*)(ElectricTripWireShockTargetIndicatorHUD*, uint32_t))(Il2CppBase() + 0x3D4DA28))(this, playerID);
	}
	template <typename T = void> T RemoveAllItems() {
		return ((T (*)(ElectricTripWireShockTargetIndicatorHUD*))(Il2CppBase() + 0x3D4DC2C))(this);
	}

};

}
