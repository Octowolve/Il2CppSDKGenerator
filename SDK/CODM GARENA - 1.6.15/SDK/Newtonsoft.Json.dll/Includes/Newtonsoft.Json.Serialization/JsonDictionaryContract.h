#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Newtonsoft.Json.Serialization {

class JsonDictionaryContract
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Newtonsoft.Json.dll", "Newtonsoft.Json.Serialization", "JsonDictionaryContract"));
	}

	template <typename T = void*> T& DictionaryKeyResolver() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = uintptr_t> T& DictionaryKeyType() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = uintptr_t> T& DictionaryValueType() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = uintptr_t> T& KeyContract() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uintptr_t> T& _genericCollectionDefinitionType() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& _genericWrapperType() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = void*> T& _genericWrapperCreator() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = void*> T& _genericTemporaryDictionaryCreator() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = bool> T& ShouldCreateWrapper() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = uintptr_t> T& _parameterizedConstructor() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = void*> T& _overrideCreator() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = void*> T& _parameterizedCreator() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = bool> T& HasParameterizedCreator() {
		return *(T*)((uintptr_t)this + 0x9C);
	}

	template <typename T = void*> T get_DictionaryKeyResolver() {
		return ((T (*)(JsonDictionaryContract*))(Il2CppBase() + 0x398AA40))(this);
	}
	template <typename T = void> T set_DictionaryKeyResolver(void* value) {
		return ((T (*)(JsonDictionaryContract*, void*))(Il2CppBase() + 0x39822F4))(this, value);
	}
	template <typename T = uintptr_t> T get_DictionaryKeyType() {
		return ((T (*)(JsonDictionaryContract*))(Il2CppBase() + 0x39822FC))(this);
	}
	template <typename T = void> T set_DictionaryKeyType(uintptr_t value) {
		return ((T (*)(JsonDictionaryContract*, uintptr_t))(Il2CppBase() + 0x398AA48))(this, value);
	}
	template <typename T = uintptr_t> T get_DictionaryValueType() {
		return ((T (*)(JsonDictionaryContract*))(Il2CppBase() + 0x3982304))(this);
	}
	template <typename T = void> T set_DictionaryValueType(uintptr_t value) {
		return ((T (*)(JsonDictionaryContract*, uintptr_t))(Il2CppBase() + 0x398AA50))(this, value);
	}
	template <typename T = uintptr_t> T get_KeyContract() {
		return ((T (*)(JsonDictionaryContract*))(Il2CppBase() + 0x398AA58))(this);
	}
	template <typename T = void> T set_KeyContract(uintptr_t value) {
		return ((T (*)(JsonDictionaryContract*, uintptr_t))(Il2CppBase() + 0x398AA60))(this, value);
	}
	template <typename T = bool> T get_ShouldCreateWrapper() {
		return ((T (*)(JsonDictionaryContract*))(Il2CppBase() + 0x398AA68))(this);
	}
	template <typename T = void> T set_ShouldCreateWrapper(bool value) {
		return ((T (*)(JsonDictionaryContract*, bool))(Il2CppBase() + 0x398AA70))(this, value);
	}
	template <typename T = void*> T get_ParameterizedCreator() {
		return ((T (*)(JsonDictionaryContract*))(Il2CppBase() + 0x398AA78))(this);
	}
	template <typename T = void*> T get_OverrideCreator() {
		return ((T (*)(JsonDictionaryContract*))(Il2CppBase() + 0x398AB4C))(this);
	}
	template <typename T = void> T set_OverrideCreator(void* value) {
		return ((T (*)(JsonDictionaryContract*, void*))(Il2CppBase() + 0x398231C))(this, value);
	}
	template <typename T = bool> T get_HasParameterizedCreator() {
		return ((T (*)(JsonDictionaryContract*))(Il2CppBase() + 0x398AB54))(this);
	}
	template <typename T = void> T set_HasParameterizedCreator(bool value) {
		return ((T (*)(JsonDictionaryContract*, bool))(Il2CppBase() + 0x398230C))(this, value);
	}
	template <typename T = bool> T get_HasParameterizedCreatorInternal() {
		return ((T (*)(JsonDictionaryContract*))(Il2CppBase() + 0x398AB5C))(this);
	}
	template <typename T = uintptr_t> T CreateWrapper(uintptr_t dictionary) {
		return ((T (*)(JsonDictionaryContract*, uintptr_t))(Il2CppBase() + 0x398AB8C))(this, dictionary);
	}
	template <typename T = uintptr_t> T CreateTemporaryDictionary() {
		return ((T (*)(JsonDictionaryContract*))(Il2CppBase() + 0x398AF00))(this);
	}

};

}
