#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattleRoyale {

class BRDroppedPickUpMgr
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattleRoyale", "BRDroppedPickUpMgr"));
	}

	template <typename T = Il2CppDictionary<int32_t, uintptr_t>*> T& PickupNormalData() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppDictionary<int32_t, uintptr_t>*> T& PickupBoxData() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppDictionary<int32_t, bool>*> T& BoxShowDic() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppList<int32_t>*> T& BoxIDList() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppDictionary<int32_t, uintptr_t>*> T& DropPlaceHolderDcit() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& m_IsUseFrameLoad() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = bool> T& m_IsUsePriorityVisible() {
		return *(T*)((uintptr_t)this + 0x1D);
	}
	template <typename T = Il2CppDictionary<int32_t, uintptr_t>*> T& m_PickupNormalEntityDict() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppDictionary<int32_t, uintptr_t>*> T& m_PickupBoxEntityDict() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = bool> static T& EnablePlaceHolder() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppVector3> T& m_LpcPos() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppVector3> T& m_TempPos() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = float> static T& MaxSkipRefreshDuration() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = float> static T& NoSpawnTotalDuration() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = float> T& m_currSkipRefreshDuration() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = float> T& m_noSpawnDuration() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = float> T& m_lastRereshTime() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = float> T& Level0BoxXZDist() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uint32_t> T& Level0BoxCount() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = float> T& Level1BoxXZDist() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = float> T& Level1NormalXZDist() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_HighestBoxData() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_MiddleBoxData() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_MiddleNormalData() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = Il2CppList<int32_t>*> T& mRemoveList() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = bool> T& IsRemoveByRelevant() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = bool> T& IsFilterByRelevant() {
		return *(T*)((uintptr_t)this + 0x6D);
	}
	template <typename T = void*> T& m_DespawnQueue() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = float> static T& kCorrelationDistanceSquareXZ() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = float> static T& kCorrelationBoxDistanceSquareXZ() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = float> static T& kCorrelationDistanceY() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = float> static T& kCorrelationBoxDistanceY() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = float> static T& RelevantBoxDistanceSquareXZ() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = float> static T& RelevantDistanceSquareXZ() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = float> static T& RelevantBoxDistanceY() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = float> static T& RelevantDistanceY() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = Il2CppDictionary<int32_t, uintptr_t>*> T& m_TempAllDict() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPickupData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HasPickupData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddPickupData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RemovePickupData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClearPickupData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPickupDataCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ForEachPickupData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ForEachPickupDataAndProcessOne() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ForEachPickupNormalData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ForEachPickupBoxData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ForEachDroppedDataImpl() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ForEachDroppedDataAndProcessOneImpl() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ForEachAll() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ForEachAllImpl() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetAllPickupEntity() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ForEachAllPickupEntity() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPickupEntity() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ForEachPickupEntity() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPickupBoxEntity() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ForEachPickupBoxEntity() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetEntityPosByActorID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsItemHideByBox() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x84);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdatePickupBoxShowDict() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x88);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Add() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SpawnDropPlaceHolder() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x90);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RemoveDropPlaceHolder() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x94);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddBoxID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x98);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HasBoxID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x9C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Remove() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Clear() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ModifyBoxSwitchState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetSkipRefreshTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xAC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NoPriorityTickVisibleImpl() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CommonFrameLoad() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ProcessPriorityBox() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ProcessPriorityNormal() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xBC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PriorityTickVisibleImpl() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PreTick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Resort() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xCC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckDataRelevant() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SpawnItemVisible() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DespawnItemInvisible() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_QueueDespawnItemInvisible() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xDC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DespawnTheQueue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SpawnOrDespawnItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TickLoader() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TickBoxObservers() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xEC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TickEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TickMovement() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsCanPickupItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Spawn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xFC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBRDroppedPickupSpawned() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x100);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBRDroppedPickupBoxSpawned() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x104);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SpawnNormal() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x108);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SpawnZombieDrop() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SpawnSnowManDrop() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x110);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SpawnChipBox() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x114);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SpawnBox() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x118);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SpawnCollection() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x11C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Despawn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x120);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_Despawn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x124);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NotifyPickupDespawn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x128);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OtherPlayerPlayPickUpAnim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x12C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsCorrelation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x130);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsRelevant() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x134);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetStats() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x138);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsBox() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x13C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShouldShowOutline() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x140);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShouldShowInventoryLight() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x144);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_WillUseLowModel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x148);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NeedActiveAnimeWhenLoadComplete() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14C);
	}

	template <typename T = bool> T get_IsUseFrameLoad() {
		return ((T (*)(BRDroppedPickUpMgr*))(Il2CppBase() + 0x18BD844))(this);
	}
	template <typename T = void> T set_IsUseFrameLoad(bool value) {
		return ((T (*)(BRDroppedPickUpMgr*, bool))(Il2CppBase() + 0x18BD84C))(this, value);
	}
	template <typename T = bool> T get_IsUsePriorityVisible() {
		return ((T (*)(BRDroppedPickUpMgr*))(Il2CppBase() + 0x18BD854))(this);
	}
	template <typename T = void> T set_IsUsePriorityVisible(bool value) {
		return ((T (*)(BRDroppedPickUpMgr*, bool))(Il2CppBase() + 0x18BD85C))(this, value);
	}
	template <typename T = bool> T GetPickupData(int32_t actorID, uintptr_t* data) {
		return ((T (*)(BRDroppedPickUpMgr*, int32_t, uintptr_t*))(Il2CppBase() + 0x18BD864))(this, actorID, data);
	}
	template <typename T = bool> T HasPickupData(int32_t actorID) {
		return ((T (*)(BRDroppedPickUpMgr*, int32_t))(Il2CppBase() + 0x18BD9C8))(this, actorID);
	}
	template <typename T = void> T AddPickupData(uintptr_t data) {
		return ((T (*)(BRDroppedPickUpMgr*, uintptr_t))(Il2CppBase() + 0x18BDAC4))(this, data);
	}
	template <typename T = void> T RemovePickupData(int32_t actorID) {
		return ((T (*)(BRDroppedPickUpMgr*, int32_t))(Il2CppBase() + 0x18BDC0C))(this, actorID);
	}
	template <typename T = void> T ClearPickupData() {
		return ((T (*)(BRDroppedPickUpMgr*))(Il2CppBase() + 0x18BDD44))(this);
	}
	template <typename T = int32_t> T GetPickupDataCount() {
		return ((T (*)(BRDroppedPickUpMgr*))(Il2CppBase() + 0x18BDE6C))(this);
	}
	template <typename T = void> T ForEachPickupData(void* callback) {
		return ((T (*)(BRDroppedPickUpMgr*, void*))(Il2CppBase() + 0x18BDF9C))(this, callback);
	}
	template <typename T = bool> T ForEachPickupDataAndProcessOne(uintptr_t callback) {
		return ((T (*)(BRDroppedPickUpMgr*, uintptr_t))(Il2CppBase() + 0x18BE2C4))(this, callback);
	}
	template <typename T = void> T ForEachPickupNormalData(void* callback) {
		return ((T (*)(BRDroppedPickUpMgr*, void*))(Il2CppBase() + 0x18BE5F8))(this, callback);
	}
	template <typename T = void> T ForEachPickupBoxData(void* callback) {
		return ((T (*)(BRDroppedPickUpMgr*, void*))(Il2CppBase() + 0x18BE6DC))(this, callback);
	}
	template <typename T = void> T ForEachDroppedDataImpl(Il2CppDictionary<int32_t, uintptr_t>* dict, void* callback) {
		return ((T (*)(BRDroppedPickUpMgr*, Il2CppDictionary<int32_t, uintptr_t>*, void*))(Il2CppBase() + 0x18BE090))(this, dict, callback);
	}
	template <typename T = bool> T ForEachDroppedDataAndProcessOneImpl(Il2CppDictionary<int32_t, uintptr_t>* dict, uintptr_t callback) {
		return ((T (*)(BRDroppedPickUpMgr*, Il2CppDictionary<int32_t, uintptr_t>*, uintptr_t))(Il2CppBase() + 0x18BE3C8))(this, dict, callback);
	}
	template <typename T = void> T ForEachAll(void* callback) {
		return ((T (*)(BRDroppedPickUpMgr*, void*))(Il2CppBase() + 0x18BE858))(this, callback);
	}
	template <typename T = void> T ForEachAllImpl(Il2CppDictionary<int32_t, uintptr_t>* dict, void* callback) {
		return ((T (*)(BRDroppedPickUpMgr*, Il2CppDictionary<int32_t, uintptr_t>*, void*))(Il2CppBase() + 0x18BE94C))(this, dict, callback);
	}
	template <typename T = uintptr_t> T GetAllPickupEntity(int32_t actorID) {
		return ((T (*)(BRDroppedPickUpMgr*, int32_t))(Il2CppBase() + 0x18BEB64))(this, actorID);
	}
	template <typename T = void> T ForEachAllPickupEntity(void* callback) {
		return ((T (*)(BRDroppedPickUpMgr*, void*))(Il2CppBase() + 0x18BECE8))(this, callback);
	}
	template <typename T = uintptr_t> T GetPickupEntity(int32_t actorID) {
		return ((T (*)(BRDroppedPickUpMgr*, int32_t))(Il2CppBase() + 0x18BF354))(this, actorID);
	}
	template <typename T = void> T ForEachPickupEntity(void* callback) {
		return ((T (*)(BRDroppedPickUpMgr*, void*))(Il2CppBase() + 0x18BEEBC))(this, callback);
	}
	template <typename T = uintptr_t> T GetPickupBoxEntity(int32_t actorID) {
		return ((T (*)(BRDroppedPickUpMgr*, int32_t))(Il2CppBase() + 0x18BF488))(this, actorID);
	}
	template <typename T = void> T ForEachPickupBoxEntity(void* callback) {
		return ((T (*)(BRDroppedPickUpMgr*, void*))(Il2CppBase() + 0x18BF108))(this, callback);
	}
	template <typename T = Il2CppVector3> T GetEntityPosByActorID(int32_t actorId) {
		return ((T (*)(BRDroppedPickUpMgr*, int32_t))(Il2CppBase() + 0x18BF5BC))(this, actorId);
	}
	template <typename T = bool> T IsItemHideByBox(int32_t boxActorID) {
		return ((T (*)(BRDroppedPickUpMgr*, int32_t))(Il2CppBase() + 0x18BF7B8))(this, boxActorID);
	}
	template <typename T = void> T UpdatePickupBoxShowDict(int32_t key, bool show) {
		return ((T (*)(BRDroppedPickUpMgr*, int32_t, bool))(Il2CppBase() + 0x18BF92C))(this, key, show);
	}
	template <typename T = void> T Add(uintptr_t type, int32_t actorId, int32_t itemId, int32_t count, int32_t param1, uintptr_t pickUpType, uint32_t skinID, bool isInBox, Il2CppVector3 pos, Il2CppVector3 fromPos, Il2CppQuaternion rot, bool hasRot, uint32_t boxOwnerActorId) {
		return ((T (*)(BRDroppedPickUpMgr*, uintptr_t, int32_t, int32_t, int32_t, int32_t, uintptr_t, uint32_t, bool, Il2CppVector3, Il2CppVector3, Il2CppQuaternion, bool, uint32_t))(Il2CppBase() + 0x18BFA98))(this, type, actorId, itemId, count, param1, pickUpType, skinID, isInBox, pos, fromPos, rot, hasRot, boxOwnerActorId);
	}
	template <typename T = void> T SpawnDropPlaceHolder(int32_t actorId, int32_t itemId, Il2CppVector3 pos, Il2CppQuaternion rot, bool hasRot, uintptr_t pickupType) {
		return ((T (*)(BRDroppedPickUpMgr*, int32_t, int32_t, Il2CppVector3, Il2CppQuaternion, bool, uintptr_t))(Il2CppBase() + 0x18BFDF8))(this, actorId, itemId, pos, rot, hasRot, pickupType);
	}
	template <typename T = void> T RemoveDropPlaceHolder(int32_t actorId) {
		return ((T (*)(BRDroppedPickUpMgr*, int32_t))(Il2CppBase() + 0x18C06F8))(this, actorId);
	}
	template <typename T = void> T AddBoxID(int32_t actorId) {
		return ((T (*)(BRDroppedPickUpMgr*, int32_t))(Il2CppBase() + 0x18C094C))(this, actorId);
	}
	template <typename T = bool> T HasBoxID(int32_t actorId) {
		return ((T (*)(BRDroppedPickUpMgr*, int32_t))(Il2CppBase() + 0x18B1284))(this, actorId);
	}
	template <typename T = void> T Remove(int32_t actorId, uint32_t pickedByPlayerId) {
		return ((T (*)(BRDroppedPickUpMgr*, int32_t, uint32_t))(Il2CppBase() + 0x18C0AC8))(this, actorId, pickedByPlayerId);
	}
	template <typename T = void> T Clear() {
		return ((T (*)(BRDroppedPickUpMgr*))(Il2CppBase() + 0x18C103C))(this);
	}
	template <typename T = void> T ModifyBoxSwitchState(int32_t actorId, bool boxIsOpen, bool playSound) {
		return ((T (*)(BRDroppedPickUpMgr*, int32_t, bool, bool))(Il2CppBase() + 0x18C122C))(this, actorId, boxIsOpen, playSound);
	}
	template <typename T = void> T ResetSkipRefreshTime() {
		return ((T (*)(BRDroppedPickUpMgr*))(Il2CppBase() + 0x18C04AC))(this);
	}
	template <typename T = bool> T NoPriorityTickVisibleImpl() {
		return ((T (*)(BRDroppedPickUpMgr*))(Il2CppBase() + 0x18C154C))(this);
	}
	template <typename T = void> T CommonFrameLoad() {
		return ((T (*)(BRDroppedPickUpMgr*))(Il2CppBase() + 0x18C1678))(this);
	}
	template <typename T = void> T ProcessPriorityBox() {
		return ((T (*)(BRDroppedPickUpMgr*))(Il2CppBase() + 0x18C1D90))(this);
	}
	template <typename T = void> T ProcessPriorityNormal() {
		return ((T (*)(BRDroppedPickUpMgr*))(Il2CppBase() + 0x18C25F4))(this);
	}
	template <typename T = bool> T PriorityTickVisibleImpl() {
		return ((T (*)(BRDroppedPickUpMgr*))(Il2CppBase() + 0x18C189C))(this);
	}
	template <typename T = void> T Tick() {
		return ((T (*)(BRDroppedPickUpMgr*))(Il2CppBase() + 0x18C2A50))(this);
	}
	template <typename T = void> T PreTick() {
		return ((T (*)(BRDroppedPickUpMgr*))(Il2CppBase() + 0x18C2B54))(this);
	}
	template <typename T = void> T Resort() {
		return ((T (*)(BRDroppedPickUpMgr*))(Il2CppBase() + 0x18C03E4))(this);
	}
	template <typename T = void> T CheckDataRelevant() {
		return ((T (*)(BRDroppedPickUpMgr*))(Il2CppBase() + 0x18C3878))(this);
	}
	template <typename T = bool> T SpawnItemVisible(uintptr_t data) {
		return ((T (*)(BRDroppedPickUpMgr*, uintptr_t))(Il2CppBase() + 0x18C2930))(this, data);
	}
	template <typename T = bool> T DespawnItemInvisible(uintptr_t data) {
		return ((T (*)(BRDroppedPickUpMgr*, uintptr_t))(Il2CppBase() + 0x18C3AC8))(this, data);
	}
	template <typename T = void> T QueueDespawnItemInvisible(uintptr_t data) {
		return ((T (*)(BRDroppedPickUpMgr*, uintptr_t))(Il2CppBase() + 0x18C24B8))(this, data);
	}
	template <typename T = void> T DespawnTheQueue() {
		return ((T (*)(BRDroppedPickUpMgr*))(Il2CppBase() + 0x18C1C00))(this);
	}
	template <typename T = bool> T SpawnOrDespawnItem(uintptr_t data, bool returnTrueWhenDespawn) {
		return ((T (*)(BRDroppedPickUpMgr*, uintptr_t, bool))(Il2CppBase() + 0x18C3BF4))(this, data, returnTrueWhenDespawn);
	}
	template <typename T = bool> T TickLoader() {
		return ((T (*)(BRDroppedPickUpMgr*))(Il2CppBase() + 0x18C2D40))(this);
	}
	template <typename T = void> T TickBoxObservers() {
		return ((T (*)(BRDroppedPickUpMgr*))(Il2CppBase() + 0x18C2F84))(this);
	}
	template <typename T = void> T TickEffect() {
		return ((T (*)(BRDroppedPickUpMgr*))(Il2CppBase() + 0x18C3404))(this);
	}
	template <typename T = void> T TickMovement() {
		return ((T (*)(BRDroppedPickUpMgr*))(Il2CppBase() + 0x18C3644))(this);
	}
	template <typename T = bool> T IsCanPickupItem(uintptr_t data) {
		return ((T (*)(BRDroppedPickUpMgr*, uintptr_t))(Il2CppBase() + 0x18C3D4C))(this, data);
	}
	template <typename T = void> T Spawn(uintptr_t data) {
		return ((T (*)(BRDroppedPickUpMgr*, uintptr_t))(Il2CppBase() + 0x18C0580))(this, data);
	}
	template <typename T = void> T OnBRDroppedPickupSpawned(uintptr_t data, uintptr_t droppedPickUp) {
		return ((T (*)(BRDroppedPickUpMgr*, uintptr_t, uintptr_t))(Il2CppBase() + 0x18C57C4))(this, data, droppedPickUp);
	}
	template <typename T = void> T OnBRDroppedPickupBoxSpawned(uintptr_t data, uintptr_t droppedPickUpBox) {
		return ((T (*)(BRDroppedPickUpMgr*, uintptr_t, uintptr_t))(Il2CppBase() + 0x18C5C74))(this, data, droppedPickUpBox);
	}
	template <typename T = void> T SpawnNormal(uintptr_t data) {
		return ((T (*)(BRDroppedPickUpMgr*, uintptr_t))(Il2CppBase() + 0x18C3FA0))(this, data);
	}
	template <typename T = void> T SpawnZombieDrop(uintptr_t data) {
		return ((T (*)(BRDroppedPickUpMgr*, uintptr_t))(Il2CppBase() + 0x18C4280))(this, data);
	}
	template <typename T = void> T SpawnSnowManDrop(uintptr_t data) {
		return ((T (*)(BRDroppedPickUpMgr*, uintptr_t))(Il2CppBase() + 0x18C4658))(this, data);
	}
	template <typename T = void> T SpawnChipBox(uintptr_t data) {
		return ((T (*)(BRDroppedPickUpMgr*, uintptr_t))(Il2CppBase() + 0x18C4EF4))(this, data);
	}
	template <typename T = void> T SpawnBox(uintptr_t data) {
		return ((T (*)(BRDroppedPickUpMgr*, uintptr_t))(Il2CppBase() + 0x18C548C))(this, data);
	}
	template <typename T = void> T SpawnCollection(uintptr_t data) {
		return ((T (*)(BRDroppedPickUpMgr*, uintptr_t))(Il2CppBase() + 0x18C4A30))(this, data);
	}
	template <typename T = void> T Despawn(int32_t actorID, bool despawnVisible) {
		return ((T (*)(BRDroppedPickUpMgr*, int32_t, bool))(Il2CppBase() + 0x18C59A8))(this, actorID, despawnVisible);
	}
	template <typename T = void> T Despawn_1(uintptr_t data, bool despawnVisible) {
		return ((T (*)(BRDroppedPickUpMgr*, uintptr_t, bool))(Il2CppBase() + 0x18C0CF8))(this, data, despawnVisible);
	}
	template <typename T = void> T NotifyPickupDespawn(uintptr_t pickup) {
		return ((T (*)(BRDroppedPickUpMgr*, uintptr_t))(Il2CppBase() + 0x18C6154))(this, pickup);
	}
	template <typename T = void> T OtherPlayerPlayPickUpAnim(uint32_t pickedByPlayerId, int32_t itemId) {
		return ((T (*)(BRDroppedPickUpMgr*, uint32_t, int32_t))(Il2CppBase() + 0x18C0E10))(this, pickedByPlayerId, itemId);
	}
	template <typename T = bool> T IsCorrelation(Il2CppVector3 pickUpPos, bool isShow, uintptr_t pickUpInfoType, uintptr_t pickUpType, uintptr_t* xzDistance) {
		return ((T (*)(BRDroppedPickUpMgr*, Il2CppVector3, bool, uintptr_t, uintptr_t, uintptr_t*))(Il2CppBase() + 0x18C2198))(this, pickUpPos, isShow, pickUpInfoType, pickUpType, xzDistance);
	}
	template <typename T = bool> T IsRelevant(Il2CppVector3 pickUpPos, uintptr_t pickUpInfoType, uintptr_t pickUpType) {
		return ((T (*)(BRDroppedPickUpMgr*, Il2CppVector3, uintptr_t, uintptr_t))(Il2CppBase() + 0x18C6478))(this, pickUpPos, pickUpInfoType, pickUpType);
	}
	template <typename T = void> T GetStats(uintptr_t* totalCount, uintptr_t* shownCount, uintptr_t* buffShownCount, uintptr_t* weaponShownCount, uintptr_t* discardWeaponShownCount, uintptr_t* bulletShownCount, uintptr_t* revivalPlayerCount, uintptr_t* powerupShownCount, uintptr_t* inventoryShownCount, uintptr_t* generateShownCount, uintptr_t* dropBoxShownCount, uintptr_t* airDropBoxShownCount, uintptr_t* itemBoxShownCount, uintptr_t* zombieDropShownCount, uintptr_t* dogTagShowCount, uintptr_t* chipBoxShownCount, uintptr_t* ultShownCount) {
		return ((T (*)(BRDroppedPickUpMgr*, uintptr_t*, uintptr_t*, uintptr_t*, uintptr_t*, uintptr_t*, uintptr_t*, uintptr_t*, uintptr_t*, uintptr_t*, uintptr_t*, uintptr_t*, uintptr_t*, uintptr_t*, uintptr_t*, uintptr_t*, uintptr_t*, uintptr_t*))(Il2CppBase() + 0x18C6744))(this, totalCount, shownCount, buffShownCount, weaponShownCount, discardWeaponShownCount, bulletShownCount, revivalPlayerCount, powerupShownCount, inventoryShownCount, generateShownCount, dropBoxShownCount, airDropBoxShownCount, itemBoxShownCount, zombieDropShownCount, dogTagShowCount, chipBoxShownCount, ultShownCount);
	}
	template <typename T = bool> static T IsBox(uintptr_t pickUpInfoType, uintptr_t pickUpType) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x18B1A04))(0, pickUpInfoType, pickUpType);
	}
	template <typename T = bool> static T ShouldShowOutline(uintptr_t pickUpInfoType, uintptr_t pickUpType) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x18B1B2C))(0, pickUpInfoType, pickUpType);
	}
	template <typename T = bool> static T ShouldShowInventoryLight(int32_t itemID, uintptr_t pickUpInfoType, uintptr_t pickUpType) {
		return ((T (*)(void *, int32_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x18B5108))(0, itemID, pickUpInfoType, pickUpType);
	}
	template <typename T = bool> static T WillUseLowModel(uintptr_t pickUpInfoType, uintptr_t pickUpType) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x18B2DB4))(0, pickUpInfoType, pickUpType);
	}
	template <typename T = bool> static T NeedActiveAnimeWhenLoadComplete(int32_t itemID, uintptr_t pickUpInfoType, uintptr_t pickUpType) {
		return ((T (*)(void *, int32_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x18B22A0))(0, itemID, pickUpInfoType, pickUpType);
	}
	template <typename T = void> T Clearm__0(uintptr_t item) {
		return ((T (*)(BRDroppedPickUpMgr*, uintptr_t))(Il2CppBase() + 0x18C6DCC))(this, item);
	}
	template <typename T = bool> T NoPriorityTickVisibleImplm__1(uintptr_t data) {
		return ((T (*)(BRDroppedPickUpMgr*, uintptr_t))(Il2CppBase() + 0x18C6EAC))(this, data);
	}
	template <typename T = bool> T PriorityTickVisibleImplm__2(uintptr_t data) {
		return ((T (*)(BRDroppedPickUpMgr*, uintptr_t))(Il2CppBase() + 0x18C6EB4))(this, data);
	}
	template <typename T = void> T CheckDataRelevantm__3(uintptr_t item) {
		return ((T (*)(BRDroppedPickUpMgr*, uintptr_t))(Il2CppBase() + 0x18C6EBC))(this, item);
	}
	template <typename T = void> T CheckDataRelevantm__4(uintptr_t item) {
		return ((T (*)(BRDroppedPickUpMgr*, uintptr_t))(Il2CppBase() + 0x18C6F98))(this, item);
	}
	template <typename T = void> T GetStatsm__5(uintptr_t data) {
		return ((T (*)(BRDroppedPickUpMgr*, uintptr_t))(Il2CppBase() + 0x18C6FE4))(this, data);
	}

};

}
