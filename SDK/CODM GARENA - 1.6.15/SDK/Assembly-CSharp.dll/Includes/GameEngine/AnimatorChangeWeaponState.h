#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class AnimatorChangeWeaponState
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "AnimatorChangeWeaponState"));
	}

	template <typename T = uintptr_t> T& mbRightWeaponTransform() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppVector3> T& m_RightGetWeeaponLocalPosition() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppVector3> T& m_RightGetWeaponLocalRotation() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppVector3> T& m_LeftGetWeeaponLocalPosition() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppVector3> T& m_LeftGetWeaponLocalRotation() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = float> T& m_GetWeaponTransitionDurationTime() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = float> T& m_CurGetWeaponTransitionDurationTime() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = bool> T& m_CurGetLeftWeapon() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetGetWeaponStateEnter() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsDoingFixbRightWeaponTransformWhenGetWeaponBlend() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetGetWeaponStateExit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Reset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LateUpdate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = void> T SetGetWeaponStateEnter(bool isGetLeftWeapon, float getWeaponDurationTime) {
		return ((T (*)(AnimatorChangeWeaponState*, bool, float))(Il2CppBase() + 0x2B57C28))(this, isGetLeftWeapon, getWeaponDurationTime);
	}
	template <typename T = bool> T IsDoingFixbRightWeaponTransformWhenGetWeaponBlend() {
		return ((T (*)(AnimatorChangeWeaponState*))(Il2CppBase() + 0x2B57CF8))(this);
	}
	template <typename T = void> T SetGetWeaponStateExit(uintptr_t animator) {
		return ((T (*)(AnimatorChangeWeaponState*, uintptr_t))(Il2CppBase() + 0x2B57DBC))(this, animator);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(AnimatorChangeWeaponState*))(Il2CppBase() + 0x2B57EB0))(this);
	}
	template <typename T = void> T LateUpdate() {
		return ((T (*)(AnimatorChangeWeaponState*))(Il2CppBase() + 0x2B57F5C))(this);
	}

};

}
