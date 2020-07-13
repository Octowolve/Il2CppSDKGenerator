#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Text.RegularExpressions {

class Match
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.dll", "System.Text.RegularExpressions", "Match"));
	}

	template <typename T = uintptr_t> T& regex() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& machine() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& text_length() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& groups() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> static T& empty() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = uintptr_t> static T get_Empty() {
		return ((T (*)(void *))(Il2CppBase() + 0x4AD3E94))(0);
	}
	template <typename T = uintptr_t> T get_Groups() {
		return ((T (*)(Match*))(Il2CppBase() + 0x4AD9E40))(this);
	}
	template <typename T = uintptr_t> T NextMatch() {
		return ((T (*)(Match*))(Il2CppBase() + 0x4AD9E48))(this);
	}
	template <typename T = uintptr_t> T get_Regex() {
		return ((T (*)(Match*))(Il2CppBase() + 0x4AD3F44))(this);
	}

};

}
