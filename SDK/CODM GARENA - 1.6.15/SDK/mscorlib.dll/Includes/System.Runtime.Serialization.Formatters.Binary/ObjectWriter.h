#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Runtime.Serialization.Formatters.Binary {

class ObjectWriter
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Runtime.Serialization.Formatters.Binary", "ObjectWriter"));
	}

	template <typename T = uintptr_t> T& _idGenerator() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& _cachedMetadata() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& _pendingObjects() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& _assemblyCache() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> static T& _cachedTypes() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& CorlibAssembly() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = Il2CppString*> static T& CorlibAssemblyName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> T& _surrogateSelector() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& _context() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& _assemblyFormat() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& _typeFormat() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& arrayBuffer() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = int32_t> T& ArrayBufferLength() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& _manager() {
		return *(T*)((uintptr_t)this + 0x34);
	}

	template <typename T = void> T WriteObjectGraph(uintptr_t writer, uintptr_t obj, Il2CppArray<uintptr_t>* headers) {
		return ((T (*)(ObjectWriter*, uintptr_t, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x301BD7C))(this, writer, obj, headers);
	}
	template <typename T = void> T QueueObject(uintptr_t obj) {
		return ((T (*)(ObjectWriter*, uintptr_t))(Il2CppBase() + 0x30287E4))(this, obj);
	}
	template <typename T = void> T WriteQueuedObjects(uintptr_t writer) {
		return ((T (*)(ObjectWriter*, uintptr_t))(Il2CppBase() + 0x3028818))(this, writer);
	}
	template <typename T = void> T WriteObjectInstance(uintptr_t writer, uintptr_t obj, bool isValueObject) {
		return ((T (*)(ObjectWriter*, uintptr_t, uintptr_t, bool))(Il2CppBase() + 0x30288F0))(this, writer, obj, isValueObject);
	}
	template <typename T = void> static T WriteSerializationEnd(uintptr_t writer) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3028898))(0, writer);
	}
	template <typename T = void> T WriteObject(uintptr_t writer, int64_t id, uintptr_t obj) {
		return ((T (*)(ObjectWriter*, uintptr_t, int64_t, uintptr_t))(Il2CppBase() + 0x3028D94))(this, writer, id, obj);
	}
	template <typename T = void> T GetObjectData(uintptr_t obj, uintptr_t* metadata, uintptr_t* data) {
		return ((T (*)(ObjectWriter*, uintptr_t, uintptr_t*, uintptr_t*))(Il2CppBase() + 0x3029134))(this, obj, metadata, data);
	}
	template <typename T = uintptr_t> T CreateMemberTypeMetadata(uintptr_t type) {
		return ((T (*)(ObjectWriter*, uintptr_t))(Il2CppBase() + 0x302A0D4))(this, type);
	}
	template <typename T = void> T WriteArray(uintptr_t writer, int64_t id, uintptr_t array) {
		return ((T (*)(ObjectWriter*, uintptr_t, int64_t, uintptr_t))(Il2CppBase() + 0x3028B1C))(this, writer, id, array);
	}
	template <typename T = void> T WriteGenericArray(uintptr_t writer, int64_t id, uintptr_t array) {
		return ((T (*)(ObjectWriter*, uintptr_t, int64_t, uintptr_t))(Il2CppBase() + 0x302B088))(this, writer, id, array);
	}
	template <typename T = void> T WriteObjectArray(uintptr_t writer, int64_t id, uintptr_t array) {
		return ((T (*)(ObjectWriter*, uintptr_t, int64_t, uintptr_t))(Il2CppBase() + 0x302A260))(this, writer, id, array);
	}
	template <typename T = void> T WriteStringArray(uintptr_t writer, int64_t id, uintptr_t array) {
		return ((T (*)(ObjectWriter*, uintptr_t, int64_t, uintptr_t))(Il2CppBase() + 0x302A3B8))(this, writer, id, array);
	}
	template <typename T = void> T WritePrimitiveTypeArray(uintptr_t writer, int64_t id, uintptr_t array) {
		return ((T (*)(ObjectWriter*, uintptr_t, int64_t, uintptr_t))(Il2CppBase() + 0x302A510))(this, writer, id, array);
	}
	template <typename T = void> T BlockWrite(uintptr_t writer, uintptr_t array, int32_t dataSize) {
		return ((T (*)(ObjectWriter*, uintptr_t, uintptr_t, int32_t))(Il2CppBase() + 0x302B888))(this, writer, array, dataSize);
	}
	template <typename T = void> T WriteSingleDimensionArrayElements(uintptr_t writer, uintptr_t array, uintptr_t elementType) {
		return ((T (*)(ObjectWriter*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x302B540))(this, writer, array, elementType);
	}
	template <typename T = void> T WriteNullFiller(uintptr_t writer, int32_t numNulls) {
		return ((T (*)(ObjectWriter*, uintptr_t, int32_t))(Il2CppBase() + 0x302BAD8))(this, writer, numNulls);
	}
	template <typename T = void> T WriteObjectReference(uintptr_t writer, int64_t id) {
		return ((T (*)(ObjectWriter*, uintptr_t, int64_t))(Il2CppBase() + 0x302BBB4))(this, writer, id);
	}
	template <typename T = void> T WriteValue(uintptr_t writer, uintptr_t valueType, uintptr_t val) {
		return ((T (*)(ObjectWriter*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x3021EA0))(this, writer, valueType, val);
	}
	template <typename T = void> T WriteString(uintptr_t writer, int64_t id, Il2CppString* str) {
		return ((T (*)(ObjectWriter*, uintptr_t, int64_t, Il2CppString*))(Il2CppBase() + 0x3028AA8))(this, writer, id, str);
	}
	template <typename T = int32_t> T WriteAssembly(uintptr_t writer, uintptr_t assembly) {
		return ((T (*)(ObjectWriter*, uintptr_t, uintptr_t))(Il2CppBase() + 0x3021290))(this, writer, assembly);
	}
	template <typename T = int32_t> T WriteAssemblyName(uintptr_t writer, Il2CppString* assembly) {
		return ((T (*)(ObjectWriter*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x30299DC))(this, writer, assembly);
	}
	template <typename T = int32_t> T GetAssemblyId(uintptr_t assembly) {
		return ((T (*)(ObjectWriter*, uintptr_t))(Il2CppBase() + 0x302BDA0))(this, assembly);
	}
	template <typename T = int32_t> T GetAssemblyNameId(Il2CppString* assembly) {
		return ((T (*)(ObjectWriter*, Il2CppString*))(Il2CppBase() + 0x302BDE8))(this, assembly);
	}
	template <typename T = int32_t> T RegisterAssembly(Il2CppString* assembly, uintptr_t* firstTime) {
		return ((T (*)(ObjectWriter*, Il2CppString*, uintptr_t*))(Il2CppBase() + 0x302BC0C))(this, assembly, firstTime);
	}
	template <typename T = void> static T WritePrimitiveValue(uintptr_t writer, uintptr_t value) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x30227B0))(0, writer, value);
	}
	template <typename T = void> static T WriteTypeCode(uintptr_t writer, uintptr_t type) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x3021574))(0, writer, type);
	}
	template <typename T = uintptr_t> static T GetTypeTag(uintptr_t type) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x301EAF8))(0, type);
	}
	template <typename T = void> T WriteTypeSpec(uintptr_t writer, uintptr_t type) {
		return ((T (*)(ObjectWriter*, uintptr_t, uintptr_t))(Il2CppBase() + 0x3021644))(this, writer, type);
	}

};

}
