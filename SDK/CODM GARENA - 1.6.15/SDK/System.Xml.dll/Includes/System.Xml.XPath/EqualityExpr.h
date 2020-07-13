#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Xml.XPath {

class EqualityExpr
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.dll", "System.Xml.XPath", "EqualityExpr"));
	}

	template <typename T = bool> T& trueVal() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = bool> T get_StaticValueAsBoolean() {
		return ((T (*)(EqualityExpr*))(Il2CppBase() + 0x4D0305C))(this);
	}
	template <typename T = bool> T EvaluateBoolean(uintptr_t iter) {
		return ((T (*)(EqualityExpr*, uintptr_t))(Il2CppBase() + 0x4D03484))(this, iter);
	}

};

}
