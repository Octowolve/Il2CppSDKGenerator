#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Xml.XPath {

class XPathFunctions
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.dll", "System.Xml.XPath", "XPathFunctions"));
	}


	template <typename T = bool> static T ToBoolean(uintptr_t arg) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x521A040))(0, arg);
	}
	template <typename T = bool> static T ToBoolean_1(Il2CppString* s) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x521A2EC))(0, s);
	}
	template <typename T = Il2CppString*> static T ToString(uintptr_t arg) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x521A320))(0, arg);
	}
	template <typename T = Il2CppString*> static T ToString_1(double d) {
		return ((T (*)(void *, double))(Il2CppBase() + 0x521A638))(0, d);
	}
	template <typename T = double> static T ToNumber(uintptr_t arg) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x521A788))(0, arg);
	}
	template <typename T = double> static T ToNumber_1(Il2CppString* arg) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x5219328))(0, arg);
	}

};

}
