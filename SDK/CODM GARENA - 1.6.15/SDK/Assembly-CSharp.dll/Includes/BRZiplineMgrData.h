#pragma once
#include <Il2Cpp/Il2Cpp.h>

class BRZiplineMgrData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BRZiplineMgrData"));
	}

	template <typename T = float> T& PositionYOffset() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = float> T& ForwardCheckMinDis() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& ShowEffectVelocity() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = float> T& RadBlurValue() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& StartAniTime() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = float> T& StartVelocity() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& MaxVelocity() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = float> T& MaxVelAddMoveVelRate() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& Acceleration() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = float> T& AutoRotationSpeed() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = float> T& ExitStopTime() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = float> T& ExitDistance() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = float> T& BtnHideTime() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = float> T& BtnHideDistance() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = float> T& UseCD() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Deserialize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> T Deserialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position, uintptr_t targetType, uintptr_t mask, uintptr_t index, uintptr_t interrupt) {
		return ((T (*)(BRZiplineMgrData*, Il2CppArray<uintptr_t>*, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x52FBBBC))(this, bytes, position, targetType, mask, index, interrupt);
	}
	template <typename T = void> T xLuaBaseProxy_Deserialize(Il2CppArray<uintptr_t>* P0, uintptr_t P1, uintptr_t P2, uintptr_t P3, uintptr_t P4, uintptr_t P5) {
		return ((T (*)(BRZiplineMgrData*, Il2CppArray<uintptr_t>*, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x52FC398))(this, P0, P1, P2, P3, P4, P5);
	}

};

}
