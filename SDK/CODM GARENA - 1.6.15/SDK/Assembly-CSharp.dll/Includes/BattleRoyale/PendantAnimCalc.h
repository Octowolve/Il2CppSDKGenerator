#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattleRoyale {

class PendantAnimCalc
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattleRoyale", "PendantAnimCalc"));
	}

	template <typename T = float> T& InAcc() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = float> T& OutAcc() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = float> T& MinSpeed() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& MaxSpeed() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = float> T& OutAccDiff() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& TargetSpeedAttenuate() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = float> T& TurnSpeedAttenuate() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& DelayTime() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = float> T& LerpStep() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& TargetLerpSpeed() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = bool> T& IsLerpMode() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_InputCache() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = Il2CppVector2> T& CurrentSpeed() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = float> T& SpeedValue() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppVector2> T& TargetValue() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = Il2CppVector2> T& CurrentValue() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = Il2CppVector2> T& LastTargetValue() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = Il2CppVector2> T& m_LastTargetDir() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = Il2CppVector2> T& PawnRotateTargetValue() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = float> T& EllipticalA() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = float> T& EllipticalB() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = float> T& m_EllipticalC() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SimpleSpeed2() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SimpleSpeedDir() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Clear() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SimpleAnimValue2() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CalcWithOriginalInput() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Calc() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CalcLerpMode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckInElliptical() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPosOnElliptical() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddInputCache() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckAndAddCacheInputData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetInputData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}

	template <typename T = void> T SimpleSpeed2(float deltaTime) {
		return ((T (*)(PendantAnimCalc*, float))(Il2CppBase() + 0x3D5E5E0))(this, deltaTime);
	}
	template <typename T = Il2CppVector2> T SimpleSpeedDir() {
		return ((T (*)(PendantAnimCalc*))(Il2CppBase() + 0x3D5E990))(this);
	}
	template <typename T = void> T Clear() {
		return ((T (*)(PendantAnimCalc*))(Il2CppBase() + 0x3D5EAD0))(this);
	}
	template <typename T = void> T SimpleAnimValue2(Il2CppVector2 speedDir, float deltaTime) {
		return ((T (*)(PendantAnimCalc*, Il2CppVector2, float))(Il2CppBase() + 0x3D5EC48))(this, speedDir, deltaTime);
	}
	template <typename T = void> T CalcWithOriginalInput(Il2CppVector2 movementInput, float deltaTime) {
		return ((T (*)(PendantAnimCalc*, Il2CppVector2, float))(Il2CppBase() + 0x3D5BF94))(this, movementInput, deltaTime);
	}
	template <typename T = void> T Calc(Il2CppVector2 movementInput, float deltaTime) {
		return ((T (*)(PendantAnimCalc*, Il2CppVector2, float))(Il2CppBase() + 0x3D5F078))(this, movementInput, deltaTime);
	}
	template <typename T = void> T CalcLerpMode(Il2CppVector2 movementInput, float deltaTime) {
		return ((T (*)(PendantAnimCalc*, Il2CppVector2, float))(Il2CppBase() + 0x3D5F314))(this, movementInput, deltaTime);
	}
	template <typename T = bool> T CheckInElliptical(Il2CppVector2 pos) {
		return ((T (*)(PendantAnimCalc*, Il2CppVector2))(Il2CppBase() + 0x3D5F8E8))(this, pos);
	}
	template <typename T = Il2CppVector2> T GetPosOnElliptical(Il2CppVector2 pos) {
		return ((T (*)(PendantAnimCalc*, Il2CppVector2))(Il2CppBase() + 0x3D5EE90))(this, pos);
	}
	template <typename T = void> T AddInputCache(Il2CppVector2 movementInput) {
		return ((T (*)(PendantAnimCalc*, Il2CppVector2))(Il2CppBase() + 0x3D5FB1C))(this, movementInput);
	}
	template <typename T = bool> T CheckAndAddCacheInputData(Il2CppVector2 movementInput) {
		return ((T (*)(PendantAnimCalc*, Il2CppVector2))(Il2CppBase() + 0x3D5F58C))(this, movementInput);
	}
	template <typename T = uintptr_t> T GetInputData() {
		return ((T (*)(PendantAnimCalc*))(Il2CppBase() + 0x3D5F720))(this);
	}

};

}
