#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI.Share {

class SettlementShareBtnNodeRankController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI.Share", "SettlementShareBtnNodeRankController"));
	}

	template <typename T = uintptr_t> T& _rankUIView() {
		return *(T*)((uintptr_t)this + 0x50);
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
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnCaptureShareBtnClicked() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Show() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetCapture() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetShareRewardTip() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SafeSetTextureActive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SafeSetHintActive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(SettlementShareBtnNodeRankController*))(Il2CppBase() + 0x448FE78))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(SettlementShareBtnNodeRankController*))(Il2CppBase() + 0x448FF1C))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(SettlementShareBtnNodeRankController*))(Il2CppBase() + 0x4490008))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(SettlementShareBtnNodeRankController*))(Il2CppBase() + 0x4490138))(this);
	}
	template <typename T = void> T OnCaptureShareBtnClicked() {
		return ((T (*)(SettlementShareBtnNodeRankController*))(Il2CppBase() + 0x4490250))(this);
	}
	template <typename T = void> T Show(uintptr_t shareData) {
		return ((T (*)(SettlementShareBtnNodeRankController*, uintptr_t))(Il2CppBase() + 0x4490710))(this, shareData);
	}
	template <typename T = void> T ResetCapture(bool showCaptureTexture) {
		return ((T (*)(SettlementShareBtnNodeRankController*, bool))(Il2CppBase() + 0x44908F8))(this, showCaptureTexture);
	}
	template <typename T = void> T ResetShareRewardTip(bool active) {
		return ((T (*)(SettlementShareBtnNodeRankController*, bool))(Il2CppBase() + 0x4490CF0))(this, active);
	}
	template <typename T = void> T SafeSetTextureActive(bool active) {
		return ((T (*)(SettlementShareBtnNodeRankController*, bool))(Il2CppBase() + 0x4490B48))(this, active);
	}
	template <typename T = void> T SafeSetHintActive(bool active) {
		return ((T (*)(SettlementShareBtnNodeRankController*, bool))(Il2CppBase() + 0x44904C8))(this, active);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(SettlementShareBtnNodeRankController*))(Il2CppBase() + 0x4490E28))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(SettlementShareBtnNodeRankController*))(Il2CppBase() + 0x4490E2C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(SettlementShareBtnNodeRankController*))(Il2CppBase() + 0x4490E30))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(SettlementShareBtnNodeRankController*))(Il2CppBase() + 0x4490E34))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Show(uintptr_t P0) {
		return ((T (*)(SettlementShareBtnNodeRankController*, uintptr_t))(Il2CppBase() + 0x4490E38))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_ResetShareRewardTip(bool P0) {
		return ((T (*)(SettlementShareBtnNodeRankController*, bool))(Il2CppBase() + 0x4490E3C))(this, P0);
	}

};

}
