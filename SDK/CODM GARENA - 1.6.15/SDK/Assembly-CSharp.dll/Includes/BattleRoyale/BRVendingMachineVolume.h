#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattleRoyale {

class BRVendingMachineVolume
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattleRoyale", "BRVendingMachineVolume"));
	}

	template <typename T = uintptr_t> T& ViewTarget() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& Machine() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppVector3> T& ViewEdgeOffset() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = float> T& AutoRotationSpeed() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& ViewOffset3P_Y() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = bool> static T& IsAutoRota() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> T& m_RotaTime() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& m_RotaNeedTime() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = Il2CppVector3> T& m_StartForawrd() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppVector3> T& m_TargetForawrd() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = Il2CppRect> T& m_ViewRect() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& m_RotCor() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = bool> T& m_IsLocalPlayerIn() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnTriggerEnter() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnTriggerExit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDisable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckAndLookAtViewTarget() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DoCheckViewTarget() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartAutoRota() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DoStartAutoRota() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetLocalPawnForward() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckAndGetLocalPawn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetBtnState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}

	template <typename T = bool> T get_IsLocalPlayerIn() {
		return ((T (*)(BRVendingMachineVolume*))(Il2CppBase() + 0x2654804))(this);
	}
	template <typename T = void> T set_IsLocalPlayerIn(bool value) {
		return ((T (*)(BRVendingMachineVolume*, bool))(Il2CppBase() + 0x2657E08))(this, value);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(BRVendingMachineVolume*))(Il2CppBase() + 0x2658070))(this);
	}
	template <typename T = void> T OnTriggerEnter(uintptr_t other) {
		return ((T (*)(BRVendingMachineVolume*, uintptr_t))(Il2CppBase() + 0x26585BC))(this, other);
	}
	template <typename T = void> T OnTriggerExit(uintptr_t other) {
		return ((T (*)(BRVendingMachineVolume*, uintptr_t))(Il2CppBase() + 0x2658884))(this, other);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(BRVendingMachineVolume*))(Il2CppBase() + 0x26589D0))(this);
	}
	template <typename T = void> T CheckAndLookAtViewTarget() {
		return ((T (*)(BRVendingMachineVolume*))(Il2CppBase() + 0x2656E3C))(this);
	}
	template <typename T = bool> T DoCheckViewTarget() {
		return ((T (*)(BRVendingMachineVolume*))(Il2CppBase() + 0x2658ADC))(this);
	}
	template <typename T = void> T StartAutoRota() {
		return ((T (*)(BRVendingMachineVolume*))(Il2CppBase() + 0x2658DB4))(this);
	}
	template <typename T = uintptr_t> T DoStartAutoRota() {
		return ((T (*)(BRVendingMachineVolume*))(Il2CppBase() + 0x265911C))(this);
	}
	template <typename T = void> T SetLocalPawnForward(Il2CppVector3 forward) {
		return ((T (*)(BRVendingMachineVolume*, Il2CppVector3))(Il2CppBase() + 0x2659234))(this, forward);
	}
	template <typename T = uintptr_t> T CheckAndGetLocalPawn(uintptr_t other) {
		return ((T (*)(BRVendingMachineVolume*, uintptr_t))(Il2CppBase() + 0x2658708))(this, other);
	}
	template <typename T = void> T SetBtnState(bool isShow) {
		return ((T (*)(BRVendingMachineVolume*, bool))(Il2CppBase() + 0x2657E10))(this, isShow);
	}

};

}
