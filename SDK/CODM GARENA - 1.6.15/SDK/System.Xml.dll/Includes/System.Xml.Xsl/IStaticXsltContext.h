#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Xml.Xsl {

class IStaticXsltContext
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.dll", "System.Xml.Xsl", "IStaticXsltContext"));
	}


	template <typename T = uintptr_t> T TryGetVariable(Il2CppString* nm) {
		return ((T (*)(IStaticXsltContext*, Il2CppString*))(Il2CppBase() + 0x0))(this, nm);
	}
	template <typename T = uintptr_t> T TryGetFunction(uintptr_t nm, uintptr_t args) {
		return ((T (*)(IStaticXsltContext*, uintptr_t, uintptr_t))(Il2CppBase() + 0x0))(this, nm, args);
	}
	template <typename T = uintptr_t> T LookupQName(Il2CppString* s) {
		return ((T (*)(IStaticXsltContext*, Il2CppString*))(Il2CppBase() + 0x0))(this, s);
	}

};

}
