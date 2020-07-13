#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Runtime.Serialization {

class ObjectManager
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Runtime.Serialization", "ObjectManager"));
	}

	template <typename T = uintptr_t> T& _objectRecordChain() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& _lastObjectRecord() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& _deserializedRecords() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& _onDeserializedCallbackRecords() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& _objectRecords() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& _finalFixup() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& _selector() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& _context() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> T& _registeredObjectsCount() {
		return *(T*)((uintptr_t)this + 0x2C);
	}

	template <typename T = void> T DoFixups() {
		return ((T (*)(ObjectManager*))(Il2CppBase() + 0x302CED4))(this);
	}
	template <typename T = uintptr_t> T GetObjectRecord(int64_t objectID) {
		return ((T (*)(ObjectManager*, int64_t))(Il2CppBase() + 0x302E2E4))(this, objectID);
	}
	template <typename T = uintptr_t> T GetObject(int64_t objectID) {
		return ((T (*)(ObjectManager*, int64_t))(Il2CppBase() + 0x302E5D0))(this, objectID);
	}
	template <typename T = void> T RaiseDeserializationEvent() {
		return ((T (*)(ObjectManager*))(Il2CppBase() + 0x302E75C))(this);
	}
	template <typename T = void> T RaiseOnDeserializingEvent(uintptr_t obj) {
		return ((T (*)(ObjectManager*, uintptr_t))(Il2CppBase() + 0x3026770))(this, obj);
	}
	template <typename T = void> T RaiseOnDeserializedEvent(uintptr_t obj) {
		return ((T (*)(ObjectManager*, uintptr_t))(Il2CppBase() + 0x302E988))(this, obj);
	}
	template <typename T = void> T AddFixup(uintptr_t record) {
		return ((T (*)(ObjectManager*, uintptr_t))(Il2CppBase() + 0x302EBF8))(this, record);
	}
	template <typename T = void> T RecordArrayElementFixup(int64_t arrayToBeFixed, int32_t index, int64_t objectRequired) {
		return ((T (*)(ObjectManager*, int64_t, int32_t, int64_t))(Il2CppBase() + 0x302EC8C))(this, arrayToBeFixed, index, objectRequired);
	}
	template <typename T = void> T RecordArrayElementFixup_1(int64_t arrayToBeFixed, Il2CppArray<uintptr_t>* indices, int64_t objectRequired) {
		return ((T (*)(ObjectManager*, int64_t, Il2CppArray<uintptr_t>*, int64_t))(Il2CppBase() + 0x302EE5C))(this, arrayToBeFixed, indices, objectRequired);
	}
	template <typename T = void> T RecordDelayedFixup(int64_t objectToBeFixed, Il2CppString* memberName, int64_t objectRequired) {
		return ((T (*)(ObjectManager*, int64_t, Il2CppString*, int64_t))(Il2CppBase() + 0x302F070))(this, objectToBeFixed, memberName, objectRequired);
	}
	template <typename T = void> T RecordFixup(int64_t objectToBeFixed, uintptr_t member, int64_t objectRequired) {
		return ((T (*)(ObjectManager*, int64_t, uintptr_t, int64_t))(Il2CppBase() + 0x302F28C))(this, objectToBeFixed, member, objectRequired);
	}
	template <typename T = void> T RegisterObjectInternal(uintptr_t obj, uintptr_t record) {
		return ((T (*)(ObjectManager*, uintptr_t, uintptr_t))(Il2CppBase() + 0x302F4A8))(this, obj, record);
	}
	template <typename T = void> T RegisterObject(uintptr_t obj, int64_t objectID, uintptr_t info, int64_t idOfContainingObj, uintptr_t member, Il2CppArray<uintptr_t>* arrayIndex) {
		return ((T (*)(ObjectManager*, uintptr_t, int64_t, uintptr_t, int64_t, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x3026D40))(this, obj, objectID, info, idOfContainingObj, member, arrayIndex);
	}

};

}
