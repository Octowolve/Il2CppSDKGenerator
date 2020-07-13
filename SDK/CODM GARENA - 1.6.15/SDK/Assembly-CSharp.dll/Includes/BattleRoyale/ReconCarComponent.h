#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattleRoyale {

class ReconCarComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattleRoyale", "ReconCarComponent"));
	}

	template <typename T = uintptr_t> T& wheelVehicle() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& ReconCameraBaseTransform() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& ReconCameraArmTransform() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& reconRange() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& tipsTime() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TickAnimation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TickRange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDestroy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = void> T TickAnimation(float delaTime) {
		return ((T (*)(ReconCarComponent*, float))(Il2CppBase() + 0x3D6123C))(this, delaTime);
	}
	template <typename T = void> T TickRange(float delaTime) {
		return ((T (*)(ReconCarComponent*, float))(Il2CppBase() + 0x3D616C8))(this, delaTime);
	}
	template <typename T = void> T Update() {
		return ((T (*)(ReconCarComponent*))(Il2CppBase() + 0x3D61908))(this);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(ReconCarComponent*))(Il2CppBase() + 0x3D619D4))(this);
	}

};

}
