#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Text.RegularExpressions.Syntax {

class Repetition
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.dll", "System.Text.RegularExpressions.Syntax", "Repetition"));
	}

	template <typename T = int32_t> T& min() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& max() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& lazy() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = uintptr_t> T get_Expression() {
		return ((T (*)(Repetition*))(Il2CppBase() + 0x4AE9AF8))(this);
	}
	template <typename T = void> T set_Expression(uintptr_t value) {
		return ((T (*)(Repetition*, uintptr_t))(Il2CppBase() + 0x4AE8E38))(this, value);
	}
	template <typename T = int32_t> T get_Minimum() {
		return ((T (*)(Repetition*))(Il2CppBase() + 0x4AE9B24))(this);
	}
	template <typename T = void> T Compile(uintptr_t cmp, bool reverse) {
		return ((T (*)(Repetition*, uintptr_t, bool))(Il2CppBase() + 0x4AE9B2C))(this, cmp, reverse);
	}
	template <typename T = void> T GetWidth(uintptr_t* min, uintptr_t* max) {
		return ((T (*)(Repetition*, uintptr_t*, uintptr_t*))(Il2CppBase() + 0x4AE9F2C))(this, min, max);
	}
	template <typename T = uintptr_t> T GetAnchorInfo(bool reverse) {
		return ((T (*)(Repetition*, bool))(Il2CppBase() + 0x4AE9FA8))(this, reverse);
	}

};

}
