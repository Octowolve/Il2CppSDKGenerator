#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameSettings {

class SettingsNewHudView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameSettings", "SettingsNewHudView"));
	}

	template <typename T = uintptr_t> T& T_TargetClickedHandler() {
		return *(T*)((uintptr_t)this + 0x128);
	}
	template <typename T = uintptr_t> T& closeBtn() {
		return *(T*)((uintptr_t)this + 0x12C);
	}
	template <typename T = uintptr_t> T& BackBG() {
		return *(T*)((uintptr_t)this + 0x130);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& relativePanels() {
		return *(T*)((uintptr_t)this + 0x134);
	}
	template <typename T = uintptr_t> T& GamepadIcon() {
		return *(T*)((uintptr_t)this + 0x138);
	}
	template <typename T = bool> T& bAdjusted() {
		return *(T*)((uintptr_t)this + 0x13C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_T_OnClickBack() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_T_SetClickHandler() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AdaptBackBG() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AdaptGamepadIcon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetPanelDepth() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}

	template <typename T = void> T T_OnClickBack() {
		return ((T (*)(SettingsNewHudView*))(Il2CppBase() + 0x28843E4))(this);
	}
	template <typename T = void> T T_SetClickHandler(uintptr_t clickHandler) {
		return ((T (*)(SettingsNewHudView*, uintptr_t))(Il2CppBase() + 0x288464C))(this, clickHandler);
	}
	template <typename T = void> T AdaptBackBG() {
		return ((T (*)(SettingsNewHudView*))(Il2CppBase() + 0x28821B8))(this);
	}
	template <typename T = void> T AdaptGamepadIcon() {
		return ((T (*)(SettingsNewHudView*))(Il2CppBase() + 0x28822CC))(this);
	}
	template <typename T = void> T SetPanelDepth(int32_t addDepth) {
		return ((T (*)(SettingsNewHudView*, int32_t))(Il2CppBase() + 0x287FA10))(this, addDepth);
	}

};

}
