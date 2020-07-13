#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattlePass {

class BattlePassNewExpAwardPopupController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattlePass", "BattlePassNewExpAwardPopupController"));
	}

	template <typename T = uintptr_t> T& mView() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& m_DataStore() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = int32_t> T& m_FinalLv() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = int32_t> T& m_FinalExp() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = bool> T& m_AddLevel() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& mAwardListController() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnClose() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnOpen() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetLevel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_VerifyAndSetData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReturnKeyEnable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayEnd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckAutoClose() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdatePanelDepth() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateChildControllerPanel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(BattlePassNewExpAwardPopupController*))(Il2CppBase() + 0x2C1649C))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(BattlePassNewExpAwardPopupController*))(Il2CppBase() + 0x2C16540))(this);
	}
	template <typename T = void> T OnClose() {
		return ((T (*)(BattlePassNewExpAwardPopupController*))(Il2CppBase() + 0x2C1686C))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(BattlePassNewExpAwardPopupController*))(Il2CppBase() + 0x2C16914))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(BattlePassNewExpAwardPopupController*))(Il2CppBase() + 0x2C169BC))(this);
	}
	template <typename T = void> T OnOpen() {
		return ((T (*)(BattlePassNewExpAwardPopupController*))(Il2CppBase() + 0x2C16A64))(this);
	}
	template <typename T = void> T SetData(Il2CppList<uintptr_t>* expList, int32_t before_lv, int32_t before_exp, int32_t final_lv, int32_t final_exp) {
		return ((T (*)(BattlePassNewExpAwardPopupController*, Il2CppList<uintptr_t>*, int32_t, int32_t, int32_t, int32_t))(Il2CppBase() + 0x2C16B0C))(this, expList, before_lv, before_exp, final_lv, final_exp);
	}
	template <typename T = void> T SetLevel(int32_t level) {
		return ((T (*)(BattlePassNewExpAwardPopupController*, int32_t))(Il2CppBase() + 0x2C16F4C))(this, level);
	}
	template <typename T = void> T VerifyAndSetData() {
		return ((T (*)(BattlePassNewExpAwardPopupController*))(Il2CppBase() + 0x2C172D8))(this);
	}
	template <typename T = bool> T ReturnKeyEnable() {
		return ((T (*)(BattlePassNewExpAwardPopupController*))(Il2CppBase() + 0x2C173CC))(this);
	}
	template <typename T = void> T PlayEnd() {
		return ((T (*)(BattlePassNewExpAwardPopupController*))(Il2CppBase() + 0x2C174CC))(this);
	}
	template <typename T = bool> T CheckAutoClose() {
		return ((T (*)(BattlePassNewExpAwardPopupController*))(Il2CppBase() + 0x2C17664))(this);
	}
	template <typename T = void> T UpdatePanelDepth(int32_t mainPanelDepth) {
		return ((T (*)(BattlePassNewExpAwardPopupController*, int32_t))(Il2CppBase() + 0x2C17758))(this, mainPanelDepth);
	}
	template <typename T = void> T UpdateChildControllerPanel(int32_t mainPanelDepth) {
		return ((T (*)(BattlePassNewExpAwardPopupController*, int32_t))(Il2CppBase() + 0x2C17818))(this, mainPanelDepth);
	}
	template <typename T = void> T PlayEndm__0() {
		return ((T (*)(BattlePassNewExpAwardPopupController*))(Il2CppBase() + 0x2C17B4C))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(BattlePassNewExpAwardPopupController*))(Il2CppBase() + 0x2C17B78))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(BattlePassNewExpAwardPopupController*))(Il2CppBase() + 0x2C17B80))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnClose() {
		return ((T (*)(BattlePassNewExpAwardPopupController*))(Il2CppBase() + 0x2C17B88))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(BattlePassNewExpAwardPopupController*))(Il2CppBase() + 0x2C17B90))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(BattlePassNewExpAwardPopupController*))(Il2CppBase() + 0x2C17B98))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnOpen() {
		return ((T (*)(BattlePassNewExpAwardPopupController*))(Il2CppBase() + 0x2C17BA0))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_ReturnKeyEnable() {
		return ((T (*)(BattlePassNewExpAwardPopupController*))(Il2CppBase() + 0x2C17BA8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UpdatePanelDepth(int32_t P0) {
		return ((T (*)(BattlePassNewExpAwardPopupController*, int32_t))(Il2CppBase() + 0x2C17BB0))(this, P0);
	}

};

}
