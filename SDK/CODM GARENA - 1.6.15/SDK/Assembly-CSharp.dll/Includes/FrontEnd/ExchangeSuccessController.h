#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace FrontEnd {

class ExchangeSuccessController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "FrontEnd", "ExchangeSuccessController"));
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
	template <typename T = uintptr_t> static T& __Hotfix0_IsWindowCloseable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0__OnBtnCloseClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0__OnBtnGotoMail() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}

	template <typename T = void> T Init() {
		return ((T (*)(ExchangeSuccessController*))(Il2CppBase() + 0x3675010))(this);
	}
	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(ExchangeSuccessController*))(Il2CppBase() + 0x367511C))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(ExchangeSuccessController*))(Il2CppBase() + 0x36751C0))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(ExchangeSuccessController*))(Il2CppBase() + 0x3675360))(this);
	}
	template <typename T = bool> T IsWindowCloseable() {
		return ((T (*)(ExchangeSuccessController*))(Il2CppBase() + 0x36754DC))(this);
	}
	template <typename T = void> T _OnBtnCloseClick() {
		return ((T (*)(ExchangeSuccessController*))(Il2CppBase() + 0x367557C))(this);
	}
	template <typename T = void> T _OnBtnGotoMail() {
		return ((T (*)(ExchangeSuccessController*))(Il2CppBase() + 0x3675630))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(ExchangeSuccessController*))(Il2CppBase() + 0x36757E0))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(ExchangeSuccessController*))(Il2CppBase() + 0x36757E8))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(ExchangeSuccessController*))(Il2CppBase() + 0x36757F0))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(ExchangeSuccessController*))(Il2CppBase() + 0x36757F8))(this);
	}
	template <typename T = bool> T xLuaBaseProxy_IsWindowCloseable() {
		return ((T (*)(ExchangeSuccessController*))(Il2CppBase() + 0x3675800))(this);
	}

};

}
