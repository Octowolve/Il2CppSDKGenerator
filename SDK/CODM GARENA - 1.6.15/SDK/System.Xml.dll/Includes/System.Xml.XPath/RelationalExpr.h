#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Xml.XPath {

class RelationalExpr
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.dll", "System.Xml.XPath", "RelationalExpr"));
	}


	template <typename T = bool> T get_StaticValueAsBoolean() {
		return ((T (*)(RelationalExpr*))(Il2CppBase() + 0x4D0E76C))(this);
	}
	template <typename T = bool> T EvaluateBoolean(uintptr_t iter) {
		return ((T (*)(RelationalExpr*, uintptr_t))(Il2CppBase() + 0x4D0E814))(this, iter);
	}
	template <typename T = bool> T Compare(double arg1, double arg2) {
		return ((T (*)(RelationalExpr*, double, double))(Il2CppBase() + 0x0))(this, arg1, arg2);
	}
	template <typename T = bool> T Compare_1(double arg1, double arg2, bool fReverse) {
		return ((T (*)(RelationalExpr*, double, double, bool))(Il2CppBase() + 0x4D0EE18))(this, arg1, arg2, fReverse);
	}

};

}
