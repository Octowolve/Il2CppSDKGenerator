#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattleRoyale {

class ElectricTripWireShockTargetIndicatorItem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattleRoyale", "ElectricTripWireShockTargetIndicatorItem"));
	}

	template <typename T = uintptr_t> T& IconSprite() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = uintptr_t> T& DistanceLabel() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> T& ArrowGO() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = float> T& DistanceLabelPositionOffset() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = uintptr_t> T& m_OwnerPawn() {
		return *(T*)((uintptr_t)this + 0xC4);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetAdaptiveOwnerPosition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetDistanceLabel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateArrow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LateUpdate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = Il2CppVector3> T GetAdaptiveOwnerPosition() {
		return ((T (*)(ElectricTripWireShockTargetIndicatorItem*))(Il2CppBase() + 0x3D4DFE8))(this);
	}
	template <typename T = void> T SetDistanceLabel() {
		return ((T (*)(ElectricTripWireShockTargetIndicatorItem*))(Il2CppBase() + 0x3D4E1D4))(this);
	}
	template <typename T = void> T UpdateArrow(bool isVisible) {
		return ((T (*)(ElectricTripWireShockTargetIndicatorItem*, bool))(Il2CppBase() + 0x3D4E4F0))(this, isVisible);
	}
	template <typename T = void> T LateUpdate() {
		return ((T (*)(ElectricTripWireShockTargetIndicatorItem*))(Il2CppBase() + 0x3D4E9D4))(this);
	}
	template <typename T = void> T Init(uintptr_t ownerPawn) {
		return ((T (*)(ElectricTripWireShockTargetIndicatorItem*, uintptr_t))(Il2CppBase() + 0x3D4D964))(this, ownerPawn);
	}

};

}
