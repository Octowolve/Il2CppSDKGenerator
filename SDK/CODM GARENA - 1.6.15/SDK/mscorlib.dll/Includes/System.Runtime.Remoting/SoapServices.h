#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Runtime.Remoting {

class SoapServices
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Runtime.Remoting", "SoapServices"));
	}

	template <typename T = uintptr_t> static T& _xmlTypes() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _xmlElements() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& _soapActions() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& _soapActionsMethods() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& _typeInfos() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = Il2CppString*> static T get_XmlNsForClrTypeWithAssembly() {
		return ((T (*)(void *))(Il2CppBase() + 0x4B4518C))(0);
	}
	template <typename T = Il2CppString*> static T get_XmlNsForClrTypeWithNs() {
		return ((T (*)(void *))(Il2CppBase() + 0x4B45204))(0);
	}
	template <typename T = Il2CppString*> static T get_XmlNsForClrTypeWithNsAndAssembly() {
		return ((T (*)(void *))(Il2CppBase() + 0x4B4527C))(0);
	}
	template <typename T = Il2CppString*> static T CodeXmlNamespaceForClrTypeNamespace(Il2CppString* typeNamespace, Il2CppString* assemblyName) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x4B3E1F8))(0, typeNamespace, assemblyName);
	}
	template <typename T = Il2CppString*> static T GetNameKey(Il2CppString* name, Il2CppString* namspace) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x4B45418))(0, name, namspace);
	}
	template <typename T = Il2CppString*> static T GetAssemblyName(uintptr_t mb) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4B45504))(0, mb);
	}
	template <typename T = bool> static T GetXmlElementForInteropType(uintptr_t type, uintptr_t* xmlElement, uintptr_t* xmlNamespace) {
		return ((T (*)(void *, uintptr_t, uintptr_t*, uintptr_t*))(Il2CppBase() + 0x4B456D4))(0, type, xmlElement, xmlNamespace);
	}
	template <typename T = Il2CppString*> static T GetXmlNamespaceForMethodCall(uintptr_t mb) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4B3DE38))(0, mb);
	}
	template <typename T = Il2CppString*> static T GetXmlNamespaceForMethodResponse(uintptr_t mb) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4B3DD48))(0, mb);
	}
	template <typename T = bool> static T GetXmlTypeForInteropType(uintptr_t type, uintptr_t* xmlType, uintptr_t* xmlTypeNamespace) {
		return ((T (*)(void *, uintptr_t, uintptr_t*, uintptr_t*))(Il2CppBase() + 0x4B458C8))(0, type, xmlType, xmlTypeNamespace);
	}
	template <typename T = void> static T PreLoad(uintptr_t assembly) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4B28F68))(0, assembly);
	}
	template <typename T = void> static T PreLoad_1(uintptr_t type) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4B28784))(0, type);
	}
	template <typename T = void> static T RegisterInteropXmlElement(Il2CppString* xmlElement, Il2CppString* xmlNamespace, uintptr_t type) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x4B28304))(0, xmlElement, xmlNamespace, type);
	}
	template <typename T = void> static T RegisterInteropXmlType(Il2CppString* xmlType, Il2CppString* xmlTypeNamespace, uintptr_t type) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x4B28544))(0, xmlType, xmlTypeNamespace, type);
	}
	template <typename T = Il2CppString*> static T EncodeNs(Il2CppString* ns) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x4B452F4))(0, ns);
	}

};

}
