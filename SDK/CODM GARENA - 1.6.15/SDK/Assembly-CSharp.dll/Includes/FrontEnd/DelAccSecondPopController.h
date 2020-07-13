#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace FrontEnd {

class DelAccSecondPopController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "FrontEnd", "DelAccSecondPopController"));
	}

	template <typename T = uintptr_t> T& m_View() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetViewAssetId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0__OnBtnCloseClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0__OnBtnDeleteClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnResDeleteAccountError() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}

	template <typename T = void> T Init() {
		return ((T (*)(DelAccSecondPopController*))(Il2CppBase() + 0x3672AF4))(this);
	}
	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(DelAccSecondPopController*))(Il2CppBase() + 0x3672DCC))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(DelAccSecondPopController*))(Il2CppBase() + 0x3672E70))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(DelAccSecondPopController*))(Il2CppBase() + 0x3673154))(this);
	}
	template <typename T = void> T _OnBtnCloseClick() {
		return ((T (*)(DelAccSecondPopController*))(Il2CppBase() + 0x36733B0))(this);
	}
	template <typename T = void> T _OnBtnDeleteClick() {
		return ((T (*)(DelAccSecondPopController*))(Il2CppBase() + 0x3673464))(this);
	}
	template <typename T = void> T OnResDeleteAccountError(uintptr_t Msg) {
		return ((T (*)(DelAccSecondPopController*, uintptr_t))(Il2CppBase() + 0x36737E8))(this, Msg);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(DelAccSecondPopController*))(Il2CppBase() + 0x3673A6C))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(DelAccSecondPopController*))(Il2CppBase() + 0x3673A74))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(DelAccSecondPopController*))(Il2CppBase() + 0x3673A7C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(DelAccSecondPopController*))(Il2CppBase() + 0x3673A84))(this);
	}

};

}
