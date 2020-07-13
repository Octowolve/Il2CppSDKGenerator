#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AssetDownloadBtnTemplate
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AssetDownloadBtnTemplate"));
	}

	template <typename T = int32_t> T& _assetID() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppList<int32_t>*> T& _assetIDS() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& normal() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& downloading() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& progressWidget() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& progressbarMask() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& downloadBtn() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& downloadText() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& BGMask() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& BGModelMask() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& normalTips() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = bool> T& isdownloading() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = bool> T& isWaiting() {
		return *(T*)((uintptr_t)this + 0x39);
	}
	template <typename T = uintptr_t> T& OnResStateChange() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = float> T& timer() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = float> T& EXCUTE_TIME() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = float> T& timerButton() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = float> T& EXCUTE_TIME_BUTTON() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnItemClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPopWindowCallBack() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetGoodID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetAssetID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetAssetIDS() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetMaskAndTips() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateBtnState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdataProgressBar() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}

	template <typename T = void> T Start() {
		return ((T (*)(AssetDownloadBtnTemplate*))(Il2CppBase() + 0x22D18FC))(this);
	}
	template <typename T = void> T OnItemClick(uintptr_t go) {
		return ((T (*)(AssetDownloadBtnTemplate*, uintptr_t))(Il2CppBase() + 0x22D1AE4))(this, go);
	}
	template <typename T = void> T OnPopWindowCallBack(bool isOk) {
		return ((T (*)(AssetDownloadBtnTemplate*, bool))(Il2CppBase() + 0x22D278C))(this, isOk);
	}
	template <typename T = void> T SetGoodID(uint32_t itemId, uintptr_t OnResStateChange, bool showMask) {
		return ((T (*)(AssetDownloadBtnTemplate*, uint32_t, uintptr_t, bool))(Il2CppBase() + 0x22D28F4))(this, itemId, OnResStateChange, showMask);
	}
	template <typename T = void> T SetAssetID(int32_t assetID, uintptr_t OnResStateChange, bool showMask) {
		return ((T (*)(AssetDownloadBtnTemplate*, int32_t, uintptr_t, bool))(Il2CppBase() + 0x22D31DC))(this, assetID, OnResStateChange, showMask);
	}
	template <typename T = void> T SetAssetIDS(Il2CppList<int32_t>* assetIDS, uintptr_t OnResStateChange, bool showMask) {
		return ((T (*)(AssetDownloadBtnTemplate*, Il2CppList<int32_t>*, uintptr_t, bool))(Il2CppBase() + 0x22D2F78))(this, assetIDS, OnResStateChange, showMask);
	}
	template <typename T = void> T SetMaskAndTips(bool showModelMask, bool showDownloadTips) {
		return ((T (*)(AssetDownloadBtnTemplate*, bool, bool))(Il2CppBase() + 0x22D33EC))(this, showModelMask, showDownloadTips);
	}
	template <typename T = void> T UpdateBtnState() {
		return ((T (*)(AssetDownloadBtnTemplate*))(Il2CppBase() + 0x22D21B8))(this);
	}
	template <typename T = void> T UpdataProgressBar() {
		return ((T (*)(AssetDownloadBtnTemplate*))(Il2CppBase() + 0x22D3630))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(AssetDownloadBtnTemplate*))(Il2CppBase() + 0x22D3940))(this);
	}

};

}
