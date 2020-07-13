#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class BRChipMachineHUD
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "BRChipMachineHUD"));
	}

	template <typename T = uintptr_t> T& NewGuideEffect() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& NewGuideText() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& Root() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = uintptr_t> T& Open() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& m_Slot() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ForceRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UnRegisterDelegates() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnGamepadOpenClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Show() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnOpenClick() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDisable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ChangeEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsSafeActive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(BRChipMachineHUD*))(Il2CppBase() + 0x2D8637C))(this);
	}
	template <typename T = bool> T get_IsControlByUiState() {
		return ((T (*)(BRChipMachineHUD*))(Il2CppBase() + 0x2D86470))(this);
	}
	template <typename T = uint64_t> T get_InactiveGameHudState() {
		return ((T (*)(BRChipMachineHUD*))(Il2CppBase() + 0x2D86478))(this);
	}
	template <typename T = void> T RegisterDelegates() {
		return ((T (*)(BRChipMachineHUD*))(Il2CppBase() + 0x2D86484))(this);
	}
	template <typename T = void> T ForceRegisterDelegates() {
		return ((T (*)(BRChipMachineHUD*))(Il2CppBase() + 0x2D86618))(this);
	}
	template <typename T = void> T UnRegisterDelegates() {
		return ((T (*)(BRChipMachineHUD*))(Il2CppBase() + 0x2D866B0))(this);
	}
	template <typename T = bool> T OnGamepadOpenClick() {
		return ((T (*)(BRChipMachineHUD*))(Il2CppBase() + 0x2D867F4))(this);
	}
	template <typename T = void> T Show(bool bShow, uintptr_t slot) {
		return ((T (*)(BRChipMachineHUD*, bool, uintptr_t))(Il2CppBase() + 0x2D86B84))(this, bShow, slot);
	}
	template <typename T = void> T OnOpenClick() {
		return ((T (*)(BRChipMachineHUD*))(Il2CppBase() + 0x2D8693C))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(BRChipMachineHUD*))(Il2CppBase() + 0x2D86E14))(this);
	}
	template <typename T = void> T ChangeEffect(bool showEffect, uintptr_t itemType, Il2CppString* tipsText, uintptr_t fadeAction) {
		return ((T (*)(BRChipMachineHUD*, bool, uintptr_t, Il2CppString*, uintptr_t))(Il2CppBase() + 0x2D86FF8))(this, showEffect, itemType, tipsText, fadeAction);
	}
	template <typename T = bool> T IsSafeActive(uintptr_t itemType) {
		return ((T (*)(BRChipMachineHUD*, uintptr_t))(Il2CppBase() + 0x2D8726C))(this, itemType);
	}
	template <typename T = void> T xLuaBaseProxy_Awake() {
		return ((T (*)(BRChipMachineHUD*))(Il2CppBase() + 0x2D87368))(this);
	}
	template <typename T = void> T xLuaBaseProxy_RegisterDelegates() {
		return ((T (*)(BRChipMachineHUD*))(Il2CppBase() + 0x2D8736C))(this);
	}
	template <typename T = void> T xLuaBaseProxy_ForceRegisterDelegates() {
		return ((T (*)(BRChipMachineHUD*))(Il2CppBase() + 0x2D87370))(this);
	}
	template <typename T = void> T xLuaBaseProxy_UnRegisterDelegates() {
		return ((T (*)(BRChipMachineHUD*))(Il2CppBase() + 0x2D87374))(this);
	}
	template <typename T = void> T xLuaBaseProxy_OnDisable() {
		return ((T (*)(BRChipMachineHUD*))(Il2CppBase() + 0x2D87378))(this);
	}

};

}
