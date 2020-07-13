#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Config {

class InputConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Config", "InputConfig"));
	}

	template <typename T = int32_t> T& ID() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppVector2> T& MovementJoystickSize() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& MovementJoystickType() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& MovementJoystickIsFixed() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppVector2> T& FireButtonSize() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& FireButtonType() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = bool> T& FireButtonIsFixed() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = float> T& MovementSensitivity() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = float> T& RotationSensitivity() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = float> T& RotationExponent() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = bool> T& ShowAimButton() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = float> T& RotationInputHoldTimeForFire() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = float> T& RotationMoveRangeForFire() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPrimaryKeyValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Deserialize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = int32_t> T GetPrimaryKeyValue() {
		return ((T (*)(InputConfig*))(Il2CppBase() + 0x3765244))(this);
	}
	template <typename T = int32_t> T get_ID() {
		return ((T (*)(InputConfig*))(Il2CppBase() + 0x37652E4))(this);
	}
	template <typename T = void> T set_ID(int32_t value) {
		return ((T (*)(InputConfig*, int32_t))(Il2CppBase() + 0x37652EC))(this, value);
	}
	template <typename T = Il2CppVector2> T get_MovementJoystickSize() {
		return ((T (*)(InputConfig*))(Il2CppBase() + 0x37652F4))(this);
	}
	template <typename T = void> T set_MovementJoystickSize(Il2CppVector2 value) {
		return ((T (*)(InputConfig*, Il2CppVector2))(Il2CppBase() + 0x3765308))(this, value);
	}
	template <typename T = int32_t> T get_MovementJoystickType() {
		return ((T (*)(InputConfig*))(Il2CppBase() + 0x3765314))(this);
	}
	template <typename T = void> T set_MovementJoystickType(int32_t value) {
		return ((T (*)(InputConfig*, int32_t))(Il2CppBase() + 0x376531C))(this, value);
	}
	template <typename T = bool> T get_MovementJoystickIsFixed() {
		return ((T (*)(InputConfig*))(Il2CppBase() + 0x3765324))(this);
	}
	template <typename T = void> T set_MovementJoystickIsFixed(bool value) {
		return ((T (*)(InputConfig*, bool))(Il2CppBase() + 0x376532C))(this, value);
	}
	template <typename T = Il2CppVector2> T get_FireButtonSize() {
		return ((T (*)(InputConfig*))(Il2CppBase() + 0x3765334))(this);
	}
	template <typename T = void> T set_FireButtonSize(Il2CppVector2 value) {
		return ((T (*)(InputConfig*, Il2CppVector2))(Il2CppBase() + 0x3765348))(this, value);
	}
	template <typename T = int32_t> T get_FireButtonType() {
		return ((T (*)(InputConfig*))(Il2CppBase() + 0x3765354))(this);
	}
	template <typename T = void> T set_FireButtonType(int32_t value) {
		return ((T (*)(InputConfig*, int32_t))(Il2CppBase() + 0x376535C))(this, value);
	}
	template <typename T = bool> T get_FireButtonIsFixed() {
		return ((T (*)(InputConfig*))(Il2CppBase() + 0x3765364))(this);
	}
	template <typename T = void> T set_FireButtonIsFixed(bool value) {
		return ((T (*)(InputConfig*, bool))(Il2CppBase() + 0x376536C))(this, value);
	}
	template <typename T = float> T get_MovementSensitivity() {
		return ((T (*)(InputConfig*))(Il2CppBase() + 0x3765374))(this);
	}
	template <typename T = void> T set_MovementSensitivity(float value) {
		return ((T (*)(InputConfig*, float))(Il2CppBase() + 0x376537C))(this, value);
	}
	template <typename T = float> T get_RotationSensitivity() {
		return ((T (*)(InputConfig*))(Il2CppBase() + 0x3765384))(this);
	}
	template <typename T = void> T set_RotationSensitivity(float value) {
		return ((T (*)(InputConfig*, float))(Il2CppBase() + 0x376538C))(this, value);
	}
	template <typename T = float> T get_RotationExponent() {
		return ((T (*)(InputConfig*))(Il2CppBase() + 0x3765394))(this);
	}
	template <typename T = void> T set_RotationExponent(float value) {
		return ((T (*)(InputConfig*, float))(Il2CppBase() + 0x376539C))(this, value);
	}
	template <typename T = bool> T get_ShowAimButton() {
		return ((T (*)(InputConfig*))(Il2CppBase() + 0x37653A4))(this);
	}
	template <typename T = void> T set_ShowAimButton(bool value) {
		return ((T (*)(InputConfig*, bool))(Il2CppBase() + 0x37653AC))(this, value);
	}
	template <typename T = float> T get_RotationInputHoldTimeForFire() {
		return ((T (*)(InputConfig*))(Il2CppBase() + 0x37653B4))(this);
	}
	template <typename T = void> T set_RotationInputHoldTimeForFire(float value) {
		return ((T (*)(InputConfig*, float))(Il2CppBase() + 0x37653BC))(this, value);
	}
	template <typename T = float> T get_RotationMoveRangeForFire() {
		return ((T (*)(InputConfig*))(Il2CppBase() + 0x37653C4))(this);
	}
	template <typename T = void> T set_RotationMoveRangeForFire(float value) {
		return ((T (*)(InputConfig*, float))(Il2CppBase() + 0x37653CC))(this, value);
	}
	template <typename T = int32_t> T Deserialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(InputConfig*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x37653D4))(this, bytes, position);
	}

};

}
