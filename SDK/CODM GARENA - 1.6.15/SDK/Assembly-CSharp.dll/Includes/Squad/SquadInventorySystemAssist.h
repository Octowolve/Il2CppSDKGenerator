#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Squad {

class SquadInventorySystemAssist
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Squad", "SquadInventorySystemAssist"));
	}

	template <typename T = uintptr_t> static T& Instance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> T& bNeedClearOldInventory() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = bool> T& bRequestingOpenGiftBag() {
		return *(T*)((uintptr_t)this + 0x9);
	}
	template <typename T = uintptr_t> T& cache_GiftBag() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& cache_ToBeCompoundItem() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RequestGetInventoryInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGetInventoryInfoResponse() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RequestOpenGiftBag() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnOpenGiftBagResponse() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RequestCompoundToItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResponseCompoundToItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyItemsTimeout() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TryToShowTimeoutView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetNewReceiveItemList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckToSetDesdecomposeItemsList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowNewReceiveItemPopup() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowBattlePassItemPopup() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckNeedPopCommonReceive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEquipIndividuationItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReqEquipIndividuationItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnChgWinCircleIndividuationItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReqChgWinCircleIndividuationItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReqChangeKillCameraSprayItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResChangeKillCameraSprayItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReqInventoryGetUnequipItemConf() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnResInventoryGetUnequipItemConf() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReqUseItemCard() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReqUseCheckCard() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReqUseBattlePassExpCard() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}

	template <typename T = void> T RequestGetInventoryInfo() {
		return ((T (*)(SquadInventorySystemAssist*))(Il2CppBase() + 0x393D168))(this);
	}
	template <typename T = void> T OnGetInventoryInfoResponse(uintptr_t res) {
		return ((T (*)(SquadInventorySystemAssist*, uintptr_t))(Il2CppBase() + 0x393D2A0))(this, res);
	}
	template <typename T = void> T RequestOpenGiftBag(uintptr_t giftBag) {
		return ((T (*)(SquadInventorySystemAssist*, uintptr_t))(Il2CppBase() + 0x393D614))(this, giftBag);
	}
	template <typename T = void> T OnOpenGiftBagResponse(uintptr_t message) {
		return ((T (*)(SquadInventorySystemAssist*, uintptr_t))(Il2CppBase() + 0x393D7F0))(this, message);
	}
	template <typename T = void> T RequestCompoundToItem(uint32_t chipId, int32_t num) {
		return ((T (*)(SquadInventorySystemAssist*, uint32_t, int32_t))(Il2CppBase() + 0x393DF60))(this, chipId, num);
	}
	template <typename T = void> T ResponseCompoundToItem(uintptr_t res) {
		return ((T (*)(SquadInventorySystemAssist*, uintptr_t))(Il2CppBase() + 0x393E1D0))(this, res);
	}
	template <typename T = void> T OnNotifyItemsTimeout(uintptr_t ntf) {
		return ((T (*)(SquadInventorySystemAssist*, uintptr_t))(Il2CppBase() + 0x393E708))(this, ntf);
	}
	template <typename T = void> T TryToShowTimeoutView() {
		return ((T (*)(SquadInventorySystemAssist*))(Il2CppBase() + 0x393E9B4))(this);
	}
	template <typename T = void> T SetNewReceiveItemList(Il2CppList<uintptr_t>* propList, Il2CppList<uintptr_t>* luckyBoxList, bool IsClearPropList) {
		return ((T (*)(SquadInventorySystemAssist*, Il2CppList<uintptr_t>*, Il2CppList<uintptr_t>*, bool))(Il2CppBase() + 0x393EC4C))(this, propList, luckyBoxList, IsClearPropList);
	}
	template <typename T = bool> T CheckToSetDesdecomposeItemsList(uintptr_t prop) {
		return ((T (*)(SquadInventorySystemAssist*, uintptr_t))(Il2CppBase() + 0x393F758))(this, prop);
	}
	template <typename T = void> T SetItem(uintptr_t item, uintptr_t prop) {
		return ((T (*)(SquadInventorySystemAssist*, uintptr_t, uintptr_t))(Il2CppBase() + 0x393FA84))(this, item, prop);
	}
	template <typename T = void> T ShowNewReceiveItemPopup(Il2CppList<uintptr_t>* propList, bool turnToMail, bool bReceiveFromGuild, bool bOnlyOpenBox, int32_t rewardParam, Il2CppList<uintptr_t>* luckyBoxList) {
		return ((T (*)(SquadInventorySystemAssist*, Il2CppList<uintptr_t>*, bool, bool, bool, int32_t, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x393DC24))(this, propList, turnToMail, bReceiveFromGuild, bOnlyOpenBox, rewardParam, luckyBoxList);
	}
	template <typename T = void> T ShowBattlePassItemPopup(Il2CppList<uintptr_t>* propList, bool turnToMail, bool IsClearPropList) {
		return ((T (*)(SquadInventorySystemAssist*, Il2CppList<uintptr_t>*, bool, bool))(Il2CppBase() + 0x393FE20))(this, propList, turnToMail, IsClearPropList);
	}
	template <typename T = bool> T CheckNeedPopCommonReceive() {
		return ((T (*)(SquadInventorySystemAssist*))(Il2CppBase() + 0x393FC88))(this);
	}
	template <typename T = void> T OnEquipIndividuationItem(Il2CppList<uintptr_t>* list) {
		return ((T (*)(SquadInventorySystemAssist*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x3940074))(this, list);
	}
	template <typename T = void> T ReqEquipIndividuationItem(uint32_t itemId, uint64_t guid, uint32_t posIndex) {
		return ((T (*)(SquadInventorySystemAssist*, uint32_t, uint64_t, uint32_t))(Il2CppBase() + 0x3940208))(this, itemId, guid, posIndex);
	}
	template <typename T = void> T OnChgWinCircleIndividuationItem(uintptr_t item) {
		return ((T (*)(SquadInventorySystemAssist*, uintptr_t))(Il2CppBase() + 0x39403B4))(this, item);
	}
	template <typename T = void> T ReqChgWinCircleIndividuationItem(uint32_t itemId, uint64_t guid) {
		return ((T (*)(SquadInventorySystemAssist*, uint32_t, uint64_t))(Il2CppBase() + 0x3940548))(this, itemId, guid);
	}
	template <typename T = void> T ReqChangeKillCameraSprayItem(uint32_t itemId, uint64_t guid) {
		return ((T (*)(SquadInventorySystemAssist*, uint32_t, uint64_t))(Il2CppBase() + 0x39406DC))(this, itemId, guid);
	}
	template <typename T = void> T ResChangeKillCameraSprayItem(uintptr_t item) {
		return ((T (*)(SquadInventorySystemAssist*, uintptr_t))(Il2CppBase() + 0x3940870))(this, item);
	}
	template <typename T = void> T ReqInventoryGetUnequipItemConf(int32_t loadoutIndex, uintptr_t squadType, uintptr_t loadoutType) {
		return ((T (*)(SquadInventorySystemAssist*, int32_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x3940A04))(this, loadoutIndex, squadType, loadoutType);
	}
	template <typename T = void> T OnResInventoryGetUnequipItemConf(uintptr_t res) {
		return ((T (*)(SquadInventorySystemAssist*, uintptr_t))(Il2CppBase() + 0x3940BBC))(this, res);
	}
	template <typename T = void> T ReqUseItemCard(uintptr_t item) {
		return ((T (*)(SquadInventorySystemAssist*, uintptr_t))(Il2CppBase() + 0x3941690))(this, item);
	}
	template <typename T = void> T ReqUseCheckCard(uintptr_t item) {
		return ((T (*)(SquadInventorySystemAssist*, uintptr_t))(Il2CppBase() + 0x39419A8))(this, item);
	}
	template <typename T = void> T ReqUseBattlePassExpCard(uintptr_t item) {
		return ((T (*)(SquadInventorySystemAssist*, uintptr_t))(Il2CppBase() + 0x3941CC0))(this, item);
	}

};

}
