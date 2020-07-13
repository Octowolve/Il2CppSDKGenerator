#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class UICommonReceiveController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "UICommonReceiveController"));
	}

	template <typename T = uintptr_t> T& m_View() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = bool> T& haveBox2Show() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& m_DS() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = int32_t> T& rewardStyle() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> static T& f__am$cache0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& f__am$cache1() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& f__am$cache2() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_T_OnOpen() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_T_OnCommonOKBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnOpen() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDetailBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnCloseBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnClose() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Close() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnCloseCommonBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_On3dViewClose() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetTurnToMailTip() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnReturnKeyPressed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}

	template <typename T = void> T T_OnOpen() {
		return ((T (*)(UICommonReceiveController*))(Il2CppBase() + 0x29DC1F4))(this);
	}
	template <typename T = void> T T_OnCommonOKBtnClick() {
		return ((T (*)(UICommonReceiveController*))(Il2CppBase() + 0x29DC728))(this);
	}
	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(UICommonReceiveController*))(Il2CppBase() + 0x29DCAE4))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(UICommonReceiveController*))(Il2CppBase() + 0x29DCB88))(this);
	}
	template <typename T = void> T OnOpen() {
		return ((T (*)(UICommonReceiveController*))(Il2CppBase() + 0x29DD1A4))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(UICommonReceiveController*))(Il2CppBase() + 0x29DD29C))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(UICommonReceiveController*))(Il2CppBase() + 0x29DD63C))(this);
	}
	template <typename T = void> T OnDetailBtnClick() {
		return ((T (*)(UICommonReceiveController*))(Il2CppBase() + 0x29DD904))(this);
	}
	template <typename T = void> T OnCloseBtnClick() {
		return ((T (*)(UICommonReceiveController*))(Il2CppBase() + 0x29DDB0C))(this);
	}
	template <typename T = void> T OnClose() {
		return ((T (*)(UICommonReceiveController*))(Il2CppBase() + 0x29DDC48))(this);
	}
	template <typename T = void> T Close(uintptr_t closeType) {
		return ((T (*)(UICommonReceiveController*, uintptr_t))(Il2CppBase() + 0x29DDD60))(this, closeType);
	}
	template <typename T = void> T OnCloseCommonBtnClick() {
		return ((T (*)(UICommonReceiveController*))(Il2CppBase() + 0x29DDE90))(this);
	}
	template <typename T = void> T On3dViewClose(uintptr_t Msg) {
		return ((T (*)(UICommonReceiveController*, uintptr_t))(Il2CppBase() + 0x29DE0F8))(this, Msg);
	}
	template <typename T = void> T SetTurnToMailTip(bool turnToMail, bool bSafeBox) {
		return ((T (*)(UICommonReceiveController*, bool, bool))(Il2CppBase() + 0x29DE1B8))(this, turnToMail, bSafeBox);
	}
	template <typename T = bool> T OnReturnKeyPressed() {
		return ((T (*)(UICommonReceiveController*))(Il2CppBase() + 0x29DE444))(this);
	}
	template <typename T = void> static T T_OnOpenm__0() {
		return ((T (*)(void *))(Il2CppBase() + 0x29DE560))(0);
	}
	template <typename T = void> static T T_OnOpenm__1() {
		return ((T (*)(void *))(Il2CppBase() + 0x29DE600))(0);
	}
	template <typename T = void> static T T_OnOpenm__2() {
		return ((T (*)(void *))(Il2CppBase() + 0x29DE6A0))(0);
	}
	template <typename T = void> T OnCloseBtnClickm__3() {
		return ((T (*)(UICommonReceiveController*))(Il2CppBase() + 0x29DE740))(this);
	}
	template <typename T = void> T OnCloseCommonBtnClickm__4() {
		return ((T (*)(UICommonReceiveController*))(Il2CppBase() + 0x29DE830))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(UICommonReceiveController*))(Il2CppBase() + 0x29DEC7C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(UICommonReceiveController*))(Il2CppBase() + 0x29DEC84))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnOpen() {
		return ((T (*)(UICommonReceiveController*))(Il2CppBase() + 0x29DEC8C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(UICommonReceiveController*))(Il2CppBase() + 0x29DEC94))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(UICommonReceiveController*))(Il2CppBase() + 0x29DEC9C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnClose() {
		return ((T (*)(UICommonReceiveController*))(Il2CppBase() + 0x29DECA4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Close(uintptr_t P0) {
		return ((T (*)(UICommonReceiveController*, uintptr_t))(Il2CppBase() + 0x29DECAC))(this, P0);
	}
	template <typename T = bool> T xLuaBaseProxy_OnReturnKeyPressed() {
		return ((T (*)(UICommonReceiveController*))(Il2CppBase() + 0x29DECB4))(this);
	}

};

}
