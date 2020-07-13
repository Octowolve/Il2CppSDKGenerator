#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Xml {

class XmlNodeListChildren
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.dll", "System.Xml", "XmlNodeListChildren"));
	}

	template <typename T = uintptr_t> T& parent() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = int32_t> T get_Count() {
		return ((T (*)(XmlNodeListChildren*))(Il2CppBase() + 0x37E2DB0))(this);
	}
	template <typename T = uintptr_t> T GetEnumerator() {
		return ((T (*)(XmlNodeListChildren*))(Il2CppBase() + 0x37E2FFC))(this);
	}
	template <typename T = uintptr_t> T Item(int32_t index) {
		return ((T (*)(XmlNodeListChildren*, int32_t))(Il2CppBase() + 0x37E30CC))(this, index);
	}

};

}
