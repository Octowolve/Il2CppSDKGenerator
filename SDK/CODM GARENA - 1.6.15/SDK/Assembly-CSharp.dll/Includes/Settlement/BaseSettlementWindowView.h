#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Settlement {

class BaseSettlementWindowView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Settlement", "BaseSettlementWindowView"));
	}

	template <typename T = uintptr_t> T& DetailTipEffect() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& ReportTipEffect() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& BtnDetail() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> T& BtnReport() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& beforeEnableAnimator() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = uintptr_t> T& IDCollection() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& IDCollectionIcon() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = uintptr_t> T& PickUpOrShowMask() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& ShowAnimator() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = uintptr_t> T& BottomRightPlayagainStateView() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& BottomRightAgainNoticeNode() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = uintptr_t> T& TopLeftPlayagainStateView() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& TopLeftAgainNoticeNode() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = uintptr_t> T& LabelPlayAgain() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> T& BtnPlayAgain() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = uintptr_t> T& BottomRightPlayAgainParentTable() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> T& TopLeftPlayAgainParentTable() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = uint64_t> T& endTime() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = uint32_t> T& localPlayerState() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = uintptr_t> T& remainTimer() {
		return *(T*)((uintptr_t)this + 0xCC);
	}
	template <typename T = bool> T& isUserTopLeftPlayAgain() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = uintptr_t> T& shareContainer() {
		return *(T*)((uintptr_t)this + 0xD4);
	}
	template <typename T = void*> static T& f__am$cache0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowAnimatorMask() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HideAnimatorMask() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HideReportInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayUIAnimAndEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshPlayAgainBtnLabel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEnable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDisable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateRemainTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshBottomRightTable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshTopLeftTable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClearTimer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}

	template <typename T = uintptr_t> T get_settlementDs() {
		return ((T (*)(BaseSettlementWindowView*))(Il2CppBase() + 0x3C14AB4))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(BaseSettlementWindowView*))(Il2CppBase() + 0x3C14B50))(this);
	}
	template <typename T = uintptr_t> T get_ds() {
		return ((T (*)(BaseSettlementWindowView*))(Il2CppBase() + 0x3C14DA8))(this);
	}
	template <typename T = void> T ShowAnimatorMask(float MaskTime) {
		return ((T (*)(BaseSettlementWindowView*, float))(Il2CppBase() + 0x3C14E44))(this, MaskTime);
	}
	template <typename T = void> T HideAnimatorMask() {
		return ((T (*)(BaseSettlementWindowView*))(Il2CppBase() + 0x3C14F64))(this);
	}
	template <typename T = void> T HideReportInfo(uintptr_t ReportBtn) {
		return ((T (*)(BaseSettlementWindowView*, uintptr_t))(Il2CppBase() + 0x3C15074))(this, ReportBtn);
	}
	template <typename T = void> T PlayUIAnimAndEffect() {
		return ((T (*)(BaseSettlementWindowView*))(Il2CppBase() + 0x3C12234))(this);
	}
	template <typename T = void> T RefreshPlayAgainBtnLabel(uintptr_t ds) {
		return ((T (*)(BaseSettlementWindowView*, uintptr_t))(Il2CppBase() + 0x3C154C4))(this, ds);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(BaseSettlementWindowView*))(Il2CppBase() + 0x3C15C34))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(BaseSettlementWindowView*))(Il2CppBase() + 0x3C15CEC))(this);
	}
	template <typename T = void> T UpdateRemainTime() {
		return ((T (*)(BaseSettlementWindowView*))(Il2CppBase() + 0x3C15690))(this);
	}
	template <typename T = void> T RefreshBottomRightTable() {
		return ((T (*)(BaseSettlementWindowView*))(Il2CppBase() + 0x3C13BC4))(this);
	}
	template <typename T = void> T RefreshTopLeftTable() {
		return ((T (*)(BaseSettlementWindowView*))(Il2CppBase() + 0x3C139E0))(this);
	}
	template <typename T = void> T ClearTimer() {
		return ((T (*)(BaseSettlementWindowView*))(Il2CppBase() + 0x3C15B7C))(this);
	}
	template <typename T = bool> static T Initm__0(uintptr_t it) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3C15D9C))(0, it);
	}
	template <typename T = void> T RefreshTopLeftTablem__1() {
		return ((T (*)(BaseSettlementWindowView*))(Il2CppBase() + 0x3C15E88))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(BaseSettlementWindowView*))(Il2CppBase() + 0x3C16090))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnEnable() {
		return ((T (*)(BaseSettlementWindowView*))(Il2CppBase() + 0x3C16098))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnDisable() {
		return ((T (*)(BaseSettlementWindowView*))(Il2CppBase() + 0x3C160A0))(this);
	}

};

}
