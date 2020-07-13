#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class FireModeSwitchView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "FireModeSwitchView"));
	}

	template <typename T = uintptr_t> T& SpriteIcon() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnButtonClicked() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetIcon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> T OnButtonClicked() {
		return ((T (*)(FireModeSwitchView*))(Il2CppBase() + 0x31E1EF8))(this);
	}
	template <typename T = void> T ResetIcon() {
		return ((T (*)(FireModeSwitchView*))(Il2CppBase() + 0x31E2284))(this);
	}

};

}
