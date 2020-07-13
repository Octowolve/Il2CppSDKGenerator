#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class PropHuntChooseItemHUD
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "PropHuntChooseItemHUD"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& SelectItemCells() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& PriceIcon1() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& PriceIcon2() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> T& PriceLabel1() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& PriceLabel2() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = uintptr_t> T& BuyBtn() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& BuyLabel() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = uintptr_t> T& CanBuySprite() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& CantBuySprite() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = uintptr_t> T& CharacterBG() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& CharacterSprite() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = uintptr_t> T& RaritySprite() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& SoldierLabel() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = uintptr_t> T& ProgressConainer() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> T& ProgressPanel() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = float> T& mCachePanelWidth() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> T& mCachePanelRange() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = float> T& TotalTime() {
		return *(T*)((uintptr_t)this + 0xCC);
	}
	template <typename T = float> T& DynamicTime() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = bool> T& bTimeCounting() {
		return *(T*)((uintptr_t)this + 0xD4);
	}
	template <typename T = int32_t> T& m_CurIndex() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = float> static T& m_ShowWindowTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& m_LoadoutDataStore() {
		return *(T*)((uintptr_t)this + 0xDC);
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
	template <typename T = uintptr_t> static T& __Hotfix0_ForceRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetViewData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetSelectItemData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_BuyBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Section1BtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Section2BtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Section3BtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SelectItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsMoneyEnough() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}

	template <typename T = uintptr_t> T get_mLoadoutDataStore() {
		return ((T (*)(PropHuntChooseItemHUD*))(Il2CppBase() + 0x3A9A320))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(PropHuntChooseItemHUD*))(Il2CppBase() + 0x3A9A3D0))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(PropHuntChooseItemHUD*))(Il2CppBase() + 0x3A9A52C))(this);
	}
	template <typename T = void> T SelectBagIndexDelta(int32_t delta) {
		return ((T (*)(PropHuntChooseItemHUD*, int32_t))(Il2CppBase() + 0x3A9ABD8))(this, delta);
	}
	template <typename T = bool> T GamepadNext() {
		return ((T (*)(PropHuntChooseItemHUD*))(Il2CppBase() + 0x3A9ADB4))(this);
	}
	template <typename T = bool> T GamepadPrevious() {
		return ((T (*)(PropHuntChooseItemHUD*))(Il2CppBase() + 0x3A9AE68))(this);
	}
	template <typename T = void> T ForceRegisterDelegates() {
		return ((T (*)(PropHuntChooseItemHUD*))(Il2CppBase() + 0x3A9AF14))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(PropHuntChooseItemHUD*))(Il2CppBase() + 0x3A9AFAC))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(PropHuntChooseItemHUD*))(Il2CppBase() + 0x3A9B170))(this);
	}
	template <typename T = uintptr_t> T get_TickRate() {
		return ((T (*)(PropHuntChooseItemHUD*))(Il2CppBase() + 0x3A9B334))(this);
	}
	template <typename T = void> T Tick(float dt) {
		return ((T (*)(PropHuntChooseItemHUD*, float))(Il2CppBase() + 0x3A9B33C))(this, dt);
	}
	template <typename T = void> T SetViewData() {
		return ((T (*)(PropHuntChooseItemHUD*))(Il2CppBase() + 0x3A9B5EC))(this);
	}
	template <typename T = void> T SetSelectItemData(int32_t index, uintptr_t itemInfo) {
		return ((T (*)(PropHuntChooseItemHUD*, int32_t, uintptr_t))(Il2CppBase() + 0x3A9BCA8))(this, index, itemInfo);
	}
	template <typename T = void> T BuyBtnClick(uintptr_t obj) {
		return ((T (*)(PropHuntChooseItemHUD*, uintptr_t))(Il2CppBase() + 0x3A9C160))(this, obj);
	}
	template <typename T = void> T Section1BtnClick(uintptr_t obj) {
		return ((T (*)(PropHuntChooseItemHUD*, uintptr_t))(Il2CppBase() + 0x3A9C620))(this, obj);
	}
	template <typename T = void> T Section2BtnClick(uintptr_t obj) {
		return ((T (*)(PropHuntChooseItemHUD*, uintptr_t))(Il2CppBase() + 0x3A9C72C))(this, obj);
	}
	template <typename T = void> T Section3BtnClick(uintptr_t obj) {
		return ((T (*)(PropHuntChooseItemHUD*, uintptr_t))(Il2CppBase() + 0x3A9C840))(this, obj);
	}
	template <typename T = void> T SelectItem() {
		return ((T (*)(PropHuntChooseItemHUD*))(Il2CppBase() + 0x3A9BFC4))(this);
	}
	template <typename T = bool> T IsMoneyEnough() {
		return ((T (*)(PropHuntChooseItemHUD*))(Il2CppBase() + 0x3A9C4D0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Awake() {
		return ((T (*)(PropHuntChooseItemHUD*))(Il2CppBase() + 0x3A9C954))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Start() {
		return ((T (*)(PropHuntChooseItemHUD*))(Il2CppBase() + 0x3A9C95C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_ForceRegisterDelegates() {
		return ((T (*)(PropHuntChooseItemHUD*))(Il2CppBase() + 0x3A9C964))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(PropHuntChooseItemHUD*))(Il2CppBase() + 0x3A9C96C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(PropHuntChooseItemHUD*))(Il2CppBase() + 0x3A9C974))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(PropHuntChooseItemHUD*, float))(Il2CppBase() + 0x3A9C97C))(this, P0);
	}

};

}
