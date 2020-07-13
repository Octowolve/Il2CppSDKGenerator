#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattleRoyale {

class PendantComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattleRoyale", "PendantComponent"));
	}

	template <typename T = float> T& InAcc() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = float> T& OutAcc() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& MinSpeed() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = float> T& MaxSpeed() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& OutAccDiff() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = float> T& TargetSpeedAttenuate() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& TurnSpeedAttenuate() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = float> T& DelayTime() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& LerpStep() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = float> T& TargetLerpSpeed() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = bool> T& IsLerpMode() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& ball() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = float> T& CameraRotateTargetValue() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uint32_t> T& PlayerID() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& m_Owner() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EndSkydiving() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> T set_Owner(uintptr_t value) {
		return ((T (*)(PendantComponent*, uintptr_t))(Il2CppBase() + 0x3D60800))(this, value);
	}
	template <typename T = uintptr_t> T get_Owner() {
		return ((T (*)(PendantComponent*))(Il2CppBase() + 0x3D60808))(this);
	}
	template <typename T = void> T EndSkydiving() {
		return ((T (*)(PendantComponent*))(Il2CppBase() + 0x3D60810))(this);
	}

};

}
