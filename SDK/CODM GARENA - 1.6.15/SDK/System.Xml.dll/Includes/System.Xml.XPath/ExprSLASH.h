#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Xml.XPath {

class ExprSLASH
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.dll", "System.Xml.XPath", "ExprSLASH"));
	}

	template <typename T = uintptr_t> T& left() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& right() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = uintptr_t> T Optimize() {
		return ((T (*)(ExprSLASH*))(Il2CppBase() + 0x4D0A644))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(ExprSLASH*))(Il2CppBase() + 0x4D0A714))(this);
	}
	template <typename T = uintptr_t> T Evaluate(uintptr_t iter) {
		return ((T (*)(ExprSLASH*, uintptr_t))(Il2CppBase() + 0x4D0A834))(this, iter);
	}
	template <typename T = bool> T get_RequireSorting() {
		return ((T (*)(ExprSLASH*))(Il2CppBase() + 0x4D0AD10))(this);
	}
	template <typename T = bool> T get_Peer() {
		return ((T (*)(ExprSLASH*))(Il2CppBase() + 0x4D0AD74))(this);
	}
	template <typename T = bool> T get_Subtree() {
		return ((T (*)(ExprSLASH*))(Il2CppBase() + 0x4D0ADD8))(this);
	}

};

}
