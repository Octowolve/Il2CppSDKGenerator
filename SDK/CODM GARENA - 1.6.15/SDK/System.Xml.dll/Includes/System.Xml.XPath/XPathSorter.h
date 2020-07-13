#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Xml.XPath {

class XPathSorter
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.dll", "System.Xml.XPath", "XPathSorter"));
	}

	template <typename T = uintptr_t> T& _expr() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& _cmp() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& _type() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = uintptr_t> T Evaluate(uintptr_t iter) {
		return ((T (*)(XPathSorter*, uintptr_t))(Il2CppBase() + 0x521F9E0))(this, iter);
	}
	template <typename T = int32_t> T Compare(uintptr_t o1, uintptr_t o2) {
		return ((T (*)(XPathSorter*, uintptr_t, uintptr_t))(Il2CppBase() + 0x521FAC0))(this, o1, o2);
	}

};

}
