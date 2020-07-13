#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class IWeaponShakeMode
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "IWeaponShakeMode"));
	}


	template <typename T = void> T Init(uintptr_t mode, uintptr_t modeData, uintptr_t ownerPawn) {
		return ((T (*)(IWeaponShakeMode*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x0))(this, mode, modeData, ownerPawn);
	}
	template <typename T = void> T SetEnd() {
		return ((T (*)(IWeaponShakeMode*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(IWeaponShakeMode*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = Il2CppVector3> T UpdateRotationOffset(float deltaTime, bool inState) {
		return ((T (*)(IWeaponShakeMode*, float, bool))(Il2CppBase() + 0x0))(this, deltaTime, inState);
	}
	template <typename T = Il2CppVector3> T UpdatePositionOffset(float deltaTime, bool inState) {
		return ((T (*)(IWeaponShakeMode*, float, bool))(Il2CppBase() + 0x0))(this, deltaTime, inState);
	}
	template <typename T = Il2CppVector3> T get_LastRotation() {
		return ((T (*)(IWeaponShakeMode*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T set_LastRotation(Il2CppVector3 value) {
		return ((T (*)(IWeaponShakeMode*, Il2CppVector3))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = Il2CppVector3> T get_CurRotation() {
		return ((T (*)(IWeaponShakeMode*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T set_CurRotation(Il2CppVector3 value) {
		return ((T (*)(IWeaponShakeMode*, Il2CppVector3))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = Il2CppVector3> T get_LastPosition() {
		return ((T (*)(IWeaponShakeMode*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T set_LastPosition(Il2CppVector3 value) {
		return ((T (*)(IWeaponShakeMode*, Il2CppVector3))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = Il2CppVector3> T get_CurPosition() {
		return ((T (*)(IWeaponShakeMode*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T set_CurPosition(Il2CppVector3 value) {
		return ((T (*)(IWeaponShakeMode*, Il2CppVector3))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = float> T get_timer() {
		return ((T (*)(IWeaponShakeMode*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T set_timer(float value) {
		return ((T (*)(IWeaponShakeMode*, float))(Il2CppBase() + 0x0))(this, value);
	}
	template <typename T = float> T GetPositionY() {
		return ((T (*)(IWeaponShakeMode*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T IsEnd() {
		return ((T (*)(IWeaponShakeMode*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = uintptr_t> T GetModeType() {
		return ((T (*)(IWeaponShakeMode*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = uintptr_t> T GetModeDataType() {
		return ((T (*)(IWeaponShakeMode*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_ignoreAiming() {
		return ((T (*)(IWeaponShakeMode*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T set_ignoreAiming(bool value) {
		return ((T (*)(IWeaponShakeMode*, bool))(Il2CppBase() + 0x0))(this, value);
	}

};

}
