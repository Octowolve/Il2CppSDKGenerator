#pragma once
#include <Il2Cpp/Il2Cpp.h>

class BRClimbComponentData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BRClimbComponentData"));
	}

	template <typename T = float> T& StandMaxMantleDistanceOffset() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = float> T& RunMaxMantleDistanceOffset() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& JumpMaxMantleDistanceOffset() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = float> T& MaxClimbHeight() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& ClimbToCeilHeight() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = float> T& MaxClimbAngle() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& MinClimbAngle() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = float> T& DefaultMantleWidth() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& RunClimbSpeed() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& RunClimbSpeedList() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = float> T& StandClimbSpeed() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = float> T& JumpClimbSpeed() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& JumpClimbSpeedList() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = float> T& ClimbOverMaxSpeed() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = float> T& MinClimpUpMantleWidth() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& JumpClimbOverMaxMantleWidthList() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = float> T& FPClimbAnimPlayThreshold() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = float> T& CheckMantleWidthOffset() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = float> T& FPFastClimbHeight() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = float> T& FallingToClimbTransitionTime() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = float> T& FPClimbAimStandHeight() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = float> T& FPClimbAimMaxDelay() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = float> T& FPClimbAimMinStandHeight() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = float> T& CheckOverHeightBackDistance() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = float> T& ClimbForwardMaxHeight() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = float> T& ClimbOverMaxOffset() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Deserialize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> T Deserialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position, uintptr_t targetType, uintptr_t mask, uintptr_t index, uintptr_t interrupt) {
		return ((T (*)(BRClimbComponentData*, Il2CppArray<uintptr_t>*, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x35C8804))(this, bytes, position, targetType, mask, index, interrupt);
	}
	template <typename T = void> T xLuaBaseProxy_Deserialize(Il2CppArray<uintptr_t>* P0, uintptr_t P1, uintptr_t P2, uintptr_t P3, uintptr_t P4, uintptr_t P5) {
		return ((T (*)(BRClimbComponentData*, Il2CppArray<uintptr_t>*, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x35C9484))(this, P0, P1, P2, P3, P4, P5);
	}

};

}
