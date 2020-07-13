#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Text.RegularExpressions.Syntax {

class Assertion
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.dll", "System.Text.RegularExpressions.Syntax", "Assertion"));
	}


	template <typename T = uintptr_t> T get_TrueExpression() {
		return ((T (*)(Assertion*))(Il2CppBase() + 0x4AE0760))(this);
	}
	template <typename T = void> T set_TrueExpression(uintptr_t value) {
		return ((T (*)(Assertion*, uintptr_t))(Il2CppBase() + 0x4AE08B4))(this, value);
	}
	template <typename T = uintptr_t> T get_FalseExpression() {
		return ((T (*)(Assertion*))(Il2CppBase() + 0x4AE09F4))(this);
	}
	template <typename T = void> T set_FalseExpression(uintptr_t value) {
		return ((T (*)(Assertion*, uintptr_t))(Il2CppBase() + 0x4AE0A20))(this, value);
	}
	template <typename T = void> T GetWidth(uintptr_t* min, uintptr_t* max) {
		return ((T (*)(Assertion*, uintptr_t*, uintptr_t*))(Il2CppBase() + 0x4AE0A50))(this, min, max);
	}

};

}
