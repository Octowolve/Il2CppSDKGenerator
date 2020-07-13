#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Text {

class StringBuilderUtility
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "System.Text", "StringBuilderUtility"));
	}

	template <typename T = uintptr_t> static T& __Hotfix0_AppendInt() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_AppendInt() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Clear() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> static T AppendInt(uintptr_t str, int32_t value) {
		return ((T (*)(void *, uintptr_t, int32_t))(Il2CppBase() + 0x3F3D348))(0, str, value);
	}
	template <typename T = void> static T AppendInt_1(uintptr_t str, int32_t value, int32_t digits) {
		return ((T (*)(void *, uintptr_t, int32_t, int32_t))(Il2CppBase() + 0x3F3D4B0))(0, str, value, digits);
	}
	template <typename T = void> static T Clear(uintptr_t str) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3F26514))(0, str);
	}

};

}
