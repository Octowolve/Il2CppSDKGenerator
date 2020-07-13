#pragma once
#include <Il2Cpp/Il2Cpp.h>

class RollComponentData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RollComponentData"));
	}

	template <typename T = float> T& RollInputTime() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = float> T& RollTurnAngle() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& RollAcclerationSpeed() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = float> T& RollDecelerationSpeed() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& RollMaxSpeed() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = float> T& RollLimitMinSpeed() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& RollLimitCDTime() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = float> T& RollLimitDecreaseRate() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& RollIdleLimitDecreaseRate() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = float> T& RollLimitMinIdleTime() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = float> T& RollMinSpeed() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = float> T& RollMinEyeHeight() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = float> T& RollIdleTime() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = float> T& RollStartAngleLimit() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = float> T& RollColliderHeight() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = float> T& RollCollideStopAngle() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = float> T& RollTPSCameraZDistance() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = float> T& RollTPSCameraYDistance() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = float> T& RollCDTime() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = float> T& DelayRecoverCameraHeightTime() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = float> T& CameraHeightRecoverTime() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = float> T& PostRollSlowMoveSpeed() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = float> T& PostRollAnimScale() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = float> T& PostRollSlowMoveTime() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = float> T& RollDirMaxAngle() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = float> T& RollEffectTime() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = float> T& RollFPCameraAimFadeOutTime() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = float> T& RollCameraTime() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = float> T& RollFromFallingCDTime() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = float> T& RollSpeedRatio() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = float> T& RollDuration() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Deserialize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> T Deserialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position, uintptr_t targetType, uintptr_t mask, uintptr_t index, uintptr_t interrupt) {
		return ((T (*)(RollComponentData*, Il2CppArray<uintptr_t>*, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x4131A28))(this, bytes, position, targetType, mask, index, interrupt);
	}
	template <typename T = void> T xLuaBaseProxy_Deserialize(Il2CppArray<uintptr_t>* P0, uintptr_t P1, uintptr_t P2, uintptr_t P3, uintptr_t P4, uintptr_t P5) {
		return ((T (*)(RollComponentData*, Il2CppArray<uintptr_t>*, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x41328C4))(this, P0, P1, P2, P3, P4, P5);
	}

};

}
