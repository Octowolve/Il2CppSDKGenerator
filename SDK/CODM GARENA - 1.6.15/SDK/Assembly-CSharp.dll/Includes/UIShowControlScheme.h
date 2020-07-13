#pragma once
#include <Il2Cpp/Il2Cpp.h>

class UIShowControlScheme
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UIShowControlScheme"));
	}

	template <typename T = uintptr_t> T& target() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = bool> T& mouse() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& touch() {
		return *(T*)((uintptr_t)this + 0x11);
	}
	template <typename T = bool> T& controller() {
		return *(T*)((uintptr_t)this + 0x12);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEnable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDisable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnScheme() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T OnEnable() {
		return ((T (*)(UIShowControlScheme*))(Il2CppBase() + 0x2FA3D30))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(UIShowControlScheme*))(Il2CppBase() + 0x2FA412C))(this);
	}
	template <typename T = void> T OnScheme() {
		return ((T (*)(UIShowControlScheme*))(Il2CppBase() + 0x2FA3F8C))(this);
	}

};

}
