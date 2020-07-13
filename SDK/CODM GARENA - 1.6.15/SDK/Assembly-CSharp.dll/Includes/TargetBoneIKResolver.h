#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TargetBoneIKResolver
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TargetBoneIKResolver"));
	}

	template <typename T = bool> T& IsBoneInit() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& RootBone() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& MiddleBone() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& TailBone() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& CurrentHoldWeight() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppVector3> T& HoldPosition() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& HoldTarget() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& CalcNormalTarget() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = bool> T& IsUseCalcNormalTarget() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = Il2CppVector3> T& bendNormal() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = bool> T& IsUseHold() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = float> T& RotateTailBoneWithTargetWeight() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitBones() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TickResolve() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TickResolvePrepare() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetBendDirection() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TickHold() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LateUpdate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = void> T InitBones() {
		return ((T (*)(TargetBoneIKResolver*))(Il2CppBase() + 0x464D5F8))(this);
	}
	template <typename T = void> T TickResolve() {
		return ((T (*)(TargetBoneIKResolver*))(Il2CppBase() + 0x464D9A8))(this);
	}
	template <typename T = void> T TickResolvePrepare() {
		return ((T (*)(TargetBoneIKResolver*))(Il2CppBase() + 0x464DAD8))(this);
	}
	template <typename T = Il2CppVector3> T GetBendDirection(Il2CppVector3 IKPosition, Il2CppVector3 bendNormal) {
		return ((T (*)(TargetBoneIKResolver*, Il2CppVector3, Il2CppVector3))(Il2CppBase() + 0x464E348))(this, IKPosition, bendNormal);
	}
	template <typename T = void> T TickHold() {
		return ((T (*)(TargetBoneIKResolver*))(Il2CppBase() + 0x464DCD4))(this);
	}
	template <typename T = void> T LateUpdate() {
		return ((T (*)(TargetBoneIKResolver*))(Il2CppBase() + 0x464E694))(this);
	}

};

}
