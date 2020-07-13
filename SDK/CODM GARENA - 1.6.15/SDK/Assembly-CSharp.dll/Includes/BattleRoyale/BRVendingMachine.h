#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattleRoyale {

class BRVendingMachine
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattleRoyale", "BRVendingMachine"));
	}

	template <typename T = uintptr_t> T& PickUpPoint2() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> T& EffectRoot() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& LightEffectRoot() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uintptr_t> T& Volume() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& ShowChooseItemRoot() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = uintptr_t> T& ShowChooseItemRoot1() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& ShowChooseItemRoot2() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = float> T& LoopEffDelay() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> T& m_LightEff() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = uintptr_t> T& m_StartEff() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = uintptr_t> T& m_LoopEff() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = uintptr_t> T& m_EndEff() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = float> T& m_LoopEffTime() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = bool> T& m_HasLoadChoseEffect() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = bool> T& m_IsShowChoseEffect() {
		return *(T*)((uintptr_t)this + 0x79);
	}
	template <typename T = bool> T& m_IsLastChoseEffect() {
		return *(T*)((uintptr_t)this + 0x7A);
	}
	template <typename T = int32_t> T& m_LastItemAssetId() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& m_ItemObj() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& m_WeaponPartAssetLoader() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDisable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPickUpPoint() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetNextItemId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateStatus() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateChoseState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateCancelState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateConfirmState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TryShowHUD() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShouldShowHud() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetHudState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsChoseEffectLoadOver() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TryLoadChoseEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLoadAssetEnd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SpawnEff() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnLoadChoseEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnLoadEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowChoseEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DoShowChoseEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TickLoopEff() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsShowChooseItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TryShowChooseItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DoShowChooseItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetShowItemRoot() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DoShowChooseItemObj() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckAndCreatLoader() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckAndLoadAsset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLoadComplete() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DoHideChooseItemObj() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPointIdx() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}

	template <typename T = int32_t> T get_CurrItemId() {
		return ((T (*)(BRVendingMachine*))(Il2CppBase() + 0x2653A3C))(this);
	}
	template <typename T = void> T Init(uintptr_t ldInfo) {
		return ((T (*)(BRVendingMachine*, uintptr_t))(Il2CppBase() + 0x2653A50))(this, ldInfo);
	}
	template <typename T = void> T Update() {
		return ((T (*)(BRVendingMachine*))(Il2CppBase() + 0x2653CE4))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(BRVendingMachine*))(Il2CppBase() + 0x2650C44))(this);
	}
	template <typename T = uintptr_t> T GetPickUpPoint() {
		return ((T (*)(BRVendingMachine*))(Il2CppBase() + 0x2653FAC))(this);
	}
	template <typename T = int32_t> T GetNextItemId(int32_t offset) {
		return ((T (*)(BRVendingMachine*, int32_t))(Il2CppBase() + 0x265417C))(this, offset);
	}
	template <typename T = void> T UpdateStatus(uintptr_t info) {
		return ((T (*)(BRVendingMachine*, uintptr_t))(Il2CppBase() + 0x26542D4))(this, info);
	}
	template <typename T = void> T UpdateChoseState() {
		return ((T (*)(BRVendingMachine*))(Il2CppBase() + 0x2651AB0))(this);
	}
	template <typename T = void> T UpdateCancelState() {
		return ((T (*)(BRVendingMachine*))(Il2CppBase() + 0x2651C08))(this);
	}
	template <typename T = void> T UpdateConfirmState() {
		return ((T (*)(BRVendingMachine*))(Il2CppBase() + 0x2651D68))(this);
	}
	template <typename T = void> T TryShowHUD() {
		return ((T (*)(BRVendingMachine*))(Il2CppBase() + 0x26543EC))(this);
	}
	template <typename T = bool> T ShouldShowHud() {
		return ((T (*)(BRVendingMachine*))(Il2CppBase() + 0x2654624))(this);
	}
	template <typename T = void> T SetHudState(bool isShow) {
		return ((T (*)(BRVendingMachine*, bool))(Il2CppBase() + 0x2653B10))(this, isShow);
	}
	template <typename T = bool> T IsChoseEffectLoadOver() {
		return ((T (*)(BRVendingMachine*))(Il2CppBase() + 0x265480C))(this);
	}
	template <typename T = void> T TryLoadChoseEffect() {
		return ((T (*)(BRVendingMachine*))(Il2CppBase() + 0x2654A00))(this);
	}
	template <typename T = void> T OnLoadAssetEnd(int32_t assetId, uintptr_t arg) {
		return ((T (*)(BRVendingMachine*, int32_t, uintptr_t))(Il2CppBase() + 0x2654D00))(this, assetId, arg);
	}
	template <typename T = uintptr_t> T SpawnEff(int32_t assetId, uintptr_t parent) {
		return ((T (*)(BRVendingMachine*, int32_t, uintptr_t))(Il2CppBase() + 0x2654FD0))(this, assetId, parent);
	}
	template <typename T = void> T UnLoadChoseEffect() {
		return ((T (*)(BRVendingMachine*))(Il2CppBase() + 0x2653ECC))(this);
	}
	template <typename T = void> T UnLoadEffect(uintptr_t eff) {
		return ((T (*)(BRVendingMachine*, uintptr_t))(Il2CppBase() + 0x26553B0))(this, eff);
	}
	template <typename T = void> T ShowChoseEffect(bool isShow) {
		return ((T (*)(BRVendingMachine*, bool))(Il2CppBase() + 0x2655504))(this, isShow);
	}
	template <typename T = void> T DoShowChoseEffect() {
		return ((T (*)(BRVendingMachine*))(Il2CppBase() + 0x26551E8))(this);
	}
	template <typename T = void> T TickLoopEff() {
		return ((T (*)(BRVendingMachine*))(Il2CppBase() + 0x2653D94))(this);
	}
	template <typename T = bool> T IsShowChooseItem() {
		return ((T (*)(BRVendingMachine*))(Il2CppBase() + 0x26555C8))(this);
	}
	template <typename T = void> T TryShowChooseItem() {
		return ((T (*)(BRVendingMachine*))(Il2CppBase() + 0x265449C))(this);
	}
	template <typename T = void> T DoShowChooseItem(bool isShow) {
		return ((T (*)(BRVendingMachine*, bool))(Il2CppBase() + 0x265454C))(this, isShow);
	}
	template <typename T = uintptr_t> T GetShowItemRoot() {
		return ((T (*)(BRVendingMachine*))(Il2CppBase() + 0x2655764))(this);
	}
	template <typename T = void> T DoShowChooseItemObj() {
		return ((T (*)(BRVendingMachine*))(Il2CppBase() + 0x2652228))(this);
	}
	template <typename T = void> T CheckAndCreatLoader() {
		return ((T (*)(BRVendingMachine*))(Il2CppBase() + 0x265582C))(this);
	}
	template <typename T = int32_t> T GetAssetId(int32_t itemId) {
		return ((T (*)(BRVendingMachine*, int32_t))(Il2CppBase() + 0x2655A74))(this, itemId);
	}
	template <typename T = void> T CheckAndLoadAsset(int32_t itemId) {
		return ((T (*)(BRVendingMachine*, int32_t))(Il2CppBase() + 0x2655960))(this, itemId);
	}
	template <typename T = void> T OnLoadComplete(int32_t assetID) {
		return ((T (*)(BRVendingMachine*, int32_t))(Il2CppBase() + 0x2655B7C))(this, assetID);
	}
	template <typename T = void> T DoHideChooseItemObj() {
		return ((T (*)(BRVendingMachine*))(Il2CppBase() + 0x2652378))(this);
	}
	template <typename T = int32_t> T GetPointIdx() {
		return ((T (*)(BRVendingMachine*))(Il2CppBase() + 0x2654060))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init(uintptr_t P0) {
		return ((T (*)(BRVendingMachine*, uintptr_t))(Il2CppBase() + 0x2655E48))(this, P0);
	}
	template <typename T = void> T xLuaBaseProxy_Update() {
		return ((T (*)(BRVendingMachine*))(Il2CppBase() + 0x2655E50))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnDisable() {
		return ((T (*)(BRVendingMachine*))(Il2CppBase() + 0x2655E58))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetPickUpPoint() {
		return ((T (*)(BRVendingMachine*))(Il2CppBase() + 0x2655E60))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UpdateStatus(uintptr_t P0) {
		return ((T (*)(BRVendingMachine*, uintptr_t))(Il2CppBase() + 0x2655E68))(this, P0);
	}

};

}
