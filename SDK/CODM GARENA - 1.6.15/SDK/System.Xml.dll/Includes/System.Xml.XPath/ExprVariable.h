#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Xml.XPath {

class ExprVariable
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.dll", "System.Xml.XPath", "ExprVariable"));
	}

	template <typename T = uintptr_t> T& _name() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = bool> T& resolvedName() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(ExprVariable*))(Il2CppBase() + 0x4D0BD1C))(this);
	}
	template <typename T = uintptr_t> T get_ReturnType() {
		return ((T (*)(ExprVariable*))(Il2CppBase() + 0x4D0BE0C))(this);
	}
	template <typename T = uintptr_t> T GetReturnType(uintptr_t iter) {
		return ((T (*)(ExprVariable*, uintptr_t))(Il2CppBase() + 0x4D0BE14))(this, iter);
	}
	template <typename T = uintptr_t> T Evaluate(uintptr_t iter) {
		return ((T (*)(ExprVariable*, uintptr_t))(Il2CppBase() + 0x4D0BE1C))(this, iter);
	}
	template <typename T = bool> T get_Peer() {
		return ((T (*)(ExprVariable*))(Il2CppBase() + 0x4D0C26C))(this);
	}

};

}
