#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Text.RegularExpressions.Syntax {

class ExpressionAssertion
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.dll", "System.Text.RegularExpressions.Syntax", "ExpressionAssertion"));
	}

	template <typename T = bool> T& reverse() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = bool> T& negate() {
		return *(T*)((uintptr_t)this + 0xD);
	}

	template <typename T = void> T set_Reverse(bool value) {
		return ((T (*)(ExpressionAssertion*, bool))(Il2CppBase() + 0x4AE362C))(this, value);
	}
	template <typename T = void> T set_Negate(bool value) {
		return ((T (*)(ExpressionAssertion*, bool))(Il2CppBase() + 0x4AE3634))(this, value);
	}
	template <typename T = uintptr_t> T get_TestExpression() {
		return ((T (*)(ExpressionAssertion*))(Il2CppBase() + 0x4AE363C))(this);
	}
	template <typename T = void> T set_TestExpression(uintptr_t value) {
		return ((T (*)(ExpressionAssertion*, uintptr_t))(Il2CppBase() + 0x4AE1BEC))(this, value);
	}
	template <typename T = void> T Compile(uintptr_t cmp, bool reverse) {
		return ((T (*)(ExpressionAssertion*, uintptr_t, bool))(Il2CppBase() + 0x4AE3668))(this, cmp, reverse);
	}
	template <typename T = bool> T IsComplex() {
		return ((T (*)(ExpressionAssertion*))(Il2CppBase() + 0x4AE3DA0))(this);
	}

};

}
