#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SPFireModeController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SPFireModeController"));
	}

	template <typename T = uintptr_t> T& m_View() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = bool> T& m_UseFixedFire() {
		return *(T*)((uintptr_t)this + 0x40);
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
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnLeftBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRightBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnConfirmBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}

	template <typename T = uintptr_t> T GetViewAssetId() {
		return ((T (*)(SPFireModeController*))(Il2CppBase() + 0x39134DC))(this);
	}
	template <typename T = void> T Init() {
		return ((T (*)(SPFireModeController*))(Il2CppBase() + 0x3913580))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(SPFireModeController*))(Il2CppBase() + 0x391368C))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(SPFireModeController*))(Il2CppBase() + 0x39138AC))(this);
	}
	template <typename T = void> T OnLeftBtnClick() {
		return ((T (*)(SPFireModeController*))(Il2CppBase() + 0x3913ACC))(this);
	}
	template <typename T = void> T OnRightBtnClick() {
		return ((T (*)(SPFireModeController*))(Il2CppBase() + 0x3913CE4))(this);
	}
	template <typename T = void> T OnConfirmBtnClick() {
		return ((T (*)(SPFireModeController*))(Il2CppBase() + 0x3913DA8))(this);
	}
	template <typename T = uintptr_t> T xLuaBaseProxy_GetViewAssetId() {
		return ((T (*)(SPFireModeController*))(Il2CppBase() + 0x3913F08))(this);
	}
	template <typename T = void> T xLuaBaseProxy_Init() {
		return ((T (*)(SPFireModeController*))(Il2CppBase() + 0x3913F10))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(SPFireModeController*))(Il2CppBase() + 0x3913F18))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(SPFireModeController*))(Il2CppBase() + 0x3913F20))(this);
	}

};

}
