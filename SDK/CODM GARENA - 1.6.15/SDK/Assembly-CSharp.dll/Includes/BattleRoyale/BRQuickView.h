#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattleRoyale {

class BRQuickView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattleRoyale", "BRQuickView"));
	}

	template <typename T = uintptr_t> T& AlphaTween() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& Root() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& ArrowOpenBtn() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> T& ArrowCloseBtn() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& Base() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = uintptr_t> T& UpperListRoot() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& UpperList() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = uintptr_t> T& InactiveLabelGo() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& OriginalBg() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = uintptr_t> T& ChangeBg() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& Anim() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = uintptr_t> T& ClickEff() {
		return *(T*)((uintptr_t)this + 0xA8);
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
	template <typename T = uintptr_t> static T& __Hotfix0_TweenQuickView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshUI() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateBg() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HandleArrow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_WaitClose() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClickFeedback() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}

	template <typename T = uintptr_t> T get_mPawnSwitchState() {
		return ((T (*)(BRQuickView*))(Il2CppBase() + 0x1B1AEC4))(this);
	}
	template <typename T = uintptr_t> T GetUIBanClickType() {
		return ((T (*)(BRQuickView*))(Il2CppBase() + 0x1B1AED0))(this);
	}
	template <typename T = bool> T get_IsControlByUiState() {
		return ((T (*)(BRQuickView*))(Il2CppBase() + 0x1B1AF74))(this);
	}
	template <typename T = uint64_t> T get_InactiveGameHudState() {
		return ((T (*)(BRQuickView*))(Il2CppBase() + 0x1B1AF7C))(this);
	}
	template <typename T = uintptr_t> T get_TickRate() {
		return ((T (*)(BRQuickView*))(Il2CppBase() + 0x1B1AF8C))(this);
	}
	template <typename T = void> T SetActive(bool value, bool enableOptimize) {
		return ((T (*)(BRQuickView*, bool, bool))(Il2CppBase() + 0x1B1AF94))(this, value, enableOptimize);
	}
	template <typename T = void> T TweenQuickView() {
		return ((T (*)(BRQuickView*))(Il2CppBase() + 0x1B1B100))(this);
	}
	template <typename T = void> T RefreshUI(uintptr_t baseItemData, Il2CppList<uintptr_t>* upperItemDataList) {
		return ((T (*)(BRQuickView*, uintptr_t, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x1B0E124))(this, baseItemData, upperItemDataList);
	}
	template <typename T = void> T UpdateBg(bool isChange) {
		return ((T (*)(BRQuickView*, bool))(Il2CppBase() + 0x1B13C98))(this, isChange);
	}
	template <typename T = void> T HandleArrow(bool state) {
		return ((T (*)(BRQuickView*, bool))(Il2CppBase() + 0x1B0F9AC))(this, state);
	}
	template <typename T = uintptr_t> T WaitClose(float delay, uintptr_t act) {
		return ((T (*)(BRQuickView*, float, uintptr_t))(Il2CppBase() + 0x1B1B374))(this, delay, act);
	}
	template <typename T = void> T ClickFeedback() {
		return ((T (*)(BRQuickView*))(Il2CppBase() + 0x1B12E00))(this);
	}
	template <typename T = void> T HandleArrowm__0() {
		return ((T (*)(BRQuickView*))(Il2CppBase() + 0x1B1B48C))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetUIBanClickType() {
		return ((T (*)(BRQuickView*))(Il2CppBase() + 0x1B1B510))(this);
	}
	template <typename T = void> T xLuaBaseProxy_SetActive(bool P0, bool P1) {
		return ((T (*)(BRQuickView*, bool, bool))(Il2CppBase() + 0x1B1B518))(this, P0, P1);
	}

};

}
