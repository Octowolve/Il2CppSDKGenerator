#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class PCInput
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "PCInput"));
	}

	template <typename T = bool> T& mUsePCController() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& UIRoot_P() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& UIRoot_M() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& mShowUI() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = bool> T& mShowlUIRoot() {
		return *(T*)((uintptr_t)this + 0x15);
	}
	template <typename T = bool> T& mFreeCamera() {
		return *(T*)((uintptr_t)this + 0x16);
	}
	template <typename T = uintptr_t> T& PVPScorePanel() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& VersionInfo() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& InputCommandLine() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& CustomBtnPanel() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& PauseBtn() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& NetworkStatusHud() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& UIRootGO() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& UIRootPerspective() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& PVPKillInfoPanel() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& TacticalRadar() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& PVPHudBag() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& FeedBackHUD() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> T& SwitchBagHUD() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& KillStreakHUD() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uintptr_t> T& InGameMessage() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& GamePlayerInfoNew() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = uintptr_t> T& CODCrossHair() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = bool> T& mShowCrossHair() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = uintptr_t> T& CrossHairPlayerInfo() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> T& ZMLeftTimeHUD() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = uintptr_t> T& ZMTaskProgressHUD() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = uintptr_t> T& ZMTeamMateHUD() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = uintptr_t> T& ZMBuffInfoHUD() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = bool> static T& m_IsInitAllowInputKeyPad() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> static T& m_AllowInputKeyPad() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ToggleUI() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ToggleUIRoot() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = bool> T get_UsePCController() {
		return ((T (*)(PCInput*))(Il2CppBase() + 0x273ED1C))(this);
	}
	template <typename T = void> static T set_AllowInputKeyPad(bool value) {
		return ((T (*)(void *, bool))(Il2CppBase() + 0x273ED24))(0, value);
	}
	template <typename T = bool> static T get_AllowInputKeyPad() {
		return ((T (*)(void *))(Il2CppBase() + 0x273EE74))(0);
	}
	template <typename T = void> T ToggleUI() {
		return ((T (*)(PCInput*))(Il2CppBase() + 0x273F04C))(this);
	}
	template <typename T = void> T ToggleUIRoot() {
		return ((T (*)(PCInput*))(Il2CppBase() + 0x273FC0C))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(PCInput*))(Il2CppBase() + 0x273FE80))(this);
	}

};

}
