#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Newtonsoft.Json.Serialization {

class DefaultContractResolver
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Newtonsoft.Json.dll", "Newtonsoft.Json.Serialization", "DefaultContractResolver"));
	}

	template <typename T = uintptr_t> static T& _instance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& BuiltInConverters() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& TypeContractCacheLock() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& _sharedState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> T& _instanceState() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = bool> T& _sharedCache() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& DefaultMembersSearchFlags() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& SerializeCompilerGeneratedMembers() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = bool> T& IgnoreSerializableInterface() {
		return *(T*)((uintptr_t)this + 0x15);
	}
	template <typename T = bool> T& IgnoreSerializableAttribute() {
		return *(T*)((uintptr_t)this + 0x16);
	}

	template <typename T = uintptr_t> static T get_Instance() {
		return ((T (*)(void *))(Il2CppBase() + 0x397A220))(0);
	}
	template <typename T = uintptr_t> T get_DefaultMembersSearchFlags() {
		return ((T (*)(DefaultContractResolver*))(Il2CppBase() + 0x397A2D0))(this);
	}
	template <typename T = void> T set_DefaultMembersSearchFlags(uintptr_t value) {
		return ((T (*)(DefaultContractResolver*, uintptr_t))(Il2CppBase() + 0x397A2D8))(this, value);
	}
	template <typename T = bool> T get_SerializeCompilerGeneratedMembers() {
		return ((T (*)(DefaultContractResolver*))(Il2CppBase() + 0x397A2E0))(this);
	}
	template <typename T = bool> T get_IgnoreSerializableInterface() {
		return ((T (*)(DefaultContractResolver*))(Il2CppBase() + 0x397A2E8))(this);
	}
	template <typename T = bool> T get_IgnoreSerializableAttribute() {
		return ((T (*)(DefaultContractResolver*))(Il2CppBase() + 0x397A2F0))(this);
	}
	template <typename T = void> T set_IgnoreSerializableAttribute(bool value) {
		return ((T (*)(DefaultContractResolver*, bool))(Il2CppBase() + 0x397A2F8))(this, value);
	}
	template <typename T = uintptr_t> T GetState() {
		return ((T (*)(DefaultContractResolver*))(Il2CppBase() + 0x397A444))(this);
	}
	template <typename T = uintptr_t> T ResolveContract(uintptr_t type) {
		return ((T (*)(DefaultContractResolver*, uintptr_t))(Il2CppBase() + 0x397A510))(this, type);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GetSerializableMembers(uintptr_t objectType) {
		return ((T (*)(DefaultContractResolver*, uintptr_t))(Il2CppBase() + 0x397A7F8))(this, objectType);
	}
	template <typename T = bool> T ShouldSerializeEntityMember(uintptr_t memberInfo) {
		return ((T (*)(DefaultContractResolver*, uintptr_t))(Il2CppBase() + 0x397B5F4))(this, memberInfo);
	}
	template <typename T = uintptr_t> T CreateObjectContract(uintptr_t objectType) {
		return ((T (*)(DefaultContractResolver*, uintptr_t))(Il2CppBase() + 0x397B798))(this, objectType);
	}
	template <typename T = uintptr_t> T GetExtensionDataMemberForType(uintptr_t type) {
		return ((T (*)(DefaultContractResolver*, uintptr_t))(Il2CppBase() + 0x397CC94))(this, type);
	}
	template <typename T = void> static T SetExtensionDataDelegates(uintptr_t contract, uintptr_t member) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x397CF38))(0, contract, member);
	}
	template <typename T = uintptr_t> T GetAttributeConstructor(uintptr_t objectType) {
		return ((T (*)(DefaultContractResolver*, uintptr_t))(Il2CppBase() + 0x397BEE8))(this, objectType);
	}
	template <typename T = uintptr_t> T GetParameterizedConstructor(uintptr_t objectType) {
		return ((T (*)(DefaultContractResolver*, uintptr_t))(Il2CppBase() + 0x397C9E4))(this, objectType);
	}
	template <typename T = void*> T CreateConstructorParameters(uintptr_t constructor, uintptr_t memberProperties) {
		return ((T (*)(DefaultContractResolver*, uintptr_t, uintptr_t))(Il2CppBase() + 0x397DCC4))(this, constructor, memberProperties);
	}
	template <typename T = uintptr_t> T CreatePropertyFromConstructorParameter(uintptr_t matchingMemberProperty, uintptr_t parameterInfo) {
		return ((T (*)(DefaultContractResolver*, uintptr_t, uintptr_t))(Il2CppBase() + 0x397E318))(this, matchingMemberProperty, parameterInfo);
	}
	template <typename T = uintptr_t> T ResolveContractConverter(uintptr_t objectType) {
		return ((T (*)(DefaultContractResolver*, uintptr_t))(Il2CppBase() + 0x397F610))(this, objectType);
	}
	template <typename T = void*> T GetDefaultCreator(uintptr_t createdType) {
		return ((T (*)(DefaultContractResolver*, uintptr_t))(Il2CppBase() + 0x397F860))(this, createdType);
	}
	template <typename T = void> T InitializeContract(uintptr_t contract) {
		return ((T (*)(DefaultContractResolver*, uintptr_t))(Il2CppBase() + 0x397BBB8))(this, contract);
	}
	template <typename T = void> T ResolveCallbackMethods(uintptr_t contract, uintptr_t t) {
		return ((T (*)(DefaultContractResolver*, uintptr_t, uintptr_t))(Il2CppBase() + 0x397F980))(this, contract, t);
	}
	template <typename T = void> T GetCallbackMethodsForType(uintptr_t type, uintptr_t* onSerializing, uintptr_t* onSerialized, uintptr_t* onDeserializing, uintptr_t* onDeserialized, uintptr_t* onError) {
		return ((T (*)(DefaultContractResolver*, uintptr_t, uintptr_t*, uintptr_t*, uintptr_t*, uintptr_t*, uintptr_t*))(Il2CppBase() + 0x397FB9C))(this, type, onSerializing, onSerialized, onDeserializing, onDeserialized, onError);
	}
	template <typename T = bool> static T ShouldSkipDeserialized(uintptr_t t) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x39809C8))(0, t);
	}
	template <typename T = bool> static T ShouldSkipSerializing(uintptr_t t) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x39809C0))(0, t);
	}
	template <typename T = Il2CppList<uintptr_t>*> T GetClassHierarchyForType(uintptr_t type) {
		return ((T (*)(DefaultContractResolver*, uintptr_t))(Il2CppBase() + 0x397D934))(this, type);
	}
	template <typename T = uintptr_t> T CreateDictionaryContract(uintptr_t objectType) {
		return ((T (*)(DefaultContractResolver*, uintptr_t))(Il2CppBase() + 0x3981514))(this, objectType);
	}
	template <typename T = uintptr_t> T CreateArrayContract(uintptr_t objectType) {
		return ((T (*)(DefaultContractResolver*, uintptr_t))(Il2CppBase() + 0x3982324))(this, objectType);
	}
	template <typename T = uintptr_t> T CreatePrimitiveContract(uintptr_t objectType) {
		return ((T (*)(DefaultContractResolver*, uintptr_t))(Il2CppBase() + 0x398357C))(this, objectType);
	}
	template <typename T = uintptr_t> T CreateLinqContract(uintptr_t objectType) {
		return ((T (*)(DefaultContractResolver*, uintptr_t))(Il2CppBase() + 0x3983794))(this, objectType);
	}
	template <typename T = uintptr_t> T CreateISerializableContract(uintptr_t objectType) {
		return ((T (*)(DefaultContractResolver*, uintptr_t))(Il2CppBase() + 0x3983858))(this, objectType);
	}
	template <typename T = uintptr_t> T CreateStringContract(uintptr_t objectType) {
		return ((T (*)(DefaultContractResolver*, uintptr_t))(Il2CppBase() + 0x3983B14))(this, objectType);
	}
	template <typename T = uintptr_t> T CreateContract(uintptr_t objectType) {
		return ((T (*)(DefaultContractResolver*, uintptr_t))(Il2CppBase() + 0x3983C64))(this, objectType);
	}
	template <typename T = bool> static T IsJsonPrimitiveType(uintptr_t t) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3984158))(0, t);
	}
	template <typename T = bool> static T IsIConvertible(uintptr_t t) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3984514))(0, t);
	}
	template <typename T = bool> static T CanConvertToString(uintptr_t type) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3984210))(0, type);
	}
	template <typename T = bool> static T IsValidCallback(uintptr_t method, Il2CppArray<uintptr_t>* parameters, uintptr_t attributeType, uintptr_t currentCallback, uintptr_t prevAttributeType) {
		return ((T (*)(void *, uintptr_t, Il2CppArray<uintptr_t>*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x39809D0))(0, method, parameters, attributeType, currentCallback, prevAttributeType);
	}
	template <typename T = Il2CppString*> static T GetClrTypeFullName(uintptr_t type) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3984764))(0, type);
	}
	template <typename T = void*> T CreateProperties(uintptr_t type, uintptr_t memberSerialization) {
		return ((T (*)(DefaultContractResolver*, uintptr_t, uintptr_t))(Il2CppBase() + 0x39849D4))(this, type, memberSerialization);
	}
	template <typename T = uintptr_t> T CreateMemberValueProvider(uintptr_t member) {
		return ((T (*)(DefaultContractResolver*, uintptr_t))(Il2CppBase() + 0x3984E64))(this, member);
	}
	template <typename T = uintptr_t> T CreateProperty(uintptr_t member, uintptr_t memberSerialization) {
		return ((T (*)(DefaultContractResolver*, uintptr_t, uintptr_t))(Il2CppBase() + 0x3984F94))(this, member, memberSerialization);
	}
	template <typename T = void> T SetPropertySettingsFromAttributes(uintptr_t property, uintptr_t attributeProvider, Il2CppString* name, uintptr_t declaringType, uintptr_t memberSerialization, uintptr_t* allowNonPublicAccess) {
		return ((T (*)(DefaultContractResolver*, uintptr_t, uintptr_t, Il2CppString*, uintptr_t, uintptr_t, uintptr_t*))(Il2CppBase() + 0x397E904))(this, property, attributeProvider, name, declaringType, memberSerialization, allowNonPublicAccess);
	}
	template <typename T = void*> T CreateShouldSerializeTest(uintptr_t member) {
		return ((T (*)(DefaultContractResolver*, uintptr_t))(Il2CppBase() + 0x3985224))(this, member);
	}
	template <typename T = void> T SetIsSpecifiedActions(uintptr_t property, uintptr_t member, bool allowNonPublicAccess) {
		return ((T (*)(DefaultContractResolver*, uintptr_t, uintptr_t, bool))(Il2CppBase() + 0x3985548))(this, property, member, allowNonPublicAccess);
	}
	template <typename T = Il2CppString*> T ResolvePropertyName(Il2CppString* propertyName) {
		return ((T (*)(DefaultContractResolver*, Il2CppString*))(Il2CppBase() + 0x3985E5C))(this, propertyName);
	}
	template <typename T = Il2CppString*> T ResolveDictionaryKey(Il2CppString* dictionaryKey) {
		return ((T (*)(DefaultContractResolver*, Il2CppString*))(Il2CppBase() + 0x3985E64))(this, dictionaryKey);
	}
	template <typename T = Il2CppString*> T GetResolvedPropertyName(Il2CppString* propertyName) {
		return ((T (*)(DefaultContractResolver*, Il2CppString*))(Il2CppBase() + 0x3985E74))(this, propertyName);
	}

};

}
