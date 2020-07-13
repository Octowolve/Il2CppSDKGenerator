#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI.SoldierReturn {

class SoldierReturnRedDataUtil
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI.SoldierReturn", "SoldierReturnRedDataUtil"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsShowLobbyBtnRed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_WriteLobyyButtonClicked() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsShowRed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsShowNewContentRed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsShowDailyLoginRed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsShowTrainingRed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsShowBenifitsRed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsShowBenifitsBPRed() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}

	template <typename T = bool> static T IsShowLobbyBtnRed() {
		return ((T (*)(void *))(Il2CppBase() + 0x3CAF2E0))(0);
	}
	template <typename T = void> static T WriteLobyyButtonClicked() {
		return ((T (*)(void *))(Il2CppBase() + 0x3CAF42C))(0);
	}
	template <typename T = bool> static T IsShowRed(uintptr_t tab) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3CA8A1C))(0, tab);
	}
	template <typename T = bool> static T IsShowNewContentRed() {
		return ((T (*)(void *))(Il2CppBase() + 0x3CAF554))(0);
	}
	template <typename T = bool> static T IsShowDailyLoginRed() {
		return ((T (*)(void *))(Il2CppBase() + 0x3CAF78C))(0);
	}
	template <typename T = bool> static T IsShowTrainingRed() {
		return ((T (*)(void *))(Il2CppBase() + 0x3CAF844))(0);
	}
	template <typename T = bool> static T IsShowBenifitsRed() {
		return ((T (*)(void *))(Il2CppBase() + 0x3CAFA4C))(0);
	}
	template <typename T = bool> static T IsShowBenifitsBPRed() {
		return ((T (*)(void *))(Il2CppBase() + 0x3CAFAE4))(0);
	}

};

}
