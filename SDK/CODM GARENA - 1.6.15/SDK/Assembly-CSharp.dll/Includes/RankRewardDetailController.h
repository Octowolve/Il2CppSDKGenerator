#pragma once
#include <Il2Cpp/Il2Cpp.h>

class RankRewardDetailController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RankRewardDetailController"));
	}

	template <typename T = uintptr_t> T& m_View() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = bool> T& bMagnifyMode() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uint32_t> T& m_ItemID() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetAssetDownloadBtn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnResDownloaded() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetWeaponCompare() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnCompareBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyTopBarBackBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnMagnifyBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetMagnifyMode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HiedFrameCallingView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetFrameView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetCallingTemplate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(RankRewardDetailController*))(Il2CppBase() + 0x381AD28))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(RankRewardDetailController*))(Il2CppBase() + 0x381ADCC))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(RankRewardDetailController*))(Il2CppBase() + 0x381AFD0))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(RankRewardDetailController*))(Il2CppBase() + 0x381B160))(this);
	}
	template <typename T = void> T SetData(uint32_t itemID) {
		return ((T (*)(RankRewardDetailController*, uint32_t))(Il2CppBase() + 0x381B26C))(this, itemID);
	}
	template <typename T = void> T SetAssetDownloadBtn(uint32_t itemID) {
		return ((T (*)(RankRewardDetailController*, uint32_t))(Il2CppBase() + 0x381C4F8))(this, itemID);
	}
	template <typename T = void> T OnResDownloaded() {
		return ((T (*)(RankRewardDetailController*))(Il2CppBase() + 0x381CCE4))(this);
	}
	template <typename T = void> T SetWeaponCompare(uint32_t itemID) {
		return ((T (*)(RankRewardDetailController*, uint32_t))(Il2CppBase() + 0x381CB50))(this, itemID);
	}
	template <typename T = void> T OnCompareBtnClick() {
		return ((T (*)(RankRewardDetailController*))(Il2CppBase() + 0x381CED8))(this);
	}
	template <typename T = void> T OnNotifyTopBarBackBtnClick(uintptr_t msg) {
		return ((T (*)(RankRewardDetailController*, uintptr_t))(Il2CppBase() + 0x381D154))(this, msg);
	}
	template <typename T = void> T OnMagnifyBtnClick() {
		return ((T (*)(RankRewardDetailController*))(Il2CppBase() + 0x381D280))(this);
	}
	template <typename T = void> T SetMagnifyMode(bool show) {
		return ((T (*)(RankRewardDetailController*, bool))(Il2CppBase() + 0x381D380))(this, show);
	}
	template <typename T = void> T HiedFrameCallingView() {
		return ((T (*)(RankRewardDetailController*))(Il2CppBase() + 0x381C35C))(this);
	}
	template <typename T = void> T SetFrameView(int32_t itemId) {
		return ((T (*)(RankRewardDetailController*, int32_t))(Il2CppBase() + 0x381C70C))(this, itemId);
	}
	template <typename T = void> T SetCallingTemplate(int32_t itemId) {
		return ((T (*)(RankRewardDetailController*, int32_t))(Il2CppBase() + 0x381C934))(this, itemId);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(RankRewardDetailController*))(Il2CppBase() + 0x381D948))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(RankRewardDetailController*))(Il2CppBase() + 0x381D950))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(RankRewardDetailController*))(Il2CppBase() + 0x381D958))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(RankRewardDetailController*))(Il2CppBase() + 0x381D960))(this);
	}

};

}
