#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace FrontEnd {

class SignMainView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "FrontEnd", "SignMainView"));
	}

	template <typename T = uintptr_t> T& BtnClose() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = uintptr_t> T& NormalTitle() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> T& NewFishTitle() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& Days() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& Days_1() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = uintptr_t> T& HasReclamTime() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = uintptr_t> T& TimeRange() {
		return *(T*)((uintptr_t)this + 0xC4);
	}
	template <typename T = uintptr_t> T& NormalSignDesc() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = uintptr_t> T& NewFishSignDesc() {
		return *(T*)((uintptr_t)this + 0xCC);
	}
	template <typename T = uintptr_t> T& BtnClam() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = uintptr_t> T& BtnReclam() {
		return *(T*)((uintptr_t)this + 0xD4);
	}
	template <typename T = uintptr_t> T& ReclamCost() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = uintptr_t> T& uiStandards() {
		return *(T*)((uintptr_t)this + 0xDC);
	}
	template <typename T = uintptr_t> T& QQPlaform() {
		return *(T*)((uintptr_t)this + 0xE0);
	}
	template <typename T = uintptr_t> T& WeChatPlaform() {
		return *(T*)((uintptr_t)this + 0xE4);
	}
	template <typename T = uintptr_t> T& EffectTf() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = int32_t> T& CostNumber() {
		return *(T*)((uintptr_t)this + 0xEC);
	}
	template <typename T = uintptr_t> T& uiGrid() {
		return *(T*)((uintptr_t)this + 0xF0);
	}
	template <typename T = uintptr_t> T& mScrollView() {
		return *(T*)((uintptr_t)this + 0xF4);
	}
	template <typename T = uintptr_t> T& mAnimator() {
		return *(T*)((uintptr_t)this + 0xF8);
	}
	template <typename T = bool> T& mEnbled() {
		return *(T*)((uintptr_t)this + 0xFC);
	}
	template <typename T = int32_t> T& hasSignTime() {
		return *(T*)((uintptr_t)this + 0x100);
	}
	template <typename T = int32_t> T& ItemWigth() {
		return *(T*)((uintptr_t)this + 0x104);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitUI() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetFormatTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetUIGridPos() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetRecovery() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetAnimtorEnble() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetCulling() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetAnimtorTimer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetUIPos() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClearTimer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(SignMainView*))(Il2CppBase() + 0x38621AC))(this);
	}
	template <typename T = void> T InitUI(uintptr_t ds) {
		return ((T (*)(SignMainView*, uintptr_t))(Il2CppBase() + 0x3860078))(this, ds);
	}
	template <typename T = Il2CppString*> T GetFormatTime(int32_t time) {
		return ((T (*)(SignMainView*, int32_t))(Il2CppBase() + 0x3862254))(this, time);
	}
	template <typename T = void> T SetUIGridPos(int32_t DayIndex) {
		return ((T (*)(SignMainView*, int32_t))(Il2CppBase() + 0x3862504))(this, DayIndex);
	}
	template <typename T = void> T SetRecovery() {
		return ((T (*)(SignMainView*))(Il2CppBase() + 0x3861CD8))(this);
	}
	template <typename T = void> T SetAnimtorEnble(bool isEnabled) {
		return ((T (*)(SignMainView*, bool))(Il2CppBase() + 0x3861BB8))(this, isEnabled);
	}
	template <typename T = void> T SetCulling() {
		return ((T (*)(SignMainView*))(Il2CppBase() + 0x3862A3C))(this);
	}
	template <typename T = void> T SetAnimtorTimer() {
		return ((T (*)(SignMainView*))(Il2CppBase() + 0x3862DB4))(this);
	}
	template <typename T = void> T SetUIPos() {
		return ((T (*)(SignMainView*))(Il2CppBase() + 0x3862E5C))(this);
	}
	template <typename T = void> T ClearTimer() {
		return ((T (*)(SignMainView*))(Il2CppBase() + 0x3861A38))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Awake() {
		return ((T (*)(SignMainView*))(Il2CppBase() + 0x3862F04))(this);
	}

};

}
