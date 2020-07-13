#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Newtonsoft.Json.Serialization {

class JsonObjectContract
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Newtonsoft.Json.dll", "Newtonsoft.Json.Serialization", "JsonObjectContract"));
	}

	template <typename T = uintptr_t> T& MemberSerialization() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = void*> T& ItemRequired() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = uintptr_t> T& Properties() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uintptr_t> T& ExtensionDataSetter() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = uintptr_t> T& ExtensionDataGetter() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = bool> T& ExtensionDataIsJToken() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = void*> T& _hasRequiredOrDefaultValueProperties() {
		return *(T*)((uintptr_t)this + 0x85);
	}
	template <typename T = uintptr_t> T& _parametrizedConstructor() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& _overrideConstructor() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = void*> T& _overrideCreator() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = void*> T& _parameterizedCreator() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = uintptr_t> T& _creatorParameters() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& _extensionDataValueType() {
		return *(T*)((uintptr_t)this + 0x9C);
	}

	template <typename T = uintptr_t> T get_MemberSerialization() {
		return ((T (*)(JsonObjectContract*))(Il2CppBase() + 0x397BED4))(this);
	}
	template <typename T = void> T set_MemberSerialization(uintptr_t value) {
		return ((T (*)(JsonObjectContract*, uintptr_t))(Il2CppBase() + 0x397BEC4))(this, value);
	}
	template <typename T = void*> T get_ItemRequired() {
		return ((T (*)(JsonObjectContract*))(Il2CppBase() + 0x398B8C0))(this);
	}
	template <typename T = void> T set_ItemRequired(void* value) {
		return ((T (*)(JsonObjectContract*, void*))(Il2CppBase() + 0x397BEDC))(this, value);
	}
	template <typename T = uintptr_t> T get_Properties() {
		return ((T (*)(JsonObjectContract*))(Il2CppBase() + 0x397BECC))(this);
	}
	template <typename T = void> T set_Properties(uintptr_t value) {
		return ((T (*)(JsonObjectContract*, uintptr_t))(Il2CppBase() + 0x398B8D4))(this, value);
	}
	template <typename T = uintptr_t> T get_CreatorParameters() {
		return ((T (*)(JsonObjectContract*))(Il2CppBase() + 0x397C604))(this);
	}
	template <typename T = void> T set_OverrideConstructor(uintptr_t value) {
		return ((T (*)(JsonObjectContract*, uintptr_t))(Il2CppBase() + 0x397C520))(this, value);
	}
	template <typename T = void> T set_ParametrizedConstructor(uintptr_t value) {
		return ((T (*)(JsonObjectContract*, uintptr_t))(Il2CppBase() + 0x397CBB0))(this, value);
	}
	template <typename T = void*> T get_OverrideCreator() {
		return ((T (*)(JsonObjectContract*))(Il2CppBase() + 0x398B8DC))(this);
	}
	template <typename T = void*> T get_ParameterizedCreator() {
		return ((T (*)(JsonObjectContract*))(Il2CppBase() + 0x398B8E4))(this);
	}
	template <typename T = uintptr_t> T get_ExtensionDataSetter() {
		return ((T (*)(JsonObjectContract*))(Il2CppBase() + 0x398B8EC))(this);
	}
	template <typename T = void> T set_ExtensionDataSetter(uintptr_t value) {
		return ((T (*)(JsonObjectContract*, uintptr_t))(Il2CppBase() + 0x397DB90))(this, value);
	}
	template <typename T = uintptr_t> T get_ExtensionDataGetter() {
		return ((T (*)(JsonObjectContract*))(Il2CppBase() + 0x398B8F4))(this);
	}
	template <typename T = void> T set_ExtensionDataGetter(uintptr_t value) {
		return ((T (*)(JsonObjectContract*, uintptr_t))(Il2CppBase() + 0x397DBB4))(this, value);
	}
	template <typename T = void> T set_ExtensionDataValueType(uintptr_t value) {
		return ((T (*)(JsonObjectContract*, uintptr_t))(Il2CppBase() + 0x397DBBC))(this, value);
	}
	template <typename T = bool> T get_HasRequiredOrDefaultValueProperties() {
		return ((T (*)(JsonObjectContract*))(Il2CppBase() + 0x398B8FC))(this);
	}
	template <typename T = uintptr_t> T GetUninitializedObject() {
		return ((T (*)(JsonObjectContract*))(Il2CppBase() + 0x398BF38))(this);
	}

};

}
