#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Newtonsoft.Json.Bson {

class BsonWriter
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Newtonsoft.Json.dll", "Newtonsoft.Json.Bson", "BsonWriter"));
	}

	template <typename T = uintptr_t> T& _writer() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& _root() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> T& _parent() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = Il2CppString*> T& _propertyName() {
		return *(T*)((uintptr_t)this + 0x4C);
	}

	template <typename T = void> T WriteEnd(uintptr_t token) {
		return ((T (*)(BsonWriter*, uintptr_t))(Il2CppBase() + 0x408B97C))(this, token);
	}
	template <typename T = void> T WriteComment(Il2CppString* text) {
		return ((T (*)(BsonWriter*, Il2CppString*))(Il2CppBase() + 0x408BAA0))(this, text);
	}
	template <typename T = void> T WriteStartConstructor(Il2CppString* name) {
		return ((T (*)(BsonWriter*, Il2CppString*))(Il2CppBase() + 0x408BB7C))(this, name);
	}
	template <typename T = void> T WriteRaw(Il2CppString* json) {
		return ((T (*)(BsonWriter*, Il2CppString*))(Il2CppBase() + 0x408BC10))(this, json);
	}
	template <typename T = void> T WriteRawValue(Il2CppString* json) {
		return ((T (*)(BsonWriter*, Il2CppString*))(Il2CppBase() + 0x408BCA4))(this, json);
	}
	template <typename T = void> T WriteStartArray() {
		return ((T (*)(BsonWriter*))(Il2CppBase() + 0x408BD38))(this);
	}
	template <typename T = void> T WriteStartObject() {
		return ((T (*)(BsonWriter*))(Il2CppBase() + 0x408BE08))(this);
	}
	template <typename T = void> T WritePropertyName(Il2CppString* name) {
		return ((T (*)(BsonWriter*, Il2CppString*))(Il2CppBase() + 0x408BEBC))(this, name);
	}
	template <typename T = void> T Close() {
		return ((T (*)(BsonWriter*))(Il2CppBase() + 0x408BEEC))(this);
	}
	template <typename T = void> T AddParent(uintptr_t container) {
		return ((T (*)(BsonWriter*, uintptr_t))(Il2CppBase() + 0x408BDEC))(this, container);
	}
	template <typename T = void> T RemoveParent() {
		return ((T (*)(BsonWriter*))(Il2CppBase() + 0x408B9D8))(this);
	}
	template <typename T = void> T AddValue(uintptr_t value, uintptr_t type) {
		return ((T (*)(BsonWriter*, uintptr_t, uintptr_t))(Il2CppBase() + 0x408C1A8))(this, value, type);
	}
	template <typename T = void> T AddToken(uintptr_t token) {
		return ((T (*)(BsonWriter*, uintptr_t))(Il2CppBase() + 0x408BF28))(this, token);
	}
	template <typename T = void> T WriteValue(uintptr_t value) {
		return ((T (*)(BsonWriter*, uintptr_t))(Il2CppBase() + 0x408C250))(this, value);
	}
	template <typename T = void> T WriteNull() {
		return ((T (*)(BsonWriter*))(Il2CppBase() + 0x408C388))(this);
	}
	template <typename T = void> T WriteUndefined() {
		return ((T (*)(BsonWriter*))(Il2CppBase() + 0x408C3E4))(this);
	}
	template <typename T = void> T WriteValue_1(Il2CppString* value) {
		return ((T (*)(BsonWriter*, Il2CppString*))(Il2CppBase() + 0x408C440))(this, value);
	}
	template <typename T = void> T WriteValue_2(int32_t value) {
		return ((T (*)(BsonWriter*, int32_t))(Il2CppBase() + 0x408C548))(this, value);
	}
	template <typename T = void> T WriteValue_3(uint32_t value) {
		return ((T (*)(BsonWriter*, uint32_t))(Il2CppBase() + 0x408C628))(this, value);
	}
	template <typename T = void> T WriteValue_4(int64_t value) {
		return ((T (*)(BsonWriter*, int64_t))(Il2CppBase() + 0x408C744))(this, value);
	}
	template <typename T = void> T WriteValue_5(uint64_t value) {
		return ((T (*)(BsonWriter*, uint64_t))(Il2CppBase() + 0x408C82C))(this, value);
	}
	template <typename T = void> T WriteValue_6(float value) {
		return ((T (*)(BsonWriter*, float))(Il2CppBase() + 0x408C950))(this, value);
	}
	template <typename T = void> T WriteValue_7(double value) {
		return ((T (*)(BsonWriter*, double))(Il2CppBase() + 0x408CA3C))(this, value);
	}
	template <typename T = void> T WriteValue_8(bool value) {
		return ((T (*)(BsonWriter*, bool))(Il2CppBase() + 0x408CB2C))(this, value);
	}
	template <typename T = void> T WriteValue_9(int16_t value) {
		return ((T (*)(BsonWriter*, int16_t))(Il2CppBase() + 0x408CC0C))(this, value);
	}
	template <typename T = void> T WriteValue_10(uint16_t value) {
		return ((T (*)(BsonWriter*, uint16_t))(Il2CppBase() + 0x408CCEC))(this, value);
	}
	template <typename T = void> T WriteValue_11(char value) {
		return ((T (*)(BsonWriter*, char))(Il2CppBase() + 0x408CDCC))(this, value);
	}
	template <typename T = void> T WriteValue_12(unsigned char value) {
		return ((T (*)(BsonWriter*, unsigned char))(Il2CppBase() + 0x408CF18))(this, value);
	}
	template <typename T = void> T WriteValue_13(signed char value) {
		return ((T (*)(BsonWriter*, signed char))(Il2CppBase() + 0x408CFF8))(this, value);
	}
	template <typename T = void> T WriteValue_14(uintptr_t value) {
		return ((T (*)(BsonWriter*, uintptr_t))(Il2CppBase() + 0x408D0D8))(this, value);
	}
	template <typename T = void> T WriteValue_15(uintptr_t value) {
		return ((T (*)(BsonWriter*, uintptr_t))(Il2CppBase() + 0x408D1CC))(this, value);
	}
	template <typename T = void> T WriteValue_16(uintptr_t value) {
		return ((T (*)(BsonWriter*, uintptr_t))(Il2CppBase() + 0x408D32C))(this, value);
	}
	template <typename T = void> T WriteValue_17(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(BsonWriter*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x408D430))(this, value);
	}
	template <typename T = void> T WriteValue_18(uintptr_t value) {
		return ((T (*)(BsonWriter*, uintptr_t))(Il2CppBase() + 0x408D520))(this, value);
	}
	template <typename T = void> T WriteValue_19(uintptr_t value) {
		return ((T (*)(BsonWriter*, uintptr_t))(Il2CppBase() + 0x408D62C))(this, value);
	}
	template <typename T = void> T WriteValue_20(uintptr_t value) {
		return ((T (*)(BsonWriter*, uintptr_t))(Il2CppBase() + 0x408D730))(this, value);
	}
	template <typename T = void> T WriteObjectId(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(BsonWriter*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x408D908))(this, value);
	}
	template <typename T = void> T WriteRegex(Il2CppString* pattern, Il2CppString* options) {
		return ((T (*)(BsonWriter*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x408DD14))(this, pattern, options);
	}

};

}
