#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Newtonsoft.Json.Serialization {

class JsonSerializerProxy
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Newtonsoft.Json.dll", "Newtonsoft.Json.Serialization", "JsonSerializerProxy"));
	}

	template <typename T = uintptr_t> T& _serializerReader() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = uintptr_t> T& _serializerWriter() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = uintptr_t> T& _serializer() {
		return *(T*)((uintptr_t)this + 0xAC);
	}

	template <typename T = void> T add_Error(void* value) {
		return ((T (*)(JsonSerializerProxy*, void*))(Il2CppBase() + 0x39A3C10))(this, value);
	}
	template <typename T = void> T remove_Error(void* value) {
		return ((T (*)(JsonSerializerProxy*, void*))(Il2CppBase() + 0x39A3C44))(this, value);
	}
	template <typename T = void> T set_ReferenceResolver(uintptr_t value) {
		return ((T (*)(JsonSerializerProxy*, uintptr_t))(Il2CppBase() + 0x39A3C78))(this, value);
	}
	template <typename T = uintptr_t> T get_TraceWriter() {
		return ((T (*)(JsonSerializerProxy*))(Il2CppBase() + 0x39A3CAC))(this);
	}
	template <typename T = void> T set_TraceWriter(uintptr_t value) {
		return ((T (*)(JsonSerializerProxy*, uintptr_t))(Il2CppBase() + 0x39A3CE0))(this, value);
	}
	template <typename T = void> T set_EqualityComparer(uintptr_t value) {
		return ((T (*)(JsonSerializerProxy*, uintptr_t))(Il2CppBase() + 0x39A3D14))(this, value);
	}
	template <typename T = uintptr_t> T get_Converters() {
		return ((T (*)(JsonSerializerProxy*))(Il2CppBase() + 0x39A3D48))(this);
	}
	template <typename T = void> T set_DefaultValueHandling(uintptr_t value) {
		return ((T (*)(JsonSerializerProxy*, uintptr_t))(Il2CppBase() + 0x39A3D7C))(this, value);
	}
	template <typename T = uintptr_t> T get_ContractResolver() {
		return ((T (*)(JsonSerializerProxy*))(Il2CppBase() + 0x39A3DB0))(this);
	}
	template <typename T = void> T set_ContractResolver(uintptr_t value) {
		return ((T (*)(JsonSerializerProxy*, uintptr_t))(Il2CppBase() + 0x39A3DE4))(this, value);
	}
	template <typename T = void> T set_MissingMemberHandling(uintptr_t value) {
		return ((T (*)(JsonSerializerProxy*, uintptr_t))(Il2CppBase() + 0x39A3E18))(this, value);
	}
	template <typename T = void> T set_NullValueHandling(uintptr_t value) {
		return ((T (*)(JsonSerializerProxy*, uintptr_t))(Il2CppBase() + 0x39A3E4C))(this, value);
	}
	template <typename T = uintptr_t> T get_ObjectCreationHandling() {
		return ((T (*)(JsonSerializerProxy*))(Il2CppBase() + 0x39A3E80))(this);
	}
	template <typename T = void> T set_ObjectCreationHandling(uintptr_t value) {
		return ((T (*)(JsonSerializerProxy*, uintptr_t))(Il2CppBase() + 0x39A3EB4))(this, value);
	}
	template <typename T = void> T set_ReferenceLoopHandling(uintptr_t value) {
		return ((T (*)(JsonSerializerProxy*, uintptr_t))(Il2CppBase() + 0x39A3EE8))(this, value);
	}
	template <typename T = void> T set_PreserveReferencesHandling(uintptr_t value) {
		return ((T (*)(JsonSerializerProxy*, uintptr_t))(Il2CppBase() + 0x39A3F1C))(this, value);
	}
	template <typename T = void> T set_TypeNameHandling(uintptr_t value) {
		return ((T (*)(JsonSerializerProxy*, uintptr_t))(Il2CppBase() + 0x39A3F50))(this, value);
	}
	template <typename T = uintptr_t> T get_MetadataPropertyHandling() {
		return ((T (*)(JsonSerializerProxy*))(Il2CppBase() + 0x39A3F84))(this);
	}
	template <typename T = void> T set_MetadataPropertyHandling(uintptr_t value) {
		return ((T (*)(JsonSerializerProxy*, uintptr_t))(Il2CppBase() + 0x39A3FB8))(this, value);
	}
	template <typename T = void> T set_TypeNameAssemblyFormat(uintptr_t value) {
		return ((T (*)(JsonSerializerProxy*, uintptr_t))(Il2CppBase() + 0x39A3FEC))(this, value);
	}
	template <typename T = void> T set_ConstructorHandling(uintptr_t value) {
		return ((T (*)(JsonSerializerProxy*, uintptr_t))(Il2CppBase() + 0x39A4020))(this, value);
	}
	template <typename T = void> T set_Binder(uintptr_t value) {
		return ((T (*)(JsonSerializerProxy*, uintptr_t))(Il2CppBase() + 0x39A4054))(this, value);
	}
	template <typename T = uintptr_t> T get_Context() {
		return ((T (*)(JsonSerializerProxy*))(Il2CppBase() + 0x39A4088))(this);
	}
	template <typename T = void> T set_Context(uintptr_t value) {
		return ((T (*)(JsonSerializerProxy*, uintptr_t))(Il2CppBase() + 0x39A40BC))(this, value);
	}
	template <typename T = void> T set_Formatting(uintptr_t value) {
		return ((T (*)(JsonSerializerProxy*, uintptr_t))(Il2CppBase() + 0x39A40F0))(this, value);
	}
	template <typename T = bool> T get_CheckAdditionalContent() {
		return ((T (*)(JsonSerializerProxy*))(Il2CppBase() + 0x39A4124))(this);
	}
	template <typename T = void> T set_CheckAdditionalContent(bool value) {
		return ((T (*)(JsonSerializerProxy*, bool))(Il2CppBase() + 0x39A4158))(this, value);
	}
	template <typename T = uintptr_t> T GetInternalSerializer() {
		return ((T (*)(JsonSerializerProxy*))(Il2CppBase() + 0x39873D4))(this);
	}
	template <typename T = uintptr_t> T DeserializeInternal(uintptr_t reader, uintptr_t objectType) {
		return ((T (*)(JsonSerializerProxy*, uintptr_t, uintptr_t))(Il2CppBase() + 0x39A418C))(this, reader, objectType);
	}
	template <typename T = void> T PopulateInternal(uintptr_t reader, uintptr_t target) {
		return ((T (*)(JsonSerializerProxy*, uintptr_t, uintptr_t))(Il2CppBase() + 0x39A41E0))(this, reader, target);
	}
	template <typename T = void> T SerializeInternal(uintptr_t jsonWriter, uintptr_t value, uintptr_t rootType) {
		return ((T (*)(JsonSerializerProxy*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x39A4224))(this, jsonWriter, value, rootType);
	}

};

}
