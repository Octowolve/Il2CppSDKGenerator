#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Xml {

class IXmlNamespaceResolver
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.dll", "System.Xml", "IXmlNamespaceResolver"));
	}


	template <typename T = Il2CppString*> T LookupNamespace(Il2CppString* prefix) {
		return ((T (*)(IXmlNamespaceResolver*, Il2CppString*))(Il2CppBase() + 0x0))(this, prefix);
	}

};

}
