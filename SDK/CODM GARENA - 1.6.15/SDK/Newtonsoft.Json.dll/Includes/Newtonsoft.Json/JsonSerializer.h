#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Newtonsoft.Json {

class JsonSerializer
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Newtonsoft.Json.dll", "Newtonsoft.Json", "JsonSerializer"));
	}

	template <typename T = uintptr_t> T& _typeNameHandling() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& _typeNameAssemblyFormat() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& _preserveReferencesHandling() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& _referenceLoopHandling() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& _missingMemberHandling() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& _objectCreationHandling() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& _nullValueHandling() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& _defaultValueHandling() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& _constructorHandling() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& _metadataPropertyHandling() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& _converters() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& _contractResolver() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& _traceWriter() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& _equalityComparer() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& _binder() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& _context() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> T& _referenceResolver() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = void*> T& _formatting() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = void*> T& _dateFormatHandling() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = void*> T& _dateTimeZoneHandling() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = void*> T& _dateParseHandling() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = void*> T& _floatFormatHandling() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = void*> T& _floatParseHandling() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = void*> T& _stringEscapeHandling() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& _culture() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = void*> T& _maxDepth() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = bool> T& _maxDepthSet() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = void*> T& _checkAdditionalContent() {
		return *(T*)((uintptr_t)this + 0x95);
	}
	template <typename T = Il2CppString*> T& _dateFormatString() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = bool> T& _dateFormatStringSet() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = void*> T& Error() {
		return *(T*)((uintptr_t)this + 0xA0);
	}

	template <typename T = void> T add_Error(void* value) {
		return ((T (*)(JsonSerializer*, void*))(Il2CppBase() + 0x40ABE98))(this, value);
	}
	template <typename T = void> T remove_Error(void* value) {
		return ((T (*)(JsonSerializer*, void*))(Il2CppBase() + 0x40AC04C))(this, value);
	}
	template <typename T = void> T set_ReferenceResolver(uintptr_t value) {
		return ((T (*)(JsonSerializer*, uintptr_t))(Il2CppBase() + 0x40AC200))(this, value);
	}
	template <typename T = void> T set_Binder(uintptr_t value) {
		return ((T (*)(JsonSerializer*, uintptr_t))(Il2CppBase() + 0x40AC2CC))(this, value);
	}
	template <typename T = uintptr_t> T get_TraceWriter() {
		return ((T (*)(JsonSerializer*))(Il2CppBase() + 0x40AC398))(this);
	}
	template <typename T = void> T set_TraceWriter(uintptr_t value) {
		return ((T (*)(JsonSerializer*, uintptr_t))(Il2CppBase() + 0x40AC3A0))(this, value);
	}
	template <typename T = void> T set_EqualityComparer(uintptr_t value) {
		return ((T (*)(JsonSerializer*, uintptr_t))(Il2CppBase() + 0x40AC3A8))(this, value);
	}
	template <typename T = void> T set_TypeNameHandling(uintptr_t value) {
		return ((T (*)(JsonSerializer*, uintptr_t))(Il2CppBase() + 0x40AC3B0))(this, value);
	}
	template <typename T = void> T set_TypeNameAssemblyFormat(uintptr_t value) {
		return ((T (*)(JsonSerializer*, uintptr_t))(Il2CppBase() + 0x40AC46C))(this, value);
	}
	template <typename T = void> T set_PreserveReferencesHandling(uintptr_t value) {
		return ((T (*)(JsonSerializer*, uintptr_t))(Il2CppBase() + 0x40AC528))(this, value);
	}
	template <typename T = void> T set_ReferenceLoopHandling(uintptr_t value) {
		return ((T (*)(JsonSerializer*, uintptr_t))(Il2CppBase() + 0x40AC5E4))(this, value);
	}
	template <typename T = void> T set_MissingMemberHandling(uintptr_t value) {
		return ((T (*)(JsonSerializer*, uintptr_t))(Il2CppBase() + 0x40AC6A0))(this, value);
	}
	template <typename T = void> T set_NullValueHandling(uintptr_t value) {
		return ((T (*)(JsonSerializer*, uintptr_t))(Il2CppBase() + 0x40AC75C))(this, value);
	}
	template <typename T = void> T set_DefaultValueHandling(uintptr_t value) {
		return ((T (*)(JsonSerializer*, uintptr_t))(Il2CppBase() + 0x40AC818))(this, value);
	}
	template <typename T = uintptr_t> T get_ObjectCreationHandling() {
		return ((T (*)(JsonSerializer*))(Il2CppBase() + 0x40AC8D4))(this);
	}
	template <typename T = void> T set_ObjectCreationHandling(uintptr_t value) {
		return ((T (*)(JsonSerializer*, uintptr_t))(Il2CppBase() + 0x40AC8DC))(this, value);
	}
	template <typename T = void> T set_ConstructorHandling(uintptr_t value) {
		return ((T (*)(JsonSerializer*, uintptr_t))(Il2CppBase() + 0x40AC998))(this, value);
	}
	template <typename T = uintptr_t> T get_MetadataPropertyHandling() {
		return ((T (*)(JsonSerializer*))(Il2CppBase() + 0x40ACA54))(this);
	}
	template <typename T = void> T set_MetadataPropertyHandling(uintptr_t value) {
		return ((T (*)(JsonSerializer*, uintptr_t))(Il2CppBase() + 0x40ACA5C))(this, value);
	}
	template <typename T = uintptr_t> T get_Converters() {
		return ((T (*)(JsonSerializer*))(Il2CppBase() + 0x40ACB18))(this);
	}
	template <typename T = uintptr_t> T get_ContractResolver() {
		return ((T (*)(JsonSerializer*))(Il2CppBase() + 0x40ACBB4))(this);
	}
	template <typename T = void> T set_ContractResolver(uintptr_t value) {
		return ((T (*)(JsonSerializer*, uintptr_t))(Il2CppBase() + 0x40ACBBC))(this, value);
	}
	template <typename T = uintptr_t> T get_Context() {
		return ((T (*)(JsonSerializer*))(Il2CppBase() + 0x40ACC84))(this);
	}
	template <typename T = void> T set_Context(uintptr_t value) {
		return ((T (*)(JsonSerializer*, uintptr_t))(Il2CppBase() + 0x40ACC98))(this, value);
	}
	template <typename T = void> T set_Formatting(uintptr_t value) {
		return ((T (*)(JsonSerializer*, uintptr_t))(Il2CppBase() + 0x40ACCA4))(this, value);
	}
	template <typename T = bool> T get_CheckAdditionalContent() {
		return ((T (*)(JsonSerializer*))(Il2CppBase() + 0x40ACD50))(this);
	}
	template <typename T = void> T set_CheckAdditionalContent(bool value) {
		return ((T (*)(JsonSerializer*, bool))(Il2CppBase() + 0x40ACE18))(this, value);
	}
	template <typename T = bool> T IsCheckAdditionalContentSet() {
		return ((T (*)(JsonSerializer*))(Il2CppBase() + 0x40A5430))(this);
	}
	template <typename T = uintptr_t> static T Create() {
		return ((T (*)(void *))(Il2CppBase() + 0x40AD058))(0);
	}
	template <typename T = uintptr_t> static T Create_1(uintptr_t settings) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x40AD0E0))(0, settings);
	}
	template <typename T = uintptr_t> static T CreateDefault() {
		return ((T (*)(void *))(Il2CppBase() + 0x40ADA94))(0);
	}
	template <typename T = uintptr_t> static T CreateDefault_1(uintptr_t settings) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x40A5400))(0, settings);
	}
	template <typename T = void> static T ApplySerializerSettings(uintptr_t serializer, uintptr_t settings) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x40AD110))(0, serializer, settings);
	}
	template <typename T = void> T Populate(uintptr_t reader, uintptr_t target) {
		return ((T (*)(JsonSerializer*, uintptr_t, uintptr_t))(Il2CppBase() + 0x40AE4C4))(this, reader, target);
	}
	template <typename T = void> T PopulateInternal(uintptr_t reader, uintptr_t target) {
		return ((T (*)(JsonSerializer*, uintptr_t, uintptr_t))(Il2CppBase() + 0x40AE4D4))(this, reader, target);
	}
	template <typename T = uintptr_t> T Deserialize(uintptr_t reader) {
		return ((T (*)(JsonSerializer*, uintptr_t))(Il2CppBase() + 0x335B18C))(this, reader);
	}
	template <typename T = uintptr_t> T Deserialize_1(uintptr_t reader, uintptr_t objectType) {
		return ((T (*)(JsonSerializer*, uintptr_t, uintptr_t))(Il2CppBase() + 0x408F35C))(this, reader, objectType);
	}
	template <typename T = uintptr_t> T DeserializeInternal(uintptr_t reader, uintptr_t objectType) {
		return ((T (*)(JsonSerializer*, uintptr_t, uintptr_t))(Il2CppBase() + 0x40AF1EC))(this, reader, objectType);
	}
	template <typename T = void> T SetupReader(uintptr_t reader, uintptr_t* previousCulture, uintptr_t* previousDateTimeZoneHandling, uintptr_t* previousDateParseHandling, uintptr_t* previousFloatParseHandling, uintptr_t* previousMaxDepth, uintptr_t* previousDateFormatString) {
		return ((T (*)(JsonSerializer*, uintptr_t, uintptr_t*, uintptr_t*, uintptr_t*, uintptr_t*, uintptr_t*, uintptr_t*))(Il2CppBase() + 0x40AE850))(this, reader, previousCulture, previousDateTimeZoneHandling, previousDateParseHandling, previousFloatParseHandling, previousMaxDepth, previousDateFormatString);
	}
	template <typename T = void> T ResetReader(uintptr_t reader, uintptr_t previousCulture, void* previousDateTimeZoneHandling, void* previousDateParseHandling, void* previousFloatParseHandling, void* previousMaxDepth, Il2CppString* previousDateFormatString) {
		return ((T (*)(JsonSerializer*, uintptr_t, uintptr_t, void*, void*, void*, void*, Il2CppString*))(Il2CppBase() + 0x40AEF78))(this, reader, previousCulture, previousDateTimeZoneHandling, previousDateParseHandling, previousFloatParseHandling, previousMaxDepth, previousDateFormatString);
	}
	template <typename T = void> T Serialize(uintptr_t jsonWriter, uintptr_t value, uintptr_t objectType) {
		return ((T (*)(JsonSerializer*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x40911E8))(this, jsonWriter, value, objectType);
	}
	template <typename T = void> T Serialize_1(uintptr_t jsonWriter, uintptr_t value) {
		return ((T (*)(JsonSerializer*, uintptr_t, uintptr_t))(Il2CppBase() + 0x40921D8))(this, jsonWriter, value);
	}
	template <typename T = void> T SerializeInternal(uintptr_t jsonWriter, uintptr_t value, uintptr_t objectType) {
		return ((T (*)(JsonSerializer*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x40AF56C))(this, jsonWriter, value, objectType);
	}
	template <typename T = uintptr_t> T GetReferenceResolver() {
		return ((T (*)(JsonSerializer*))(Il2CppBase() + 0x40B05AC))(this);
	}
	template <typename T = uintptr_t> T GetMatchingConverter(uintptr_t type) {
		return ((T (*)(JsonSerializer*, uintptr_t))(Il2CppBase() + 0x40B064C))(this, type);
	}
	template <typename T = uintptr_t> static T GetMatchingConverter_1(void* converters, uintptr_t objectType) {
		return ((T (*)(void *, void*, uintptr_t))(Il2CppBase() + 0x40B0658))(0, converters, objectType);
	}
	template <typename T = void> T OnError(uintptr_t e) {
		return ((T (*)(JsonSerializer*, uintptr_t))(Il2CppBase() + 0x40B0820))(this, e);
	}

};

}
