#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase.Pay {

class PayHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase.Pay", "PayHelper"));
	}

	template <typename T = Il2CppString*> static T& ZONE_ID_TEST() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& ZONE_ID_RELEASE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& COUNTRY() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& CURRENCYTYPE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& SESSIONID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& SESSIONTYPE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& OPENKEY() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& PAYCHANNEL() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& ENVIRONMENT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> static T& ENABLE_LOG() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& IDC() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& MAX_LOADING_TIME() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& m_PayService() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& m_InitCallback() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& m_PayCallback() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& m_GetLocalPriceCallback() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& m_sGetInfoCallback() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& m_ReprovideCallback() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& m_QueryPromotionCallback() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& m_LoginInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, uintptr_t>*> static T& productInfoList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = Il2CppDictionary<int32_t, bool>*> static T& mpInfoDic() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = Il2CppString*> static T& ProductId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = Il2CppString*> static T& GETINFO_TYPE_MP() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& GETINFO_TYPE_SHORT_OPENID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetAccountBalance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetZoneId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPayItemZoneId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetFieldValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Pay() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPayChannelExtras() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PayGoods() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FillPayReportData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReqLocalPrice() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReqLocalPrice_Garena() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ScanGoogleInventory() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReqReprovide() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPayToken() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReqMpInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReqShortOpenIdInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReqGetInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetCommonField() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PullDiscountInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StartPay() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PaySuccess() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PayFailed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x84);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowForbidPay() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x88);
	}

	template <typename T = void> static T GetAccountBalance() {
		return ((T (*)(void *))(Il2CppBase() + 0x16D2D98))(0);
	}
	template <typename T = Il2CppString*> static T GetZoneId() {
		return ((T (*)(void *))(Il2CppBase() + 0x16D2F04))(0);
	}
	template <typename T = Il2CppString*> static T GetPayItemZoneId() {
		return ((T (*)(void *))(Il2CppBase() + 0x16D30BC))(0);
	}
	template <typename T = Il2CppString*> static T GetFieldValue(Il2CppDictionary<Il2CppString*, uintptr_t>* dict, Il2CppString* fieldName) {
		return ((T (*)(void *, Il2CppDictionary<Il2CppString*, uintptr_t>*, Il2CppString*))(Il2CppBase() + 0x16D31A4))(0, dict, fieldName);
	}
	template <typename T = bool> static T Init() {
		return ((T (*)(void *))(Il2CppBase() + 0x16D338C))(0);
	}
	template <typename T = void> static T Pay(Il2CppString* productID, uint32_t gameCoinNum, Il2CppString* garena_rebate_id) {
		return ((T (*)(void *, Il2CppString*, uint32_t, Il2CppString*))(Il2CppBase() + 0x16D483C))(0, productID, gameCoinNum, garena_rebate_id);
	}
	template <typename T = Il2CppString*> static T GetPayChannelExtras(uint32_t gameCoinNum, bool isPayItem, Il2CppString* garena_rebate_id) {
		return ((T (*)(void *, uint32_t, bool, Il2CppString*))(Il2CppBase() + 0x16D44C8))(0, gameCoinNum, isPayItem, garena_rebate_id);
	}
	template <typename T = void> static T PayGoods(Il2CppString* productID, Il2CppString* price) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x16D4FA4))(0, productID, price);
	}
	template <typename T = void> static T FillPayReportData(Il2CppString* productID) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x16D5384))(0, productID);
	}
	template <typename T = bool> static T ReqLocalPrice(Il2CppList<Il2CppString*>* productList) {
		return ((T (*)(void *, Il2CppList<Il2CppString*>*))(Il2CppBase() + 0x16D56E4))(0, productList);
	}
	template <typename T = bool> static T ReqLocalPrice_Garena(Il2CppList<Il2CppString*>* productList) {
		return ((T (*)(void *, Il2CppList<Il2CppString*>*))(Il2CppBase() + 0x16D58C0))(0, productList);
	}
	template <typename T = void> static T ScanGoogleInventory() {
		return ((T (*)(void *))(Il2CppBase() + 0x16D6064))(0);
	}
	template <typename T = void> static T ReqReprovide() {
		return ((T (*)(void *))(Il2CppBase() + 0x16D62D0))(0);
	}
	template <typename T = Il2CppString*> static T GetPayToken() {
		return ((T (*)(void *))(Il2CppBase() + 0x16D64A8))(0);
	}
	template <typename T = bool> static T ReqMpInfo() {
		return ((T (*)(void *))(Il2CppBase() + 0x16D6944))(0);
	}
	template <typename T = bool> static T ReqShortOpenIdInfo() {
		return ((T (*)(void *))(Il2CppBase() + 0x16D6A4C))(0);
	}
	template <typename T = bool> static T ReqGetInfo(Il2CppString* reqType) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x16D6B14))(0, reqType);
	}
	template <typename T = void> static T SetCommonField(uintptr_t req) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x16D3E08))(0, req);
	}
	template <typename T = bool> static T PullDiscountInfo() {
		return ((T (*)(void *))(Il2CppBase() + 0x16D6DCC))(0);
	}
	template <typename T = void> static T StartPay() {
		return ((T (*)(void *))(Il2CppBase() + 0x16D4DC8))(0);
	}
	template <typename T = void> static T PaySuccess() {
		return ((T (*)(void *))(Il2CppBase() + 0x16D6E94))(0);
	}
	template <typename T = void> static T PayFailed(int32_t errorResult) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x16D7098))(0, errorResult);
	}
	template <typename T = void> static T ShowForbidPay() {
		return ((T (*)(void *))(Il2CppBase() + 0x16D75AC))(0);
	}

};

}
