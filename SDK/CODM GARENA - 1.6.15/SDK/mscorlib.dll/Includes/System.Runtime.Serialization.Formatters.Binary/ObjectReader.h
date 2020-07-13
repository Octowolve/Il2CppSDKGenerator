#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Runtime.Serialization.Formatters.Binary {

class ObjectReader
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Runtime.Serialization.Formatters.Binary", "ObjectReader"));
	}

	template <typename T = uintptr_t> T& _surrogateSelector() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& _context() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& _binder() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& _filterLevel() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& _manager() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& _registeredAssemblies() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& _typeMetadataCache() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& _lastObject() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int64_t> T& _lastObjectID() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int64_t> T& _rootObjectID() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& arrayBuffer() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = int32_t> T& ArrayBufferLength() {
		return *(T*)((uintptr_t)this + 0x44);
	}

	template <typename T = void> T ReadObjectGraph(uintptr_t reader, bool readHeaders, uintptr_t* result, Il2CppArray<uintptr_t>** headers) {
		return ((T (*)(ObjectReader*, uintptr_t, bool, uintptr_t*, Il2CppArray<uintptr_t>**))(Il2CppBase() + 0x3023918))(this, reader, readHeaders, result, headers);
	}
	template <typename T = void> T ReadObjectGraph_1(uintptr_t elem, uintptr_t reader, bool readHeaders, uintptr_t* result, Il2CppArray<uintptr_t>** headers) {
		return ((T (*)(ObjectReader*, uintptr_t, uintptr_t, bool, uintptr_t*, Il2CppArray<uintptr_t>**))(Il2CppBase() + 0x30196EC))(this, elem, reader, readHeaders, result, headers);
	}
	template <typename T = bool> T ReadNextObject(uintptr_t element, uintptr_t reader) {
		return ((T (*)(ObjectReader*, uintptr_t, uintptr_t))(Il2CppBase() + 0x3023B84))(this, element, reader);
	}
	template <typename T = bool> T ReadNextObject_1(uintptr_t reader) {
		return ((T (*)(ObjectReader*, uintptr_t))(Il2CppBase() + 0x3023C70))(this, reader);
	}
	template <typename T = uintptr_t> T get_CurrentObject() {
		return ((T (*)(ObjectReader*))(Il2CppBase() + 0x3023C68))(this);
	}
	template <typename T = void> T ReadObject(uintptr_t element, uintptr_t reader, uintptr_t* objectId, uintptr_t* value, uintptr_t* info) {
		return ((T (*)(ObjectReader*, uintptr_t, uintptr_t, uintptr_t*, uintptr_t*, uintptr_t*))(Il2CppBase() + 0x3023D7C))(this, element, reader, objectId, value, info);
	}
	template <typename T = void> T ReadAssembly(uintptr_t reader) {
		return ((T (*)(ObjectReader*, uintptr_t))(Il2CppBase() + 0x3024914))(this, reader);
	}
	template <typename T = void> T ReadObjectInstance(uintptr_t reader, bool isRuntimeObject, bool hasTypeInfo, uintptr_t* objectId, uintptr_t* value, uintptr_t* info) {
		return ((T (*)(ObjectReader*, uintptr_t, bool, bool, uintptr_t*, uintptr_t*, uintptr_t*))(Il2CppBase() + 0x3024490))(this, reader, isRuntimeObject, hasTypeInfo, objectId, value, info);
	}
	template <typename T = void> T ReadRefTypeObjectInstance(uintptr_t reader, uintptr_t* objectId, uintptr_t* value, uintptr_t* info) {
		return ((T (*)(ObjectReader*, uintptr_t, uintptr_t*, uintptr_t*, uintptr_t*))(Il2CppBase() + 0x30242E8))(this, reader, objectId, value, info);
	}
	template <typename T = void> T ReadObjectContent(uintptr_t reader, uintptr_t metadata, int64_t objectId, uintptr_t* objectInstance, uintptr_t* info) {
		return ((T (*)(ObjectReader*, uintptr_t, uintptr_t, int64_t, uintptr_t*, uintptr_t*))(Il2CppBase() + 0x3026340))(this, reader, metadata, objectId, objectInstance, info);
	}
	template <typename T = void> T RegisterObject(int64_t objectId, uintptr_t objectInstance, uintptr_t info, int64_t parentObjectId, uintptr_t parentObjectMemeber, Il2CppArray<uintptr_t>* indices) {
		return ((T (*)(ObjectReader*, int64_t, uintptr_t, uintptr_t, int64_t, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x3024170))(this, objectId, objectInstance, info, parentObjectId, parentObjectMemeber, indices);
	}
	template <typename T = void> T ReadStringIntance(uintptr_t reader, uintptr_t* objectId, uintptr_t* value) {
		return ((T (*)(ObjectReader*, uintptr_t, uintptr_t*, uintptr_t*))(Il2CppBase() + 0x3024520))(this, reader, objectId, value);
	}
	template <typename T = void> T ReadGenericArray(uintptr_t reader, uintptr_t* objectId, uintptr_t* val) {
		return ((T (*)(ObjectReader*, uintptr_t, uintptr_t*, uintptr_t*))(Il2CppBase() + 0x3024580))(this, reader, objectId, val);
	}
	template <typename T = uintptr_t> T ReadBoxedPrimitiveTypeValue(uintptr_t reader) {
		return ((T (*)(ObjectReader*, uintptr_t))(Il2CppBase() + 0x30248F0))(this, reader);
	}
	template <typename T = void> T ReadArrayOfPrimitiveType(uintptr_t reader, uintptr_t* objectId, uintptr_t* val) {
		return ((T (*)(ObjectReader*, uintptr_t, uintptr_t*, uintptr_t*))(Il2CppBase() + 0x3024A3C))(this, reader, objectId, val);
	}
	template <typename T = void> T BlockRead(uintptr_t reader, uintptr_t array, int32_t dataSize) {
		return ((T (*)(ObjectReader*, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x30275FC))(this, reader, array, dataSize);
	}
	template <typename T = void> T ReadArrayOfObject(uintptr_t reader, uintptr_t* objectId, uintptr_t* array) {
		return ((T (*)(ObjectReader*, uintptr_t, uintptr_t*, uintptr_t*))(Il2CppBase() + 0x3025754))(this, reader, objectId, array);
	}
	template <typename T = void> T ReadArrayOfString(uintptr_t reader, uintptr_t* objectId, uintptr_t* array) {
		return ((T (*)(ObjectReader*, uintptr_t, uintptr_t*, uintptr_t*))(Il2CppBase() + 0x3025840))(this, reader, objectId, array);
	}
	template <typename T = void> T ReadSimpleArray(uintptr_t reader, uintptr_t elementType, uintptr_t* objectId, uintptr_t* val) {
		return ((T (*)(ObjectReader*, uintptr_t, uintptr_t, uintptr_t*, uintptr_t*))(Il2CppBase() + 0x3027864))(this, reader, elementType, objectId, val);
	}
	template <typename T = uintptr_t> T ReadTypeMetadata(uintptr_t reader, bool isRuntimeObject, bool hasTypeInfo) {
		return ((T (*)(ObjectReader*, uintptr_t, bool, bool))(Il2CppBase() + 0x302592C))(this, reader, isRuntimeObject, hasTypeInfo);
	}
	template <typename T = void> T ReadValue(uintptr_t reader, uintptr_t parentObject, int64_t parentObjectId, uintptr_t info, uintptr_t valueType, Il2CppString* fieldName, uintptr_t memberInfo, Il2CppArray<uintptr_t>* indices) {
		return ((T (*)(ObjectReader*, uintptr_t, uintptr_t, int64_t, uintptr_t, uintptr_t, Il2CppString*, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x3026A18))(this, reader, parentObject, parentObjectId, info, valueType, fieldName, memberInfo, indices);
	}
	template <typename T = void> T SetObjectValue(uintptr_t parentObject, Il2CppString* fieldName, uintptr_t memberInfo, uintptr_t info, uintptr_t value, uintptr_t valueType, Il2CppArray<uintptr_t>* indices) {
		return ((T (*)(ObjectReader*, uintptr_t, Il2CppString*, uintptr_t, uintptr_t, uintptr_t, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x3027CE0))(this, parentObject, fieldName, memberInfo, info, value, valueType, indices);
	}
	template <typename T = void> T RecordFixup(int64_t parentObjectId, int64_t childObjectId, uintptr_t parentObject, uintptr_t info, Il2CppString* fieldName, uintptr_t memberInfo, Il2CppArray<uintptr_t>* indices) {
		return ((T (*)(ObjectReader*, int64_t, int64_t, uintptr_t, uintptr_t, Il2CppString*, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x30280C4))(this, parentObjectId, childObjectId, parentObject, info, fieldName, memberInfo, indices);
	}
	template <typename T = uintptr_t> T GetDeserializationType(int64_t assemblyId, Il2CppString* className) {
		return ((T (*)(ObjectReader*, int64_t, Il2CppString*))(Il2CppBase() + 0x30279F8))(this, assemblyId, className);
	}
	template <typename T = uintptr_t> T ReadType(uintptr_t reader, uintptr_t code) {
		return ((T (*)(ObjectReader*, uintptr_t, uintptr_t))(Il2CppBase() + 0x3026EF4))(this, reader, code);
	}
	template <typename T = uintptr_t> static T ReadPrimitiveTypeValue(uintptr_t reader, uintptr_t type) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x3023160))(0, reader, type);
	}

};

}
