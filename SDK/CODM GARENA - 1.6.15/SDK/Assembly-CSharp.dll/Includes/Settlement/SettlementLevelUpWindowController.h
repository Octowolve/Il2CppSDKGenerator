#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Settlement {

class SettlementLevelUpWindowController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Settlement", "SettlementLevelUpWindowController"));
	}

	template <typename T = Il2CppVector3> T& TempPos() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& m_View() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = bool> T& bEnableExit() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& OnCloseCallBack() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = float> T& AnimationClipTime() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> static T& f__am$cache0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& f__am$cache1() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_T_MP1_LevelUp_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_T_SettlementLevelUpWindowController_Go() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_T_OnBtnExitClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnOpen() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnExitClicked() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}

	template <typename T = void> T T_MP1_LevelUp_Init() {
		return ((T (*)(SettlementLevelUpWindowController*))(Il2CppBase() + 0x2966FB8))(this);
	}
	template <typename T = void> T T_SettlementLevelUpWindowController_Go() {
		return ((T (*)(SettlementLevelUpWindowController*))(Il2CppBase() + 0x2967154))(this);
	}
	template <typename T = void> T T_OnBtnExitClick() {
		return ((T (*)(SettlementLevelUpWindowController*))(Il2CppBase() + 0x29673DC))(this);
	}
	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(SettlementLevelUpWindowController*))(Il2CppBase() + 0x2967568))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(SettlementLevelUpWindowController*))(Il2CppBase() + 0x296760C))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(SettlementLevelUpWindowController*))(Il2CppBase() + 0x2967740))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(SettlementLevelUpWindowController*))(Il2CppBase() + 0x296785C))(this);
	}
	template <typename T = void> T OnOpen() {
		return ((T (*)(SettlementLevelUpWindowController*))(Il2CppBase() + 0x2967BEC))(this);
	}
	template <typename T = void> T UpdateView(int32_t OldLevel, int32_t NewLevel) {
		return ((T (*)(SettlementLevelUpWindowController*, int32_t, int32_t))(Il2CppBase() + 0x2967C9C))(this, OldLevel, NewLevel);
	}
	template <typename T = void> T OnBtnExitClicked() {
		return ((T (*)(SettlementLevelUpWindowController*))(Il2CppBase() + 0x2967D7C))(this);
	}
	template <typename T = void> static T T_MP1_LevelUp_Initm__0(uintptr_t tutorialType, Il2CppArray<uintptr_t>* info) {
		return ((T (*)(void *, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x2967EC0))(0, tutorialType, info);
	}
	template <typename T = void> T T_SettlementLevelUpWindowController_Gom__1() {
		return ((T (*)(SettlementLevelUpWindowController*))(Il2CppBase() + 0x2968088))(this);
	}
	template <typename T = void> T Initm__2() {
		return ((T (*)(SettlementLevelUpWindowController*))(Il2CppBase() + 0x2968268))(this);
	}
	template <typename T = void> static T T_MP1_LevelUp_Initm__3() {
		return ((T (*)(void *))(Il2CppBase() + 0x2968274))(0);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(SettlementLevelUpWindowController*))(Il2CppBase() + 0x2968314))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(SettlementLevelUpWindowController*))(Il2CppBase() + 0x296831C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(SettlementLevelUpWindowController*))(Il2CppBase() + 0x2968324))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(SettlementLevelUpWindowController*))(Il2CppBase() + 0x296832C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnOpen() {
		return ((T (*)(SettlementLevelUpWindowController*))(Il2CppBase() + 0x2968334))(this);
	}

};

}
