#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Xml {

class XmlNodeList
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.dll", "System.Xml", "XmlNodeList"));
	}


	template <typename T = int32_t> T get_Count() {
		return ((T (*)(XmlNodeList*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = uintptr_t> T get_ItemOf(int32_t i) {
		return ((T (*)(XmlNodeList*, int32_t))(Il2CppBase() + 0x37E2DA0))(this, i);
	}
	template <typename T = uintptr_t> T GetEnumerator() {
		return ((T (*)(XmlNodeList*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = uintptr_t> T Item(int32_t index) {
		return ((T (*)(XmlNodeList*, int32_t))(Il2CppBase() + 0x0))(this, index);
	}

};

}
