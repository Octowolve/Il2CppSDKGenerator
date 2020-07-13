#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattlePass {

class BattlePassNewLevelAwardView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattlePass", "BattlePassNewLevelAwardView"));
	}

	template <typename T = uintptr_t> T& FlowTable() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& LeftButton() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& RightButton() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> T& LeftLine() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& RightLine() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = uintptr_t> T& AniProgress_1() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& AniProgressEffect_1() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = uintptr_t> T& AniProgress_2() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& AniProgressEffect_2() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = bool> T& IsDraging() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = bool> T& EnableBtnDrag() {
		return *(T*)((uintptr_t)this + 0xA1);
	}
	template <typename T = bool> T& ShowLeftDragBtn() {
		return *(T*)((uintptr_t)this + 0xA2);
	}
	template <typename T = bool> T& ShowRightDragBtn() {
		return *(T*)((uintptr_t)this + 0xA3);
	}
	template <typename T = uintptr_t> T& Panel() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = uintptr_t> T& ScrollView() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetEnableBtnDrag() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetDragFlag() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateDargBtn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Tick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetEffectCulling() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = void> T SetEnableBtnDrag(bool flag) {
		return ((T (*)(BattlePassNewLevelAwardView*, bool))(Il2CppBase() + 0x2C1AE78))(this, flag);
	}
	template <typename T = void> T ResetDragFlag() {
		return ((T (*)(BattlePassNewLevelAwardView*))(Il2CppBase() + 0x2C19088))(this);
	}
	template <typename T = uintptr_t> T get_TickRate() {
		return ((T (*)(BattlePassNewLevelAwardView*))(Il2CppBase() + 0x2C21484))(this);
	}
	template <typename T = void> T UpdateDargBtn(int32_t start, int32_t end) {
		return ((T (*)(BattlePassNewLevelAwardView*, int32_t, int32_t))(Il2CppBase() + 0x2C18AC0))(this, start, end);
	}
	template <typename T = void> T Tick(float dt) {
		return ((T (*)(BattlePassNewLevelAwardView*, float))(Il2CppBase() + 0x2C2148C))(this, dt);
	}
	template <typename T = void> T SetEffectCulling(uintptr_t sv, uintptr_t go) {
		return ((T (*)(BattlePassNewLevelAwardView*, uintptr_t, uintptr_t))(Il2CppBase() + 0x2C21710))(this, sv, go);
	}
	template <typename T = void> T xLuaBaseProxy_Tick(float P0) {
		return ((T (*)(BattlePassNewLevelAwardView*, float))(Il2CppBase() + 0x2C21AA0))(this, P0);
	}

};

}
