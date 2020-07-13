#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class UIReceiveBaseController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "UIReceiveBaseController"));
	}

	template <typename T = uintptr_t> T& m_View() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = bool> T& hasShowDecomposeWindow() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uintptr_t> T& childDecomposeWinController() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnContineBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnNotifyAgingPropsDecomposeShowEnd() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NotifyCloseBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = void> T Init() {
		return ((T (*)(UIReceiveBaseController*))(Il2CppBase() + 0x3AFA678))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(UIReceiveBaseController*))(Il2CppBase() + 0x3AFAA30))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(UIReceiveBaseController*))(Il2CppBase() + 0x3AFADAC))(this);
	}
	template <typename T = void> T OnContineBtnClick() {
		return ((T (*)(UIReceiveBaseController*))(Il2CppBase() + 0x3B03BBC))(this);
	}
	template <typename T = void> T OnNotifyAgingPropsDecomposeShowEnd(uintptr_t msg) {
		return ((T (*)(UIReceiveBaseController*, uintptr_t))(Il2CppBase() + 0x3B03DB4))(this, msg);
	}
	template <typename T = void> T NotifyCloseBtnClick() {
		return ((T (*)(UIReceiveBaseController*))(Il2CppBase() + 0x3AFBE10))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(UIReceiveBaseController*))(Il2CppBase() + 0x3B03E84))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(UIReceiveBaseController*))(Il2CppBase() + 0x3B03E8C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(UIReceiveBaseController*))(Il2CppBase() + 0x3B03E94))(this);
	}

};

}
