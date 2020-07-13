#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.ComponentModel {

class TypeDescriptor
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.dll", "System.ComponentModel", "TypeDescriptor"));
	}

	template <typename T = uintptr_t> static T& creatingDefaultConverters() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& defaultConverters() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& componentTable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& typeTable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& typeDescriptionProvidersLock() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = Il2CppDictionary<uintptr_t, void*>*> static T& typeDescriptionProviders() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& componentDescriptionProvidersLock() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = Il2CppDictionary<uintptr_t, void*>*> static T& componentDescriptionProviders() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& onDispose() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}

	template <typename T = uintptr_t> static T GetAttributes(uintptr_t componentType) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4CAD9DC))(0, componentType);
	}
	template <typename T = uintptr_t> static T get_DefaultConverters() {
		return ((T (*)(void *))(Il2CppBase() + 0x4CB6EE0))(0);
	}
	template <typename T = uintptr_t> static T GetConverter(uintptr_t type) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4CB8488))(0, type);
	}
	template <typename T = uintptr_t> static T FindDefaultConverterType(uintptr_t type) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4CB8D14))(0, type);
	}
	template <typename T = uintptr_t> static T GetProperties(uintptr_t component, Il2CppArray<uintptr_t>* attributes) {
		return ((T (*)(void *, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4CA4A7C))(0, component, attributes);
	}
	template <typename T = uintptr_t> static T GetProperties_1(uintptr_t component, Il2CppArray<uintptr_t>* attributes, bool noCustomTypeDesc) {
		return ((T (*)(void *, uintptr_t, Il2CppArray<uintptr_t>*, bool))(Il2CppBase() + 0x4CB969C))(0, component, attributes, noCustomTypeDesc);
	}
	template <typename T = void> static T OnComponentDisposed(uintptr_t sender, uintptr_t args) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x4CB9DA0))(0, sender, args);
	}
	template <typename T = uintptr_t> static T GetComponentInfo(uintptr_t com) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4CB99A4))(0, com);
	}
	template <typename T = uintptr_t> static T GetTypeInfo(uintptr_t type) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4CB6C80))(0, type);
	}
	template <typename T = uintptr_t> static T GetTypeFromName(uintptr_t component, Il2CppString* typeName) {
		return ((T (*)(void *, uintptr_t, Il2CppString*))(Il2CppBase() + 0x4CB8988))(0, component, typeName);
	}

};

}
