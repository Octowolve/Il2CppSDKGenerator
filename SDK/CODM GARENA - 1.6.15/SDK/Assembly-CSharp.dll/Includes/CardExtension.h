#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CardExtension
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CardExtension"));
	}

	template <typename T = uintptr_t> static T& __Hotfix0_StopCardEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayCardEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DestroyCardEffect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetCardActive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> static T StopCardEffect(uintptr_t go) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x531C990))(0, go);
	}
	template <typename T = void> static T PlayCardEffect(uintptr_t go) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x531CAA0))(0, go);
	}
	template <typename T = void> static T DestroyCardEffect(uintptr_t go) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x531CBB0))(0, go);
	}
	template <typename T = void> static T SetCardActive(uintptr_t w, bool active) {
		return ((T (*)(void *, uintptr_t, bool))(Il2CppBase() + 0x531CCDC))(0, w, active);
	}

};

}
