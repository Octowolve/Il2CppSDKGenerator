#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVP {

class PVPGameEventChannel
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVP", "PVPGameEventChannel"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyKCInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSyncFlyStatus() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRoundStart() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRoundEnd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSyncUAV() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsSameCamp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSyncSentryGunAdd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSyncSentryGunFire() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSyncControllableInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSyncVTOLInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSyncCarePackagePlane() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSyncCarePackage() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSyncCreateCarePackage() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSyncNuclearBomb() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSyncMissileState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNtfFeedBack() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnResDeathPlay() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSyncDeathFrame() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyBRChatMsgRespond() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyBRChatShortcutRespond() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSyncAreaEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSyncNotify() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsLocalPlayerUAV() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSyncControllableStartFire() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSyncWeaponCooling() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNtfAddMPMark() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNtfDelMPMark() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNtfResponseSpeakMPMark() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSyncTeamMPMark() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnMatchPreparation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7C);
	}

	template <typename T = void> T Init() {
		return ((T (*)(PVPGameEventChannel*))(Il2CppBase() + 0x2AE23DC))(this);
	}
	template <typename T = void> T OnNotifyKCInfo(uintptr_t Msg) {
		return ((T (*)(PVPGameEventChannel*, uintptr_t))(Il2CppBase() + 0x2AE2B68))(this, Msg);
	}
	template <typename T = void> T OnSyncFlyStatus(uintptr_t Msg) {
		return ((T (*)(PVPGameEventChannel*, uintptr_t))(Il2CppBase() + 0x2AE3208))(this, Msg);
	}
	template <typename T = void> T OnRoundStart(uintptr_t Msg) {
		return ((T (*)(PVPGameEventChannel*, uintptr_t))(Il2CppBase() + 0x2AE3478))(this, Msg);
	}
	template <typename T = void> T OnRoundEnd(uintptr_t Msg) {
		return ((T (*)(PVPGameEventChannel*, uintptr_t))(Il2CppBase() + 0x2AE35BC))(this, Msg);
	}
	template <typename T = void> T OnSyncUAV(uintptr_t Msg) {
		return ((T (*)(PVPGameEventChannel*, uintptr_t))(Il2CppBase() + 0x2AE3D30))(this, Msg);
	}
	template <typename T = bool> T IsSameCamp(bool isLocalPlayer, uintptr_t eCamp) {
		return ((T (*)(PVPGameEventChannel*, bool, uintptr_t))(Il2CppBase() + 0x2AE4594))(this, isLocalPlayer, eCamp);
	}
	template <typename T = void> T OnSyncSentryGunAdd(uintptr_t Msg) {
		return ((T (*)(PVPGameEventChannel*, uintptr_t))(Il2CppBase() + 0x2AE47C4))(this, Msg);
	}
	template <typename T = void> T OnSyncSentryGunFire(uintptr_t Msg) {
		return ((T (*)(PVPGameEventChannel*, uintptr_t))(Il2CppBase() + 0x2AE4A88))(this, Msg);
	}
	template <typename T = void> T OnSyncControllableInfo(uintptr_t Msg) {
		return ((T (*)(PVPGameEventChannel*, uintptr_t))(Il2CppBase() + 0x2AE4C64))(this, Msg);
	}
	template <typename T = void> T OnSyncVTOLInfo(uintptr_t Msg) {
		return ((T (*)(PVPGameEventChannel*, uintptr_t))(Il2CppBase() + 0x2AE4E70))(this, Msg);
	}
	template <typename T = void> T OnSyncCarePackagePlane(uintptr_t Msg) {
		return ((T (*)(PVPGameEventChannel*, uintptr_t))(Il2CppBase() + 0x2AE5804))(this, Msg);
	}
	template <typename T = void> T OnSyncCarePackage(uintptr_t Msg) {
		return ((T (*)(PVPGameEventChannel*, uintptr_t))(Il2CppBase() + 0x2AE5A34))(this, Msg);
	}
	template <typename T = void> T OnSyncCreateCarePackage(uintptr_t Msg) {
		return ((T (*)(PVPGameEventChannel*, uintptr_t))(Il2CppBase() + 0x2AE5D18))(this, Msg);
	}
	template <typename T = void> T OnSyncNuclearBomb(uintptr_t Msg) {
		return ((T (*)(PVPGameEventChannel*, uintptr_t))(Il2CppBase() + 0x2AE5FFC))(this, Msg);
	}
	template <typename T = void> T OnSyncMissileState(uintptr_t Msg) {
		return ((T (*)(PVPGameEventChannel*, uintptr_t))(Il2CppBase() + 0x2AE6354))(this, Msg);
	}
	template <typename T = void> T OnNtfFeedBack(uintptr_t Msg) {
		return ((T (*)(PVPGameEventChannel*, uintptr_t))(Il2CppBase() + 0x2AE73A4))(this, Msg);
	}
	template <typename T = void> T OnResDeathPlay(uintptr_t Msg) {
		return ((T (*)(PVPGameEventChannel*, uintptr_t))(Il2CppBase() + 0x2AE7FC8))(this, Msg);
	}
	template <typename T = void> T OnSyncDeathFrame(uintptr_t Msg) {
		return ((T (*)(PVPGameEventChannel*, uintptr_t))(Il2CppBase() + 0x2AE8178))(this, Msg);
	}
	template <typename T = void> T OnNotifyBRChatMsgRespond(uintptr_t msg) {
		return ((T (*)(PVPGameEventChannel*, uintptr_t))(Il2CppBase() + 0x2AE8328))(this, msg);
	}
	template <typename T = void> T OnNotifyBRChatShortcutRespond(uintptr_t msg) {
		return ((T (*)(PVPGameEventChannel*, uintptr_t))(Il2CppBase() + 0x2AE8440))(this, msg);
	}
	template <typename T = void> T OnSyncAreaEvent(uintptr_t Msg) {
		return ((T (*)(PVPGameEventChannel*, uintptr_t))(Il2CppBase() + 0x2AE8558))(this, Msg);
	}
	template <typename T = void> T OnSyncNotify(uintptr_t Msg) {
		return ((T (*)(PVPGameEventChannel*, uintptr_t))(Il2CppBase() + 0x2AE88BC))(this, Msg);
	}
	template <typename T = bool> T IsLocalPlayerUAV(uint32_t uavActorId) {
		return ((T (*)(PVPGameEventChannel*, uint32_t))(Il2CppBase() + 0x2AE90D4))(this, uavActorId);
	}
	template <typename T = void> T OnSyncControllableStartFire(uintptr_t Msg) {
		return ((T (*)(PVPGameEventChannel*, uintptr_t))(Il2CppBase() + 0x2AE9334))(this, Msg);
	}
	template <typename T = void> T OnSyncWeaponCooling(uintptr_t Msg) {
		return ((T (*)(PVPGameEventChannel*, uintptr_t))(Il2CppBase() + 0x2AE99FC))(this, Msg);
	}
	template <typename T = void> T OnNtfAddMPMark(uintptr_t Msg) {
		return ((T (*)(PVPGameEventChannel*, uintptr_t))(Il2CppBase() + 0x2AE9D98))(this, Msg);
	}
	template <typename T = void> T OnNtfDelMPMark(uintptr_t Msg) {
		return ((T (*)(PVPGameEventChannel*, uintptr_t))(Il2CppBase() + 0x2AE9FBC))(this, Msg);
	}
	template <typename T = void> T OnNtfResponseSpeakMPMark(uintptr_t Msg) {
		return ((T (*)(PVPGameEventChannel*, uintptr_t))(Il2CppBase() + 0x2AEA140))(this, Msg);
	}
	template <typename T = void> T OnSyncTeamMPMark(uintptr_t Msg) {
		return ((T (*)(PVPGameEventChannel*, uintptr_t))(Il2CppBase() + 0x2AEA2C4))(this, Msg);
	}
	template <typename T = void> T OnMatchPreparation(uintptr_t Msg) {
		return ((T (*)(PVPGameEventChannel*, uintptr_t))(Il2CppBase() + 0x2AEA44C))(this, Msg);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(PVPGameEventChannel*))(Il2CppBase() + 0x2AEA6B0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnRoundStart(uintptr_t P0) {
		return ((T (*)(PVPGameEventChannel*, uintptr_t))(Il2CppBase() + 0x2AEA6B8))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnRoundEnd(uintptr_t P0) {
		return ((T (*)(PVPGameEventChannel*, uintptr_t))(Il2CppBase() + 0x2AEA6C0))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnSyncAreaEvent(uintptr_t P0) {
		return ((T (*)(PVPGameEventChannel*, uintptr_t))(Il2CppBase() + 0x2AEA6C8))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnSyncNotify(uintptr_t P0) {
		return ((T (*)(PVPGameEventChannel*, uintptr_t))(Il2CppBase() + 0x2AEA6D0))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_OnMatchPreparation(uintptr_t P0) {
		return ((T (*)(PVPGameEventChannel*, uintptr_t))(Il2CppBase() + 0x2AEA6D8))(this, P0);
	}

};

}
