#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattleRoyale {

class BRWeaponHoldPoint
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattleRoyale", "BRWeaponHoldPoint"));
	}

	template <typename T = Il2CppVector3> T& HoldPoint() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppVector3> T& GripHoldPoint() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppVector3> T& m_DefaultHoldPointLocalEuler() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppVector3> T& m_DefaultForPointLocalPosition() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppVector3> T& m_DefaultForPointLocalEuler() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = Il2CppVector3> T& GripHoldOffsetAngle() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = bool> T& IsUseGripHoldOffsetAngle() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = bool> T& m_NeedResetHoldPointTrans() {
		return *(T*)((uintptr_t)this + 0x55);
	}
	template <typename T = uintptr_t> T& m_HoldPointTrans() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& m_ForPointHoldTransParent() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = uintptr_t> T& m_ForPointHoldTrans() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> T& m_MagPointHoldTrans() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetForPoint() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitMagPointHold() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitHoldPoint() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = bool> T get_NeedResetHoldPointTrans() {
		return ((T (*)(BRWeaponHoldPoint*))(Il2CppBase() + 0x266044C))(this);
	}
	template <typename T = uintptr_t> T get_HoldPointTrans() {
		return ((T (*)(BRWeaponHoldPoint*))(Il2CppBase() + 0x2660454))(this);
	}
	template <typename T = uintptr_t> T get_ForPointHoldTrans() {
		return ((T (*)(BRWeaponHoldPoint*))(Il2CppBase() + 0x2660B80))(this);
	}
	template <typename T = uintptr_t> T GetForPoint() {
		return ((T (*)(BRWeaponHoldPoint*))(Il2CppBase() + 0x2660C40))(this);
	}
	template <typename T = uintptr_t> T get_MagPointHoldTrans() {
		return ((T (*)(BRWeaponHoldPoint*))(Il2CppBase() + 0x2660D24))(this);
	}
	template <typename T = void> T InitMagPointHold() {
		return ((T (*)(BRWeaponHoldPoint*))(Il2CppBase() + 0x2660DE4))(this);
	}
	template <typename T = void> T InitHoldPoint() {
		return ((T (*)(BRWeaponHoldPoint*))(Il2CppBase() + 0x2660514))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(BRWeaponHoldPoint*))(Il2CppBase() + 0x2661084))(this);
	}

};

}
