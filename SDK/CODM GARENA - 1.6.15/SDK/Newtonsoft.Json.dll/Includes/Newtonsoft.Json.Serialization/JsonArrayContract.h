#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Newtonsoft.Json.Serialization {

class JsonArrayContract
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Newtonsoft.Json.dll", "Newtonsoft.Json.Serialization", "JsonArrayContract"));
	}

	template <typename T = uintptr_t> T& CollectionItemType() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = bool> T& IsMultidimensionalArray() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = uintptr_t> T& _genericCollectionDefinitionType() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = uintptr_t> T& _genericWrapperType() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = void*> T& _genericWrapperCreator() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = void*> T& _genericTemporaryCollectionCreator() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = bool> T& IsArray() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = bool> T& ShouldCreateWrapper() {
		return *(T*)((uintptr_t)this + 0x85);
	}
	template <typename T = bool> T& CanDeserialize() {
		return *(T*)((uintptr_t)this + 0x86);
	}
	template <typename T = uintptr_t> T& _parameterizedConstructor() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = void*> T& _parameterizedCreator() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = void*> T& _overrideCreator() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = bool> T& HasParameterizedCreator() {
		return *(T*)((uintptr_t)this + 0x94);
	}

	template <typename T = uintptr_t> T get_CollectionItemType() {
		return ((T (*)(JsonArrayContract*))(Il2CppBase() + 0x398355C))(this);
	}
	template <typename T = void> T set_CollectionItemType(uintptr_t value) {
		return ((T (*)(JsonArrayContract*, uintptr_t))(Il2CppBase() + 0x39889DC))(this, value);
	}
	template <typename T = bool> T get_IsMultidimensionalArray() {
		return ((T (*)(JsonArrayContract*))(Il2CppBase() + 0x39889E4))(this);
	}
	template <typename T = void> T set_IsMultidimensionalArray(bool value) {
		return ((T (*)(JsonArrayContract*, bool))(Il2CppBase() + 0x39889EC))(this, value);
	}
	template <typename T = bool> T get_IsArray() {
		return ((T (*)(JsonArrayContract*))(Il2CppBase() + 0x39889F4))(this);
	}
	template <typename T = void> T set_IsArray(bool value) {
		return ((T (*)(JsonArrayContract*, bool))(Il2CppBase() + 0x39889FC))(this, value);
	}
	template <typename T = bool> T get_ShouldCreateWrapper() {
		return ((T (*)(JsonArrayContract*))(Il2CppBase() + 0x3988A04))(this);
	}
	template <typename T = void> T set_ShouldCreateWrapper(bool value) {
		return ((T (*)(JsonArrayContract*, bool))(Il2CppBase() + 0x3988A0C))(this, value);
	}
	template <typename T = bool> T get_CanDeserialize() {
		return ((T (*)(JsonArrayContract*))(Il2CppBase() + 0x3988A14))(this);
	}
	template <typename T = void> T set_CanDeserialize(bool value) {
		return ((T (*)(JsonArrayContract*, bool))(Il2CppBase() + 0x3988A1C))(this, value);
	}
	template <typename T = void*> T get_ParameterizedCreator() {
		return ((T (*)(JsonArrayContract*))(Il2CppBase() + 0x3988A24))(this);
	}
	template <typename T = void*> T get_OverrideCreator() {
		return ((T (*)(JsonArrayContract*))(Il2CppBase() + 0x3988AF8))(this);
	}
	template <typename T = void> T set_OverrideCreator(void* value) {
		return ((T (*)(JsonArrayContract*, void*))(Il2CppBase() + 0x398356C))(this, value);
	}
	template <typename T = bool> T get_HasParameterizedCreator() {
		return ((T (*)(JsonArrayContract*))(Il2CppBase() + 0x3988B00))(this);
	}
	template <typename T = void> T set_HasParameterizedCreator(bool value) {
		return ((T (*)(JsonArrayContract*, bool))(Il2CppBase() + 0x3983564))(this, value);
	}
	template <typename T = bool> T get_HasParameterizedCreatorInternal() {
		return ((T (*)(JsonArrayContract*))(Il2CppBase() + 0x3988B08))(this);
	}
	template <typename T = uintptr_t> T CreateWrapper(uintptr_t list) {
		return ((T (*)(JsonArrayContract*, uintptr_t))(Il2CppBase() + 0x3988D08))(this, list);
	}
	template <typename T = uintptr_t> T CreateTemporaryCollection() {
		return ((T (*)(JsonArrayContract*))(Il2CppBase() + 0x3989228))(this);
	}

};

}
