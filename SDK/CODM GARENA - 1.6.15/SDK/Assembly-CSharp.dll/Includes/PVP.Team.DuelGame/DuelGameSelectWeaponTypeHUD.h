#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PVP.Team.DuelGame {

class DuelGameSelectWeaponTypeHUD
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PVP.Team.DuelGame", "DuelGameSelectWeaponTypeHUD"));
	}

	template <typename T = uintptr_t> T& SelectWeaponRoot() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& WattingRoot() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& SelectItemCells() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> T& BuyBtn() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& BuyLabel() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = uintptr_t> T& CanBuySprite() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& CantBuySprite() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = uintptr_t> T& ProgressConainer() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& ProgressPanel() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = uintptr_t> T& WaittingCountDownRoot() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& WaittingCountDownLabel() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = uintptr_t> T& WaittingCountDownMaskLabel() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = float> T& mCachePanelWidth() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = uintptr_t> T& mCachePanelRange() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = float> T& m_TotalTime() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = float> T& m_DynamicTime() {
		return *(T*)((uintptr_t)this + 0xC4);
	}
	template <typename T = bool> T& m_IsSelectWeapon() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = bool> T& bTimeCounting() {
		return *(T*)((uintptr_t)this + 0xC9);
	}
	template <typename T = int32_t> T& m_CurIndex() {
		return *(T*)((uintptr_t)this + 0xCC);
	}
	template <typename T = float> static T& m_ShowWindowTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SelectBagIndexDelta() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GamepadNext() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GamepadPrevious() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GamepadUp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GamepadDown() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ForceRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetViewData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetSelectItemData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BuyBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SectionBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SelectItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}

	template <typename T = int32_t> T get_CurIndex() {
		return ((T (*)(DuelGameSelectWeaponTypeHUD*))(Il2CppBase() + 0x401042C))(this);
	}
	template <typename T = void> T set_CurIndex(int32_t value) {
		return ((T (*)(DuelGameSelectWeaponTypeHUD*, int32_t))(Il2CppBase() + 0x4010434))(this, value);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(DuelGameSelectWeaponTypeHUD*))(Il2CppBase() + 0x401043C))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(DuelGameSelectWeaponTypeHUD*))(Il2CppBase() + 0x4010598))(this);
	}
	template <typename T = void> T SelectBagIndexDelta(int32_t delta) {
		return ((T (*)(DuelGameSelectWeaponTypeHUD*, int32_t))(Il2CppBase() + 0x4010A58))(this, delta);
	}
	template <typename T = bool> T GamepadNext() {
		return ((T (*)(DuelGameSelectWeaponTypeHUD*))(Il2CppBase() + 0x4010BD8))(this);
	}
	template <typename T = bool> T GamepadPrevious() {
		return ((T (*)(DuelGameSelectWeaponTypeHUD*))(Il2CppBase() + 0x4010C8C))(this);
	}
	template <typename T = bool> T GamepadUp() {
		return ((T (*)(DuelGameSelectWeaponTypeHUD*))(Il2CppBase() + 0x4010D38))(this);
	}
	template <typename T = bool> T GamepadDown() {
		return ((T (*)(DuelGameSelectWeaponTypeHUD*))(Il2CppBase() + 0x4010DE4))(this);
	}
	template <typename T = void> T ForceRegisterDelegates() {
		return ((T (*)(DuelGameSelectWeaponTypeHUD*))(Il2CppBase() + 0x4010E90))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(DuelGameSelectWeaponTypeHUD*))(Il2CppBase() + 0x4010F28))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(DuelGameSelectWeaponTypeHUD*))(Il2CppBase() + 0x40111E0))(this);
	}
	template <typename T = uintptr_t> T get_TickRate() {
		return ((T (*)(DuelGameSelectWeaponTypeHUD*))(Il2CppBase() + 0x4011498))(this);
	}
	template <typename T = void> T Tick(float dt) {
		return ((T (*)(DuelGameSelectWeaponTypeHUD*, float))(Il2CppBase() + 0x40114A0))(this, dt);
	}
	template <typename T = void> T ResetViewData(bool isSelectWeapon) {
		return ((T (*)(DuelGameSelectWeaponTypeHUD*, bool))(Il2CppBase() + 0x4011758))(this, isSelectWeapon);
	}
	template <typename T = void> T SetSelectItemData(int32_t index, uintptr_t itemInfo) {
		return ((T (*)(DuelGameSelectWeaponTypeHUD*, int32_t, uintptr_t))(Il2CppBase() + 0x4011B20))(this, index, itemInfo);
	}
	template <typename T = void> T BuyBtnClick(uintptr_t obj) {
		return ((T (*)(DuelGameSelectWeaponTypeHUD*, uintptr_t))(Il2CppBase() + 0x4011E40))(this, obj);
	}
	template <typename T = void> T SectionBtnClick(uintptr_t obj) {
		return ((T (*)(DuelGameSelectWeaponTypeHUD*, uintptr_t))(Il2CppBase() + 0x4011F4C))(this, obj);
	}
	template <typename T = void> T SelectItem() {
		return ((T (*)(DuelGameSelectWeaponTypeHUD*))(Il2CppBase() + 0x4011990))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Awake() {
		return ((T (*)(DuelGameSelectWeaponTypeHUD*))(Il2CppBase() + 0x40120D0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Start() {
		return ((T (*)(DuelGameSelectWeaponTypeHUD*))(Il2CppBase() + 0x40120D8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_ForceRegisterDelegates() {
		return ((T (*)(DuelGameSelectWeaponTypeHUD*))(Il2CppBase() + 0x40120E0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(DuelGameSelectWeaponTypeHUD*))(Il2CppBase() + 0x40120E8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(DuelGameSelectWeaponTypeHUD*))(Il2CppBase() + 0x40120F0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(DuelGameSelectWeaponTypeHUD*, float))(Il2CppBase() + 0x40120F8))(this, P0);
	}

};

}
