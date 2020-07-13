#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVP.Team.HardPoint {

class HPObjectiveVolume
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVP.Team.HardPoint", "HPObjectiveVolume"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& TriggerGroups() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& AdditionalTriggers() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = int32_t> T& ObjectiveID() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> T& InitHPState() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = uintptr_t> T& NoneStateEffect() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = uintptr_t> T& DefendStateEffect() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = uintptr_t> T& AttackStateEffect() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = uintptr_t> T& ContestStateEffect() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = uintptr_t> T& eEffectType() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uintptr_t> T& m_ServerHPState() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = bool> T& m_isLocalPlayerEnter() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& m_isTriggerEnter() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = bool> T& m_isUpdate() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = bool> T& m_newEnterValue() {
		return *(T*)((uintptr_t)this + 0x89);
	}
	template <typename T = bool> T& isInit() {
		return *(T*)((uintptr_t)this + 0x8A);
	}
	template <typename T = uintptr_t> T& lastSoundState() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = uintptr_t> T& currSoundState() {
		return *(T*)((uintptr_t)this + 0x90);
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
	template <typename T = uintptr_t> static T& __Hotfix0_OnLocalPlayerEnterExit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSyncUsability() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetHPVolume() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnOwnerStateChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateVolumeEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayVolumeEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetHideStateEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayHPSound() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsNeedPlayHPSound() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DoPlayHPSound() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_DoPlayHPSound() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetTriggerVolumes() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsLocalPlayerEnter() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(HPObjectiveVolume*))(Il2CppBase() + 0x402F5D4))(this);
	}
	template <typename T = void> T OnTriggerEnter(uintptr_t other) {
		return ((T (*)(HPObjectiveVolume*, uintptr_t))(Il2CppBase() + 0x402F86C))(this, other);
	}
	template <typename T = void> T OnTriggerExit(uintptr_t other) {
		return ((T (*)(HPObjectiveVolume*, uintptr_t))(Il2CppBase() + 0x402F9D4))(this, other);
	}
	template <typename T = void> T OnLocalPlayerEnterExit(uintptr_t p, bool enter, int32_t index) {
		return ((T (*)(HPObjectiveVolume*, uintptr_t, bool, int32_t))(Il2CppBase() + 0x402FB40))(this, p, enter, index);
	}
	template <typename T = void> T OnSyncUsability(bool available) {
		return ((T (*)(HPObjectiveVolume*, bool))(Il2CppBase() + 0x402FC3C))(this, available);
	}
	template <typename T = void> T ResetHPVolume(bool available) {
		return ((T (*)(HPObjectiveVolume*, bool))(Il2CppBase() + 0x402B350))(this, available);
	}
	template <typename T = void> T OnOwnerStateChange(uintptr_t newState) {
		return ((T (*)(HPObjectiveVolume*, uintptr_t))(Il2CppBase() + 0x402B41C))(this, newState);
	}
	template <typename T = void> T UpdateVolumeEffect(uintptr_t inType) {
		return ((T (*)(HPObjectiveVolume*, uintptr_t))(Il2CppBase() + 0x402FF74))(this, inType);
	}
	template <typename T = void> T PlayVolumeEffect() {
		return ((T (*)(HPObjectiveVolume*))(Il2CppBase() + 0x402FD2C))(this);
	}
	template <typename T = void> T SetHideStateEffect() {
		return ((T (*)(HPObjectiveVolume*))(Il2CppBase() + 0x4030250))(this);
	}
	template <typename T = void> T PlayHPSound(uintptr_t newState) {
		return ((T (*)(HPObjectiveVolume*, uintptr_t))(Il2CppBase() + 0x40304A0))(this, newState);
	}
	template <typename T = bool> T IsNeedPlayHPSound(uintptr_t newState) {
		return ((T (*)(HPObjectiveVolume*, uintptr_t))(Il2CppBase() + 0x40305D8))(this, newState);
	}
	template <typename T = void> T DoPlayHPSound(uintptr_t state) {
		return ((T (*)(HPObjectiveVolume*, uintptr_t))(Il2CppBase() + 0x40307D8))(this, state);
	}
	template <typename T = void> T DoPlayHPSound_1(Il2CppString* eventName) {
		return ((T (*)(HPObjectiveVolume*, Il2CppString*))(Il2CppBase() + 0x4030988))(this, eventName);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetTriggerVolumes() {
		return ((T (*)(HPObjectiveVolume*))(Il2CppBase() + 0x4030A78))(this);
	}
	template <typename T = bool> T IsLocalPlayerEnter() {
		return ((T (*)(HPObjectiveVolume*))(Il2CppBase() + 0x402EB04))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Awake() {
		return ((T (*)(HPObjectiveVolume*))(Il2CppBase() + 0x4030B40))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnTriggerEnter(uintptr_t P0) {
		return ((T (*)(HPObjectiveVolume*, uintptr_t))(Il2CppBase() + 0x4030B48))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnTriggerExit(uintptr_t P0) {
		return ((T (*)(HPObjectiveVolume*, uintptr_t))(Il2CppBase() + 0x4030B50))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnSyncUsability(bool P0) {
		return ((T (*)(HPObjectiveVolume*, bool))(Il2CppBase() + 0x4030B58))(this, P0);
	}

};

}
