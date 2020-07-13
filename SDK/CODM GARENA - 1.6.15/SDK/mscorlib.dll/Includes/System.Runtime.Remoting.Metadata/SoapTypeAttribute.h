#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Runtime.Remoting.Metadata {

class SoapTypeAttribute
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Runtime.Remoting.Metadata", "SoapTypeAttribute"));
	}

	template <typename T = bool> T& _useAttribute() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppString*> T& _xmlElementName() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& _xmlNamespace() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppString*> T& _xmlTypeName() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppString*> T& _xmlTypeNamespace() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = bool> T& _isType() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = bool> T& _isElement() {
		return *(T*)((uintptr_t)this + 0x29);
	}

	template <typename T = bool> T get_UseAttribute() {
		return ((T (*)(SoapTypeAttribute*))(Il2CppBase() + 0x4B3DF28))(this);
	}
	template <typename T = Il2CppString*> T get_XmlElementName() {
		return ((T (*)(SoapTypeAttribute*))(Il2CppBase() + 0x4B3DF30))(this);
	}
	template <typename T = Il2CppString*> T get_XmlNamespace() {
		return ((T (*)(SoapTypeAttribute*))(Il2CppBase() + 0x4B3DF38))(this);
	}
	template <typename T = Il2CppString*> T get_XmlTypeName() {
		return ((T (*)(SoapTypeAttribute*))(Il2CppBase() + 0x4B3DF40))(this);
	}
	template <typename T = Il2CppString*> T get_XmlTypeNamespace() {
		return ((T (*)(SoapTypeAttribute*))(Il2CppBase() + 0x4B3DF48))(this);
	}
	template <typename T = bool> T get_IsInteropXmlElement() {
		return ((T (*)(SoapTypeAttribute*))(Il2CppBase() + 0x4B3DF50))(this);
	}
	template <typename T = bool> T get_IsInteropXmlType() {
		return ((T (*)(SoapTypeAttribute*))(Il2CppBase() + 0x4B3DF58))(this);
	}
	template <typename T = void> T SetReflectionObject(uintptr_t reflectionObject) {
		return ((T (*)(SoapTypeAttribute*, uintptr_t))(Il2CppBase() + 0x4B3DF60))(this, reflectionObject);
	}

};

}
