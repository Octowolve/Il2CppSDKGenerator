#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Text.RegularExpressions.Syntax {

class CompositeExpression
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.dll", "System.Text.RegularExpressions.Syntax", "CompositeExpression"));
	}

	template <typename T = uintptr_t> T& expressions() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = uintptr_t> T get_Expressions() {
		return ((T (*)(CompositeExpression*))(Il2CppBase() + 0x4ADFB3C))(this);
	}
	template <typename T = void> T GetWidth(uintptr_t* min, uintptr_t* max, int32_t count) {
		return ((T (*)(CompositeExpression*, uintptr_t*, uintptr_t*, int32_t))(Il2CppBase() + 0x4AE0420))(this, min, max, count);
	}
	template <typename T = bool> T IsComplex() {
		return ((T (*)(CompositeExpression*))(Il2CppBase() + 0x4AE3210))(this);
	}

};

}
