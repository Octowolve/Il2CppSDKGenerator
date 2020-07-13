#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVP.Bomb {

class BombGamePlayerPawn
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVP.Bomb", "BombGamePlayerPawn"));
	}

	template <typename T = bool> T& m_IsTraitorInPlacingBombArea() {
		return *(T*)((uintptr_t)this + 0xBE5);
	}
	template <typename T = bool> T& m_IsGuarderInDefuseBombArea() {
		return *(T*)((uintptr_t)this + 0xBE6);
	}
	template <typename T = uintptr_t> T& m_BombGameInfo() {
		return *(T*)((uintptr_t)this + 0xBE8);
	}
	template <typename T = unsigned char> T& m_WeaponSlotBeforeUsingItem() {
		return *(T*)((uintptr_t)this + 0xBEC);
	}
	template <typename T = int32_t> T& m_WeaponItemIDBeforeUsingItem() {
		return *(T*)((uintptr_t)this + 0xBF0);
	}
	template <typename T = Il2CppString*> static T& m_C4Pack_AudioEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& m_C4UnPack_AudioEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitPawn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitEventProcessor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UseItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RecaculateC4OperationTimeWithBombMasterExpertProperty() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CancelUseItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsSpectatingC4Defuser() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetItemAndDelayPlacingBomb() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetItemAndDelayDefusingBomb() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShouldDelayToEndOfFrame() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DelayUseItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddAllInventory() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GiveCarrierC4Bomb() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Die() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_C4CarrierLocalPlayerSwitchToPrevWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_C4CarrierThreePersonPawnSwitchToPrevWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsPawnCurrentWeaponAttachmentC4Bomb() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSpectatingEnd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRoundEndStopIndividuation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}

	template <typename T = bool> T get_IsTraitorInPlacingBombArea() {
		return ((T (*)(BombGamePlayerPawn*))(Il2CppBase() + 0x4081168))(this);
	}
	template <typename T = void> T set_IsTraitorInPlacingBombArea(bool value) {
		return ((T (*)(BombGamePlayerPawn*, bool))(Il2CppBase() + 0x4081170))(this, value);
	}
	template <typename T = bool> T get_CanTraitorPlacingBomb() {
		return ((T (*)(BombGamePlayerPawn*))(Il2CppBase() + 0x407FA08))(this);
	}
	template <typename T = bool> T get_IsGuarderInDefuseBombArea() {
		return ((T (*)(BombGamePlayerPawn*))(Il2CppBase() + 0x4081178))(this);
	}
	template <typename T = void> T set_IsGuarderInDefuseBombArea(bool value) {
		return ((T (*)(BombGamePlayerPawn*, bool))(Il2CppBase() + 0x4081180))(this, value);
	}
	template <typename T = bool> T get_CanGuarderDefuseBombArea() {
		return ((T (*)(BombGamePlayerPawn*))(Il2CppBase() + 0x407B4F0))(this);
	}
	template <typename T = void> T InitPawn(uintptr_t info) {
		return ((T (*)(BombGamePlayerPawn*, uintptr_t))(Il2CppBase() + 0x4081188))(this, info);
	}
	template <typename T = void> T InitEventProcessor() {
		return ((T (*)(BombGamePlayerPawn*))(Il2CppBase() + 0x4081380))(this);
	}
	template <typename T = bool> T GetItem(uint64_t InItemID, bool PersonalItem) {
		return ((T (*)(BombGamePlayerPawn*, uint64_t, bool))(Il2CppBase() + 0x4081524))(this, InItemID, PersonalItem);
	}
	template <typename T = void> T UseItem(uint64_t inItemID, int32_t useItmeType, float extendTime) {
		return ((T (*)(BombGamePlayerPawn*, uint64_t, int32_t, float))(Il2CppBase() + 0x4081618))(this, inItemID, useItmeType, extendTime);
	}
	template <typename T = float> T RecaculateC4OperationTimeWithBombMasterExpertProperty(float inOperationTime) {
		return ((T (*)(BombGamePlayerPawn*, float))(Il2CppBase() + 0x40824E0))(this, inOperationTime);
	}
	template <typename T = void> T CancelUseItem(uint64_t itemID) {
		return ((T (*)(BombGamePlayerPawn*, uint64_t))(Il2CppBase() + 0x4082670))(this, itemID);
	}
	template <typename T = bool> T IsSpectatingC4Defuser() {
		return ((T (*)(BombGamePlayerPawn*))(Il2CppBase() + 0x40823F0))(this);
	}
	template <typename T = void> T GetItemAndDelayPlacingBomb() {
		return ((T (*)(BombGamePlayerPawn*))(Il2CppBase() + 0x4082860))(this);
	}
	template <typename T = void> T GetItemAndDelayDefusingBomb() {
		return ((T (*)(BombGamePlayerPawn*))(Il2CppBase() + 0x4082960))(this);
	}
	template <typename T = bool> T ShouldDelayToEndOfFrame() {
		return ((T (*)(BombGamePlayerPawn*))(Il2CppBase() + 0x4082A60))(this);
	}
	template <typename T = uintptr_t> T DelayUseItem() {
		return ((T (*)(BombGamePlayerPawn*))(Il2CppBase() + 0x40822E0))(this);
	}
	template <typename T = void> T AddAllInventory() {
		return ((T (*)(BombGamePlayerPawn*))(Il2CppBase() + 0x4082B38))(this);
	}
	template <typename T = void> T GiveCarrierC4Bomb() {
		return ((T (*)(BombGamePlayerPawn*))(Il2CppBase() + 0x4082D08))(this);
	}
	template <typename T = void> T Die(bool isHeadShot, uintptr_t damageType) {
		return ((T (*)(BombGamePlayerPawn*, bool, uintptr_t))(Il2CppBase() + 0x4083180))(this, isHeadShot, damageType);
	}
	template <typename T = void> T C4CarrierLocalPlayerSwitchToPrevWeapon() {
		return ((T (*)(BombGamePlayerPawn*))(Il2CppBase() + 0x4077244))(this);
	}
	template <typename T = void> T C4CarrierThreePersonPawnSwitchToPrevWeapon() {
		return ((T (*)(BombGamePlayerPawn*))(Il2CppBase() + 0x407D418))(this);
	}
	template <typename T = bool> T IsPawnCurrentWeaponAttachmentC4Bomb() {
		return ((T (*)(BombGamePlayerPawn*))(Il2CppBase() + 0x40835AC))(this);
	}
	template <typename T = void> T OnSpectatingEnd() {
		return ((T (*)(BombGamePlayerPawn*))(Il2CppBase() + 0x40837F0))(this);
	}
	template <typename T = void> T OnRoundEndStopIndividuation() {
		return ((T (*)(BombGamePlayerPawn*))(Il2CppBase() + 0x4076D20))(this);
	}
	template <typename T = void> T xLuaBaseProxy_InitPawn(uintptr_t P0) {
		return ((T (*)(BombGamePlayerPawn*, uintptr_t))(Il2CppBase() + 0x40839E4))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_InitEventProcessor() {
		return ((T (*)(BombGamePlayerPawn*))(Il2CppBase() + 0x40839EC))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_GetItem(uint64_t P0, bool P1) {
		return ((T (*)(BombGamePlayerPawn*, uint64_t, bool))(Il2CppBase() + 0x40839F4))(this, P0, P1);
	}
	template <typename T = void> T xLuaBaseProxy_UseItem(uint64_t P0, int32_t P1, float P2) {
		return ((T (*)(BombGamePlayerPawn*, uint64_t, int32_t, float))(Il2CppBase() + 0x4083A1C))(this, P0, P1, P2);
	}
	template <typename T = void> T xLuaBaseProxy_CancelUseItem(uint64_t P0) {
		return ((T (*)(BombGamePlayerPawn*, uint64_t))(Il2CppBase() + 0x4083A4C))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_AddAllInventory() {
		return ((T (*)(BombGamePlayerPawn*))(Il2CppBase() + 0x4083A6C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Die(bool P0, uintptr_t P1) {
		return ((T (*)(BombGamePlayerPawn*, bool, uintptr_t))(Il2CppBase() + 0x4083A74))(this, P0, P1);
	}
	template <typename T = void> T xLuaBaseProxy_OnSpectatingEnd() {
		return ((T (*)(BombGamePlayerPawn*))(Il2CppBase() + 0x4083A7C))(this);
	}

};

}
