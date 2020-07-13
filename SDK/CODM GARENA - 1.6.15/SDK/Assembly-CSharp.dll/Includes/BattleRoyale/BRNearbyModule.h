#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattleRoyale {

class BRNearbyModule
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattleRoyale", "BRNearbyModule"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& m_CachedLastBRNearbyItemDataList() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_CachedLastBRNearbyBoxItemDataList() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = bool> T& m_IsStopPickUp() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& m_CacheItemsInBoxCount() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& mLockState() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& m_WaitTickLog() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = bool> T& m_IsNearbyListDataNeedRefresh() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = bool> T& m_IsNearbyBoxListDataNeedRefresh() {
		return *(T*)((uintptr_t)this + 0x25);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_ReadyToAutoPickupList() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_AutoPickupListTemp() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = int32_t> T& m_CandidateAutoPickupPickupIndex() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = float> T& m_LastGetCandidatePickupListTime() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = float> static T& kNearbyCandidatePickupListPikcupInterval() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> T& m_LastAutoPickupListNextItemTime() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = float> static T& kNearbyAutoPickupListNextItemInterval() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& m_LastAutoPickUpActorId() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = float> T& m_LastAutoPickUpTime() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = float> static T& ManualPickUpLockTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = void*> T& m_DroppedHistoryQueue() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uint32_t> static T& kMaxHistoryItemCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& kMaxHistoryItemLiveTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppDictionary<int32_t, uintptr_t>*> T& m_ReadyToDiscardDict() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = Il2CppDictionary<int32_t, uintptr_t>*> T& m_ManualPickupReplaceDict() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = float> static T& kCalcluateDropInfoInterval() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> T& m_IgnoreIntervalNextTime() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDS() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDS() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetItemCountByType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckRefreshWhenNotmatchView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdatePickUpList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CanPickUp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CanAutoPickUp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CanManualPickUp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CanPickUpByBase() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CanPickUpByPawn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CanPickUpByUseItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0__StopPickUpByLocalPC() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0__StopPickUpByLocalPawn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0__StopPickUpByLocalEquipmentMgr() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0__StopPickUpByCurrentWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0__StopPickUpBySpectating() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0__StopPickUpByReviveCardState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0__StopPickUpByCurrentVehicle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0__StopPickUpByDeath() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0__StopPickUpByLockPickUp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0__StopPickUpByAiming() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0__StopPickUpByIndividuation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0__StopPickUpByFire() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0__StopPickUpByChangingWeaponClip() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0__StopPickUpBySystemSetting() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0__StopPickUpByBRTraining() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0__StopPickUpByUIBank() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& __Hotfix0__StopPickUpByMatchObserver() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}
	template <typename T = uintptr_t> static T& __Hotfix0__StopPickUpByPhysicsState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = uintptr_t> static T& __Hotfix0__StopPickUpByDying() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0__StopPickUpBySavingTeammate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	template <typename T = uintptr_t> static T& __Hotfix0__StopPickUpByUsingInterferenceDrone() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x84);
	}
	template <typename T = uintptr_t> static T& __Hotfix0__StopPickUpByUsingToyBomb() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x88);
	}
	template <typename T = uintptr_t> static T& __Hotfix0__StopPickUpByUsingInductionGun() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0__StopPickUpByUsingElectricTripWire() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x90);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckPickupListSame() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x94);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AutoPickupListImpl() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x98);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AutoPickUp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x9C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ManualPickUp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PickUpAttachmentByClient() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LockState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetLockState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xAC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsLockState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NotifyDataStoreUpdated() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NotifyReadyToDrop() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NotifyDropResult() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xBC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetManualPickupReplaceItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NotifyReadyToDiscard() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NotifyDiscardResult() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NotifyReadyToManualPickupReplace() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xCC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NotifyManualPickupReplaceResult() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddToDropHistoryQueue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0__CalcluateDropInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0__CleanTimeoutHistoryItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xDC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0__ShouldCheckParam1ForData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE0);
	}

	template <typename T = void> T RegisterDS() {
		return ((T (*)(BRNearbyModule*))(Il2CppBase() + 0x1AB3510))(this);
	}
	template <typename T = void> T UnRegisterDS() {
		return ((T (*)(BRNearbyModule*))(Il2CppBase() + 0x1AB370C))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_NearbyItemDataList() {
		return ((T (*)(BRNearbyModule*))(Il2CppBase() + 0x1AB3858))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_NearbyBoxItemDataList() {
		return ((T (*)(BRNearbyModule*))(Il2CppBase() + 0x1AB3860))(this);
	}
	template <typename T = int32_t> T GetItemCountByType(uintptr_t type) {
		return ((T (*)(BRNearbyModule*, uintptr_t))(Il2CppBase() + 0x1AB3868))(this, type);
	}
	template <typename T = bool> T CheckRefreshWhenNotmatchView(uintptr_t game) {
		return ((T (*)(BRNearbyModule*, uintptr_t))(Il2CppBase() + 0x1AB39AC))(this, game);
	}
	template <typename T = void> T UpdatePickUpList() {
		return ((T (*)(BRNearbyModule*))(Il2CppBase() + 0x1AB3F6C))(this);
	}
	template <typename T = bool> T CanPickUp() {
		return ((T (*)(BRNearbyModule*))(Il2CppBase() + 0x1AB4ACC))(this);
	}
	template <typename T = bool> T CanAutoPickUp() {
		return ((T (*)(BRNearbyModule*))(Il2CppBase() + 0x1AB5508))(this);
	}
	template <typename T = bool> T CanManualPickUp() {
		return ((T (*)(BRNearbyModule*))(Il2CppBase() + 0x1AB7DD8))(this);
	}
	template <typename T = bool> T CanPickUpByBase() {
		return ((T (*)(BRNearbyModule*))(Il2CppBase() + 0x1AB6038))(this);
	}
	template <typename T = bool> T CanPickUpByPawn() {
		return ((T (*)(BRNearbyModule*))(Il2CppBase() + 0x1AB6F04))(this);
	}
	template <typename T = bool> T CanPickUpByUseItem() {
		return ((T (*)(BRNearbyModule*))(Il2CppBase() + 0x1AB738C))(this);
	}
	template <typename T = bool> T _StopPickUpByLocalPC() {
		return ((T (*)(BRNearbyModule*))(Il2CppBase() + 0x1AB7FD4))(this);
	}
	template <typename T = bool> T _StopPickUpByLocalPawn() {
		return ((T (*)(BRNearbyModule*))(Il2CppBase() + 0x1AB8134))(this);
	}
	template <typename T = bool> T _StopPickUpByLocalEquipmentMgr() {
		return ((T (*)(BRNearbyModule*))(Il2CppBase() + 0x1AB8294))(this);
	}
	template <typename T = bool> T _StopPickUpByCurrentWeapon() {
		return ((T (*)(BRNearbyModule*))(Il2CppBase() + 0x1AB8380))(this);
	}
	template <typename T = bool> T _StopPickUpBySpectating() {
		return ((T (*)(BRNearbyModule*))(Il2CppBase() + 0x1AB61DC))(this);
	}
	template <typename T = bool> T _StopPickUpByReviveCardState() {
		return ((T (*)(BRNearbyModule*))(Il2CppBase() + 0x1AB64AC))(this);
	}
	template <typename T = bool> T _StopPickUpByCurrentVehicle() {
		return ((T (*)(BRNearbyModule*))(Il2CppBase() + 0x1AB65C8))(this);
	}
	template <typename T = bool> T _StopPickUpByDeath() {
		return ((T (*)(BRNearbyModule*))(Il2CppBase() + 0x1AB6744))(this);
	}
	template <typename T = bool> T _StopPickUpByLockPickUp() {
		return ((T (*)(BRNearbyModule*))(Il2CppBase() + 0x1AB687C))(this);
	}
	template <typename T = bool> T _StopPickUpByAiming() {
		return ((T (*)(BRNearbyModule*))(Il2CppBase() + 0x1AB69A0))(this);
	}
	template <typename T = bool> T _StopPickUpByIndividuation() {
		return ((T (*)(BRNearbyModule*))(Il2CppBase() + 0x1AB6ACC))(this);
	}
	template <typename T = bool> T _StopPickUpByFire() {
		return ((T (*)(BRNearbyModule*))(Il2CppBase() + 0x1AB7150))(this);
	}
	template <typename T = bool> T _StopPickUpByChangingWeaponClip() {
		return ((T (*)(BRNearbyModule*))(Il2CppBase() + 0x1AB7244))(this);
	}
	template <typename T = bool> T _StopPickUpBySystemSetting() {
		return ((T (*)(BRNearbyModule*))(Il2CppBase() + 0x1AB6C68))(this);
	}
	template <typename T = bool> T _StopPickUpByBRTraining() {
		return ((T (*)(BRNearbyModule*))(Il2CppBase() + 0x1AB75C4))(this);
	}
	template <typename T = bool> T _StopPickUpByUIBank() {
		return ((T (*)(BRNearbyModule*))(Il2CppBase() + 0x1AB6D88))(this);
	}
	template <typename T = bool> T _StopPickUpByMatchObserver() {
		return ((T (*)(BRNearbyModule*))(Il2CppBase() + 0x1AB7078))(this);
	}
	template <typename T = bool> T _StopPickUpByPhysicsState() {
		return ((T (*)(BRNearbyModule*))(Il2CppBase() + 0x1AB8504))(this);
	}
	template <typename T = bool> T _StopPickUpByDying() {
		return ((T (*)(BRNearbyModule*))(Il2CppBase() + 0x1AB863C))(this);
	}
	template <typename T = bool> T _StopPickUpBySavingTeammate() {
		return ((T (*)(BRNearbyModule*))(Il2CppBase() + 0x1AB8738))(this);
	}
	template <typename T = bool> T _StopPickUpByUsingInterferenceDrone() {
		return ((T (*)(BRNearbyModule*))(Il2CppBase() + 0x1AB7748))(this);
	}
	template <typename T = bool> T _StopPickUpByUsingToyBomb() {
		return ((T (*)(BRNearbyModule*))(Il2CppBase() + 0x1AB78EC))(this);
	}
	template <typename T = bool> T _StopPickUpByUsingInductionGun() {
		return ((T (*)(BRNearbyModule*))(Il2CppBase() + 0x1AB7A90))(this);
	}
	template <typename T = bool> T _StopPickUpByUsingElectricTripWire() {
		return ((T (*)(BRNearbyModule*))(Il2CppBase() + 0x1AB7C34))(this);
	}
	template <typename T = bool> T CheckPickupListSame(Il2CppList<uintptr_t>* list1, Il2CppList<uintptr_t>* list2) {
		return ((T (*)(BRNearbyModule*, Il2CppList<uintptr_t>*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x1AB88F0))(this, list1, list2);
	}
	template <typename T = void> T AutoPickupListImpl(Il2CppList<uintptr_t>* list) {
		return ((T (*)(BRNearbyModule*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x1AB58D8))(this, list);
	}
	template <typename T = void> T AutoPickUp(uintptr_t data) {
		return ((T (*)(BRNearbyModule*, uintptr_t))(Il2CppBase() + 0x1AB8B00))(this, data);
	}
	template <typename T = void> T ManualPickUp(uintptr_t data) {
		return ((T (*)(BRNearbyModule*, uintptr_t))(Il2CppBase() + 0x1AB8E60))(this, data);
	}
	template <typename T = void> T PickUpAttachmentByClient(int32_t itemId, int32_t posId) {
		return ((T (*)(BRNearbyModule*, int32_t, int32_t))(Il2CppBase() + 0x1AB8CE0))(this, itemId, posId);
	}
	template <typename T = void> T LockState(uintptr_t state) {
		return ((T (*)(BRNearbyModule*, uintptr_t))(Il2CppBase() + 0x1AB62B4))(this, state);
	}
	template <typename T = void> T ResetLockState(uintptr_t state) {
		return ((T (*)(BRNearbyModule*, uintptr_t))(Il2CppBase() + 0x1AB63B0))(this, state);
	}
	template <typename T = bool> T IsLockState(uintptr_t state) {
		return ((T (*)(BRNearbyModule*, uintptr_t))(Il2CppBase() + 0x1AB9518))(this, state);
	}
	template <typename T = void> T NotifyDataStoreUpdated(uintptr_t SourceDataStore, Il2CppString* PropertyTag, int32_t ArrayIndex) {
		return ((T (*)(BRNearbyModule*, uintptr_t, Il2CppString*, int32_t))(Il2CppBase() + 0x1AB9614))(this, SourceDataStore, PropertyTag, ArrayIndex);
	}
	template <typename T = void> T NotifyReadyToDrop(Il2CppDictionary<int32_t, uintptr_t>* targetDict, int32_t actorID, uintptr_t data) {
		return ((T (*)(BRNearbyModule*, Il2CppDictionary<int32_t, uintptr_t>*, int32_t, uintptr_t))(Il2CppBase() + 0x1AB9908))(this, targetDict, actorID, data);
	}
	template <typename T = void> T NotifyDropResult(Il2CppDictionary<int32_t, uintptr_t>* targetDict, int32_t actorID, bool done) {
		return ((T (*)(BRNearbyModule*, Il2CppDictionary<int32_t, uintptr_t>*, int32_t, bool))(Il2CppBase() + 0x1AB9A68))(this, targetDict, actorID, done);
	}
	template <typename T = uintptr_t> T GetManualPickupReplaceItem(int32_t targetPosID, uintptr_t pickItem) {
		return ((T (*)(BRNearbyModule*, int32_t, uintptr_t))(Il2CppBase() + 0x1AB9108))(this, targetPosID, pickItem);
	}
	template <typename T = void> T NotifyReadyToDiscard(uintptr_t data) {
		return ((T (*)(BRNearbyModule*, uintptr_t))(Il2CppBase() + 0x1AB9F88))(this, data);
	}
	template <typename T = void> T NotifyDiscardResult(int32_t actorID, bool done) {
		return ((T (*)(BRNearbyModule*, int32_t, bool))(Il2CppBase() + 0x1ABA090))(this, actorID, done);
	}
	template <typename T = void> T NotifyReadyToManualPickupReplace(int32_t pickActorID, uintptr_t replaceData) {
		return ((T (*)(BRNearbyModule*, int32_t, uintptr_t))(Il2CppBase() + 0x1AB9418))(this, pickActorID, replaceData);
	}
	template <typename T = void> T NotifyManualPickupReplaceResult(int32_t pickActorID, bool done) {
		return ((T (*)(BRNearbyModule*, int32_t, bool))(Il2CppBase() + 0x1ABA190))(this, pickActorID, done);
	}
	template <typename T = void> T AddToDropHistoryQueue(uintptr_t data) {
		return ((T (*)(BRNearbyModule*, uintptr_t))(Il2CppBase() + 0x1AB9C00))(this, data);
	}
	template <typename T = bool> T _CalcluateDropInfo(uintptr_t data) {
		return ((T (*)(BRNearbyModule*, uintptr_t))(Il2CppBase() + 0x1AB4D14))(this, data);
	}
	template <typename T = void> T _CleanTimeoutHistoryItem() {
		return ((T (*)(BRNearbyModule*))(Il2CppBase() + 0x1ABA460))(this);
	}
	template <typename T = bool> T _ShouldCheckParam1ForData(uintptr_t data) {
		return ((T (*)(BRNearbyModule*, uintptr_t))(Il2CppBase() + 0x1ABA290))(this, data);
	}

};

}
