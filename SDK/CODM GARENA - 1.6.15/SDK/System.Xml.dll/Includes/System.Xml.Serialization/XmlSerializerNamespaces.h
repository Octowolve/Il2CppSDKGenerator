#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Xml.Serialization {

class XmlSerializerNamespaces
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.dll", "System.Xml.Serialization", "XmlSerializerNamespaces"));
	}

	template <typename T = uintptr_t> T& namespaces() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = void> T Add(Il2CppString* prefix, Il2CppString* ns) {
		return ((T (*)(XmlSerializerNamespaces*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x37B8984))(this, prefix, ns);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T ToArray() {
		return ((T (*)(XmlSerializerNamespaces*))(Il2CppBase() + 0x37BBDA4))(this);
	}

};

}
