#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class AimIKSolverBone
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "AimIKSolverBone"));
	}

	template <typename T = uintptr_t> T& BoneTransform() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = float> T& Weight() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppVector3> T& LastLocalPosition() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppQuaternion> T& LastLocalRotation() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RecordLocalPose() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> T RecordLocalPose() {
		return ((T (*)(AimIKSolverBone*))(Il2CppBase() + 0x3B67ED4))(this);
	}

};

}
