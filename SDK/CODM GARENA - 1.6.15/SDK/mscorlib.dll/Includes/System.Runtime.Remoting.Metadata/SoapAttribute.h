#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Runtime.Remoting.Metadata {

class SoapAttribute
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Runtime.Remoting.Metadata", "SoapAttribute"));
	}

	template <typename T = bool> T& _useAttribute() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppString*> T& ProtXmlNamespace() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& ReflectInfo() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = bool> T get_UseAttribute() {
		return ((T (*)(SoapAttribute*))(Il2CppBase() + 0x4B3D980))(this);
	}
	template <typename T = Il2CppString*> T get_XmlNamespace() {
		return ((T (*)(SoapAttribute*))(Il2CppBase() + 0x4B3D988))(this);
	}
	template <typename T = void> T SetReflectionObject(uintptr_t reflectionObject) {
		return ((T (*)(SoapAttribute*, uintptr_t))(Il2CppBase() + 0x4B3D990))(this, reflectionObject);
	}

};

}
