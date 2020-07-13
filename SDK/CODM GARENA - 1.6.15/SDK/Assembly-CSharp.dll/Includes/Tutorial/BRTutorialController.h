#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Tutorial {

class BRTutorialController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Tutorial", "BRTutorialController"));
	}

	template <typename T = uintptr_t> T& m_View() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& m_BRTutorialNewsController() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uintptr_t> T& m_TutorialBasicController() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& m_TutorialControlController() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = uintptr_t> T& m_TutorialReviveController() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& m_CurrentTabType() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = uintptr_t> T& m_CurrentBasicChildTabType() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = bool> T& m_FirstEnterBRLobby() {
		return *(T*)((uintptr_t)this + 0x64);
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
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnOpen() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_T_FirstGetIn() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateArrowStatus() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateToggleStatus() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLeftArrowClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRightArrowClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNewsToggleChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBasicToggleChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBRTutorialBasicChildToggleChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnControlToggleChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyCloseBRTutorial() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnReviveToggleChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnCloseBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_T_NotifyBRTutorialStep1Finish() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(BRTutorialController*))(Il2CppBase() + 0x4AFA460))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(BRTutorialController*))(Il2CppBase() + 0x4AFA504))(this);
	}
	template <typename T = void> T OnOpen() {
		return ((T (*)(BRTutorialController*))(Il2CppBase() + 0x4AFA864))(this);
	}
	template <typename T = void> T T_FirstGetIn() {
		return ((T (*)(BRTutorialController*))(Il2CppBase() + 0x4AFAA6C))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(BRTutorialController*))(Il2CppBase() + 0x4AFAF90))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(BRTutorialController*))(Il2CppBase() + 0x4AFB474))(this);
	}
	template <typename T = void> T UpdateArrowStatus() {
		return ((T (*)(BRTutorialController*))(Il2CppBase() + 0x4AFB844))(this);
	}
	template <typename T = void> T UpdateToggleStatus() {
		return ((T (*)(BRTutorialController*))(Il2CppBase() + 0x4AFBAC0))(this);
	}
	template <typename T = void> T OnLeftArrowClick() {
		return ((T (*)(BRTutorialController*))(Il2CppBase() + 0x4AFBC50))(this);
	}
	template <typename T = void> T OnRightArrowClick() {
		return ((T (*)(BRTutorialController*))(Il2CppBase() + 0x4AFBEA0))(this);
	}
	template <typename T = void> T OnNewsToggleChange() {
		return ((T (*)(BRTutorialController*))(Il2CppBase() + 0x4AFC0F0))(this);
	}
	template <typename T = void> T OnBasicToggleChange() {
		return ((T (*)(BRTutorialController*))(Il2CppBase() + 0x4AFC1CC))(this);
	}
	template <typename T = void> T OnBRTutorialBasicChildToggleChange(uintptr_t Msg) {
		return ((T (*)(BRTutorialController*, uintptr_t))(Il2CppBase() + 0x4AFC44C))(this, Msg);
	}
	template <typename T = void> T OnControlToggleChange() {
		return ((T (*)(BRTutorialController*))(Il2CppBase() + 0x4AFC578))(this);
	}
	template <typename T = void> T OnNotifyCloseBRTutorial(uintptr_t Msg) {
		return ((T (*)(BRTutorialController*, uintptr_t))(Il2CppBase() + 0x4AFC654))(this, Msg);
	}
	template <typename T = void> T OnReviveToggleChange() {
		return ((T (*)(BRTutorialController*))(Il2CppBase() + 0x4AFC868))(this);
	}
	template <typename T = void> T OnCloseBtnClick() {
		return ((T (*)(BRTutorialController*))(Il2CppBase() + 0x4AFC944))(this);
	}
	template <typename T = void> T T_NotifyBRTutorialStep1Finish() {
		return ((T (*)(BRTutorialController*))(Il2CppBase() + 0x4AFCA00))(this);
	}
	template <typename T = void> T OnOpenm__0() {
		return ((T (*)(BRTutorialController*))(Il2CppBase() + 0x4AFCC78))(this);
	}
	template <typename T = void> T T_FirstGetInm__1() {
		return ((T (*)(BRTutorialController*))(Il2CppBase() + 0x4AFCDEC))(this);
	}
	template <typename T = void> T T_FirstGetInm__2() {
		return ((T (*)(BRTutorialController*))(Il2CppBase() + 0x4AFCEB4))(this);
	}
	template <typename T = void> static T OnBasicToggleChangem__3() {
		return ((T (*)(void *))(Il2CppBase() + 0x4AFCF7C))(0);
	}
	template <typename T = void> static T OnNotifyCloseBRTutorialm__4() {
		return ((T (*)(void *))(Il2CppBase() + 0x4AFD1A4))(0);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(BRTutorialController*))(Il2CppBase() + 0x4AFD248))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(BRTutorialController*))(Il2CppBase() + 0x4AFD250))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnOpen() {
		return ((T (*)(BRTutorialController*))(Il2CppBase() + 0x4AFD258))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(BRTutorialController*))(Il2CppBase() + 0x4AFD260))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(BRTutorialController*))(Il2CppBase() + 0x4AFD268))(this);
	}

};

}
