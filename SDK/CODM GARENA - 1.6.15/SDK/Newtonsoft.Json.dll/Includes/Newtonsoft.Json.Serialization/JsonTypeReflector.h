#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Newtonsoft.Json.Serialization {

class JsonTypeReflector
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Newtonsoft.Json.dll", "Newtonsoft.Json.Serialization", "JsonTypeReflector"));
	}

	template <typename T = void*> static T& _fullyTrusted() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = void*> static T& JsonConverterCreatorCache() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = void*> static T& AssociatedMetadataTypesCache() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& _metadataTypeAttributeReflectionObject() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = uintptr_t> static T GetCachedAttribute(uintptr_t attributeProvider) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x335C898))(0, attributeProvider);
	}
	template <typename T = uintptr_t> static T GetDataContractAttribute(uintptr_t type) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x397B4F8))(0, type);
	}
	template <typename T = uintptr_t> static T GetDataMemberAttribute(uintptr_t memberInfo) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x398599C))(0, memberInfo);
	}
	template <typename T = uintptr_t> static T GetObjectMemberSerialization(uintptr_t objectType, bool ignoreSerializableAttribute) {
		return ((T (*)(void *, uintptr_t, bool))(Il2CppBase() + 0x397B360))(0, objectType, ignoreSerializableAttribute);
	}
	template <typename T = uintptr_t> static T GetJsonConverter(uintptr_t attributeProvider) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x397F6B0))(0, attributeProvider);
	}
	template <typename T = uintptr_t> static T CreateJsonConverterInstance(uintptr_t converterType, Il2CppArray<uintptr_t>* converterArgs) {
		return ((T (*)(void *, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x3985D00))(0, converterType, converterArgs);
	}
	template <typename T = void*> static T GetJsonConverterCreator(uintptr_t converterType) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x39A4274))(0, converterType);
	}
	template <typename T = uintptr_t> static T GetTypeConverter(uintptr_t type) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x39A4468))(0, type);
	}
	template <typename T = uintptr_t> static T GetAssociatedMetadataType(uintptr_t type) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x39A4510))(0, type);
	}
	template <typename T = uintptr_t> static T GetAssociateMetadataTypeFromAttribute(uintptr_t type) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x39A45FC))(0, type);
	}
	template <typename T = uintptr_t> static T GetAttribute(uintptr_t type) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x335C614))(0, type);
	}
	template <typename T = uintptr_t> static T GetAttribute_1(uintptr_t memberInfo) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x335C290))(0, memberInfo);
	}
	template <typename T = uintptr_t> static T GetAttribute_2(uintptr_t provider) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x335C0E4))(0, provider);
	}
	template <typename T = bool> static T get_FullyTrusted() {
		return ((T (*)(void *))(Il2CppBase() + 0x397C6A8))(0);
	}
	template <typename T = uintptr_t> static T get_ReflectionDelegateFactory() {
		return ((T (*)(void *))(Il2CppBase() + 0x397DAD4))(0);
	}

};

}
