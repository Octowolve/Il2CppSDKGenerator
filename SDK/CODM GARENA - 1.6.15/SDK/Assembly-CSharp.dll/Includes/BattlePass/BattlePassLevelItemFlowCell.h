#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattlePass {

class BattlePassLevelItemFlowCell
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattlePass", "BattlePassLevelItemFlowCell"));
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
	template <typename T = Il2CppList<uintptr_t>*> T& NormalItemList() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& SpecialItemList() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& mCacheData() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& mDataStore() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& itemMask() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& MeshEffectRoot() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& ParticalEffectRoot() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& LevelObj() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& ChildItem0() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& ChildItem1() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> T& ChildItem2() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& LastAwardBtn() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uintptr_t> T& SplitMaxlevelTipBtn() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& QuickBuyTireBtn() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = bool> T& mSettlementShow() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnAwake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_QuickBuyTireBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LastAwardClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SplitMaxlevelTipBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshLevel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetItemTemplateState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RefreshAward() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnItemTemplateClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetEffectCulling() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}

	template <typename T = void> T OnAwake() {
		return ((T (*)(BattlePassLevelItemFlowCell*))(Il2CppBase() + 0x2BFEDE4))(this);
	}
	template <typename T = void> T QuickBuyTireBtnClick(uintptr_t go) {
		return ((T (*)(BattlePassLevelItemFlowCell*, uintptr_t))(Il2CppBase() + 0x2BFF0EC))(this, go);
	}
	template <typename T = void> T LastAwardClick(uintptr_t go) {
		return ((T (*)(BattlePassLevelItemFlowCell*, uintptr_t))(Il2CppBase() + 0x2BFF2A0))(this, go);
	}
	template <typename T = void> T SplitMaxlevelTipBtnClick(uintptr_t go) {
		return ((T (*)(BattlePassLevelItemFlowCell*, uintptr_t))(Il2CppBase() + 0x2BFF4DC))(this, go);
	}
	template <typename T = void> T SetData(uintptr_t data, uintptr_t sv, uintptr_t curTimeLimitConf, bool bSettlementShow) {
		return ((T (*)(BattlePassLevelItemFlowCell*, uintptr_t, uintptr_t, uintptr_t, bool))(Il2CppBase() + 0x2BFF5D4))(this, data, sv, curTimeLimitConf, bSettlementShow);
	}
	template <typename T = void> T RefreshLevel(int32_t level, int32_t selfLevel, uintptr_t curTimeLimitConf) {
		return ((T (*)(BattlePassLevelItemFlowCell*, int32_t, int32_t, uintptr_t))(Il2CppBase() + 0x2BFF7B0))(this, level, selfLevel, curTimeLimitConf);
	}
	template <typename T = void> T RefreshState(int32_t itemLv, int32_t selfLv) {
		return ((T (*)(BattlePassLevelItemFlowCell*, int32_t, int32_t))(Il2CppBase() + 0x2BFFB30))(this, itemLv, selfLv);
	}
	template <typename T = void> T SetItemTemplateState(uintptr_t itemTemplate, int32_t itemId, int32_t itemLv, int32_t selfLv, bool bNeedVip, int32_t isShowFx) {
		return ((T (*)(BattlePassLevelItemFlowCell*, uintptr_t, int32_t, int32_t, int32_t, bool, int32_t))(Il2CppBase() + 0x2C00C74))(this, itemTemplate, itemId, itemLv, selfLv, bNeedVip, isShowFx);
	}
	template <typename T = void> T RefreshAward(uintptr_t datastore, uintptr_t csvData, uintptr_t sv) {
		return ((T (*)(BattlePassLevelItemFlowCell*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x2BFFED8))(this, datastore, csvData, sv);
	}
	template <typename T = void> T OnItemTemplateClick(uintptr_t param) {
		return ((T (*)(BattlePassLevelItemFlowCell*, uintptr_t))(Il2CppBase() + 0x2C00F1C))(this, param);
	}
	template <typename T = void> T SetEffectCulling(uintptr_t sv) {
		return ((T (*)(BattlePassLevelItemFlowCell*, uintptr_t))(Il2CppBase() + 0x2C00684))(this, sv);
	}
	template <typename T = void> T xLuaBaseProxy_OnAwake() {
		return ((T (*)(BattlePassLevelItemFlowCell*))(Il2CppBase() + 0x2C01228))(this);
	}

};

}
