#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattlePass {

class BattlePassNewLevelAwardItemView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattlePass", "BattlePassNewLevelAwardItemView"));
	}

	template <typename T = uintptr_t> T& LevelLabel() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& LevelBg_Gray() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& LevelBg_Yellow() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& AwardItem() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& ItemMask() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& FreeTag() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& ArrowReach() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& ArrowNoReach() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& Progress() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& ProgressBg() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& SpecialMendProgress() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& MeshEffectRoot() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& ParticalEffectRoot() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> T& WhiteEffect() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& GreenEffect() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uintptr_t> T& BlueEffect() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& PurpleEffect() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = uintptr_t> T& OrangeEffect() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& FireEffect() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = uintptr_t> T& MaxlevelTipBtn() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> T& QuickBuyTireBtn() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = bool> T& mNotifyClick() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = bool> T& mBiggerConfigLevel() {
		return *(T*)((uintptr_t)this + 0x69);
	}
	template <typename T = uintptr_t> T& mAwardData() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = int32_t> T& mAwardIndex() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = uintptr_t> T& mAwardConf() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = bool> T& mNeedVip() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = int32_t> T& mConfLv() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = int32_t> T& mCurLv() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = int32_t> T& mCurExp() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnAwake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshMaxlevelTipBtn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitDataAndConf() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshProgress() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetProgress() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AadptSpecialProgress() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetSpecialMendProgressEnable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshLevel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetItemTemplateState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshAward() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnQuickBuyTireBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnMaxlevelTipBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ControlEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetEffectCulling() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetGOEffectCulling() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}

	template <typename T = void> T OnAwake() {
		return ((T (*)(BattlePassNewLevelAwardItemView*))(Il2CppBase() + 0x2C1EDA8))(this);
	}
	template <typename T = void> T SetData(uintptr_t data, uintptr_t sv, int32_t show_lv, int32_t show_exp, bool bNotifyClick) {
		return ((T (*)(BattlePassNewLevelAwardItemView*, uintptr_t, uintptr_t, int32_t, int32_t, bool))(Il2CppBase() + 0x2C1A898))(this, data, sv, show_lv, show_exp, bNotifyClick);
	}
	template <typename T = void> T RefreshMaxlevelTipBtn() {
		return ((T (*)(BattlePassNewLevelAwardItemView*))(Il2CppBase() + 0x2C1F1EC))(this);
	}
	template <typename T = bool> T InitDataAndConf(uintptr_t data) {
		return ((T (*)(BattlePassNewLevelAwardItemView*, uintptr_t))(Il2CppBase() + 0x2C1EFC8))(this, data);
	}
	template <typename T = void> T RefreshProgress() {
		return ((T (*)(BattlePassNewLevelAwardItemView*))(Il2CppBase() + 0x2C1F840))(this);
	}
	template <typename T = void> T ResetProgress() {
		return ((T (*)(BattlePassNewLevelAwardItemView*))(Il2CppBase() + 0x2C1E984))(this);
	}
	template <typename T = void> T AadptSpecialProgress() {
		return ((T (*)(BattlePassNewLevelAwardItemView*))(Il2CppBase() + 0x2C1FE00))(this);
	}
	template <typename T = bool> T GetSpecialMendProgressEnable() {
		return ((T (*)(BattlePassNewLevelAwardItemView*))(Il2CppBase() + 0x2C20224))(this);
	}
	template <typename T = void> T RefreshLevel() {
		return ((T (*)(BattlePassNewLevelAwardItemView*))(Il2CppBase() + 0x2C1F308))(this);
	}
	template <typename T = void> T SetItemTemplateState() {
		return ((T (*)(BattlePassNewLevelAwardItemView*))(Il2CppBase() + 0x2C203D0))(this);
	}
	template <typename T = void> T RefreshAward(uintptr_t sv) {
		return ((T (*)(BattlePassNewLevelAwardItemView*, uintptr_t))(Il2CppBase() + 0x2C1F6C0))(this, sv);
	}
	template <typename T = void> T OnQuickBuyTireBtnClick(uintptr_t go) {
		return ((T (*)(BattlePassNewLevelAwardItemView*, uintptr_t))(Il2CppBase() + 0x2C20780))(this, go);
	}
	template <typename T = void> T OnMaxlevelTipBtnClick(uintptr_t go) {
		return ((T (*)(BattlePassNewLevelAwardItemView*, uintptr_t))(Il2CppBase() + 0x2C2093C))(this, go);
	}
	template <typename T = void> T OnClick() {
		return ((T (*)(BattlePassNewLevelAwardItemView*))(Il2CppBase() + 0x2C20A34))(this);
	}
	template <typename T = void> T RefreshEffect() {
		return ((T (*)(BattlePassNewLevelAwardItemView*))(Il2CppBase() + 0x2C1FB7C))(this);
	}
	template <typename T = void> T ControlEffect(int32_t isShowFx, int32_t color) {
		return ((T (*)(BattlePassNewLevelAwardItemView*, int32_t, int32_t))(Il2CppBase() + 0x2C20C84))(this, isShowFx, color);
	}
	template <typename T = void> T SetEffectCulling(uintptr_t sv) {
		return ((T (*)(BattlePassNewLevelAwardItemView*, uintptr_t))(Il2CppBase() + 0x2C1FCBC))(this, sv);
	}
	template <typename T = void> T SetGOEffectCulling(Il2CppArray<uintptr_t>* go, uintptr_t sv, Il2CppString* shaderName) {
		return ((T (*)(BattlePassNewLevelAwardItemView*, Il2CppArray<uintptr_t>*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x2C20F44))(this, go, sv, shaderName);
	}
	template <typename T = void> T xLuaBaseProxy_OnAwake() {
		return ((T (*)(BattlePassNewLevelAwardItemView*))(Il2CppBase() + 0x2C213D0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnClick() {
		return ((T (*)(BattlePassNewLevelAwardItemView*))(Il2CppBase() + 0x2C213D8))(this);
	}

};

}
