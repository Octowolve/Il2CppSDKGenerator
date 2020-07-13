#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattleRoyale {

class BRIsInHospitalRoomTrigger
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattleRoyale", "BRIsInHospitalRoomTrigger"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnTriggerEnter() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnTriggerExit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDisable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsViewPawn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetFlag() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = void> T OnTriggerEnter(uintptr_t other) {
		return ((T (*)(BRIsInHospitalRoomTrigger*, uintptr_t))(Il2CppBase() + 0x1948668))(this, other);
	}
	template <typename T = void> T OnTriggerExit(uintptr_t other) {
		return ((T (*)(BRIsInHospitalRoomTrigger*, uintptr_t))(Il2CppBase() + 0x194899C))(this, other);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(BRIsInHospitalRoomTrigger*))(Il2CppBase() + 0x1948A60))(this);
	}
	template <typename T = bool> T IsViewPawn(uintptr_t other) {
		return ((T (*)(BRIsInHospitalRoomTrigger*, uintptr_t))(Il2CppBase() + 0x194872C))(this, other);
	}
	template <typename T = void> T SetFlag(bool flag) {
		return ((T (*)(BRIsInHospitalRoomTrigger*, bool))(Il2CppBase() + 0x19488C8))(this, flag);
	}

};

}
