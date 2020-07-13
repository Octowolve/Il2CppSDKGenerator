#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Xml.XPath {

class XPathIteratorComparer
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.dll", "System.Xml.XPath", "XPathIteratorComparer"));
	}

	template <typename T = uintptr_t> static T& Instance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = int32_t> T Compare(uintptr_t o1, uintptr_t o2) {
		return ((T (*)(XPathIteratorComparer*, uintptr_t, uintptr_t))(Il2CppBase() + 0x521DB78))(this, o1, o2);
	}

};

}
