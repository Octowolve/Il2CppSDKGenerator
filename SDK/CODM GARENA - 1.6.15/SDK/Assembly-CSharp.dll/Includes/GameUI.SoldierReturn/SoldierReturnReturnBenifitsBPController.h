#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI.SoldierReturn {

class SoldierReturnReturnBenifitsBPController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI.SoldierReturn", "SoldierReturnReturnBenifitsBPController"));
	}

	template <typename T = bool> T& isClaimed() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = bool> T& isCanClaim() {
		return *(T*)((uintptr_t)this + 0x3D);
	}
	template <typename T = int32_t> T& _selectIndex() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppString*> T& _preTextureDownloadURL() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> T& _uiView() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _bgTextureConfig() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnOpen() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnClose() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NotifyDataStoreUpdated() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnClaimBtnClicked() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLeftNavgationBtnClicked() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRightNavgationBtnClicked() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Initialize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Reset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetReward() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetClaimBtn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetTttleAndDesc() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetTexture() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_ResetTexture() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetTextureNavgation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DownloadTexture() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CancelDownloadTexture() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnTextureDownLoad() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDataCallback() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDataCallback() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetBPTierLevel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BuildBenifitsBPTextureConfig() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetTextureConfig() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(SoldierReturnReturnBenifitsBPController*))(Il2CppBase() + 0x3CAFFBC))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(SoldierReturnReturnBenifitsBPController*))(Il2CppBase() + 0x3CB0060))(this);
	}
	template <typename T = void> T OnOpen() {
		return ((T (*)(SoldierReturnReturnBenifitsBPController*))(Il2CppBase() + 0x3CB0470))(this);
	}
	template <typename T = void> T OnClose() {
		return ((T (*)(SoldierReturnReturnBenifitsBPController*))(Il2CppBase() + 0x3CB0858))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(SoldierReturnReturnBenifitsBPController*))(Il2CppBase() + 0x3CB0B94))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(SoldierReturnReturnBenifitsBPController*))(Il2CppBase() + 0x3CB0EA4))(this);
	}
	template <typename T = void> T NotifyDataStoreUpdated(uintptr_t SourceDataStore, Il2CppString* PropertyTag, int32_t ArrayIndex) {
		return ((T (*)(SoldierReturnReturnBenifitsBPController*, uintptr_t, Il2CppString*, int32_t))(Il2CppBase() + 0x3CB1188))(this, SourceDataStore, PropertyTag, ArrayIndex);
	}
	template <typename T = void> T OnClaimBtnClicked() {
		return ((T (*)(SoldierReturnReturnBenifitsBPController*))(Il2CppBase() + 0x3CB1254))(this);
	}
	template <typename T = void> T OnLeftNavgationBtnClicked() {
		return ((T (*)(SoldierReturnReturnBenifitsBPController*))(Il2CppBase() + 0x3CB13A4))(this);
	}
	template <typename T = void> T OnRightNavgationBtnClicked() {
		return ((T (*)(SoldierReturnReturnBenifitsBPController*))(Il2CppBase() + 0x3CB1538))(this);
	}
	template <typename T = void> T Initialize() {
		return ((T (*)(SoldierReturnReturnBenifitsBPController*))(Il2CppBase() + 0x3CB0174))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(SoldierReturnReturnBenifitsBPController*))(Il2CppBase() + 0x3CB0544))(this);
	}
	template <typename T = void> T ResetReward(Il2CppList<uintptr_t>* rewards, uintptr_t reward1Count, uintptr_t reward2Count) {
		return ((T (*)(SoldierReturnReturnBenifitsBPController*, Il2CppList<uintptr_t>*, uintptr_t, uintptr_t))(Il2CppBase() + 0x3CB1B70))(this, rewards, reward1Count, reward2Count);
	}
	template <typename T = int32_t> T ResetItem(uintptr_t reward, uintptr_t itemUI, uintptr_t tierObject, uintptr_t tierLevelLabel, uintptr_t claimedObject, uintptr_t rootObject) {
		return ((T (*)(SoldierReturnReturnBenifitsBPController*, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x3CB2044))(this, reward, itemUI, tierObject, tierLevelLabel, claimedObject, rootObject);
	}
	template <typename T = void> T ResetClaimBtn() {
		return ((T (*)(SoldierReturnReturnBenifitsBPController*))(Il2CppBase() + 0x3CB1954))(this);
	}
	template <typename T = void> T ResetTttleAndDesc(Il2CppString* title, Il2CppString* desc, int32_t num1, int32_t num2) {
		return ((T (*)(SoldierReturnReturnBenifitsBPController*, Il2CppString*, Il2CppString*, int32_t, int32_t))(Il2CppBase() + 0x3CB1E3C))(this, title, desc, num1, num2);
	}
	template <typename T = void> T ResetTexture(int32_t selectIndex) {
		return ((T (*)(SoldierReturnReturnBenifitsBPController*, int32_t))(Il2CppBase() + 0x3CB1450))(this, selectIndex);
	}
	template <typename T = void> T ResetTexture_1(Il2CppString* cdn, Il2CppString* local) {
		return ((T (*)(SoldierReturnReturnBenifitsBPController*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x3CB25D8))(this, cdn, local);
	}
	template <typename T = void> T ResetTextureNavgation() {
		return ((T (*)(SoldierReturnReturnBenifitsBPController*))(Il2CppBase() + 0x3CB288C))(this);
	}
	template <typename T = void> T DownloadTexture(Il2CppString* url) {
		return ((T (*)(SoldierReturnReturnBenifitsBPController*, Il2CppString*))(Il2CppBase() + 0x3CB2A38))(this, url);
	}
	template <typename T = void> T CancelDownloadTexture() {
		return ((T (*)(SoldierReturnReturnBenifitsBPController*))(Il2CppBase() + 0x3CB0908))(this);
	}
	template <typename T = void> T OnTextureDownLoad(Il2CppString* url, bool isSuccess, uintptr_t texture) {
		return ((T (*)(SoldierReturnReturnBenifitsBPController*, Il2CppString*, bool, uintptr_t))(Il2CppBase() + 0x3CB2C50))(this, url, isSuccess, texture);
	}
	template <typename T = void> T RegisterDataCallback() {
		return ((T (*)(SoldierReturnReturnBenifitsBPController*))(Il2CppBase() + 0x3CB0DA4))(this);
	}
	template <typename T = void> T UnRegisterDataCallback() {
		return ((T (*)(SoldierReturnReturnBenifitsBPController*))(Il2CppBase() + 0x3CB1088))(this);
	}
	template <typename T = int32_t> T GetBPTierLevel(int32_t exp) {
		return ((T (*)(SoldierReturnReturnBenifitsBPController*, int32_t))(Il2CppBase() + 0x3CB232C))(this, exp);
	}
	template <typename T = void> T BuildBenifitsBPTextureConfig(uintptr_t config) {
		return ((T (*)(SoldierReturnReturnBenifitsBPController*, uintptr_t))(Il2CppBase() + 0x3CB15E4))(this, config);
	}
	template <typename T = void> T GetTextureConfig(uintptr_t* cdn, uintptr_t* local) {
		return ((T (*)(SoldierReturnReturnBenifitsBPController*, uintptr_t*, uintptr_t*))(Il2CppBase() + 0x3CB2484))(this, cdn, local);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(SoldierReturnReturnBenifitsBPController*))(Il2CppBase() + 0x3CB2F00))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(SoldierReturnReturnBenifitsBPController*))(Il2CppBase() + 0x3CB2F08))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnOpen() {
		return ((T (*)(SoldierReturnReturnBenifitsBPController*))(Il2CppBase() + 0x3CB2F10))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnClose() {
		return ((T (*)(SoldierReturnReturnBenifitsBPController*))(Il2CppBase() + 0x3CB2F18))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(SoldierReturnReturnBenifitsBPController*))(Il2CppBase() + 0x3CB2F20))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(SoldierReturnReturnBenifitsBPController*))(Il2CppBase() + 0x3CB2F28))(this);
	}

};

}
