#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class BRFireModeChangeHud
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "BRFireModeChangeHud"));
	}

	template <typename T = uintptr_t> T& ChangeBtn() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& FPPLabel() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& TPPLabel() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ForceRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GamepadFunc() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGamepadOpenAim() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnOpenAimBtnClicked() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SwitchFPSorTPSLabel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}

	template <typename T = bool> T get_IsControlByUiState() {
		return ((T (*)(BRFireModeChangeHud*))(Il2CppBase() + 0x2D8D35C))(this);
	}
	template <typename T = uint64_t> T get_InactiveGameHudState() {
		return ((T (*)(BRFireModeChangeHud*))(Il2CppBase() + 0x2D8D364))(this);
	}
	template <typename T = uintptr_t> T get_TickRate() {
		return ((T (*)(BRFireModeChangeHud*))(Il2CppBase() + 0x2D8D378))(this);
	}
	template <typename T = void> T ForceRegisterDelegates() {
		return ((T (*)(BRFireModeChangeHud*))(Il2CppBase() + 0x2D8D380))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(BRFireModeChangeHud*))(Il2CppBase() + 0x2D8D418))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(BRFireModeChangeHud*))(Il2CppBase() + 0x2D8D5D4))(this);
	}
	template <typename T = uintptr_t> T GamepadFunc() {
		return ((T (*)(BRFireModeChangeHud*))(Il2CppBase() + 0x2D8D718))(this);
	}
	template <typename T = bool> T OnGamepadOpenAim() {
		return ((T (*)(BRFireModeChangeHud*))(Il2CppBase() + 0x2D8D800))(this);
	}
	template <typename T = void> T OnOpenAimBtnClicked(uintptr_t go, bool state) {
		return ((T (*)(BRFireModeChangeHud*, uintptr_t, bool))(Il2CppBase() + 0x2D8D950))(this, go, state);
	}
	template <typename T = void> T SwitchFPSorTPSLabel(bool isFPP) {
		return ((T (*)(BRFireModeChangeHud*, bool))(Il2CppBase() + 0x2D8DCF4))(this, isFPP);
	}
	template <typename T = void> T xLuaBaseProxy_ForceRegisterDelegates() {
		return ((T (*)(BRFireModeChangeHud*))(Il2CppBase() + 0x2D8DF0C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(BRFireModeChangeHud*))(Il2CppBase() + 0x2D8DF10))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(BRFireModeChangeHud*))(Il2CppBase() + 0x2D8DF14))(this);
	}

};

}
