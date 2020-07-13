#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class AimAssistanceHUD
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "AimAssistanceHUD"));
	}

	template <typename T = uintptr_t> T& TargetRoot() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& TargetSprites() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& target() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateAimAssistanceTarget() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> T UpdateAimAssistanceTarget(uintptr_t newTarget) {
		return ((T (*)(AimAssistanceHUD*, uintptr_t))(Il2CppBase() + 0x3B66FC4))(this, newTarget);
	}
	template <typename T = void> T Update() {
		return ((T (*)(AimAssistanceHUD*))(Il2CppBase() + 0x3B67114))(this);
	}

};

}
