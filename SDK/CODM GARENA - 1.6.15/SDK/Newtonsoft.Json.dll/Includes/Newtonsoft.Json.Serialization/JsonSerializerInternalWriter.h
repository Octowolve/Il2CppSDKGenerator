#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Newtonsoft.Json.Serialization {

class JsonSerializerInternalWriter
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Newtonsoft.Json.dll", "Newtonsoft.Json.Serialization", "JsonSerializerInternalWriter"));
	}

	template <typename T = uintptr_t> T& _rootType() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& _rootLevel() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _serializeStack() {
		return *(T*)((uintptr_t)this + 0x24);
	}

	template <typename T = void> T Serialize(uintptr_t jsonWriter, uintptr_t value, uintptr_t objectType) {
		return ((T (*)(JsonSerializerInternalWriter*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x399C6B8))(this, jsonWriter, value, objectType);
	}
	template <typename T = uintptr_t> T GetInternalSerializer() {
		return ((T (*)(JsonSerializerInternalWriter*))(Il2CppBase() + 0x399D58C))(this);
	}
	template <typename T = uintptr_t> T GetContractSafe(uintptr_t value) {
		return ((T (*)(JsonSerializerInternalWriter*, uintptr_t))(Il2CppBase() + 0x399C990))(this, value);
	}
	template <typename T = void> T SerializePrimitive(uintptr_t writer, uintptr_t value, uintptr_t contract, uintptr_t member, uintptr_t containerContract, uintptr_t containerProperty) {
		return ((T (*)(JsonSerializerInternalWriter*, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x399D6E4))(this, writer, value, contract, member, containerContract, containerProperty);
	}
	template <typename T = void> T SerializeValue(uintptr_t writer, uintptr_t value, uintptr_t valueContract, uintptr_t member, uintptr_t containerContract, uintptr_t containerProperty) {
		return ((T (*)(JsonSerializerInternalWriter*, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x399D010))(this, writer, value, valueContract, member, containerContract, containerProperty);
	}
	template <typename T = void*> T ResolveIsReference(uintptr_t contract, uintptr_t property, uintptr_t collectionContract, uintptr_t containerProperty) {
		return ((T (*)(JsonSerializerInternalWriter*, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x39A08FC))(this, contract, property, collectionContract, containerProperty);
	}
	template <typename T = bool> T ShouldWriteReference(uintptr_t value, uintptr_t property, uintptr_t valueContract, uintptr_t collectionContract, uintptr_t containerProperty) {
		return ((T (*)(JsonSerializerInternalWriter*, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x399CAB8))(this, value, property, valueContract, collectionContract, containerProperty);
	}
	template <typename T = bool> T ShouldWriteProperty(uintptr_t memberValue, uintptr_t property) {
		return ((T (*)(JsonSerializerInternalWriter*, uintptr_t, uintptr_t))(Il2CppBase() + 0x39A0A8C))(this, memberValue, property);
	}
	template <typename T = bool> T CheckForCircularReference(uintptr_t writer, uintptr_t value, uintptr_t property, uintptr_t contract, uintptr_t containerContract, uintptr_t containerProperty) {
		return ((T (*)(JsonSerializerInternalWriter*, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x39A0C04))(this, writer, value, property, contract, containerContract, containerProperty);
	}
	template <typename T = void> T WriteReference(uintptr_t writer, uintptr_t value) {
		return ((T (*)(JsonSerializerInternalWriter*, uintptr_t, uintptr_t))(Il2CppBase() + 0x399CCE8))(this, writer, value);
	}
	template <typename T = Il2CppString*> T GetReference(uintptr_t writer, uintptr_t value) {
		return ((T (*)(JsonSerializerInternalWriter*, uintptr_t, uintptr_t))(Il2CppBase() + 0x39A1438))(this, writer, value);
	}
	template <typename T = bool> static T TryConvertToString(uintptr_t value, uintptr_t type, uintptr_t* s) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t*))(Il2CppBase() + 0x39A16D4))(0, value, type, s);
	}
	template <typename T = void> T SerializeString(uintptr_t writer, uintptr_t value, uintptr_t contract) {
		return ((T (*)(JsonSerializerInternalWriter*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x399F8A8))(this, writer, value, contract);
	}
	template <typename T = void> T OnSerializing(uintptr_t writer, uintptr_t contract, uintptr_t value) {
		return ((T (*)(JsonSerializerInternalWriter*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x39A1974))(this, writer, contract, value);
	}
	template <typename T = void> T OnSerialized(uintptr_t writer, uintptr_t contract, uintptr_t value) {
		return ((T (*)(JsonSerializerInternalWriter*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x39A1C24))(this, writer, contract, value);
	}
	template <typename T = void> T SerializeObject(uintptr_t writer, uintptr_t value, uintptr_t contract, uintptr_t member, uintptr_t collectionContract, uintptr_t containerProperty) {
		return ((T (*)(JsonSerializerInternalWriter*, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x399E668))(this, writer, value, contract, member, collectionContract, containerProperty);
	}
	template <typename T = bool> T CalculatePropertyValues(uintptr_t writer, uintptr_t value, uintptr_t contract, uintptr_t member, uintptr_t property, uintptr_t* memberContract, uintptr_t* memberValue) {
		return ((T (*)(JsonSerializerInternalWriter*, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t*, uintptr_t*))(Il2CppBase() + 0x39A207C))(this, writer, value, contract, member, property, memberContract, memberValue);
	}
	template <typename T = void> T WriteObjectStart(uintptr_t writer, uintptr_t value, uintptr_t contract, uintptr_t member, uintptr_t collectionContract, uintptr_t containerProperty) {
		return ((T (*)(JsonSerializerInternalWriter*, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x39A1ED4))(this, writer, value, contract, member, collectionContract, containerProperty);
	}
	template <typename T = void> T WriteReferenceIdProperty(uintptr_t writer, uintptr_t type, uintptr_t value) {
		return ((T (*)(JsonSerializerInternalWriter*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x39A3104))(this, writer, type, value);
	}
	template <typename T = void> T WriteTypeProperty(uintptr_t writer, uintptr_t type) {
		return ((T (*)(JsonSerializerInternalWriter*, uintptr_t, uintptr_t))(Il2CppBase() + 0x399DCE8))(this, writer, type);
	}
	template <typename T = bool> T HasFlag(uintptr_t value, uintptr_t flag) {
		return ((T (*)(JsonSerializerInternalWriter*, uintptr_t, uintptr_t))(Il2CppBase() + 0x39A0BF0))(this, value, flag);
	}
	template <typename T = bool> T HasFlag_1(uintptr_t value, uintptr_t flag) {
		return ((T (*)(JsonSerializerInternalWriter*, uintptr_t, uintptr_t))(Il2CppBase() + 0x39A0A78))(this, value, flag);
	}
	template <typename T = bool> T HasFlag_2(uintptr_t value, uintptr_t flag) {
		return ((T (*)(JsonSerializerInternalWriter*, uintptr_t, uintptr_t))(Il2CppBase() + 0x39A33F4))(this, value, flag);
	}
	template <typename T = void> T SerializeConvertable(uintptr_t writer, uintptr_t converter, uintptr_t value, uintptr_t contract, uintptr_t collectionContract, uintptr_t containerProperty) {
		return ((T (*)(JsonSerializerInternalWriter*, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x399E02C))(this, writer, converter, value, contract, collectionContract, containerProperty);
	}
	template <typename T = void> T SerializeList(uintptr_t writer, uintptr_t values, uintptr_t contract, uintptr_t member, uintptr_t collectionContract, uintptr_t containerProperty) {
		return ((T (*)(JsonSerializerInternalWriter*, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x399EF0C))(this, writer, values, contract, member, collectionContract, containerProperty);
	}
	template <typename T = void> T SerializeMultidimensionalArray(uintptr_t writer, uintptr_t values, uintptr_t contract, uintptr_t member, uintptr_t collectionContract, uintptr_t containerProperty) {
		return ((T (*)(JsonSerializerInternalWriter*, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x399F6CC))(this, writer, values, contract, member, collectionContract, containerProperty);
	}
	template <typename T = void> T SerializeMultidimensionalArray_1(uintptr_t writer, uintptr_t values, uintptr_t contract, uintptr_t member, int32_t initialDepth, Il2CppArray<uintptr_t>* indices) {
		return ((T (*)(JsonSerializerInternalWriter*, uintptr_t, uintptr_t, uintptr_t, uintptr_t, int32_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x39A37D4))(this, writer, values, contract, member, initialDepth, indices);
	}
	template <typename T = bool> T WriteStartArray(uintptr_t writer, uintptr_t values, uintptr_t contract, uintptr_t member, uintptr_t containerContract, uintptr_t containerProperty) {
		return ((T (*)(JsonSerializerInternalWriter*, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x39A3408))(this, writer, values, contract, member, containerContract, containerProperty);
	}
	template <typename T = void> T SerializeISerializable(uintptr_t writer, uintptr_t value, uintptr_t contract, uintptr_t member, uintptr_t collectionContract, uintptr_t containerProperty) {
		return ((T (*)(JsonSerializerInternalWriter*, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x39A033C))(this, writer, value, contract, member, collectionContract, containerProperty);
	}
	template <typename T = bool> T ShouldWriteType(uintptr_t typeNameHandlingFlag, uintptr_t contract, uintptr_t member, uintptr_t containerContract, uintptr_t containerProperty) {
		return ((T (*)(JsonSerializerInternalWriter*, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x399D8C0))(this, typeNameHandlingFlag, contract, member, containerContract, containerProperty);
	}
	template <typename T = void> T SerializeDictionary(uintptr_t writer, uintptr_t values, uintptr_t contract, uintptr_t member, uintptr_t collectionContract, uintptr_t containerProperty) {
		return ((T (*)(JsonSerializerInternalWriter*, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x399F93C))(this, writer, values, contract, member, collectionContract, containerProperty);
	}
	template <typename T = Il2CppString*> T GetPropertyName(uintptr_t writer, uintptr_t name, uintptr_t contract, uintptr_t* escape) {
		return ((T (*)(JsonSerializerInternalWriter*, uintptr_t, uintptr_t, uintptr_t, uintptr_t*))(Il2CppBase() + 0x39A2648))(this, writer, name, contract, escape);
	}
	template <typename T = void> T HandleError(uintptr_t writer, int32_t initialDepth) {
		return ((T (*)(JsonSerializerInternalWriter*, uintptr_t, int32_t))(Il2CppBase() + 0x399D514))(this, writer, initialDepth);
	}
	template <typename T = bool> T ShouldSerialize(uintptr_t writer, uintptr_t property, uintptr_t target) {
		return ((T (*)(JsonSerializerInternalWriter*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x39A2B14))(this, writer, property, target);
	}
	template <typename T = bool> T IsSpecified(uintptr_t writer, uintptr_t property, uintptr_t target) {
		return ((T (*)(JsonSerializerInternalWriter*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x39A2E0C))(this, writer, property, target);
	}

};

}
