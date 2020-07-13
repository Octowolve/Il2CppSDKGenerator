#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattleRoyale {

class BRSkillProcessElectricTripWire
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattleRoyale", "BRSkillProcess_ElectricTripWire"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NeedStopAim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ExcuteCossHairProcess() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = bool> T NeedStopAim() {
		return ((T (*)(BRSkillProcessElectricTripWire*))(Il2CppBase() + 0x1B2E364))(this);
	}
	template <typename T = bool> T ExcuteCossHairProcess() {
		return ((T (*)(BRSkillProcessElectricTripWire*))(Il2CppBase() + 0x1B2E404))(this);
	}
	template <typename T = void> T Init(uintptr_t ultConf, uintptr_t view) {
		return ((T (*)(BRSkillProcessElectricTripWire*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1B2E4A4))(this, ultConf, view);
	}
	template <typename T = bool> T xLuaBaseProxy_NeedStopAim() {
		return ((T (*)(BRSkillProcessElectricTripWire*))(Il2CppBase() + 0x1B2E6BC))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_ExcuteCossHairProcess() {
		return ((T (*)(BRSkillProcessElectricTripWire*))(Il2CppBase() + 0x1B2E790))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(BRSkillProcessElectricTripWire*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1B2E794))(this, P0, P1);
	}

};

}
