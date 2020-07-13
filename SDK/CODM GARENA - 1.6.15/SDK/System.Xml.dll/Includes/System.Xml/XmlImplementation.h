#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Xml {

class XmlImplementation
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.dll", "System.Xml", "XmlImplementation"));
	}

	template <typename T = uintptr_t> T& InternalNameTable() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = uintptr_t> T CreateDocument() {
		return ((T (*)(XmlImplementation*))(Il2CppBase() + 0x37DCAC0))(this);
	}

};

}
