#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ShadowLabel
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ShadowLabel"));
	}

	template <typename T = uintptr_t> T& label() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& shadow() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetText() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> T SetText(Il2CppString* text) {
		return ((T (*)(ShadowLabel*, Il2CppString*))(Il2CppBase() + 0x28C3D5C))(this, text);
	}

};

}
