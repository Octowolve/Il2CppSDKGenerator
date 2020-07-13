#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Xml.XPath {

class ExprBinary
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.dll", "System.Xml.XPath", "ExprBinary"));
	}

	template <typename T = uintptr_t> T& _left() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& _right() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = uintptr_t> T Optimize() {
		return ((T (*)(ExprBinary*))(Il2CppBase() + 0x4D0409C))(this);
	}
	template <typename T = bool> T get_HasStaticValue() {
		return ((T (*)(ExprBinary*))(Il2CppBase() + 0x4D040FC))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(ExprBinary*))(Il2CppBase() + 0x4D04160))(this);
	}
	template <typename T = Il2CppString*> T get_Operator() {
		return ((T (*)(ExprBinary*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_Peer() {
		return ((T (*)(ExprBinary*))(Il2CppBase() + 0x4D04448))(this);
	}

};

}
