#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SlideTackleComponentData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SlideTackleComponentData"));
	}

	template <typename T = float> T& SlideTackleInputTime() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = float> T& SlideTackleTurnAngle() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& SlideTackleAcclerationSpeed() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = float> T& SlideTackleDecelerationSpeed() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& SlideTackleMaxSpeed() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = float> T& SlideTackleLimitMinSpeed() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& SlideTackleLimitCDTime() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = float> T& SlideTackleLimitDecreaseRate() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& SlideTackleIdleLimitDecreaseRate() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = float> T& SlideTackleLimitMinIdleTime() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = float> T& SlideTackleMinSpeed() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = float> T& SlideTackleMinEyeHeight() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = float> T& SlideTackleIdleTime() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = float> T& SlideTackleStartAngleLimit() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = float> T& SlideTackleColliderHeight() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = float> T& SlideTackleCollideStopAngle() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = float> T& SlideTackleTPSCameraZDistance() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = float> T& SlideTackleTPSCameraYDistance() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = float> T& SlideTackleCDTime() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = float> T& DelayRecoverCameraHeightTime() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = float> T& CameraHeightRecoverTime() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = float> T& PostSlideTackleSlowMoveSpeed() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = float> T& PostSlideTackelAnimScale() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = float> T& PostSlideTackleSlowMoveTime() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = float> T& SlideTackleDirMaxAngle() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = float> T& SlideTackleEffectTime() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = float> T& SlideTackleFPCameraAimFadeOutTime() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = float> T& SlideCameraTime() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = float> T& SlideTackleFromFallingCDTime() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = float> T& SlideTackleStartMinSpeed() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Deserialize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> T Deserialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position, uintptr_t targetType, uintptr_t mask, uintptr_t index, uintptr_t interrupt) {
		return ((T (*)(SlideTackleComponentData*, Il2CppArray<uintptr_t>*, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x390C08C))(this, bytes, position, targetType, mask, index, interrupt);
	}
	template <typename T = void> T xLuaBaseProxy_Deserialize(Il2CppArray<uintptr_t>* P0, uintptr_t P1, uintptr_t P2, uintptr_t P3, uintptr_t P4, uintptr_t P5) {
		return ((T (*)(SlideTackleComponentData*, Il2CppArray<uintptr_t>*, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x390CEBC))(this, P0, P1, P2, P3, P4, P5);
	}

};

}
