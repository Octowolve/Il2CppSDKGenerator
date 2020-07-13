#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Xml.XPath {

class XPathNodeIterator
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.dll", "System.Xml.XPath", "XPathNodeIterator"));
	}

	template <typename T = int32_t> T& _count() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = uintptr_t> T System_ICloneable_Clone() {
		return ((T (*)(XPathNodeIterator*))(Il2CppBase() + 0x521F6B4))(this);
	}
	template <typename T = int32_t> T get_Count() {
		return ((T (*)(XPathNodeIterator*))(Il2CppBase() + 0x521F6C4))(this);
	}
	template <typename T = uintptr_t> T get_Current() {
		return ((T (*)(XPathNodeIterator*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = int32_t> T get_CurrentPosition() {
		return ((T (*)(XPathNodeIterator*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = uintptr_t> T Clone() {
		return ((T (*)(XPathNodeIterator*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = uintptr_t> T GetEnumerator() {
		return ((T (*)(XPathNodeIterator*))(Il2CppBase() + 0x521F740))(this);
	}
	template <typename T = bool> T MoveNext() {
		return ((T (*)(XPathNodeIterator*))(Il2CppBase() + 0x0))(this);
	}

};

}
