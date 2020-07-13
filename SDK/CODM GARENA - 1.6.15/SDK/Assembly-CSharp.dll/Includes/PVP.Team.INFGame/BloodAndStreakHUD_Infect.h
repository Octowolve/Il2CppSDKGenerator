#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVP.Team.INFGame {

class BloodAndStreakHUDInfect
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVP.Team.INFGame", "BloodAndStreakHUD_Infect"));
	}

	template <typename T = uintptr_t> T& LastHumanColor() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = uintptr_t> T& infectplayerInfo() {
		return *(T*)((uintptr_t)this + 0xCC);
	}

	template <typename T = uintptr_t> T get_m_INFPlayerInfo() {
		return ((T (*)(BloodAndStreakHUDInfect*))(Il2CppBase() + 0x4031AF8))(this);
	}
	template <typename T = void> T Tick(float dt) {
		return ((T (*)(BloodAndStreakHUDInfect*, float))(Il2CppBase() + 0x4031C04))(this, dt);
	}
	template <typename T = void> T CheckSingleBolldMode() {
		return ((T (*)(BloodAndStreakHUDInfect*))(Il2CppBase() + 0x4031C30))(this);
	}
	template <typename T = void> T ShowBloodContainer(bool isShow) {
		return ((T (*)(BloodAndStreakHUDInfect*, bool))(Il2CppBase() + 0x4032064))(this, isShow);
	}
	template <typename T = void> T ShowKillStreakContainer(bool isShow) {
		return ((T (*)(BloodAndStreakHUDInfect*, bool))(Il2CppBase() + 0x40323AC))(this, isShow);
	}
	template <typename T = void> T InitStreakStateInfo() {
		return ((T (*)(BloodAndStreakHUDInfect*))(Il2CppBase() + 0x40323B0))(this);
	}
	template <typename T = void> T UpdateScoreStreakDataInfo() {
		return ((T (*)(BloodAndStreakHUDInfect*))(Il2CppBase() + 0x40323B4))(this);
	}
	template <typename T = void> T UpdateStreakState() {
		return ((T (*)(BloodAndStreakHUDInfect*))(Il2CppBase() + 0x40323B8))(this);
	}
	template <typename T = void> T UpdateNuclearBombState() {
		return ((T (*)(BloodAndStreakHUDInfect*))(Il2CppBase() + 0x40323C8))(this);
	}

};

}
