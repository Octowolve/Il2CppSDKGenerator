#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattleRoyale {

class BRLotteryMachineVolume
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattleRoyale", "BRLotteryMachineVolume"));
	}

	template <typename T = uintptr_t> T& Machine() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = bool> T& m_IsLocalPlayerIn() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnTriggerEnter() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnTriggerExit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDisable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckAndGetLocalPawn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetBtnState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = bool> T get_IsLocalPlayerIn() {
		return ((T (*)(BRLotteryMachineVolume*))(Il2CppBase() + 0x1951AEC))(this);
	}
	template <typename T = void> T set_IsLocalPlayerIn(bool value) {
		return ((T (*)(BRLotteryMachineVolume*, bool))(Il2CppBase() + 0x1951AF4))(this, value);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(BRLotteryMachineVolume*))(Il2CppBase() + 0x1951D68))(this);
	}
	template <typename T = void> T OnTriggerEnter(uintptr_t other) {
		return ((T (*)(BRLotteryMachineVolume*, uintptr_t))(Il2CppBase() + 0x1951E6C))(this, other);
	}
	template <typename T = void> T OnTriggerExit(uintptr_t other) {
		return ((T (*)(BRLotteryMachineVolume*, uintptr_t))(Il2CppBase() + 0x19520D4))(this, other);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(BRLotteryMachineVolume*))(Il2CppBase() + 0x19521F0))(this);
	}
	template <typename T = uintptr_t> T CheckAndGetLocalPawn(uintptr_t other) {
		return ((T (*)(BRLotteryMachineVolume*, uintptr_t))(Il2CppBase() + 0x1951F88))(this, other);
	}
	template <typename T = void> T SetBtnState(bool isShow) {
		return ((T (*)(BRLotteryMachineVolume*, bool))(Il2CppBase() + 0x1951AFC))(this, isShow);
	}

};

}
