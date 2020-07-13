#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattlePass {

class BattlePassWeekTaskTabVIew
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattlePass", "BattlePassWeekTaskTabVIew"));
	}

	template <typename T = uintptr_t> T& WeekTabTemplet() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& WeeInfoScrollVIew() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& SpvpTabGrid() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& BrTabGrid() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& ZbTabGrid() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& SpvpTableChildList() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& BrTableChildList() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& ZbTableChildList() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& AddBtn() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& SubBtn() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& AddSprite() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& SubSprite() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = int32_t> T& mMinLimit() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = int32_t> T& mMaxLimit() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = void*> T& mCallback() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = int32_t> T& mCurIndex() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = float> T& mDisableAlpha() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = float> T& mEnableAlpha() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Show() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Refresh() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnAddBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnSubBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetStateByWeekId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitWeekTaskTab() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetWeekTaskByMode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetWeekTableView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FinishCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnWeekIdChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(BattlePassWeekTaskTabVIew*))(Il2CppBase() + 0x2C4467C))(this);
	}
	template <typename T = void> T Init(int32_t min, int32_t max, void* cb) {
		return ((T (*)(BattlePassWeekTaskTabVIew*, int32_t, int32_t, void*))(Il2CppBase() + 0x2C3D3C0))(this, min, max, cb);
	}
	template <typename T = void> T Show(int32_t index) {
		return ((T (*)(BattlePassWeekTaskTabVIew*, int32_t))(Il2CppBase() + 0x2C3D494))(this, index);
	}
	template <typename T = void> T Refresh(int32_t index) {
		return ((T (*)(BattlePassWeekTaskTabVIew*, int32_t))(Il2CppBase() + 0x2C4495C))(this, index);
	}
	template <typename T = void> T OnAddBtnClick(uintptr_t obj) {
		return ((T (*)(BattlePassWeekTaskTabVIew*, uintptr_t))(Il2CppBase() + 0x2C44A38))(this, obj);
	}
	template <typename T = void> T OnSubBtnClick(uintptr_t obj) {
		return ((T (*)(BattlePassWeekTaskTabVIew*, uintptr_t))(Il2CppBase() + 0x2C44AFC))(this, obj);
	}
	template <typename T = void> T SetStateByWeekId(uintptr_t modeType, int32_t weekId) {
		return ((T (*)(BattlePassWeekTaskTabVIew*, uintptr_t, int32_t))(Il2CppBase() + 0x2C3D624))(this, modeType, weekId);
	}
	template <typename T = void> T InitWeekTaskTab() {
		return ((T (*)(BattlePassWeekTaskTabVIew*))(Il2CppBase() + 0x2C44890))(this);
	}
	template <typename T = void> T SetWeekTaskByMode(uintptr_t tabGrid, uintptr_t modeType) {
		return ((T (*)(BattlePassWeekTaskTabVIew*, uintptr_t, uintptr_t))(Il2CppBase() + 0x2C450E0))(this, tabGrid, modeType);
	}
	template <typename T = void> T SetWeekTableView(uintptr_t modeType, int32_t WeekId) {
		return ((T (*)(BattlePassWeekTaskTabVIew*, uintptr_t, int32_t))(Il2CppBase() + 0x2C45614))(this, modeType, WeekId);
	}
	template <typename T = Il2CppString*> T FinishCount(uintptr_t mType, int32_t WeeekId) {
		return ((T (*)(BattlePassWeekTaskTabVIew*, uintptr_t, int32_t))(Il2CppBase() + 0x2C44BC0))(this, mType, WeeekId);
	}
	template <typename T = void> T OnWeekIdChange(int32_t index) {
		return ((T (*)(BattlePassWeekTaskTabVIew*, int32_t))(Il2CppBase() + 0x2C4592C))(this, index);
	}

};

}
