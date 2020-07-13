#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Xml.XPath {

class ExprNumeric
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.dll", "System.Xml.XPath", "ExprNumeric"));
	}


	template <typename T = uintptr_t> T get_ReturnType() {
		return ((T (*)(ExprNumeric*))(Il2CppBase() + 0x4D09A5C))(this);
	}
	template <typename T = uintptr_t> T Optimize() {
		return ((T (*)(ExprNumeric*))(Il2CppBase() + 0x4D09A64))(this);
	}
	template <typename T = uintptr_t> T Evaluate(uintptr_t iter) {
		return ((T (*)(ExprNumeric*, uintptr_t))(Il2CppBase() + 0x4D09B38))(this, iter);
	}

};

}
