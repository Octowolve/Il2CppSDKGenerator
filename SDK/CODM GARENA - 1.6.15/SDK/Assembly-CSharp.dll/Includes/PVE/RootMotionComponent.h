#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVE {

class RootMotionComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVE", "RootMotionComponent"));
	}

	template <typename T = uintptr_t> T& m_OwnerPawn() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& m_OwnerTransform() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& m_OwnerController() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& m_Animator() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& bStartRootMotion() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnAnimatorMove() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> T Init(uintptr_t inOwner) {
		return ((T (*)(RootMotionComponent*, uintptr_t))(Il2CppBase() + 0x4054034))(this, inOwner);
	}
	template <typename T = void> T OnAnimatorMove() {
		return ((T (*)(RootMotionComponent*))(Il2CppBase() + 0x405414C))(this);
	}

};

}
