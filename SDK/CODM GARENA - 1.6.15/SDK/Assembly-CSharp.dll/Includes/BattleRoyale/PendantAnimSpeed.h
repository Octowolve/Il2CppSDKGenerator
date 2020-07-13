#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattleRoyale {

class PendantAnimSpeed
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattleRoyale", "PendantAnimSpeed"));
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
	template <typename T = Il2CppVector2> T& m_LastTargetValue() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& DelayTime() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppVector2> T& m_CurrentSpeed() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = float> T& m_SpeedValue() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = Il2CppVector2> T& m_TargetValue() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppVector2> T& m_CurrentValue() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SimpleSpeed2() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SimpleAnimValue2() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Calc() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T SimpleSpeed2(float deltaTime) {
		return ((T (*)(PendantAnimSpeed*, float))(Il2CppBase() + 0x3D60170))(this, deltaTime);
	}
	template <typename T = void> T SimpleAnimValue2(float deltaTime) {
		return ((T (*)(PendantAnimSpeed*, float))(Il2CppBase() + 0x3D60480))(this, deltaTime);
	}
	template <typename T = void> T Calc(Il2CppVector2 movementInput, float deltaTime) {
		return ((T (*)(PendantAnimSpeed*, Il2CppVector2, float))(Il2CppBase() + 0x3D606EC))(this, movementInput, deltaTime);
	}

};

}
