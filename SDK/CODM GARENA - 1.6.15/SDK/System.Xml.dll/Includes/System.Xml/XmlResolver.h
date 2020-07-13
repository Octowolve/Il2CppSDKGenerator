#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Xml {

class XmlResolver
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.dll", "System.Xml", "XmlResolver"));
	}


	template <typename T = uintptr_t> T GetEntity(uintptr_t absoluteUri, Il2CppString* role, uintptr_t type) {
		return ((T (*)(XmlResolver*, uintptr_t, Il2CppString*, uintptr_t))(Il2CppBase() + 0x0))(this, absoluteUri, role, type);
	}
	template <typename T = uintptr_t> T ResolveUri(uintptr_t baseUri, Il2CppString* relativeUri) {
		return ((T (*)(XmlResolver*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x4CF4DFC))(this, baseUri, relativeUri);
	}
	template <typename T = Il2CppString*> T EscapeRelativeUriBody(Il2CppString* src) {
		return ((T (*)(XmlResolver*, Il2CppString*))(Il2CppBase() + 0x4CF50A0))(this, src);
	}

};

}
