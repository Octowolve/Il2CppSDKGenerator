#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class FireModeHUD
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "FireModeHUD"));
	}

	template <typename T = uintptr_t> T& ChangeModeBtn() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& ModeTips() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = bool> T& m_IsLock() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> T& m_ExpectFireMode() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEnable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_NotifyFireModeChange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnChangeModeBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetModeTips() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetLock() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}

	template <typename T = void> T OnEnable() {
		return ((T (*)(FireModeHUD*))(Il2CppBase() + 0x470DE28))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(FireModeHUD*))(Il2CppBase() + 0x470DEEC))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(FireModeHUD*))(Il2CppBase() + 0x470DFF0))(this);
	}
	template <typename T = void> T NotifyFireModeChange() {
		return ((T (*)(FireModeHUD*))(Il2CppBase() + 0x470E0B4))(this);
	}
	template <typename T = void> T OnChangeModeBtnClick(uintptr_t go) {
		return ((T (*)(FireModeHUD*, uintptr_t))(Il2CppBase() + 0x470E14C))(this, go);
	}
	template <typename T = Il2CppString*> static T GetModeTips(uintptr_t fireMode) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x470E1EC))(0, fireMode);
	}
	template <typename T = void> T SetLock(bool isLock, uintptr_t expectFireMode) {
		return ((T (*)(FireModeHUD*, bool, uintptr_t))(Il2CppBase() + 0x470E320))(this, isLock, expectFireMode);
	}
	template <typename T = void> T xLuaBaseProxy_OnEnable() {
		return ((T (*)(FireModeHUD*))(Il2CppBase() + 0x470E3E4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(FireModeHUD*))(Il2CppBase() + 0x470E3EC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(FireModeHUD*))(Il2CppBase() + 0x470E3F4))(this);
	}

};

}
