#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace FrontEnd {

class WeaponAutoRotate
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "FrontEnd", "WeaponAutoRotate"));
	}

	template <typename T = uintptr_t> T& animationCurve() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = float> T& mUniformSpeed() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& mDecelerateTime() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = float> T& mTimeScale() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& mTimeCounter() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = bool> T& IsDoing() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppVector3> T& DEFAULT_WEAPON_ROTATION_EULERANGLE() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEnable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartToRotate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetCurve() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetTimeScale() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}

	template <typename T = void> T OnEnable() {
		return ((T (*)(WeaponAutoRotate*))(Il2CppBase() + 0x3881690))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(WeaponAutoRotate*))(Il2CppBase() + 0x3881778))(this);
	}
	template <typename T = void> T UpdateInfo() {
		return ((T (*)(WeaponAutoRotate*))(Il2CppBase() + 0x3881950))(this);
	}
	template <typename T = void> T StartToRotate() {
		return ((T (*)(WeaponAutoRotate*))(Il2CppBase() + 0x3869BB8))(this);
	}
	template <typename T = void> T ResetTime() {
		return ((T (*)(WeaponAutoRotate*))(Il2CppBase() + 0x3869EC4))(this);
	}
	template <typename T = void> T ResetCurve() {
		return ((T (*)(WeaponAutoRotate*))(Il2CppBase() + 0x3881AB4))(this);
	}
	template <typename T = void> T SetTimeScale(float rate) {
		return ((T (*)(WeaponAutoRotate*, float))(Il2CppBase() + 0x3881C7C))(this, rate);
	}

};

}
