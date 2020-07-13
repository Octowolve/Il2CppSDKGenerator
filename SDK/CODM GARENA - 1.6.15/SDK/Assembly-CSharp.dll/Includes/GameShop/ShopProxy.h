#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameShop {

class ShopProxy
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameShop", "ShopProxy"));
	}

	template <typename T = uintptr_t> static T& Instance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_shop_cfgs() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_bought_limit_goods() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& m_MaxRequestCount() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& m_requestCount() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& preCookie() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppList<int32_t>*> T& mReqIds() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& mShopDS() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& mPaymentVM() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& mChestVM() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SendShopGetRequest() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SendShopGetRequestWithIds() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnShopGetResponse() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SendShopBuyRequestWithClientPrice() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnExchangeShopBuyItemResponse() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnShopBuyResponse() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckConditionCompleteItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateServerTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnShopBuySuccess() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckDeleteExchangeCoin() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SendOpenBoxRequest() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnOpenBoxResponse() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SendShopGetBoxContentRequest() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SendLuckBoxQueryGroupProbReq() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnShopLuckyBoxQueryGroupPropResponse() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLuckyBoardReceiveRewardRes() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SendLuckyBoxOpenTurnToMail() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BatchSendLuckyBoxOpenTurnToMail() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLuckyBoxTurnToMailResponse() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SendLuckyBoxOpenRequest() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLuckyBoxOpenResponse() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HandleReddot() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GoOpenTreasureBox() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SendGetShopRedDotReqest() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGetShopRedDotResponse() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SendDeleteShopRedDotReqest() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGetDeleteShopRedDotResponse() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SendLuckyBoxColorSummaryReqest() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLuckyBoxColorSummaryResponse() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}

	template <typename T = uintptr_t> T get_ShopDS() {
		return ((T (*)(ShopProxy*))(Il2CppBase() + 0x23A1214))(this);
	}
	template <typename T = uintptr_t> T get_PaymentVM() {
		return ((T (*)(ShopProxy*))(Il2CppBase() + 0x23A12C4))(this);
	}
	template <typename T = uintptr_t> T get_ChestVM() {
		return ((T (*)(ShopProxy*))(Il2CppBase() + 0x23A1374))(this);
	}
	template <typename T = bool> T SendShopGetRequest() {
		return ((T (*)(ShopProxy*))(Il2CppBase() + 0x23A1424))(this);
	}
	template <typename T = bool> T SendShopGetRequestWithIds(Il2CppList<int32_t>* ids) {
		return ((T (*)(ShopProxy*, Il2CppList<int32_t>*))(Il2CppBase() + 0x235F618))(this, ids);
	}
	template <typename T = void> T OnShopGetResponse(uintptr_t message) {
		return ((T (*)(ShopProxy*, uintptr_t))(Il2CppBase() + 0x23A1670))(this, message);
	}
	template <typename T = bool> T SendShopBuyRequestWithClientPrice(int32_t shopID, uintptr_t paymentType, uintptr_t goodType, int32_t num, bool bShowLoading, int32_t index, float delayTime, int32_t clientPrice) {
		return ((T (*)(ShopProxy*, int32_t, uintptr_t, uintptr_t, int32_t, bool, int32_t, float, int32_t))(Il2CppBase() + 0x239E434))(this, shopID, paymentType, goodType, num, bShowLoading, index, delayTime, clientPrice);
	}
	template <typename T = void> T OnExchangeShopBuyItemResponse(uintptr_t res) {
		return ((T (*)(ShopProxy*, uintptr_t))(Il2CppBase() + 0x23A1ECC))(this, res);
	}
	template <typename T = bool> T OnShopBuyResponse(uintptr_t message, uintptr_t* err, uintptr_t* resOut) {
		return ((T (*)(ShopProxy*, uintptr_t, uintptr_t*, uintptr_t*))(Il2CppBase() + 0x23A230C))(this, message, err, resOut);
	}
	template <typename T = void> T CheckConditionCompleteItem(Il2CppList<uint32_t>* shopIDs) {
		return ((T (*)(ShopProxy*, Il2CppList<uint32_t>*))(Il2CppBase() + 0x23A2F58))(this, shopIDs);
	}
	template <typename T = void> T UpdateServerTime(uint64_t server_time) {
		return ((T (*)(ShopProxy*, uint64_t))(Il2CppBase() + 0x23A2E10))(this, server_time);
	}
	template <typename T = void> T OnShopBuySuccess(uintptr_t resOut) {
		return ((T (*)(ShopProxy*, uintptr_t))(Il2CppBase() + 0x236FCD4))(this, resOut);
	}
	template <typename T = void> T CheckDeleteExchangeCoin(uintptr_t pay_info) {
		return ((T (*)(ShopProxy*, uintptr_t))(Il2CppBase() + 0x23A31BC))(this, pay_info);
	}
	template <typename T = bool> T SendOpenBoxRequest(uintptr_t data) {
		return ((T (*)(ShopProxy*, uintptr_t))(Il2CppBase() + 0x23A3444))(this, data);
	}
	template <typename T = bool> T OnOpenBoxResponse(uintptr_t message, uintptr_t* errstr) {
		return ((T (*)(ShopProxy*, uintptr_t, uintptr_t*))(Il2CppBase() + 0x23A36A4))(this, message, errstr);
	}
	template <typename T = bool> T SendShopGetBoxContentRequest(int32_t boxID) {
		return ((T (*)(ShopProxy*, int32_t))(Il2CppBase() + 0x23A3B68))(this, boxID);
	}
	template <typename T = void> T SendLuckBoxQueryGroupProbReq(uint32_t boxId, uintptr_t source) {
		return ((T (*)(ShopProxy*, uint32_t, uintptr_t))(Il2CppBase() + 0x2374DCC))(this, boxId, source);
	}
	template <typename T = bool> T OnShopLuckyBoxQueryGroupPropResponse(uintptr_t message, uintptr_t* errStr) {
		return ((T (*)(ShopProxy*, uintptr_t, uintptr_t*))(Il2CppBase() + 0x23A3CC4))(this, message, errStr);
	}
	template <typename T = bool> T OnLuckyBoardReceiveRewardRes(uintptr_t message, uintptr_t* errStr) {
		return ((T (*)(ShopProxy*, uintptr_t, uintptr_t*))(Il2CppBase() + 0x23A41D0))(this, message, errStr);
	}
	template <typename T = void> T SendLuckyBoxOpenTurnToMail(uint32_t boxId, int32_t num, int32_t flag) {
		return ((T (*)(ShopProxy*, uint32_t, int32_t, int32_t))(Il2CppBase() + 0x23A44DC))(this, boxId, num, flag);
	}
	template <typename T = void> T BatchSendLuckyBoxOpenTurnToMail(uint32_t boxId, int32_t allNum, int32_t flag, uint64_t guid) {
		return ((T (*)(ShopProxy*, uint32_t, int32_t, int32_t, uint64_t))(Il2CppBase() + 0x23A4840))(this, boxId, allNum, flag, guid);
	}
	template <typename T = bool> T OnLuckyBoxTurnToMailResponse(uintptr_t message, uintptr_t* errStr) {
		return ((T (*)(ShopProxy*, uintptr_t, uintptr_t*))(Il2CppBase() + 0x23A4C08))(this, message, errStr);
	}
	template <typename T = void> T SendLuckyBoxOpenRequest(uint32_t boxId, int32_t num, uintptr_t res) {
		return ((T (*)(ShopProxy*, uint32_t, int32_t, uintptr_t))(Il2CppBase() + 0x23765F8))(this, boxId, num, res);
	}
	template <typename T = bool> T OnLuckyBoxOpenResponse(uintptr_t message, uintptr_t* errStr) {
		return ((T (*)(ShopProxy*, uintptr_t, uintptr_t*))(Il2CppBase() + 0x23A52C0))(this, message, errStr);
	}
	template <typename T = void> T HandleReddot(uintptr_t res) {
		return ((T (*)(ShopProxy*, uintptr_t))(Il2CppBase() + 0x23A57C4))(this, res);
	}
	template <typename T = void> T GoOpenTreasureBox(uintptr_t res, Il2CppList<uintptr_t>* propList) {
		return ((T (*)(ShopProxy*, uintptr_t, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x23A5DF4))(this, res, propList);
	}
	template <typename T = bool> T SendGetShopRedDotReqest() {
		return ((T (*)(ShopProxy*))(Il2CppBase() + 0x23A1C28))(this);
	}
	template <typename T = bool> T OnGetShopRedDotResponse(uintptr_t message, uintptr_t error) {
		return ((T (*)(ShopProxy*, uintptr_t, uintptr_t))(Il2CppBase() + 0x23A67CC))(this, message, error);
	}
	template <typename T = bool> T SendDeleteShopRedDotReqest(uint32_t tagId) {
		return ((T (*)(ShopProxy*, uint32_t))(Il2CppBase() + 0x23A6A40))(this, tagId);
	}
	template <typename T = bool> T OnGetDeleteShopRedDotResponse(uintptr_t message, uintptr_t error) {
		return ((T (*)(ShopProxy*, uintptr_t, uintptr_t))(Il2CppBase() + 0x23A6C14))(this, message, error);
	}
	template <typename T = bool> T SendLuckyBoxColorSummaryReqest() {
		return ((T (*)(ShopProxy*))(Il2CppBase() + 0x23A6E24))(this);
	}
	template <typename T = bool> T OnLuckyBoxColorSummaryResponse(uintptr_t message, uintptr_t error) {
		return ((T (*)(ShopProxy*, uintptr_t, uintptr_t))(Il2CppBase() + 0x23A6F54))(this, message, error);
	}

};

}
