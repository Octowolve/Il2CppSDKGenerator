#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Xml.XPath {

class XPathSorters
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.dll", "System.Xml.XPath", "XPathSorters"));
	}

	template <typename T = uintptr_t> T& _rgSorters() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = int32_t> T System_Collections_IComparer_Compare(uintptr_t o1, uintptr_t o2) {
		return ((T (*)(XPathSorters*, uintptr_t, uintptr_t))(Il2CppBase() + 0x521FBC4))(this, o1, o2);
	}
	template <typename T = uintptr_t> T Sort(uintptr_t iter) {
		return ((T (*)(XPathSorters*, uintptr_t))(Il2CppBase() + 0x521FDC4))(this, iter);
	}
	template <typename T = uintptr_t> T ToSortElementList(uintptr_t iter) {
		return ((T (*)(XPathSorters*, uintptr_t))(Il2CppBase() + 0x521FE10))(this, iter);
	}
	template <typename T = uintptr_t> T Sort_1(uintptr_t rgElts, uintptr_t nsm) {
		return ((T (*)(XPathSorters*, uintptr_t, uintptr_t))(Il2CppBase() + 0x52200AC))(this, rgElts, nsm);
	}

};

}
