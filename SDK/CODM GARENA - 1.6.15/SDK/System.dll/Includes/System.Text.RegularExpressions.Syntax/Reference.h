#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Text.RegularExpressions.Syntax {

class Reference
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.dll", "System.Text.RegularExpressions.Syntax", "Reference"));
	}

	template <typename T = uintptr_t> T& group() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = bool> T& ignore() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = uintptr_t> T get_CapturingGroup() {
		return ((T (*)(Reference*))(Il2CppBase() + 0x4AE0E00))(this);
	}
	template <typename T = void> T set_CapturingGroup(uintptr_t value) {
		return ((T (*)(Reference*, uintptr_t))(Il2CppBase() + 0x4AE0D74))(this, value);
	}
	template <typename T = bool> T get_IgnoreCase() {
		return ((T (*)(Reference*))(Il2CppBase() + 0x4AE0F30))(this);
	}
	template <typename T = void> T Compile(uintptr_t cmp, bool reverse) {
		return ((T (*)(Reference*, uintptr_t, bool))(Il2CppBase() + 0x4AE0E08))(this, cmp, reverse);
	}
	template <typename T = void> T GetWidth(uintptr_t* min, uintptr_t* max) {
		return ((T (*)(Reference*, uintptr_t*, uintptr_t*))(Il2CppBase() + 0x4AE95D4))(this, min, max);
	}
	template <typename T = bool> T IsComplex() {
		return ((T (*)(Reference*))(Il2CppBase() + 0x4AE95E8))(this);
	}

};

}
