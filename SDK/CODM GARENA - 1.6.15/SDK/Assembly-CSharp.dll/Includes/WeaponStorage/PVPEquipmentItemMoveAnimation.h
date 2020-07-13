#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace WeaponStorage {

class PVPEquipmentItemMoveAnimation
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "WeaponStorage", "PVPEquipmentItemMoveAnimation"));
	}

	template <typename T = Il2CppVector3> T& MoveOffset() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = float> T& MoveSpeed() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& MoveView() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& MoveTarget() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = bool> T& bMoveBegin() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& Curve() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppVector3> T& InitialPosition() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = float> T& mDuration() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = float> T& mEscapedTime() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Begin() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> T Begin(int32_t index) {
		return ((T (*)(PVPEquipmentItemMoveAnimation*, int32_t))(Il2CppBase() + 0x4C5DD64))(this, index);
	}
	template <typename T = void> T Update() {
		return ((T (*)(PVPEquipmentItemMoveAnimation*))(Il2CppBase() + 0x4C5DF80))(this);
	}

};

}
