#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Newtonsoft.Json.Serialization {

class TraceJsonWriter
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Newtonsoft.Json.dll", "Newtonsoft.Json.Serialization", "TraceJsonWriter"));
	}

	template <typename T = uintptr_t> T& _innerWriter() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& _textWriter() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> T& _sw() {
		return *(T*)((uintptr_t)this + 0x48);
	}

	template <typename T = Il2CppString*> T GetSerializedJsonMessage() {
		return ((T (*)(TraceJsonWriter*))(Il2CppBase() + 0x4DE13FC))(this);
	}
	template <typename T = void> T WriteValue(uintptr_t value) {
		return ((T (*)(TraceJsonWriter*, uintptr_t))(Il2CppBase() + 0x4DE1430))(this, value);
	}
	template <typename T = void> T WriteValue_1(bool value) {
		return ((T (*)(TraceJsonWriter*, bool))(Il2CppBase() + 0x4DE14E4))(this, value);
	}
	template <typename T = void> T WriteValue_2(unsigned char value) {
		return ((T (*)(TraceJsonWriter*, unsigned char))(Il2CppBase() + 0x4DE1554))(this, value);
	}
	template <typename T = void> T WriteValue_3(void* value) {
		return ((T (*)(TraceJsonWriter*, void*))(Il2CppBase() + 0x4DE15C4))(this, value);
	}
	template <typename T = void> T WriteValue_4(char value) {
		return ((T (*)(TraceJsonWriter*, char))(Il2CppBase() + 0x4DE1634))(this, value);
	}
	template <typename T = void> T WriteValue_5(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(TraceJsonWriter*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4DE16A4))(this, value);
	}
	template <typename T = void> T WriteValue_6(uintptr_t value) {
		return ((T (*)(TraceJsonWriter*, uintptr_t))(Il2CppBase() + 0x4DE1714))(this, value);
	}
	template <typename T = void> T WriteValue_7(uintptr_t value) {
		return ((T (*)(TraceJsonWriter*, uintptr_t))(Il2CppBase() + 0x4DE17C8))(this, value);
	}
	template <typename T = void> T WriteValue_8(double value) {
		return ((T (*)(TraceJsonWriter*, double))(Il2CppBase() + 0x4DE1880))(this, value);
	}
	template <typename T = void> T WriteUndefined() {
		return ((T (*)(TraceJsonWriter*))(Il2CppBase() + 0x4DE1914))(this);
	}
	template <typename T = void> T WriteNull() {
		return ((T (*)(TraceJsonWriter*))(Il2CppBase() + 0x4DE1974))(this);
	}
	template <typename T = void> T WriteValue_9(float value) {
		return ((T (*)(TraceJsonWriter*, float))(Il2CppBase() + 0x4DE19D4))(this, value);
	}
	template <typename T = void> T WriteValue_10(uintptr_t value) {
		return ((T (*)(TraceJsonWriter*, uintptr_t))(Il2CppBase() + 0x4DE1A44))(this, value);
	}
	template <typename T = void> T WriteValue_11(int32_t value) {
		return ((T (*)(TraceJsonWriter*, int32_t))(Il2CppBase() + 0x4DE1AF8))(this, value);
	}
	template <typename T = void> T WriteValue_12(int64_t value) {
		return ((T (*)(TraceJsonWriter*, int64_t))(Il2CppBase() + 0x4DE1B68))(this, value);
	}
	template <typename T = void> T WriteValue_13(uintptr_t value) {
		return ((T (*)(TraceJsonWriter*, uintptr_t))(Il2CppBase() + 0x4DE1BFC))(this, value);
	}
	template <typename T = void> T WriteValue_14(signed char value) {
		return ((T (*)(TraceJsonWriter*, signed char))(Il2CppBase() + 0x4DE1C6C))(this, value);
	}
	template <typename T = void> T WriteValue_15(int16_t value) {
		return ((T (*)(TraceJsonWriter*, int16_t))(Il2CppBase() + 0x4DE1CDC))(this, value);
	}
	template <typename T = void> T WriteValue_16(Il2CppString* value) {
		return ((T (*)(TraceJsonWriter*, Il2CppString*))(Il2CppBase() + 0x4DE1D4C))(this, value);
	}
	template <typename T = void> T WriteValue_17(uintptr_t value) {
		return ((T (*)(TraceJsonWriter*, uintptr_t))(Il2CppBase() + 0x4DE1DBC))(this, value);
	}
	template <typename T = void> T WriteValue_18(uint32_t value) {
		return ((T (*)(TraceJsonWriter*, uint32_t))(Il2CppBase() + 0x4DE1E50))(this, value);
	}
	template <typename T = void> T WriteValue_19(uint64_t value) {
		return ((T (*)(TraceJsonWriter*, uint64_t))(Il2CppBase() + 0x4DE1EC0))(this, value);
	}
	template <typename T = void> T WriteValue_20(uintptr_t value) {
		return ((T (*)(TraceJsonWriter*, uintptr_t))(Il2CppBase() + 0x4DE1F54))(this, value);
	}
	template <typename T = void> T WriteValue_21(uint16_t value) {
		return ((T (*)(TraceJsonWriter*, uint16_t))(Il2CppBase() + 0x4DE1FC4))(this, value);
	}
	template <typename T = void> T WriteComment(Il2CppString* text) {
		return ((T (*)(TraceJsonWriter*, Il2CppString*))(Il2CppBase() + 0x4DE2034))(this, text);
	}
	template <typename T = void> T WriteStartArray() {
		return ((T (*)(TraceJsonWriter*))(Il2CppBase() + 0x4DE20A4))(this);
	}
	template <typename T = void> T WriteEndArray() {
		return ((T (*)(TraceJsonWriter*))(Il2CppBase() + 0x4DE2104))(this);
	}
	template <typename T = void> T WriteStartConstructor(Il2CppString* name) {
		return ((T (*)(TraceJsonWriter*, Il2CppString*))(Il2CppBase() + 0x4DE2164))(this, name);
	}
	template <typename T = void> T WriteEndConstructor() {
		return ((T (*)(TraceJsonWriter*))(Il2CppBase() + 0x4DE21D4))(this);
	}
	template <typename T = void> T WritePropertyName(Il2CppString* name) {
		return ((T (*)(TraceJsonWriter*, Il2CppString*))(Il2CppBase() + 0x4DE2234))(this, name);
	}
	template <typename T = void> T WritePropertyName_1(Il2CppString* name, bool escape) {
		return ((T (*)(TraceJsonWriter*, Il2CppString*, bool))(Il2CppBase() + 0x4DE22A4))(this, name, escape);
	}
	template <typename T = void> T WriteStartObject() {
		return ((T (*)(TraceJsonWriter*))(Il2CppBase() + 0x4DE2320))(this);
	}
	template <typename T = void> T WriteEndObject() {
		return ((T (*)(TraceJsonWriter*))(Il2CppBase() + 0x4DE2380))(this);
	}
	template <typename T = void> T WriteRawValue(Il2CppString* json) {
		return ((T (*)(TraceJsonWriter*, Il2CppString*))(Il2CppBase() + 0x4DE23E0))(this, json);
	}
	template <typename T = void> T WriteRaw(Il2CppString* json) {
		return ((T (*)(TraceJsonWriter*, Il2CppString*))(Il2CppBase() + 0x4DE2450))(this, json);
	}
	template <typename T = void> T Close() {
		return ((T (*)(TraceJsonWriter*))(Il2CppBase() + 0x4DE24C0))(this);
	}

};

}
