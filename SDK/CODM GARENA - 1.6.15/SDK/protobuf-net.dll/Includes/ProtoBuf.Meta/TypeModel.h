#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoBuf.Meta {

class TypeModel
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("protobuf-net.dll", "ProtoBuf.Meta", "TypeModel"));
	}

	template <typename T = uintptr_t> static T& ilist() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = bool> T SerializeDateTimeKind() {
		return ((T (*)(TypeModel*))(Il2CppBase() + 0x5061C70))(this);
	}
	template <typename T = uintptr_t> T MapType(uintptr_t type) {
		return ((T (*)(TypeModel*, uintptr_t))(Il2CppBase() + 0x5061C78))(this, type);
	}
	template <typename T = uintptr_t> T MapType_1(uintptr_t type, bool demand) {
		return ((T (*)(TypeModel*, uintptr_t, bool))(Il2CppBase() + 0x5061C8C))(this, type, demand);
	}
	template <typename T = uintptr_t> T GetWireType(uintptr_t code, uintptr_t format, uintptr_t type, uintptr_t* modelKey) {
		return ((T (*)(TypeModel*, uintptr_t, uintptr_t, uintptr_t, uintptr_t*))(Il2CppBase() + 0x5061C94))(this, code, format, type, modelKey);
	}
	template <typename T = bool> T TrySerializeAuxiliaryType(uintptr_t writer, uintptr_t type, uintptr_t format, int32_t tag, uintptr_t value, bool isInsideList) {
		return ((T (*)(TypeModel*, uintptr_t, uintptr_t, uintptr_t, int32_t, uintptr_t, bool))(Il2CppBase() + 0x5061F2C))(this, writer, type, format, tag, value, isInsideList);
	}
	template <typename T = void> T SerializeCore(uintptr_t writer, uintptr_t value) {
		return ((T (*)(TypeModel*, uintptr_t, uintptr_t))(Il2CppBase() + 0x5064220))(this, writer, value);
	}
	template <typename T = void> T Serialize(uintptr_t dest, uintptr_t value) {
		return ((T (*)(TypeModel*, uintptr_t, uintptr_t))(Il2CppBase() + 0x50643AC))(this, dest, value);
	}
	template <typename T = void> T Serialize_1(uintptr_t dest, uintptr_t value, uintptr_t context) {
		return ((T (*)(TypeModel*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x50643C8))(this, dest, value, context);
	}
	template <typename T = uintptr_t> T Deserialize(uintptr_t source, uintptr_t value, uintptr_t type) {
		return ((T (*)(TypeModel*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x5064884))(this, source, value, type);
	}
	template <typename T = uintptr_t> T Deserialize_1(uintptr_t source, uintptr_t value, uintptr_t type, uintptr_t context) {
		return ((T (*)(TypeModel*, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x50648A4))(this, source, value, type, context);
	}
	template <typename T = bool> T PrepareDeserialize(uintptr_t value, uintptr_t type) {
		return ((T (*)(TypeModel*, uintptr_t, uintptr_t))(Il2CppBase() + 0x5064A74))(this, value, type);
	}
	template <typename T = uintptr_t> T DeserializeCore(uintptr_t reader, uintptr_t type, uintptr_t value, bool noAutoCreate) {
		return ((T (*)(TypeModel*, uintptr_t, uintptr_t, uintptr_t, bool))(Il2CppBase() + 0x5064D30))(this, reader, type, value, noAutoCreate);
	}
	template <typename T = uintptr_t> static T ResolveListAdd(uintptr_t model, uintptr_t listType, uintptr_t itemType, uintptr_t* isList) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t, uintptr_t*))(Il2CppBase() + 0x5065E24))(0, model, listType, itemType, isList);
	}
	template <typename T = uintptr_t> static T GetListItemType(uintptr_t model, uintptr_t listType) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x5066628))(0, model, listType);
	}
	template <typename T = void> static T TestEnumerableListPatterns(uintptr_t model, uintptr_t candidates, uintptr_t iType) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x5066EB4))(0, model, candidates, iType);
	}
	template <typename T = bool> static T CheckDictionaryAccessors(uintptr_t model, uintptr_t pair, uintptr_t value) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x506716C))(0, model, pair, value);
	}
	template <typename T = bool> T TryDeserializeList(uintptr_t model, uintptr_t reader, uintptr_t format, int32_t tag, uintptr_t listType, uintptr_t itemType, uintptr_t value) {
		return ((T (*)(TypeModel*, uintptr_t, uintptr_t, uintptr_t, int32_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x50672F8))(this, model, reader, format, tag, listType, itemType, value);
	}
	template <typename T = uintptr_t> static T CreateListInstance(uintptr_t listType, uintptr_t itemType) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x5067898))(0, listType, itemType);
	}
	template <typename T = bool> T TryDeserializeAuxiliaryType(uintptr_t reader, uintptr_t format, int32_t tag, uintptr_t type, uintptr_t value, bool skipOtherFields, bool asListItem, bool autoCreate, bool insideList) {
		return ((T (*)(TypeModel*, uintptr_t, uintptr_t, int32_t, uintptr_t, uintptr_t, bool, bool, bool, bool))(Il2CppBase() + 0x5065040))(this, reader, format, tag, type, value, skipOtherFields, asListItem, autoCreate, insideList);
	}
	template <typename T = uintptr_t> static T ResolveProxies(uintptr_t type) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x5068C24))(0, type);
	}
	template <typename T = int32_t> T GetKey(uintptr_t type) {
		return ((T (*)(TypeModel*, uintptr_t))(Il2CppBase() + 0x5061E2C))(this, type);
	}
	template <typename T = int32_t> T GetKeyImpl(uintptr_t type) {
		return ((T (*)(TypeModel*, uintptr_t))(Il2CppBase() + 0x0))(this, type);
	}
	template <typename T = void> T Serialize_2(int32_t key, uintptr_t value, uintptr_t dest) {
		return ((T (*)(TypeModel*, int32_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x0))(this, key, value, dest);
	}
	template <typename T = uintptr_t> T Deserialize_2(int32_t key, uintptr_t value, uintptr_t source) {
		return ((T (*)(TypeModel*, int32_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x0))(this, key, value, source);
	}
	template <typename T = void> static T ThrowUnexpectedSubtype(uintptr_t expected, uintptr_t actual) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x5068F48))(0, expected, actual);
	}
	template <typename T = void> static T ThrowUnexpectedType(uintptr_t type) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x5063FC0))(0, type);
	}
	template <typename T = uintptr_t> static T CreateNestedListsNotSupported() {
		return ((T (*)(void *))(Il2CppBase() + 0x5063F20))(0);
	}

};

}
