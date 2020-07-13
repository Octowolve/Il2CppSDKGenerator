#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameShop {

class ShopScrollPlayView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameShop", "ShopScrollPlayView"));
	}

	template <typename T = uintptr_t> T& clickEntrance() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = uint32_t> static T& LuckyDrawShopId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uint32_t> static T& LuckyBoardShopId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = bool> T& isSkipToLimitofferWindow() {
		return *(T*)((uintptr_t)this + 0xDC);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SwitchToView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TLogRepoter() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SwitchOpenURL() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SwitchToLuckBoard() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SwitchInviteNewbie() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SwitchToOTO() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SwitchToShopTab() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SwitchToSafeBox() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SwitchToLuckDraw() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SendLuckBoxQueryGroupProbReq() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SwitchToFirstRecharge() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SwitchToAccumulateRecharge() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SwitchToSingleRecharge() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SwitchToBP() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SwitchToShop() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsDataValid() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowNext() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetClickOpenLimitOfferWindow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}

	template <typename T = void> T SwitchToView(int32_t index) {
		return ((T (*)(ShopScrollPlayView*, int32_t))(Il2CppBase() + 0x23B0E04))(this, index);
	}
	template <typename T = void> T TLogRepoter(uintptr_t data, int32_t index) {
		return ((T (*)(ShopScrollPlayView*, uintptr_t, int32_t))(Il2CppBase() + 0x23B2978))(this, data, index);
	}
	template <typename T = void> T SwitchOpenURL(Il2CppString* openURL) {
		return ((T (*)(ShopScrollPlayView*, Il2CppString*))(Il2CppBase() + 0x23B24E4))(this, openURL);
	}
	template <typename T = void> T SwitchToLuckBoard(int32_t shopId) {
		return ((T (*)(ShopScrollPlayView*, int32_t))(Il2CppBase() + 0x23B2830))(this, shopId);
	}
	template <typename T = void> T SwitchInviteNewbie() {
		return ((T (*)(ShopScrollPlayView*))(Il2CppBase() + 0x23B2698))(this);
	}
	template <typename T = void> T SwitchToOTO(int32_t id) {
		return ((T (*)(ShopScrollPlayView*, int32_t))(Il2CppBase() + 0x23B183C))(this, id);
	}
	template <typename T = void> T SwitchToShopTab(int32_t id) {
		return ((T (*)(ShopScrollPlayView*, int32_t))(Il2CppBase() + 0x23B1FD8))(this, id);
	}
	template <typename T = void> T SwitchToSafeBox(int32_t nAreaId) {
		return ((T (*)(ShopScrollPlayView*, int32_t))(Il2CppBase() + 0x23B2368))(this, nAreaId);
	}
	template <typename T = void> T SwitchToLuckDraw(int32_t id) {
		return ((T (*)(ShopScrollPlayView*, int32_t))(Il2CppBase() + 0x23B1E90))(this, id);
	}
	template <typename T = void> T SendLuckBoxQueryGroupProbReq(uint32_t boxId, uintptr_t source) {
		return ((T (*)(ShopScrollPlayView*, uint32_t, uintptr_t))(Il2CppBase() + 0x23B2DD0))(this, boxId, source);
	}
	template <typename T = void> T SwitchToFirstRecharge() {
		return ((T (*)(ShopScrollPlayView*))(Il2CppBase() + 0x23B1988))(this);
	}
	template <typename T = void> T SwitchToAccumulateRecharge(int32_t id) {
		return ((T (*)(ShopScrollPlayView*, int32_t))(Il2CppBase() + 0x23B1AC4))(this, id);
	}
	template <typename T = void> T SwitchToSingleRecharge(int32_t id) {
		return ((T (*)(ShopScrollPlayView*, int32_t))(Il2CppBase() + 0x23B1D48))(this, id);
	}
	template <typename T = void> T SwitchToBP() {
		return ((T (*)(ShopScrollPlayView*))(Il2CppBase() + 0x23B1C0C))(this);
	}
	template <typename T = void> T SwitchToShop(uintptr_t data) {
		return ((T (*)(ShopScrollPlayView*, uintptr_t))(Il2CppBase() + 0x23B1654))(this, data);
	}
	template <typename T = bool> T IsDataValid() {
		return ((T (*)(ShopScrollPlayView*))(Il2CppBase() + 0x23B3128))(this);
	}
	template <typename T = void> T ShowNext() {
		return ((T (*)(ShopScrollPlayView*))(Il2CppBase() + 0x23B31F8))(this);
	}
	template <typename T = void> T SetClickOpenLimitOfferWindow(bool isSkipToLimitofferWindow) {
		return ((T (*)(ShopScrollPlayView*, bool))(Il2CppBase() + 0x23B32D0))(this, isSkipToLimitofferWindow);
	}
	template <typename T = void> T xLuaBaseProxy_SwitchToView(int32_t P0) {
		return ((T (*)(ShopScrollPlayView*, int32_t))(Il2CppBase() + 0x23B33AC))(this, P0);
	}
	template <typename T = bool> T xLuaBaseProxy_IsDataValid() {
		return ((T (*)(ShopScrollPlayView*))(Il2CppBase() + 0x23B33B4))(this);
	}

};

}
