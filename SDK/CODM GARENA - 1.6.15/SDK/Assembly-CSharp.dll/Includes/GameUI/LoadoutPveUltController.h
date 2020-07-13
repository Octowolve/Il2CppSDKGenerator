#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class LoadoutPveUltController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "LoadoutPveUltController"));
	}

	template <typename T = uintptr_t> T& mView() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = uintptr_t> T& mWeaponItemEasyList() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& mWeaponShowList() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = uintptr_t> T& mCachePveLoadout() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = uintptr_t> static T& CacheShowWeapon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& CacheShowWeaponIndex() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = bool> static T& bNeedResetScrollView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = Il2CppList<uint32_t>*> static T& mWeaponIdList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = bool> T& bMagnifyMode() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DelayInitView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckSpecialTitleEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_WillShow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnClose() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshAllView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyTopBarBackBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnMagnifyBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetMagnifyMode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnWeaponShowBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnWeaponShowedBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnWeaponGotoBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyLoadoutWeaponUpdateData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetWeaponList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ItemSort() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetWeaponData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateWeaponList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateWeaponInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateBtnState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEasyListItemClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEasyListDataChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(LoadoutPveUltController*))(Il2CppBase() + 0x1A97B40))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(LoadoutPveUltController*))(Il2CppBase() + 0x1A97C14))(this);
	}
	template <typename T = void> T DelayInitView() {
		return ((T (*)(LoadoutPveUltController*))(Il2CppBase() + 0x1A97E28))(this);
	}
	template <typename T = void> T CheckSpecialTitleEffect() {
		return ((T (*)(LoadoutPveUltController*))(Il2CppBase() + 0x1A98084))(this);
	}
	template <typename T = void> T WillShow() {
		return ((T (*)(LoadoutPveUltController*))(Il2CppBase() + 0x1A9833C))(this);
	}
	template <typename T = void> T OnClose() {
		return ((T (*)(LoadoutPveUltController*))(Il2CppBase() + 0x1A98528))(this);
	}
	template <typename T = void> T RefreshAllView(bool refresh) {
		return ((T (*)(LoadoutPveUltController*, bool))(Il2CppBase() + 0x1A98434))(this, refresh);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(LoadoutPveUltController*))(Il2CppBase() + 0x1A991B8))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(LoadoutPveUltController*))(Il2CppBase() + 0x1A994EC))(this);
	}
	template <typename T = void> T OnNotifyTopBarBackBtnClick(uintptr_t msg) {
		return ((T (*)(LoadoutPveUltController*, uintptr_t))(Il2CppBase() + 0x1A9976C))(this, msg);
	}
	template <typename T = void> T OnMagnifyBtnClick() {
		return ((T (*)(LoadoutPveUltController*))(Il2CppBase() + 0x1A998C8))(this);
	}
	template <typename T = void> T SetMagnifyMode(bool show) {
		return ((T (*)(LoadoutPveUltController*, bool))(Il2CppBase() + 0x1A999AC))(this, show);
	}
	template <typename T = void> T OnWeaponShowBtnClick() {
		return ((T (*)(LoadoutPveUltController*))(Il2CppBase() + 0x1A9A01C))(this);
	}
	template <typename T = void> T OnWeaponShowedBtnClick() {
		return ((T (*)(LoadoutPveUltController*))(Il2CppBase() + 0x1A9A2C8))(this);
	}
	template <typename T = void> T OnWeaponGotoBtnClick() {
		return ((T (*)(LoadoutPveUltController*))(Il2CppBase() + 0x1A9A440))(this);
	}
	template <typename T = void> T OnNotifyLoadoutWeaponUpdateData(uintptr_t message) {
		return ((T (*)(LoadoutPveUltController*, uintptr_t))(Il2CppBase() + 0x1A9AAC0))(this, message);
	}
	template <typename T = void> T ResetWeaponList() {
		return ((T (*)(LoadoutPveUltController*))(Il2CppBase() + 0x1A986B0))(this);
	}
	template <typename T = int32_t> T ItemSort(uintptr_t a, uintptr_t b) {
		return ((T (*)(LoadoutPveUltController*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1A9ABE0))(this, a, b);
	}
	template <typename T = void> T SetWeaponData() {
		return ((T (*)(LoadoutPveUltController*))(Il2CppBase() + 0x1A990D4))(this);
	}
	template <typename T = void> T UpdateWeaponList() {
		return ((T (*)(LoadoutPveUltController*))(Il2CppBase() + 0x1A9ADD0))(this);
	}
	template <typename T = void> T UpdateWeaponInfo() {
		return ((T (*)(LoadoutPveUltController*))(Il2CppBase() + 0x1A9B0A4))(this);
	}
	template <typename T = void> T UpdateBtnState() {
		return ((T (*)(LoadoutPveUltController*))(Il2CppBase() + 0x1A9B560))(this);
	}
	template <typename T = bool> T OnEasyListItemClick(uintptr_t list, uintptr_t controller, int32_t index) {
		return ((T (*)(LoadoutPveUltController*, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x1A9BD3C))(this, list, controller, index);
	}
	template <typename T = void> T OnEasyListDataChanged(uintptr_t list, int32_t userContext) {
		return ((T (*)(LoadoutPveUltController*, uintptr_t, int32_t))(Il2CppBase() + 0x1A9C0C8))(this, list, userContext);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(LoadoutPveUltController*))(Il2CppBase() + 0x1A9C288))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(LoadoutPveUltController*))(Il2CppBase() + 0x1A9C290))(this);
	}
	template <typename T = void> T xLuaBaseProxy_DelayInitView() {
		return ((T (*)(LoadoutPveUltController*))(Il2CppBase() + 0x1A9C298))(this);
	}
	template <typename T = void> T xLuaBaseProxy_WillShow() {
		return ((T (*)(LoadoutPveUltController*))(Il2CppBase() + 0x1A9C2A0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnClose() {
		return ((T (*)(LoadoutPveUltController*))(Il2CppBase() + 0x1A9C2A8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(LoadoutPveUltController*))(Il2CppBase() + 0x1A9C2B0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(LoadoutPveUltController*))(Il2CppBase() + 0x1A9C2B8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnNotifyTopBarBackBtnClick(uintptr_t P0) {
		return ((T (*)(LoadoutPveUltController*, uintptr_t))(Il2CppBase() + 0x1A9C2C0))(this, P0);
	}

};

}
