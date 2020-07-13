#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattleRoyale {

class InterferenceDroneIndicatorItem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattleRoyale", "InterferenceDroneIndicatorItem"));
	}

	template <typename T = uintptr_t> T& ArrowTransform() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& InterfereEffectAnimator() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& LineTraceInterval() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& m_Drone() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& m_LastLineTraceTime() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = bool> T& m_LastLineTraceEffect() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetLocalPosition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetArrowLocalRotation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateItemInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = void> T SetLocalPosition(Il2CppVector3 localPosition) {
		return ((T (*)(InterferenceDroneIndicatorItem*, Il2CppVector3))(Il2CppBase() + 0x3D514E8))(this, localPosition);
	}
	template <typename T = void> T SetArrowLocalRotation(Il2CppQuaternion localRotation) {
		return ((T (*)(InterferenceDroneIndicatorItem*, Il2CppQuaternion))(Il2CppBase() + 0x3D515F4))(this, localRotation);
	}
	template <typename T = void> T Init(uintptr_t drone) {
		return ((T (*)(InterferenceDroneIndicatorItem*, uintptr_t))(Il2CppBase() + 0x3D51038))(this, drone);
	}
	template <typename T = void> T Tick(float deltaTime) {
		return ((T (*)(InterferenceDroneIndicatorItem*, float))(Il2CppBase() + 0x3D4FC94))(this, deltaTime);
	}
	template <typename T = void> T UpdateItemInfo() {
		return ((T (*)(InterferenceDroneIndicatorItem*))(Il2CppBase() + 0x3D50B78))(this);
	}

};

}
