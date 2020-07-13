#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class PerkFeedbackHUD
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "PerkFeedbackHUD"));
	}

	template <typename T = uintptr_t> T& selfFeedback() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& otherFeedback() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayFeedback() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = uint64_t> T get_InactiveGameHudState() {
		return ((T (*)(PerkFeedbackHUD*))(Il2CppBase() + 0x16D96E0))(this);
	}
	template <typename T = bool> T get_IsControlByUiState() {
		return ((T (*)(PerkFeedbackHUD*))(Il2CppBase() + 0x16D96EC))(this);
	}
	template <typename T = void> T PlayFeedback(Il2CppString* iconName, bool self) {
		return ((T (*)(PerkFeedbackHUD*, Il2CppString*, bool))(Il2CppBase() + 0x16D96F4))(this, iconName, self);
	}

};

}
