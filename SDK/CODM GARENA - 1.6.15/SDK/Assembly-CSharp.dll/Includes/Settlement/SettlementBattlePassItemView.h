#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Settlement {

class SettlementBattlePassItemView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Settlement", "SettlementBattlePassItemView"));
	}

	template <typename T = uintptr_t> T& ItemTemplate() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& LabelExpReward() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& LabelTaskDesc() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> T& LabelProgress() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& LabelCurr() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = uintptr_t> T& LabelTarget() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& LabelAdd() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = uintptr_t> T& FinishAnimator() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& GOProgressRoot() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = uintptr_t> T& GOFinishRoot() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& ProgressTask() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = uintptr_t> T& ShineWidget() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& Tweener() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = uintptr_t> T& shineObj() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> T& cullPanel() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = float> T& AnimationDuration() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> T& Tips() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = uintptr_t> T& TipsBeginPos() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = uintptr_t> T& TipsEndPos() {
		return *(T*)((uintptr_t)this + 0xC4);
	}
	template <typename T = uintptr_t> T& taskInfo() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = uintptr_t> T& scrollView() {
		return *(T*)((uintptr_t)this + 0xCC);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetTips() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T SetInfo(uintptr_t _taskInfo, uintptr_t _scollView) {
		return ((T (*)(SettlementBattlePassItemView*, uintptr_t, uintptr_t))(Il2CppBase() + 0x3B58194))(this, _taskInfo, _scollView);
	}
	template <typename T = void> T UpdateView() {
		return ((T (*)(SettlementBattlePassItemView*))(Il2CppBase() + 0x3B58260))(this);
	}
	template <typename T = void> T SetTips(bool bShow, float tipsPosPercent) {
		return ((T (*)(SettlementBattlePassItemView*, bool, float))(Il2CppBase() + 0x3B5A350))(this, bShow, tipsPosPercent);
	}
	template <typename T = bool> T UpdateViewm__0(uintptr_t s) {
		return ((T (*)(SettlementBattlePassItemView*, uintptr_t))(Il2CppBase() + 0x3B5A45C))(this, s);
	}
	template <typename T = void> T UpdateViewm__1() {
		return ((T (*)(SettlementBattlePassItemView*))(Il2CppBase() + 0x3B5A510))(this);
	}
	template <typename T = bool> T UpdateViewm__2(uintptr_t s) {
		return ((T (*)(SettlementBattlePassItemView*, uintptr_t))(Il2CppBase() + 0x3B5A5D8))(this, s);
	}
	template <typename T = void> T UpdateViewm__3() {
		return ((T (*)(SettlementBattlePassItemView*))(Il2CppBase() + 0x3B5A68C))(this);
	}
	template <typename T = bool> T UpdateViewm__4(uintptr_t s) {
		return ((T (*)(SettlementBattlePassItemView*, uintptr_t))(Il2CppBase() + 0x3B5A754))(this, s);
	}
	template <typename T = void> T UpdateViewm__5() {
		return ((T (*)(SettlementBattlePassItemView*))(Il2CppBase() + 0x3B5A830))(this);
	}

};

}
