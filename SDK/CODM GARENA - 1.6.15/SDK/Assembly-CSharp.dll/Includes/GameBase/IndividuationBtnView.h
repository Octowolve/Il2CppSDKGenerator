#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class IndividuationBtnView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "IndividuationBtnView"));
	}

	template <typename T = uintptr_t> T& Btn() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& openSprite() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = uintptr_t> T& closeSprite() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDisable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ToggleButtonState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = uintptr_t> T get_mPawnSwitchState() {
		return ((T (*)(IndividuationBtnView*))(Il2CppBase() + 0x1EFE428))(this);
	}
	template <typename T = bool> T get_IsControlByUiState() {
		return ((T (*)(IndividuationBtnView*))(Il2CppBase() + 0x1EFE434))(this);
	}
	template <typename T = uint64_t> T get_InactiveGameHudState() {
		return ((T (*)(IndividuationBtnView*))(Il2CppBase() + 0x1EFE43C))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(IndividuationBtnView*))(Il2CppBase() + 0x1EFE450))(this);
	}
	template <typename T = void> T ToggleButtonState(bool bClose) {
		return ((T (*)(IndividuationBtnView*, bool))(Il2CppBase() + 0x1EFE5E0))(this, bClose);
	}
	template <typename T = void> T xLuaBaseProxy_OnDisable() {
		return ((T (*)(IndividuationBtnView*))(Il2CppBase() + 0x1EFE7C0))(this);
	}

};

}
