#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Xml.XPath {

class XPathNavigatorComparer
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.dll", "System.Xml.XPath", "XPathNavigatorComparer"));
	}

	template <typename T = uintptr_t> static T& Instance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = bool> T System_Collections_IEqualityComparer_Equals(uintptr_t o1, uintptr_t o2) {
		return ((T (*)(XPathNavigatorComparer*, uintptr_t, uintptr_t))(Il2CppBase() + 0x521F434))(this, o1, o2);
	}
	template <typename T = int32_t> T System_Collections_IEqualityComparer_GetHashCode(uintptr_t obj) {
		return ((T (*)(XPathNavigatorComparer*, uintptr_t))(Il2CppBase() + 0x521F54C))(this, obj);
	}
	template <typename T = int32_t> T Compare(uintptr_t o1, uintptr_t o2) {
		return ((T (*)(XPathNavigatorComparer*, uintptr_t, uintptr_t))(Il2CppBase() + 0x521F584))(this, o1, o2);
	}

};

}
