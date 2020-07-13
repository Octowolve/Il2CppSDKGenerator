#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattleRoyale {

class PendantAnimComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattleRoyale", "PendantAnimComponent"));
	}

	template <typename T = uintptr_t> T& Socket() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = float> T& InAcc() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& OutAcc() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = float> T& MinSpeed() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& MaxSpeed() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = float> T& OutAccDiff() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& TargetSpeedAttenuate() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = float> T& TurnSpeedAttenuate() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& DelayTime() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = float> T& LerpStep() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = float> T& TargetLerpSpeed() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = bool> T& IsLerpMode() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uint32_t> T& PlayerID() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& Owner() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& m_Calc() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = float> T& EllipticalA() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = float> T& EllipticalB() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEnable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Clear() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshCalcProp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateSkydivingAnim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = void> T set_PawnRotateTargetValue(Il2CppVector2 value) {
		return ((T (*)(PendantAnimComponent*, Il2CppVector2))(Il2CppBase() + 0x3D5FD0C))(this, value);
	}
	template <typename T = Il2CppVector2> T get_PawnRotateTargetValue() {
		return ((T (*)(PendantAnimComponent*))(Il2CppBase() + 0x3D5FD34))(this);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(PendantAnimComponent*))(Il2CppBase() + 0x3D5FD64))(this);
	}
	template <typename T = void> T Clear() {
		return ((T (*)(PendantAnimComponent*))(Il2CppBase() + 0x3D5FF9C))(this);
	}
	template <typename T = void> T RefreshCalcProp() {
		return ((T (*)(PendantAnimComponent*))(Il2CppBase() + 0x3D5FE08))(this);
	}
	template <typename T = void> T UpdateSkydivingAnim(Il2CppVector2 movementInput, float deltaTime) {
		return ((T (*)(PendantAnimComponent*, Il2CppVector2, float))(Il2CppBase() + 0x3D5BE28))(this, movementInput, deltaTime);
	}

};

}
