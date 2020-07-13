#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Newtonsoft.Json.Linq {

class JTokenWriter
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Newtonsoft.Json.dll", "Newtonsoft.Json.Linq", "JTokenWriter"));
	}

	template <typename T = uintptr_t> T& _token() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& _parent() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> T& _value() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& _current() {
		return *(T*)((uintptr_t)this + 0x4C);
	}

	template <typename T = uintptr_t> T get_Token() {
		return ((T (*)(JTokenWriter*))(Il2CppBase() + 0x3975930))(this);
	}
	template <typename T = void> T Close() {
		return ((T (*)(JTokenWriter*))(Il2CppBase() + 0x39759E8))(this);
	}
	template <typename T = void> T WriteStartObject() {
		return ((T (*)(JTokenWriter*))(Il2CppBase() + 0x39759F0))(this);
	}
	template <typename T = void> T AddParent(uintptr_t container) {
		return ((T (*)(JTokenWriter*, uintptr_t))(Il2CppBase() + 0x3975AB0))(this, container);
	}
	template <typename T = void> T RemoveParent() {
		return ((T (*)(JTokenWriter*))(Il2CppBase() + 0x3975AEC))(this);
	}
	template <typename T = void> T WriteStartArray() {
		return ((T (*)(JTokenWriter*))(Il2CppBase() + 0x3975B54))(this);
	}
	template <typename T = void> T WriteStartConstructor(Il2CppString* name) {
		return ((T (*)(JTokenWriter*, Il2CppString*))(Il2CppBase() + 0x3975C14))(this, name);
	}
	template <typename T = void> T WriteEnd(uintptr_t token) {
		return ((T (*)(JTokenWriter*, uintptr_t))(Il2CppBase() + 0x3975CE0))(this, token);
	}
	template <typename T = void> T WritePropertyName(Il2CppString* name) {
		return ((T (*)(JTokenWriter*, Il2CppString*))(Il2CppBase() + 0x3975CE4))(this, name);
	}
	template <typename T = void> T AddValue(uintptr_t value, uintptr_t token) {
		return ((T (*)(JTokenWriter*, uintptr_t, uintptr_t))(Il2CppBase() + 0x3975E0C))(this, value, token);
	}
	template <typename T = void> T AddValue_1(uintptr_t value, uintptr_t token) {
		return ((T (*)(JTokenWriter*, uintptr_t, uintptr_t))(Il2CppBase() + 0x3975EA8))(this, value, token);
	}
	template <typename T = void> T WriteValue(uintptr_t value) {
		return ((T (*)(JTokenWriter*, uintptr_t))(Il2CppBase() + 0x3975F50))(this, value);
	}
	template <typename T = void> T WriteNull() {
		return ((T (*)(JTokenWriter*))(Il2CppBase() + 0x3975F58))(this);
	}
	template <typename T = void> T WriteUndefined() {
		return ((T (*)(JTokenWriter*))(Il2CppBase() + 0x3975F7C))(this);
	}
	template <typename T = void> T WriteRaw(Il2CppString* json) {
		return ((T (*)(JTokenWriter*, Il2CppString*))(Il2CppBase() + 0x3975FA0))(this, json);
	}
	template <typename T = void> T WriteComment(Il2CppString* text) {
		return ((T (*)(JTokenWriter*, Il2CppString*))(Il2CppBase() + 0x3976050))(this, text);
	}
	template <typename T = void> T WriteValue_1(Il2CppString* value) {
		return ((T (*)(JTokenWriter*, Il2CppString*))(Il2CppBase() + 0x3976080))(this, value);
	}
	template <typename T = void> T WriteValue_2(int32_t value) {
		return ((T (*)(JTokenWriter*, int32_t))(Il2CppBase() + 0x39760AC))(this, value);
	}
	template <typename T = void> T WriteValue_3(uint32_t value) {
		return ((T (*)(JTokenWriter*, uint32_t))(Il2CppBase() + 0x3976160))(this, value);
	}
	template <typename T = void> T WriteValue_4(int64_t value) {
		return ((T (*)(JTokenWriter*, int64_t))(Il2CppBase() + 0x3976214))(this, value);
	}
	template <typename T = void> T WriteValue_5(uint64_t value) {
		return ((T (*)(JTokenWriter*, uint64_t))(Il2CppBase() + 0x39762D8))(this, value);
	}
	template <typename T = void> T WriteValue_6(float value) {
		return ((T (*)(JTokenWriter*, float))(Il2CppBase() + 0x397639C))(this, value);
	}
	template <typename T = void> T WriteValue_7(double value) {
		return ((T (*)(JTokenWriter*, double))(Il2CppBase() + 0x397645C))(this, value);
	}
	template <typename T = void> T WriteValue_8(bool value) {
		return ((T (*)(JTokenWriter*, bool))(Il2CppBase() + 0x3976528))(this, value);
	}
	template <typename T = void> T WriteValue_9(int16_t value) {
		return ((T (*)(JTokenWriter*, int16_t))(Il2CppBase() + 0x39765DC))(this, value);
	}
	template <typename T = void> T WriteValue_10(uint16_t value) {
		return ((T (*)(JTokenWriter*, uint16_t))(Il2CppBase() + 0x3976690))(this, value);
	}
	template <typename T = void> T WriteValue_11(char value) {
		return ((T (*)(JTokenWriter*, char))(Il2CppBase() + 0x3976744))(this, value);
	}
	template <typename T = void> T WriteValue_12(unsigned char value) {
		return ((T (*)(JTokenWriter*, unsigned char))(Il2CppBase() + 0x3976828))(this, value);
	}
	template <typename T = void> T WriteValue_13(signed char value) {
		return ((T (*)(JTokenWriter*, signed char))(Il2CppBase() + 0x39768DC))(this, value);
	}
	template <typename T = void> T WriteValue_14(uintptr_t value) {
		return ((T (*)(JTokenWriter*, uintptr_t))(Il2CppBase() + 0x3976990))(this, value);
	}
	template <typename T = void> T WriteValue_15(uintptr_t value) {
		return ((T (*)(JTokenWriter*, uintptr_t))(Il2CppBase() + 0x3976A6C))(this, value);
	}
	template <typename T = void> T WriteValue_16(uintptr_t value) {
		return ((T (*)(JTokenWriter*, uintptr_t))(Il2CppBase() + 0x3976BA4))(this, value);
	}
	template <typename T = void> T WriteValue_17(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(JTokenWriter*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x3976C9C))(this, value);
	}
	template <typename T = void> T WriteValue_18(uintptr_t value) {
		return ((T (*)(JTokenWriter*, uintptr_t))(Il2CppBase() + 0x3976CC8))(this, value);
	}
	template <typename T = void> T WriteValue_19(uintptr_t value) {
		return ((T (*)(JTokenWriter*, uintptr_t))(Il2CppBase() + 0x3976D8C))(this, value);
	}
	template <typename T = void> T WriteValue_20(uintptr_t value) {
		return ((T (*)(JTokenWriter*, uintptr_t))(Il2CppBase() + 0x3976E68))(this, value);
	}
	template <typename T = void> T WriteToken(uintptr_t reader, bool writeChildren, bool writeDateConstructorAsDate, bool writeComments) {
		return ((T (*)(JTokenWriter*, uintptr_t, bool, bool, bool))(Il2CppBase() + 0x3976E94))(this, reader, writeChildren, writeDateConstructorAsDate, writeComments);
	}

};

}
