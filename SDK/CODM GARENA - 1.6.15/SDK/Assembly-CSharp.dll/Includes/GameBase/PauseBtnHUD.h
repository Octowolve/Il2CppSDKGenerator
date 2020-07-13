#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class PauseBtnHUD
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "PauseBtnHUD"));
	}

	template <typename T = float> static T& MAX_CLICK_TIME() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& PauseBtn() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& NormalPasueSprite() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& PressBtn() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = float> T& m_PressedTime() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = bool> T& m_IsPressed() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = uintptr_t> T& T_TargetClickedHandler() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDestroy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnBtnUp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPressed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEscapleBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPauseBtnTriggered() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnReleased() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnPauseBtnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_T_OnClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DelayInvoke() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_T_SetClickHandler() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}

	template <typename T = bool> T get_IsControlByUiState() {
		return ((T (*)(PauseBtnHUD*))(Il2CppBase() + 0x16255F8))(this);
	}
	template <typename T = uint64_t> T get_InactiveGameHudState() {
		return ((T (*)(PauseBtnHUD*))(Il2CppBase() + 0x1625704))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(PauseBtnHUD*))(Il2CppBase() + 0x16257BC))(this);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(PauseBtnHUD*))(Il2CppBase() + 0x1625934))(this);
	}
	template <typename T = void> T OnBtnUp() {
		return ((T (*)(PauseBtnHUD*))(Il2CppBase() + 0x16259CC))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(PauseBtnHUD*))(Il2CppBase() + 0x1625C88))(this);
	}
	template <typename T = void> T OnPressed() {
		return ((T (*)(PauseBtnHUD*))(Il2CppBase() + 0x1625E90))(this);
	}
	template <typename T = bool> T OnEscapleBtnClick() {
		return ((T (*)(PauseBtnHUD*))(Il2CppBase() + 0x1625F3C))(this);
	}
	template <typename T = void> T OnPauseBtnTriggered() {
		return ((T (*)(PauseBtnHUD*))(Il2CppBase() + 0x162619C))(this);
	}
	template <typename T = void> T OnReleased() {
		return ((T (*)(PauseBtnHUD*))(Il2CppBase() + 0x1625FF4))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(PauseBtnHUD*))(Il2CppBase() + 0x1626B1C))(this);
	}
	template <typename T = void> T OnPauseBtnClick() {
		return ((T (*)(PauseBtnHUD*))(Il2CppBase() + 0x1626C64))(this);
	}
	template <typename T = void> T T_OnClick() {
		return ((T (*)(PauseBtnHUD*))(Il2CppBase() + 0x16268D4))(this);
	}
	template <typename T = void> T DelayInvoke() {
		return ((T (*)(PauseBtnHUD*))(Il2CppBase() + 0x1626CFC))(this);
	}
	template <typename T = void> T T_SetClickHandler(uintptr_t clickHandler) {
		return ((T (*)(PauseBtnHUD*, uintptr_t))(Il2CppBase() + 0x1626E44))(this, clickHandler);
	}
	template <typename T = void> T xLuaBaseProxy_Start() {
		return ((T (*)(PauseBtnHUD*))(Il2CppBase() + 0x1626EEC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnDestroy() {
		return ((T (*)(PauseBtnHUD*))(Il2CppBase() + 0x1626EF4))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(PauseBtnHUD*))(Il2CppBase() + 0x1626EFC))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(PauseBtnHUD*))(Il2CppBase() + 0x1626F04))(this);
	}

};

}
