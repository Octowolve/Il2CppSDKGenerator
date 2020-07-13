#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GenericFont
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GenericFont"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Measure() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Draw() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = int32_t> T get_LineSpacing() {
		return ((T (*)(GenericFont*))(Il2CppBase() + 0x47660E4))(this);
	}
	template <typename T = int32_t> T get_WhiteSize() {
		return ((T (*)(GenericFont*))(Il2CppBase() + 0x47660EC))(this);
	}
	template <typename T = uintptr_t> T Measure(Il2CppString* text) {
		return ((T (*)(GenericFont*, Il2CppString*))(Il2CppBase() + 0x47660FC))(this, text);
	}
	template <typename T = void> T Draw(Il2CppString* id, uintptr_t rect, uintptr_t color, Il2CppString* text, bool isEffect, uintptr_t effect, uintptr_t effectColor, int32_t effectAmount, Il2CppString* linkText, uintptr_t userData) {
		return ((T (*)(GenericFont*, Il2CppString*, uintptr_t, uintptr_t, Il2CppString*, bool, uintptr_t, uintptr_t, int32_t, Il2CppString*, uintptr_t))(Il2CppBase() + 0x47662C8))(this, id, rect, color, text, isEffect, effect, effectColor, effectAmount, linkText, userData);
	}

};

}
