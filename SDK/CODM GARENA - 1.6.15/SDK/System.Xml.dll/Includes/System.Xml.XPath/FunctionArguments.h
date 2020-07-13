#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Xml.XPath {

class FunctionArguments
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.dll", "System.Xml.XPath", "FunctionArguments"));
	}

	template <typename T = uintptr_t> T& _arg() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& _tail() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = uintptr_t> T get_Arg() {
		return ((T (*)(FunctionArguments*))(Il2CppBase() + 0x4D0C5A8))(this);
	}
	template <typename T = uintptr_t> T get_Tail() {
		return ((T (*)(FunctionArguments*))(Il2CppBase() + 0x4D0C5B0))(this);
	}
	template <typename T = void> T ToArrayList(uintptr_t a) {
		return ((T (*)(FunctionArguments*, uintptr_t))(Il2CppBase() + 0x4D06798))(this, a);
	}

};

}
