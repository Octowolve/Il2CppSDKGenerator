#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI.Share {

class ShareUtils
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI.Share", "ShareUtils"));
	}

	template <typename T = int32_t> static T& _shareItemColorLimit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uint64_t> static T& SHARE_FIRST_REWARD_ACTIVITY_ID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetSharePicCDN() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShareAndReportClickShareButton() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CaptureShowAnimAndReportClickShareButton() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Share() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShareActivity() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SettlementShareArk() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShareInvitePerson2Game() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PreLoadItemTexutreFromCDN() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PreLoadTextureFromCDN() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckItemShareAndPreloadTextureFromCDN() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsShareEnableIfEnableReport() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReportShareData2Server() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsShareEnable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetTextureCDNURLFromItemID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsShowSettlementScreenCaptureTip() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetNewItemShareData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetLoadoutItemShareData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsShowShareRewardTip() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_C2SCSActvFirstShareReq() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowShareWindow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InternalReportShareData2Server() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsItemShareValid() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsRankShareValid() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsSettlementShareValid() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsLoadoutItemSharedValid() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsLoadoutItemCaptureShareValid() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsRankHistoryStatisticShareVailid() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsRankStatisticShareValid() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsItemShareValidByColor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x84);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsItemShareByConfigCDNTexture() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x88);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetItemBeforeNoShareCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetGrenadeBeforeNoShareCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x90);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetItemBeforeNoShareCountFromConfig() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x94);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetItemShareReportData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x98);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetItemShareItemData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x9C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetReportType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetFirstShareRewardSceneConfig() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsEnableFirstShareReward() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA8);
	}

	template <typename T = Il2CppString*> static T GetSharePicCDN(Il2CppString* share_tag) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x3C7F5C4))(0, share_tag);
	}
	template <typename T = void> static T ShareAndReportClickShareButton(bool capture, Il2CppString* url, uintptr_t shareData, uintptr_t captureCallback) {
		return ((T (*)(void *, bool, Il2CppString*, uintptr_t, uintptr_t))(Il2CppBase() + 0x3C7F758))(0, capture, url, shareData, captureCallback);
	}
	template <typename T = void> static T CaptureShowAnimAndReportClickShareButton(uintptr_t shareData, uintptr_t captureCallback) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x3C7FDDC))(0, shareData, captureCallback);
	}
	template <typename T = void> static T Share(bool capture, Il2CppString* url, uintptr_t shareData, uintptr_t captureCallback) {
		return ((T (*)(void *, bool, Il2CppString*, uintptr_t, uintptr_t))(Il2CppBase() + 0x3C7FA8C))(0, capture, url, shareData, captureCallback);
	}
	template <typename T = void> static T ShareActivity(Il2CppString* activityType, Il2CppString* activityID, bool capture, Il2CppString* url, uintptr_t shareData, uintptr_t captureCallback) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*, bool, Il2CppString*, uintptr_t, uintptr_t))(Il2CppBase() + 0x3C802A0))(0, activityType, activityID, capture, url, shareData, captureCallback);
	}
	template <typename T = void> static T SettlementShareArk(void* callback) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x3C804D0))(0, callback);
	}
	template <typename T = void> static T ShareInvitePerson2Game(Il2CppString* url, Il2CppString* code) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x3C80598))(0, url, code);
	}
	template <typename T = void> static T PreLoadItemTexutreFromCDN(uintptr_t item) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3C807DC))(0, item);
	}
	template <typename T = bool> static T PreLoadTextureFromCDN(Il2CppString* url, bool downFromPandora) {
		return ((T (*)(void *, Il2CppString*, bool))(Il2CppBase() + 0x3C7FF8C))(0, url, downFromPandora);
	}
	template <typename T = uintptr_t> static T CheckItemShareAndPreloadTextureFromCDN(uintptr_t item) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3C80AC8))(0, item);
	}
	template <typename T = bool> static T IsShareEnableIfEnableReport(uintptr_t data) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3C80FA4))(0, data);
	}
	template <typename T = void> static T ReportShareData2Server(uintptr_t reportData) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3C7F940))(0, reportData);
	}
	template <typename T = bool> static T IsShareEnable(uintptr_t data) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3C812E4))(0, data);
	}
	template <typename T = Il2CppString*> static T GetTextureCDNURLFromItemID(int32_t id) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x3C8113C))(0, id);
	}
	template <typename T = bool> static T IsShowSettlementScreenCaptureTip() {
		return ((T (*)(void *))(Il2CppBase() + 0x3C8240C))(0);
	}
	template <typename T = uintptr_t> static T GetNewItemShareData(uintptr_t item) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3C80DA0))(0, item);
	}
	template <typename T = uintptr_t> static T GetLoadoutItemShareData(uintptr_t itemData, bool getItemIndex, bool isCapture, bool isLoadoutForceShow) {
		return ((T (*)(void *, uintptr_t, bool, bool, bool))(Il2CppBase() + 0x3C829C8))(0, itemData, getItemIndex, isCapture, isLoadoutForceShow);
	}
	template <typename T = bool> static T IsShowShareRewardTip(uintptr_t shareData) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3C82CC8))(0, shareData);
	}
	template <typename T = void> static T C2SCSActvFirstShareReq() {
		return ((T (*)(void *))(Il2CppBase() + 0x3C8300C))(0);
	}
	template <typename T = void> static T ShowShareWindow() {
		return ((T (*)(void *))(Il2CppBase() + 0x3C800D0))(0);
	}
	template <typename T = void> static T InternalReportShareData2Server(uintptr_t data) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3C81678))(0, data);
	}
	template <typename T = bool> static T IsItemShareValid(uintptr_t data) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3C81878))(0, data);
	}
	template <typename T = bool> static T IsRankShareValid(uintptr_t data) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3C81B14))(0, data);
	}
	template <typename T = bool> static T IsSettlementShareValid() {
		return ((T (*)(void *))(Il2CppBase() + 0x3C81CEC))(0);
	}
	template <typename T = bool> static T IsLoadoutItemSharedValid(uintptr_t data) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3C81E70))(0, data);
	}
	template <typename T = bool> static T IsLoadoutItemCaptureShareValid(uintptr_t data) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3C82100))(0, data);
	}
	template <typename T = bool> static T IsRankHistoryStatisticShareVailid(uintptr_t data) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3C8226C))(0, data);
	}
	template <typename T = bool> static T IsRankStatisticShareValid(uintptr_t data) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3C8233C))(0, data);
	}
	template <typename T = bool> static T IsItemShareValidByColor(int32_t id, uintptr_t* colorID) {
		return ((T (*)(void *, int32_t, uintptr_t*))(Il2CppBase() + 0x3C8333C))(0, id, colorID);
	}
	template <typename T = bool> static T IsItemShareByConfigCDNTexture(int32_t id) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x3C831A0))(0, id);
	}
	template <typename T = int32_t> static T GetItemBeforeNoShareCount(int32_t id, uintptr_t color) {
		return ((T (*)(void *, int32_t, uintptr_t))(Il2CppBase() + 0x3C834C0))(0, id, color);
	}
	template <typename T = uintptr_t> static T GetGrenadeBeforeNoShareCount(int32_t id) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x3C837F0))(0, id);
	}
	template <typename T = int32_t> static T GetItemBeforeNoShareCountFromConfig(int32_t id) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x3C82594))(0, id);
	}
	template <typename T = uintptr_t> static T GetItemShareReportData(uint32_t id, uintptr_t shareType) {
		return ((T (*)(void *, uint32_t, uintptr_t))(Il2CppBase() + 0x3C826D8))(0, id, shareType);
	}
	template <typename T = uintptr_t> static T GetItemShareItemData(uintptr_t item) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3C82804))(0, item);
	}
	template <typename T = uintptr_t> static T GetReportType(uintptr_t shareData) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3C83944))(0, shareData);
	}
	template <typename T = uintptr_t> static T GetFirstShareRewardSceneConfig(uintptr_t shareData) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3C83AC8))(0, shareData);
	}
	template <typename T = bool> static T IsEnableFirstShareReward(uintptr_t shareData) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3C82EF0))(0, shareData);
	}
	template <typename T = int32_t> static T get_shareItemColorLimit() {
		return ((T (*)(void *))(Il2CppBase() + 0x3C836BC))(0);
	}

};

}
