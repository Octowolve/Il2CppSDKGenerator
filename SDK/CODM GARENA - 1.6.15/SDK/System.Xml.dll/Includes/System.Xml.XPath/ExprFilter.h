#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Xml.XPath {

class ExprFilter
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.dll", "System.Xml.XPath", "ExprFilter"));
	}

	template <typename T = uintptr_t> T& expr() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& pred() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = uintptr_t> T Optimize() {
		return ((T (*)(ExprFilter*))(Il2CppBase() + 0x4D06060))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(ExprFilter*))(Il2CppBase() + 0x4D060C0))(this);
	}
	template <typename T = uintptr_t> T Evaluate(uintptr_t iter) {
		return ((T (*)(ExprFilter*, uintptr_t))(Il2CppBase() + 0x4D063B4))(this, iter);
	}
	template <typename T = bool> T get_Peer() {
		return ((T (*)(ExprFilter*))(Il2CppBase() + 0x4D064EC))(this);
	}
	template <typename T = bool> T get_Subtree() {
		return ((T (*)(ExprFilter*))(Il2CppBase() + 0x4D06550))(this);
	}

};

}
