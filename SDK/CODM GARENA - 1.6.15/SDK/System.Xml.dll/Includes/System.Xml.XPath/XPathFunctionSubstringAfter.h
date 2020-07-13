#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Xml.XPath {

class XPathFunctionSubstringAfter
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.dll", "System.Xml.XPath", "XPathFunctionSubstringAfter"));
	}

	template <typename T = uintptr_t> T& arg0() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& arg1() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = uintptr_t> T get_ReturnType() {
		return ((T (*)(XPathFunctionSubstringAfter*))(Il2CppBase() + 0x521C1F8))(this);
	}
	template <typename T = bool> T get_Peer() {
		return ((T (*)(XPathFunctionSubstringAfter*))(Il2CppBase() + 0x521C200))(this);
	}
	template <typename T = uintptr_t> T Evaluate(uintptr_t iter) {
		return ((T (*)(XPathFunctionSubstringAfter*, uintptr_t))(Il2CppBase() + 0x521C264))(this, iter);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(XPathFunctionSubstringAfter*))(Il2CppBase() + 0x521C3BC))(this);
	}

};

}
