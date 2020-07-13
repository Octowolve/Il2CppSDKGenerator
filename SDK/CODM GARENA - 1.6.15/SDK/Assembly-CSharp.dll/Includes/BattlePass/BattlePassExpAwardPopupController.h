#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattlePass {

class BattlePassExpAwardPopupController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattlePass", "BattlePassExpAwardPopupController"));
	}

	template <typename T = uintptr_t> T& mView() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& m_DataStore() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = bool> T& m_AddLevel() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = int32_t> T& m_AddExp() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = int32_t> T& m_CurLv() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = int32_t> T& m_Progress() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = int32_t> T& m_FinalLv() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = int32_t> T& m_FinalExp() {
		return *(T*)((uintptr_t)this + 0x64);
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
	template <typename T = uintptr_t> static T& __Hotfix0_SetExpItem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetLevel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_VerifyAndSetData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReturnKeyEnable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnScrollViewDrag() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDragLeft() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDragRight() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRightBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLeftBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckPlayAnim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayProgressAnim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetAnimTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayEnd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(BattlePassExpAwardPopupController*))(Il2CppBase() + 0x328AC7C))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(BattlePassExpAwardPopupController*))(Il2CppBase() + 0x328AD20))(this);
	}
	template <typename T = void> T OnClose() {
		return ((T (*)(BattlePassExpAwardPopupController*))(Il2CppBase() + 0x328AE88))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(BattlePassExpAwardPopupController*))(Il2CppBase() + 0x328AF30))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(BattlePassExpAwardPopupController*))(Il2CppBase() + 0x328B4B0))(this);
	}
	template <typename T = void> T OnOpen() {
		return ((T (*)(BattlePassExpAwardPopupController*))(Il2CppBase() + 0x328BA1C))(this);
	}
	template <typename T = void> T SetData(Il2CppList<uintptr_t>* expList, int32_t before_lv, int32_t before_exp, int32_t final_lv, int32_t final_exp) {
		return ((T (*)(BattlePassExpAwardPopupController*, Il2CppList<uintptr_t>*, int32_t, int32_t, int32_t, int32_t))(Il2CppBase() + 0x328BAC4))(this, expList, before_lv, before_exp, final_lv, final_exp);
	}
	template <typename T = void> T SetExpItem(Il2CppList<uintptr_t>* expList) {
		return ((T (*)(BattlePassExpAwardPopupController*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x328BE5C))(this, expList);
	}
	template <typename T = void> T SetLevel(int32_t level) {
		return ((T (*)(BattlePassExpAwardPopupController*, int32_t))(Il2CppBase() + 0x328C6D0))(this, level);
	}
	template <typename T = void> T VerifyAndSetData() {
		return ((T (*)(BattlePassExpAwardPopupController*))(Il2CppBase() + 0x328C7FC))(this);
	}
	template <typename T = bool> T ReturnKeyEnable() {
		return ((T (*)(BattlePassExpAwardPopupController*))(Il2CppBase() + 0x328CB2C))(this);
	}
	template <typename T = void> T OnScrollViewDrag() {
		return ((T (*)(BattlePassExpAwardPopupController*))(Il2CppBase() + 0x328CC2C))(this);
	}
	template <typename T = void> T OnDragLeft() {
		return ((T (*)(BattlePassExpAwardPopupController*))(Il2CppBase() + 0x328CD50))(this);
	}
	template <typename T = void> T OnDragRight() {
		return ((T (*)(BattlePassExpAwardPopupController*))(Il2CppBase() + 0x328CE74))(this);
	}
	template <typename T = void> T OnRightBtnClick() {
		return ((T (*)(BattlePassExpAwardPopupController*))(Il2CppBase() + 0x328CF98))(this);
	}
	template <typename T = void> T OnLeftBtnClick() {
		return ((T (*)(BattlePassExpAwardPopupController*))(Il2CppBase() + 0x328D064))(this);
	}
	template <typename T = void> T CheckPlayAnim() {
		return ((T (*)(BattlePassExpAwardPopupController*))(Il2CppBase() + 0x328C288))(this);
	}
	template <typename T = void> T PlayProgressAnim(int32_t start, int32_t end, int32_t total) {
		return ((T (*)(BattlePassExpAwardPopupController*, int32_t, int32_t, int32_t))(Il2CppBase() + 0x328D130))(this, start, end, total);
	}
	template <typename T = float> T GetAnimTime(int32_t change, int32_t total_each_progress) {
		return ((T (*)(BattlePassExpAwardPopupController*, int32_t, int32_t))(Il2CppBase() + 0x328D648))(this, change, total_each_progress);
	}
	template <typename T = void> T PlayEnd() {
		return ((T (*)(BattlePassExpAwardPopupController*))(Il2CppBase() + 0x328D4B4))(this);
	}
	template <typename T = void> T PlayEndm__0() {
		return ((T (*)(BattlePassExpAwardPopupController*))(Il2CppBase() + 0x328D758))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(BattlePassExpAwardPopupController*))(Il2CppBase() + 0x328D784))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(BattlePassExpAwardPopupController*))(Il2CppBase() + 0x328D78C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnClose() {
		return ((T (*)(BattlePassExpAwardPopupController*))(Il2CppBase() + 0x328D794))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(BattlePassExpAwardPopupController*))(Il2CppBase() + 0x328D79C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(BattlePassExpAwardPopupController*))(Il2CppBase() + 0x328D7A4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnOpen() {
		return ((T (*)(BattlePassExpAwardPopupController*))(Il2CppBase() + 0x328D7AC))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_ReturnKeyEnable() {
		return ((T (*)(BattlePassExpAwardPopupController*))(Il2CppBase() + 0x328D7B4))(this);
	}

};

}
