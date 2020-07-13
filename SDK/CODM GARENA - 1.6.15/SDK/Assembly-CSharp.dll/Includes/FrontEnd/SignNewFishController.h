#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace FrontEnd {

class SignNewFishController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "FrontEnd", "SignNewFishController"));
	}

	template <typename T = uintptr_t> T& m_View() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& m_DS() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = uintptr_t> static T& f__am$cache0() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_T_Sign_1_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_T_SignNewFishController_Go() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_T_ClickSign() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IfBlurWhenOpen() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnOpen() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitUI() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnClickClam() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnClickReclam() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyRefreshView() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnCloseBaseClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}

	template <typename T = void> T T_Sign_1_Init() {
		return ((T (*)(SignNewFishController*))(Il2CppBase() + 0x3863098))(this);
	}
	template <typename T = void> T T_SignNewFishController_Go() {
		return ((T (*)(SignNewFishController*))(Il2CppBase() + 0x38632A0))(this);
	}
	template <typename T = void> T T_ClickSign() {
		return ((T (*)(SignNewFishController*))(Il2CppBase() + 0x386342C))(this);
	}
	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(SignNewFishController*))(Il2CppBase() + 0x38635B8))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(SignNewFishController*))(Il2CppBase() + 0x386365C))(this);
	}
	template <typename T = bool> T IfBlurWhenOpen() {
		return ((T (*)(SignNewFishController*))(Il2CppBase() + 0x3863770))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(SignNewFishController*))(Il2CppBase() + 0x3863810))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(SignNewFishController*))(Il2CppBase() + 0x3863A20))(this);
	}
	template <typename T = void> T OnOpen() {
		return ((T (*)(SignNewFishController*))(Il2CppBase() + 0x3863BB0))(this);
	}
	template <typename T = void> T InitUI() {
		return ((T (*)(SignNewFishController*))(Il2CppBase() + 0x3863D0C))(this);
	}
	template <typename T = void> T OnClickClam() {
		return ((T (*)(SignNewFishController*))(Il2CppBase() + 0x3863DD0))(this);
	}
	template <typename T = void> T OnClickReclam() {
		return ((T (*)(SignNewFishController*))(Il2CppBase() + 0x3863EE4))(this);
	}
	template <typename T = void> T OnNotifyRefreshView(uintptr_t Msg) {
		return ((T (*)(SignNewFishController*, uintptr_t))(Il2CppBase() + 0x386411C))(this, Msg);
	}
	template <typename T = void> T OnBtnCloseBaseClick() {
		return ((T (*)(SignNewFishController*))(Il2CppBase() + 0x38641C8))(this);
	}
	template <typename T = void> T T_Sign_1_Initm__0(uintptr_t tutorialType, Il2CppArray<uintptr_t>* info) {
		return ((T (*)(SignNewFishController*, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x3864270))(this, tutorialType, info);
	}
	template <typename T = void> T T_Sign_1_Initm__1(uintptr_t tutorialType, Il2CppArray<uintptr_t>* info) {
		return ((T (*)(SignNewFishController*, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x3864524))(this, tutorialType, info);
	}
	template <typename T = void> static T T_Sign_1_Initm__2() {
		return ((T (*)(void *))(Il2CppBase() + 0x386479C))(0);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(SignNewFishController*))(Il2CppBase() + 0x38648CC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(SignNewFishController*))(Il2CppBase() + 0x38648D4))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_IfBlurWhenOpen() {
		return ((T (*)(SignNewFishController*))(Il2CppBase() + 0x38648DC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(SignNewFishController*))(Il2CppBase() + 0x38648E4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(SignNewFishController*))(Il2CppBase() + 0x38648EC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnOpen() {
		return ((T (*)(SignNewFishController*))(Il2CppBase() + 0x38648F4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnBtnCloseBaseClick() {
		return ((T (*)(SignNewFishController*))(Il2CppBase() + 0x38648FC))(this);
	}

};

}
