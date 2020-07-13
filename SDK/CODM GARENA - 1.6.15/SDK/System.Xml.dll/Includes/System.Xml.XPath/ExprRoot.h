#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Xml.XPath {

class ExprRoot
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.dll", "System.Xml.XPath", "ExprRoot"));
	}


	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(ExprRoot*))(Il2CppBase() + 0x4D0A3F0))(this);
	}
	template <typename T = uintptr_t> T Evaluate(uintptr_t iter) {
		return ((T (*)(ExprRoot*, uintptr_t))(Il2CppBase() + 0x4D0A4A0))(this, iter);
	}
	template <typename T = bool> T get_Peer() {
		return ((T (*)(ExprRoot*))(Il2CppBase() + 0x4D0A60C))(this);
	}
	template <typename T = bool> T get_Subtree() {
		return ((T (*)(ExprRoot*))(Il2CppBase() + 0x4D0A614))(this);
	}

};

}
