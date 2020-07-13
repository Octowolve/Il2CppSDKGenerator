#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Text.RegularExpressions.Syntax {

class CaptureAssertion
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.dll", "System.Text.RegularExpressions.Syntax", "CaptureAssertion"));
	}

	template <typename T = uintptr_t> T& alternate() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& group() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& literal() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = void> T set_CapturingGroup(uintptr_t value) {
		return ((T (*)(CaptureAssertion*, uintptr_t))(Il2CppBase() + 0x4AE14C8))(this, value);
	}
	template <typename T = void> T Compile(uintptr_t cmp, bool reverse) {
		return ((T (*)(CaptureAssertion*, uintptr_t, bool))(Il2CppBase() + 0x4AE14D0))(this, cmp, reverse);
	}
	template <typename T = bool> T IsComplex() {
		return ((T (*)(CaptureAssertion*))(Il2CppBase() + 0x4AE1A58))(this);
	}
	template <typename T = uintptr_t> T get_Alternate() {
		return ((T (*)(CaptureAssertion*))(Il2CppBase() + 0x4AE1960))(this);
	}

};

}
