#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Newtonsoft.Json.Serialization {

class JsonSerializerInternalReader
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Newtonsoft.Json.dll", "Newtonsoft.Json.Serialization", "JsonSerializerInternalReader"));
	}


	template <typename T = void> T Populate(uintptr_t reader, uintptr_t target) {
		return ((T (*)(JsonSerializerInternalReader*, uintptr_t, uintptr_t))(Il2CppBase() + 0x398D090))(this, reader, target);
	}
	template <typename T = uintptr_t> T GetContractSafe(uintptr_t type) {
		return ((T (*)(JsonSerializerInternalReader*, uintptr_t))(Il2CppBase() + 0x398F898))(this, type);
	}
	template <typename T = uintptr_t> T Deserialize(uintptr_t reader, uintptr_t objectType, bool checkAdditionalContent) {
		return ((T (*)(JsonSerializerInternalReader*, uintptr_t, uintptr_t, bool))(Il2CppBase() + 0x398F9AC))(this, reader, objectType, checkAdditionalContent);
	}
	template <typename T = uintptr_t> T GetInternalSerializer() {
		return ((T (*)(JsonSerializerInternalReader*))(Il2CppBase() + 0x3990E44))(this);
	}
	template <typename T = uintptr_t> T CreateJToken(uintptr_t reader, uintptr_t contract) {
		return ((T (*)(JsonSerializerInternalReader*, uintptr_t, uintptr_t))(Il2CppBase() + 0x3990F9C))(this, reader, contract);
	}
	template <typename T = uintptr_t> T CreateJObject(uintptr_t reader) {
		return ((T (*)(JsonSerializerInternalReader*, uintptr_t))(Il2CppBase() + 0x39912D8))(this, reader);
	}
	template <typename T = uintptr_t> T CreateValueInternal(uintptr_t reader, uintptr_t objectType, uintptr_t contract, uintptr_t member, uintptr_t containerContract, uintptr_t containerMember, uintptr_t existingValue) {
		return ((T (*)(JsonSerializerInternalReader*, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x39905C8))(this, reader, objectType, contract, member, containerContract, containerMember, existingValue);
	}
	template <typename T = bool> static T CoerceEmptyStringToNull(uintptr_t objectType, uintptr_t contract, Il2CppString* s) {
		return ((T (*)(void *, uintptr_t, uintptr_t, Il2CppString*))(Il2CppBase() + 0x3993438))(0, objectType, contract, s);
	}
	template <typename T = Il2CppString*> T GetExpectedDescription(uintptr_t contract) {
		return ((T (*)(JsonSerializerInternalReader*, uintptr_t))(Il2CppBase() + 0x39935E0))(this, contract);
	}
	template <typename T = uintptr_t> T GetConverter(uintptr_t contract, uintptr_t memberConverter, uintptr_t containerContract, uintptr_t containerProperty) {
		return ((T (*)(JsonSerializerInternalReader*, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x398FDB8))(this, contract, memberConverter, containerContract, containerProperty);
	}
	template <typename T = uintptr_t> T CreateObject(uintptr_t reader, uintptr_t objectType, uintptr_t contract, uintptr_t member, uintptr_t containerContract, uintptr_t containerMember, uintptr_t existingValue) {
		return ((T (*)(JsonSerializerInternalReader*, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x3991938))(this, reader, objectType, contract, member, containerContract, containerMember, existingValue);
	}
	template <typename T = bool> T ReadMetadataPropertiesToken(uintptr_t reader, uintptr_t objectType, uintptr_t contract, uintptr_t member, uintptr_t containerContract, uintptr_t containerMember, uintptr_t existingValue, uintptr_t* newValue, uintptr_t* id) {
		return ((T (*)(JsonSerializerInternalReader*, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t*, uintptr_t*))(Il2CppBase() + 0x39936D0))(this, reader, objectType, contract, member, containerContract, containerMember, existingValue, newValue, id);
	}
	template <typename T = bool> T ReadMetadataProperties(uintptr_t reader, uintptr_t objectType, uintptr_t contract, uintptr_t member, uintptr_t containerContract, uintptr_t containerMember, uintptr_t existingValue, uintptr_t* newValue, uintptr_t* id) {
		return ((T (*)(JsonSerializerInternalReader*, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t*, uintptr_t*))(Il2CppBase() + 0x399409C))(this, reader, objectType, contract, member, containerContract, containerMember, existingValue, newValue, id);
	}
	template <typename T = void> T ResolveTypeName(uintptr_t reader, uintptr_t objectType, uintptr_t contract, uintptr_t member, uintptr_t containerContract, uintptr_t containerMember, Il2CppString* qualifiedTypeName) {
		return ((T (*)(JsonSerializerInternalReader*, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, Il2CppString*))(Il2CppBase() + 0x39958F0))(this, reader, objectType, contract, member, containerContract, containerMember, qualifiedTypeName);
	}
	template <typename T = uintptr_t> T EnsureArrayContract(uintptr_t reader, uintptr_t objectType, uintptr_t contract) {
		return ((T (*)(JsonSerializerInternalReader*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x39961A4))(this, reader, objectType, contract);
	}
	template <typename T = uintptr_t> T CreateList(uintptr_t reader, uintptr_t objectType, uintptr_t contract, uintptr_t member, uintptr_t existingValue, Il2CppString* id) {
		return ((T (*)(JsonSerializerInternalReader*, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, Il2CppString*))(Il2CppBase() + 0x39926B8))(this, reader, objectType, contract, member, existingValue, id);
	}
	template <typename T = bool> T HasNoDefinedType(uintptr_t contract) {
		return ((T (*)(JsonSerializerInternalReader*, uintptr_t))(Il2CppBase() + 0x39949D0))(this, contract);
	}
	template <typename T = uintptr_t> T EnsureType(uintptr_t reader, uintptr_t value, uintptr_t culture, uintptr_t contract, uintptr_t targetType) {
		return ((T (*)(JsonSerializerInternalReader*, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x3992F64))(this, reader, value, culture, contract, targetType);
	}
	template <typename T = bool> T SetPropertyValue(uintptr_t property, uintptr_t propertyConverter, uintptr_t containerContract, uintptr_t containerProperty, uintptr_t reader, uintptr_t target) {
		return ((T (*)(JsonSerializerInternalReader*, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x3997190))(this, property, propertyConverter, containerContract, containerProperty, reader, target);
	}
	template <typename T = bool> T CalculatePropertyDetails(uintptr_t property, uintptr_t propertyConverter, uintptr_t containerContract, uintptr_t containerProperty, uintptr_t reader, uintptr_t target, uintptr_t* useExistingValue, uintptr_t* currentValue, uintptr_t* propertyContract, uintptr_t* gottenCurrentValue) {
		return ((T (*)(JsonSerializerInternalReader*, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t*, uintptr_t*, uintptr_t*, uintptr_t*))(Il2CppBase() + 0x3997774))(this, property, propertyConverter, containerContract, containerProperty, reader, target, useExistingValue, currentValue, propertyContract, gottenCurrentValue);
	}
	template <typename T = void> T AddReference(uintptr_t reader, Il2CppString* id, uintptr_t value) {
		return ((T (*)(JsonSerializerInternalReader*, uintptr_t, Il2CppString*, uintptr_t))(Il2CppBase() + 0x3997DA8))(this, reader, id, value);
	}
	template <typename T = bool> T HasFlag(uintptr_t value, uintptr_t flag) {
		return ((T (*)(JsonSerializerInternalReader*, uintptr_t, uintptr_t))(Il2CppBase() + 0x3997D94))(this, value, flag);
	}
	template <typename T = bool> T ShouldSetPropertyValue(uintptr_t property, uintptr_t value) {
		return ((T (*)(JsonSerializerInternalReader*, uintptr_t, uintptr_t))(Il2CppBase() + 0x3997BEC))(this, property, value);
	}
	template <typename T = uintptr_t> T CreateNewList(uintptr_t reader, uintptr_t contract, uintptr_t* createdFromNonDefaultCreator) {
		return ((T (*)(JsonSerializerInternalReader*, uintptr_t, uintptr_t, uintptr_t*))(Il2CppBase() + 0x39963F4))(this, reader, contract, createdFromNonDefaultCreator);
	}
	template <typename T = uintptr_t> T CreateNewDictionary(uintptr_t reader, uintptr_t contract, uintptr_t* createdFromNonDefaultCreator) {
		return ((T (*)(JsonSerializerInternalReader*, uintptr_t, uintptr_t, uintptr_t*))(Il2CppBase() + 0x3994D7C))(this, reader, contract, createdFromNonDefaultCreator);
	}
	template <typename T = void> T OnDeserializing(uintptr_t reader, uintptr_t contract, uintptr_t value) {
		return ((T (*)(JsonSerializerInternalReader*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x3998288))(this, reader, contract, value);
	}
	template <typename T = void> T OnDeserialized(uintptr_t reader, uintptr_t contract, uintptr_t value) {
		return ((T (*)(JsonSerializerInternalReader*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x399856C))(this, reader, contract, value);
	}
	template <typename T = uintptr_t> T PopulateDictionary(uintptr_t dictionary, uintptr_t reader, uintptr_t contract, uintptr_t containerProperty, Il2CppString* id) {
		return ((T (*)(JsonSerializerInternalReader*, uintptr_t, uintptr_t, uintptr_t, uintptr_t, Il2CppString*))(Il2CppBase() + 0x398DE9C))(this, dictionary, reader, contract, containerProperty, id);
	}
	template <typename T = uintptr_t> T PopulateMultidimensionalArray(uintptr_t list, uintptr_t reader, uintptr_t contract, uintptr_t containerProperty, Il2CppString* id) {
		return ((T (*)(JsonSerializerInternalReader*, uintptr_t, uintptr_t, uintptr_t, uintptr_t, Il2CppString*))(Il2CppBase() + 0x3996778))(this, list, reader, contract, containerProperty, id);
	}
	template <typename T = void> T ThrowUnexpectedEndException(uintptr_t reader, uintptr_t contract, uintptr_t currentObject, Il2CppString* message) {
		return ((T (*)(JsonSerializerInternalReader*, uintptr_t, uintptr_t, uintptr_t, Il2CppString*))(Il2CppBase() + 0x3998850))(this, reader, contract, currentObject, message);
	}
	template <typename T = uintptr_t> T PopulateList(uintptr_t list, uintptr_t reader, uintptr_t contract, uintptr_t containerProperty, Il2CppString* id) {
		return ((T (*)(JsonSerializerInternalReader*, uintptr_t, uintptr_t, uintptr_t, uintptr_t, Il2CppString*))(Il2CppBase() + 0x398D71C))(this, list, reader, contract, containerProperty, id);
	}
	template <typename T = uintptr_t> T CreateISerializable(uintptr_t reader, uintptr_t contract, uintptr_t member, Il2CppString* id) {
		return ((T (*)(JsonSerializerInternalReader*, uintptr_t, uintptr_t, uintptr_t, Il2CppString*))(Il2CppBase() + 0x3995050))(this, reader, contract, member, id);
	}
	template <typename T = uintptr_t> T CreateISerializableItem(uintptr_t token, uintptr_t type, uintptr_t contract, uintptr_t member) {
		return ((T (*)(JsonSerializerInternalReader*, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x398B484))(this, token, type, contract, member);
	}
	template <typename T = uintptr_t> T CreateObjectUsingCreatorWithParameters(uintptr_t reader, uintptr_t contract, uintptr_t containerProperty, void* creator, Il2CppString* id) {
		return ((T (*)(JsonSerializerInternalReader*, uintptr_t, uintptr_t, uintptr_t, void*, Il2CppString*))(Il2CppBase() + 0x3998A10))(this, reader, contract, containerProperty, creator, id);
	}
	template <typename T = uintptr_t> T DeserializeConvertable(uintptr_t converter, uintptr_t reader, uintptr_t objectType, uintptr_t existingValue) {
		return ((T (*)(JsonSerializerInternalReader*, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x3990084))(this, converter, reader, objectType, existingValue);
	}
	template <typename T = Il2CppList<uintptr_t>*> T ResolvePropertyAndCreatorValues(uintptr_t contract, uintptr_t containerProperty, uintptr_t reader, uintptr_t objectType) {
		return ((T (*)(JsonSerializerInternalReader*, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x399ADE8))(this, contract, containerProperty, reader, objectType);
	}
	template <typename T = bool> T ReadForType(uintptr_t reader, uintptr_t contract, bool hasConverter) {
		return ((T (*)(JsonSerializerInternalReader*, uintptr_t, uintptr_t, bool))(Il2CppBase() + 0x398FE48))(this, reader, contract, hasConverter);
	}
	template <typename T = uintptr_t> T CreateNewObject(uintptr_t reader, uintptr_t objectContract, uintptr_t containerMember, uintptr_t containerProperty, Il2CppString* id, uintptr_t* createdFromNonDefaultCreator) {
		return ((T (*)(JsonSerializerInternalReader*, uintptr_t, uintptr_t, uintptr_t, uintptr_t, Il2CppString*, uintptr_t*))(Il2CppBase() + 0x3994AC0))(this, reader, objectContract, containerMember, containerProperty, id, createdFromNonDefaultCreator);
	}
	template <typename T = uintptr_t> T PopulateObject(uintptr_t newObject, uintptr_t reader, uintptr_t contract, uintptr_t member, Il2CppString* id) {
		return ((T (*)(JsonSerializerInternalReader*, uintptr_t, uintptr_t, uintptr_t, uintptr_t, Il2CppString*))(Il2CppBase() + 0x398EAD4))(this, newObject, reader, contract, member, id);
	}
	template <typename T = bool> T ShouldDeserialize(uintptr_t reader, uintptr_t property, uintptr_t target) {
		return ((T (*)(JsonSerializerInternalReader*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x399BFC4))(this, reader, property, target);
	}
	template <typename T = bool> T CheckPropertyName(uintptr_t reader, Il2CppString* memberName) {
		return ((T (*)(JsonSerializerInternalReader*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x39916E4))(this, reader, memberName);
	}
	template <typename T = void> T SetExtensionData(uintptr_t contract, uintptr_t member, uintptr_t reader, Il2CppString* memberName, uintptr_t o) {
		return ((T (*)(JsonSerializerInternalReader*, uintptr_t, uintptr_t, uintptr_t, Il2CppString*, uintptr_t))(Il2CppBase() + 0x399BD9C))(this, contract, member, reader, memberName, o);
	}
	template <typename T = uintptr_t> T ReadExtensionDataValue(uintptr_t contract, uintptr_t member, uintptr_t reader) {
		return ((T (*)(JsonSerializerInternalReader*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x399BCA0))(this, contract, member, reader);
	}
	template <typename T = void> T EndProcessProperty(uintptr_t newObject, uintptr_t reader, uintptr_t contract, int32_t initialDepth, uintptr_t property, uintptr_t presence, bool setDefaultValue) {
		return ((T (*)(JsonSerializerInternalReader*, uintptr_t, uintptr_t, uintptr_t, int32_t, uintptr_t, uintptr_t, bool))(Il2CppBase() + 0x399B634))(this, newObject, reader, contract, initialDepth, property, presence, setDefaultValue);
	}
	template <typename T = void> T SetPropertyPresence(uintptr_t reader, uintptr_t property, Il2CppDictionary<uintptr_t, uintptr_t>* requiredProperties) {
		return ((T (*)(JsonSerializerInternalReader*, uintptr_t, uintptr_t, Il2CppDictionary<uintptr_t, uintptr_t>*))(Il2CppBase() + 0x399C2BC))(this, reader, property, requiredProperties);
	}
	template <typename T = void> T HandleError(uintptr_t reader, bool readPastError, int32_t initialDepth) {
		return ((T (*)(JsonSerializerInternalReader*, uintptr_t, bool, int32_t))(Il2CppBase() + 0x3990DC4))(this, reader, readPastError, initialDepth);
	}

};

}
