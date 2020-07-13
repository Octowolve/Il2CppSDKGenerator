#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Runtime.Remoting.Metadata {

class SoapMethodAttribute
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Runtime.Remoting.Metadata", "SoapMethodAttribute"));
	}

	template <typename T = Il2CppString*> T& _responseElement() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppString*> T& _responseNamespace() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& _returnElement() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppString*> T& _soapAction() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = bool> T& _useAttribute() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppString*> T& _namespace() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = bool> T get_UseAttribute() {
		return ((T (*)(SoapMethodAttribute*))(Il2CppBase() + 0x4B3DA64))(this);
	}
	template <typename T = Il2CppString*> T get_XmlNamespace() {
		return ((T (*)(SoapMethodAttribute*))(Il2CppBase() + 0x4B3DA6C))(this);
	}
	template <typename T = void> T SetReflectionObject(uintptr_t reflectionObject) {
		return ((T (*)(SoapMethodAttribute*, uintptr_t))(Il2CppBase() + 0x4B3DA74))(this, reflectionObject);
	}

};

}
