#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class AnimationComponentAvatarRootMotionListener
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "AnimationComponentAvatarRootMotionListener"));
	}

	template <typename T = uintptr_t> T& m_CurrAnimator() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppVector3> T& CurrentDeltaPosition() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppQuaternion> T& CurrentDeltaRotation() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCurrentDeltaPosition() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCurrentDeltaRotation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitAnimatorDeltaData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnAnimatorMove() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = uintptr_t> T get_CurrentAnimator() {
		return ((T (*)(AnimationComponentAvatarRootMotionListener*))(Il2CppBase() + 0x2B5339C))(this);
	}
	template <typename T = Il2CppVector3> T GetCurrentDeltaPosition() {
		return ((T (*)(AnimationComponentAvatarRootMotionListener*))(Il2CppBase() + 0x2B518E0))(this);
	}
	template <typename T = Il2CppQuaternion> T GetCurrentDeltaRotation() {
		return ((T (*)(AnimationComponentAvatarRootMotionListener*))(Il2CppBase() + 0x2B51B60))(this);
	}
	template <typename T = void> T InitAnimatorDeltaData() {
		return ((T (*)(AnimationComponentAvatarRootMotionListener*))(Il2CppBase() + 0x2B514E0))(this);
	}
	template <typename T = void> T OnAnimatorMove() {
		return ((T (*)(AnimationComponentAvatarRootMotionListener*))(Il2CppBase() + 0x2B53484))(this);
	}

};

}
