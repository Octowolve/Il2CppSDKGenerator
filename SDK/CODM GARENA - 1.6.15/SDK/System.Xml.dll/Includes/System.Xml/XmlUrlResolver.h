#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Xml {

class XmlUrlResolver
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.dll", "System.Xml", "XmlUrlResolver"));
	}

	template <typename T = uintptr_t> T& credential() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = uintptr_t> T GetEntity(uintptr_t absoluteUri, Il2CppString* role, uintptr_t ofObjectToReturn) {
		return ((T (*)(XmlUrlResolver*, uintptr_t, Il2CppString*, uintptr_t))(Il2CppBase() + 0x4CFDA04))(this, absoluteUri, role, ofObjectToReturn);
	}
	template <typename T = uintptr_t> T ResolveUri(uintptr_t baseUri, Il2CppString* relativeUri) {
		return ((T (*)(XmlUrlResolver*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x4CFDFFC))(this, baseUri, relativeUri);
	}
	template <typename T = Il2CppString*> T UnescapeRelativeUriBody(Il2CppString* src) {
		return ((T (*)(XmlUrlResolver*, Il2CppString*))(Il2CppBase() + 0x4CFDE24))(this, src);
	}

};

}
