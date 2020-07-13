#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class UIPreAnimationManager
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "UIPreAnimationManager"));
	}

	template <typename T = uintptr_t> static T& _manager() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppDictionary<uintptr_t, uintptr_t>*> T& _manageredAnis() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Instance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnFadeOutFinish() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PlayPreFade() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = uintptr_t> static T Instance() {
		return ((T (*)(void *))(Il2CppBase() + 0x3B03464))(0);
	}
	template <typename T = void> T OnFadeOutFinish() {
		return ((T (*)(UIPreAnimationManager*))(Il2CppBase() + 0x3B03610))(this);
	}
	template <typename T = bool> T PlayPreFade(uintptr_t controller, uintptr_t deferedAction) {
		return ((T (*)(UIPreAnimationManager*, uintptr_t, uintptr_t))(Il2CppBase() + 0x3B0379C))(this, controller, deferedAction);
	}

};

}
