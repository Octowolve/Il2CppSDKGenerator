#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattleRoyale {

class BRBagSwitchHUD
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattleRoyale", "BRBagSwitchHUD"));
	}

	template <typename T = uintptr_t> T& NewGuideEffect() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& NewGuideText() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = int32_t> static T& NOBAG_SLOTCOUNT_MAX() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& BIGBAG_SLOTCOUNT_MAX() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& OriginalBg() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> T& ChangeBg() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& ObjNoBag() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = uintptr_t> T& ObjBigBag() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& BRBagSwitchBtn() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& ObjNoBagArray() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& ObjBigBagArray() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = uintptr_t> T& AlphaTween() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetUIBanClickType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetActive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBagSwitchBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateBg() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetButtonsEnable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_WillShow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBagChangeState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshBagState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshBagCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDisable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ChangeEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsSafeActive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}

	template <typename T = uintptr_t> T GetUIBanClickType() {
		return ((T (*)(BRBagSwitchHUD*))(Il2CppBase() + 0x24D333C))(this);
	}
	template <typename T = bool> T get_IsControlByUiState() {
		return ((T (*)(BRBagSwitchHUD*))(Il2CppBase() + 0x24D33E0))(this);
	}
	template <typename T = uintptr_t> T get_TickRate() {
		return ((T (*)(BRBagSwitchHUD*))(Il2CppBase() + 0x24D33E8))(this);
	}
	template <typename T = uintptr_t> T get_mPawnSwitchState() {
		return ((T (*)(BRBagSwitchHUD*))(Il2CppBase() + 0x24D33F0))(this);
	}
	template <typename T = uint64_t> T get_InactiveGameHudState() {
		return ((T (*)(BRBagSwitchHUD*))(Il2CppBase() + 0x24D33FC))(this);
	}
	template <typename T = void> T SetActive(bool value, bool enableOptimize) {
		return ((T (*)(BRBagSwitchHUD*, bool, bool))(Il2CppBase() + 0x24D340C))(this, value, enableOptimize);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(BRBagSwitchHUD*))(Il2CppBase() + 0x24D3678))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(BRBagSwitchHUD*))(Il2CppBase() + 0x24D395C))(this);
	}
	template <typename T = void> T OnBagSwitchBtnClick(uintptr_t go, bool state) {
		return ((T (*)(BRBagSwitchHUD*, uintptr_t, bool))(Il2CppBase() + 0x24D3A2C))(this, go, state);
	}
	template <typename T = void> T UpdateBg(bool isChange) {
		return ((T (*)(BRBagSwitchHUD*, bool))(Il2CppBase() + 0x24D3F98))(this, isChange);
	}
	template <typename T = void> T SetButtonsEnable(bool enable) {
		return ((T (*)(BRBagSwitchHUD*, bool))(Il2CppBase() + 0x24D40A0))(this, enable);
	}
	template <typename T = void> T WillShow() {
		return ((T (*)(BRBagSwitchHUD*))(Il2CppBase() + 0x24D41C0))(this);
	}
	template <typename T = void> T OnBagChangeState(uintptr_t Msg) {
		return ((T (*)(BRBagSwitchHUD*, uintptr_t))(Il2CppBase() + 0x24D445C))(this, Msg);
	}
	template <typename T = void> T RefreshBagState() {
		return ((T (*)(BRBagSwitchHUD*))(Il2CppBase() + 0x24D4270))(this);
	}
	template <typename T = void> T RefreshBagCount(int32_t count, Il2CppArray<uintptr_t>* bagArray) {
		return ((T (*)(BRBagSwitchHUD*, int32_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x24D4508))(this, count, bagArray);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(BRBagSwitchHUD*))(Il2CppBase() + 0x24D465C))(this);
	}
	template <typename T = void> T ChangeEffect(bool showEffect, uintptr_t itemType, Il2CppString* tipsText, uintptr_t fadeAction) {
		return ((T (*)(BRBagSwitchHUD*, bool, uintptr_t, Il2CppString*, uintptr_t))(Il2CppBase() + 0x24D4844))(this, showEffect, itemType, tipsText, fadeAction);
	}
	template <typename T = bool> T IsSafeActive(uintptr_t itemType) {
		return ((T (*)(BRBagSwitchHUD*, uintptr_t))(Il2CppBase() + 0x24D4AB4))(this, itemType);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetUIBanClickType() {
		return ((T (*)(BRBagSwitchHUD*))(Il2CppBase() + 0x24D4BB0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_SetActive(bool P0, bool P1) {
		return ((T (*)(BRBagSwitchHUD*, bool, bool))(Il2CppBase() + 0x24D4BB8))(this, P0, P1);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(BRBagSwitchHUD*))(Il2CppBase() + 0x24D4BC0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(BRBagSwitchHUD*))(Il2CppBase() + 0x24D4BC8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_WillShow() {
		return ((T (*)(BRBagSwitchHUD*))(Il2CppBase() + 0x24D4BD0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnDisable() {
		return ((T (*)(BRBagSwitchHUD*))(Il2CppBase() + 0x24D4BD8))(this);
	}

};

}
