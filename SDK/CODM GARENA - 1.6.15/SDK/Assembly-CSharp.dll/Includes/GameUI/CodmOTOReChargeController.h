#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class CodmOTOReChargeController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "CodmOTOReChargeController"));
	}

	template <typename T = int32_t> static T& OTORechargeId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> static T& IsSendCloseEvent() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> T& _view() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& _config() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _rewards() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = Il2CppString*> T& _price() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = Il2CppString*> T& _realPrice() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = int64_t> T& _endTime() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> T& clickEntrance() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = uintptr_t> T& rechargeReport() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = uintptr_t> T& _timer() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = bool> T& isSendRequest() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = Il2CppString*> T& frameColor() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = Il2CppString*> T& timeStr() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = Il2CppString*> T& timeStrEndInNdays() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& TweenAlpha() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEasyListDataChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEasyListItemClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_WillShow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshTextColor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetDialogTitle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPriceAndSignal() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPaySuccess() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnOTOItemPress() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnOTOItemClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRewardLoadSuccessed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPicLoadSuccessed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnGoToClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GoToPay() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnOTOInfoArrived() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnCloseClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayReverse() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CloseWindow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_WillClose() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayOpenAni() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetAniInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(CodmOTOReChargeController*))(Il2CppBase() + 0x3DE5D4C))(this);
	}
	template <typename T = void> T OnEasyListDataChanged(uintptr_t list, int32_t userContext) {
		return ((T (*)(CodmOTOReChargeController*, uintptr_t, int32_t))(Il2CppBase() + 0x3DE5E20))(this, list, userContext);
	}
	template <typename T = bool> T OnEasyListItemClick(uintptr_t list, uintptr_t controller, int32_t index) {
		return ((T (*)(CodmOTOReChargeController*, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x3DE5F04))(this, list, controller, index);
	}
	template <typename T = void> T Init() {
		return ((T (*)(CodmOTOReChargeController*))(Il2CppBase() + 0x3DE5FFC))(this);
	}
	template <typename T = void> T WillShow() {
		return ((T (*)(CodmOTOReChargeController*))(Il2CppBase() + 0x3DE6130))(this);
	}
	template <typename T = void> T RefreshTextColor() {
		return ((T (*)(CodmOTOReChargeController*))(Il2CppBase() + 0x3DE71F8))(this);
	}
	template <typename T = void> T SetDialogTitle() {
		return ((T (*)(CodmOTOReChargeController*))(Il2CppBase() + 0x3DE7FEC))(this);
	}
	template <typename T = void> T RefreshTime() {
		return ((T (*)(CodmOTOReChargeController*))(Il2CppBase() + 0x3DE7B08))(this);
	}
	template <typename T = float> T GetPriceAndSignal(Il2CppString* strPrice, uintptr_t* sign) {
		return ((T (*)(CodmOTOReChargeController*, Il2CppString*, uintptr_t*))(Il2CppBase() + 0x3DE8498))(this, strPrice, sign);
	}
	template <typename T = void> T RefreshData() {
		return ((T (*)(CodmOTOReChargeController*))(Il2CppBase() + 0x3DE7934))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(CodmOTOReChargeController*))(Il2CppBase() + 0x3DE87AC))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(CodmOTOReChargeController*))(Il2CppBase() + 0x3DE8AB8))(this);
	}
	template <typename T = void> T OnPaySuccess(uintptr_t obj) {
		return ((T (*)(CodmOTOReChargeController*, uintptr_t))(Il2CppBase() + 0x3DE8CB4))(this, obj);
	}
	template <typename T = void> T OnOTOItemPress(uintptr_t msg) {
		return ((T (*)(CodmOTOReChargeController*, uintptr_t))(Il2CppBase() + 0x3DE8EA4))(this, msg);
	}
	template <typename T = void> T OnOTOItemClick(uintptr_t msg) {
		return ((T (*)(CodmOTOReChargeController*, uintptr_t))(Il2CppBase() + 0x3DE90F4))(this, msg);
	}
	template <typename T = void> T OnRewardLoadSuccessed(Il2CppString* url, bool isSuccess, uintptr_t texture) {
		return ((T (*)(CodmOTOReChargeController*, Il2CppString*, bool, uintptr_t))(Il2CppBase() + 0x3DE9828))(this, url, isSuccess, texture);
	}
	template <typename T = void> T OnPicLoadSuccessed(Il2CppString* url, bool isSuccess, uintptr_t texture) {
		return ((T (*)(CodmOTOReChargeController*, Il2CppString*, bool, uintptr_t))(Il2CppBase() + 0x3DE9A08))(this, url, isSuccess, texture);
	}
	template <typename T = void> T OnBtnGoToClick() {
		return ((T (*)(CodmOTOReChargeController*))(Il2CppBase() + 0x3DE9BE8))(this);
	}
	template <typename T = void> T GoToPay() {
		return ((T (*)(CodmOTOReChargeController*))(Il2CppBase() + 0x3DE9E78))(this);
	}
	template <typename T = void> T OnOTOInfoArrived(uintptr_t obj) {
		return ((T (*)(CodmOTOReChargeController*, uintptr_t))(Il2CppBase() + 0x3DE9FF0))(this, obj);
	}
	template <typename T = void> T OnBtnCloseClick() {
		return ((T (*)(CodmOTOReChargeController*))(Il2CppBase() + 0x3DEA310))(this);
	}
	template <typename T = void> T PlayReverse() {
		return ((T (*)(CodmOTOReChargeController*))(Il2CppBase() + 0x3DEA5E0))(this);
	}
	template <typename T = void> T CloseWindow() {
		return ((T (*)(CodmOTOReChargeController*))(Il2CppBase() + 0x3DEA724))(this);
	}
	template <typename T = void> T WillClose() {
		return ((T (*)(CodmOTOReChargeController*))(Il2CppBase() + 0x3DEA808))(this);
	}
	template <typename T = void> T PlayOpenAni() {
		return ((T (*)(CodmOTOReChargeController*))(Il2CppBase() + 0x3DEA97C))(this);
	}
	template <typename T = void> T SetAniInfo() {
		return ((T (*)(CodmOTOReChargeController*))(Il2CppBase() + 0x3DE82EC))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(CodmOTOReChargeController*))(Il2CppBase() + 0x3DEAB24))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(CodmOTOReChargeController*))(Il2CppBase() + 0x3DEAB2C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_WillShow() {
		return ((T (*)(CodmOTOReChargeController*))(Il2CppBase() + 0x3DEAB34))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(CodmOTOReChargeController*))(Il2CppBase() + 0x3DEAB3C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(CodmOTOReChargeController*))(Il2CppBase() + 0x3DEAB44))(this);
	}
	template <typename T = void> T xLuaBaseProxy_WillClose() {
		return ((T (*)(CodmOTOReChargeController*))(Il2CppBase() + 0x3DEAB4C))(this);
	}

};

}
