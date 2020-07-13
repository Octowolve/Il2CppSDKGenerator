#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattlePass {

class BattlePassTabManager
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattlePass", "BattlePassTabManager"));
	}

	template <typename T = uintptr_t> static T& Instance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppDictionary<uintptr_t, Il2CppString*>*> T& tabNameMap() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppDictionary<uintptr_t, bool>*> T& tabNeedRefreshProtocalMap() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& bpDS() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& secondTab() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& thirdTab() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& ItemID() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = bool> T& mNeedJump() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = bool> T& IfNeedToCheckBattlePassOpen() {
		return *(T*)((uintptr_t)this + 0x21);
	}
	template <typename T = uintptr_t> T& clickEntrance() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppString*> static T& BATTLE_PASS_ADVERTISEMENT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetTabName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetTabIcon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetUiTabList() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowSubTabController() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetFlagForProtocal() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckToOpenBattlePass() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OpenBattlePassRulePopView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetLoginVideoFlag() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OpenBattlePassMainView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetSwitchData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OpenBattlepass() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ShowSeasonCurDownInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}

	template <typename T = Il2CppString*> T GetTabName(uintptr_t t) {
		return ((T (*)(BattlePassTabManager*, uintptr_t))(Il2CppBase() + 0x2C3403C))(this, t);
	}
	template <typename T = Il2CppString*> T GetTabIcon(uintptr_t t) {
		return ((T (*)(BattlePassTabManager*, uintptr_t))(Il2CppBase() + 0x2C1620C))(this, t);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GetUiTabList() {
		return ((T (*)(BattlePassTabManager*))(Il2CppBase() + 0x2C0F800))(this);
	}
	template <typename T = uintptr_t> T ShowSubTabController(uintptr_t ctrl, uintptr_t t, uintptr_t viewParent) {
		return ((T (*)(BattlePassTabManager*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x2C106BC))(this, ctrl, t, viewParent);
	}
	template <typename T = void> T ResetFlagForProtocal() {
		return ((T (*)(BattlePassTabManager*))(Il2CppBase() + 0x2C142FC))(this);
	}
	template <typename T = void> T set_NeedShowAdvertisement(bool value) {
		return ((T (*)(BattlePassTabManager*, bool))(Il2CppBase() + 0x2C342B4))(this, value);
	}
	template <typename T = bool> T get_NeedShowAdvertisement() {
		return ((T (*)(BattlePassTabManager*))(Il2CppBase() + 0x2C3447C))(this);
	}
	template <typename T = void> T CheckToOpenBattlePass(int32_t secondTab) {
		return ((T (*)(BattlePassTabManager*, int32_t))(Il2CppBase() + 0x2C34638))(this, secondTab);
	}
	template <typename T = void> T OpenBattlePassRulePopView(bool isShowSkip) {
		return ((T (*)(BattlePassTabManager*, bool))(Il2CppBase() + 0x2C13410))(this, isShowSkip);
	}
	template <typename T = void> T SetLoginVideoFlag() {
		return ((T (*)(BattlePassTabManager*))(Il2CppBase() + 0x2C35760))(this);
	}
	template <typename T = void> T OpenBattlePassMainView(int32_t secondTab) {
		return ((T (*)(BattlePassTabManager*, int32_t))(Il2CppBase() + 0x2C35078))(this, secondTab);
	}
	template <typename T = void> T SetSwitchData(int32_t secondtab, int32_t thirdtab) {
		return ((T (*)(BattlePassTabManager*, int32_t, int32_t))(Il2CppBase() + 0x2C35D24))(this, secondtab, thirdtab);
	}
	template <typename T = void> T OpenBattlepass(int32_t secondtab) {
		return ((T (*)(BattlePassTabManager*, int32_t))(Il2CppBase() + 0x2C36158))(this, secondtab);
	}
	template <typename T = Il2CppString*> T ShowSeasonCurDownInfo() {
		return ((T (*)(BattlePassTabManager*))(Il2CppBase() + 0x2C363C4))(this);
	}

};

}
