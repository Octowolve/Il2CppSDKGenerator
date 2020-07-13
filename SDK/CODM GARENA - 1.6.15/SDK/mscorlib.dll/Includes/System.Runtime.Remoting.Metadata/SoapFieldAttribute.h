#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Runtime.Remoting.Metadata {

class SoapFieldAttribute
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Runtime.Remoting.Metadata", "SoapFieldAttribute"));
	}

	template <typename T = Il2CppString*> T& _elementName() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = bool> T& _isElement() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = Il2CppString*> T get_XmlElementName() {
		return ((T (*)(SoapFieldAttribute*))(Il2CppBase() + 0x4B3D998))(this);
	}
	template <typename T = bool> T IsInteropXmlElement() {
		return ((T (*)(SoapFieldAttribute*))(Il2CppBase() + 0x4B3D9A0))(this);
	}
	template <typename T = void> T SetReflectionObject(uintptr_t reflectionObject) {
		return ((T (*)(SoapFieldAttribute*, uintptr_t))(Il2CppBase() + 0x4B3D9A8))(this, reflectionObject);
	}

};

}
