#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Newtonsoft.Json {

class JsonTextWriter
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Newtonsoft.Json.dll", "Newtonsoft.Json", "JsonTextWriter"));
	}

	template <typename T = uintptr_t> T& _writer() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& _base64Encoder() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = char> T& _indentChar() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = int32_t> T& _indentation() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = char> T& _quoteChar() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = bool> T& _quoteName() {
		return *(T*)((uintptr_t)this + 0x52);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _charEscapeFlags() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _writeBuffer() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = void*> T& _arrayPool() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _indentChars() {
		return *(T*)((uintptr_t)this + 0x60);
	}

	template <typename T = uintptr_t> T get_Base64Encoder() {
		return ((T (*)(JsonTextWriter*))(Il2CppBase() + 0x40B8F54))(this);
	}
	template <typename T = char> T get_QuoteChar() {
		return ((T (*)(JsonTextWriter*))(Il2CppBase() + 0x40B8FFC))(this);
	}
	template <typename T = void> T Close() {
		return ((T (*)(JsonTextWriter*))(Il2CppBase() + 0x40B9234))(this);
	}
	template <typename T = void> T WriteStartObject() {
		return ((T (*)(JsonTextWriter*))(Il2CppBase() + 0x40B9294))(this);
	}
	template <typename T = void> T WriteStartArray() {
		return ((T (*)(JsonTextWriter*))(Il2CppBase() + 0x40B9318))(this);
	}
	template <typename T = void> T WriteStartConstructor(Il2CppString* name) {
		return ((T (*)(JsonTextWriter*, Il2CppString*))(Il2CppBase() + 0x40B9360))(this, name);
	}
	template <typename T = void> T WriteEnd(uintptr_t token) {
		return ((T (*)(JsonTextWriter*, uintptr_t))(Il2CppBase() + 0x40B9458))(this, token);
	}
	template <typename T = void> T WritePropertyName(Il2CppString* name) {
		return ((T (*)(JsonTextWriter*, Il2CppString*))(Il2CppBase() + 0x40B95E8))(this, name);
	}
	template <typename T = void> T WritePropertyName_1(Il2CppString* name, bool escape) {
		return ((T (*)(JsonTextWriter*, Il2CppString*, bool))(Il2CppBase() + 0x40B9764))(this, name, escape);
	}
	template <typename T = void> T OnStringEscapeHandlingChanged() {
		return ((T (*)(JsonTextWriter*))(Il2CppBase() + 0x40B9854))(this);
	}
	template <typename T = void> T UpdateCharEscapeFlags() {
		return ((T (*)(JsonTextWriter*))(Il2CppBase() + 0x40B917C))(this);
	}
	template <typename T = void> T WriteIndent() {
		return ((T (*)(JsonTextWriter*))(Il2CppBase() + 0x40B9858))(this);
	}
	template <typename T = void> T WriteValueDelimiter() {
		return ((T (*)(JsonTextWriter*))(Il2CppBase() + 0x40B9934))(this);
	}
	template <typename T = void> T WriteIndentSpace() {
		return ((T (*)(JsonTextWriter*))(Il2CppBase() + 0x40B996C))(this);
	}
	template <typename T = void> T WriteValueInternal(Il2CppString* value, uintptr_t token) {
		return ((T (*)(JsonTextWriter*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x40B99A4))(this, value, token);
	}
	template <typename T = void> T WriteValue(uintptr_t value) {
		return ((T (*)(JsonTextWriter*, uintptr_t))(Il2CppBase() + 0x40B99D8))(this, value);
	}
	template <typename T = void> T WriteNull() {
		return ((T (*)(JsonTextWriter*))(Il2CppBase() + 0x40B99DC))(this);
	}
	template <typename T = void> T WriteUndefined() {
		return ((T (*)(JsonTextWriter*))(Il2CppBase() + 0x40B9AD0))(this);
	}
	template <typename T = void> T WriteRaw(Il2CppString* json) {
		return ((T (*)(JsonTextWriter*, Il2CppString*))(Il2CppBase() + 0x40B9BAC))(this, json);
	}
	template <typename T = void> T WriteValue_1(Il2CppString* value) {
		return ((T (*)(JsonTextWriter*, Il2CppString*))(Il2CppBase() + 0x40B9BE4))(this, value);
	}
	template <typename T = void> T WriteEscapedString(Il2CppString* value, bool quote) {
		return ((T (*)(JsonTextWriter*, Il2CppString*, bool))(Il2CppBase() + 0x40B9650))(this, value, quote);
	}
	template <typename T = void> T WriteValue_2(int32_t value) {
		return ((T (*)(JsonTextWriter*, int32_t))(Il2CppBase() + 0x40B9D14))(this, value);
	}
	template <typename T = void> T WriteValue_3(uint32_t value) {
		return ((T (*)(JsonTextWriter*, uint32_t))(Il2CppBase() + 0x40B9E18))(this, value);
	}
	template <typename T = void> T WriteValue_4(int64_t value) {
		return ((T (*)(JsonTextWriter*, int64_t))(Il2CppBase() + 0x40B9E64))(this, value);
	}
	template <typename T = void> T WriteValue_5(uint64_t value) {
		return ((T (*)(JsonTextWriter*, uint64_t))(Il2CppBase() + 0x40B9EB4))(this, value);
	}
	template <typename T = void> T WriteValue_6(float value) {
		return ((T (*)(JsonTextWriter*, float))(Il2CppBase() + 0x40BA084))(this, value);
	}
	template <typename T = void> T WriteValue_7(void* value) {
		return ((T (*)(JsonTextWriter*, void*))(Il2CppBase() + 0x40BA174))(this, value);
	}
	template <typename T = void> T WriteValue_8(double value) {
		return ((T (*)(JsonTextWriter*, double))(Il2CppBase() + 0x40BA2C8))(this, value);
	}
	template <typename T = void> T WriteValue_9(void* value) {
		return ((T (*)(JsonTextWriter*, void*))(Il2CppBase() + 0x40BA3BC))(this, value);
	}
	template <typename T = void> T WriteValue_10(bool value) {
		return ((T (*)(JsonTextWriter*, bool))(Il2CppBase() + 0x40BA524))(this, value);
	}
	template <typename T = void> T WriteValue_11(int16_t value) {
		return ((T (*)(JsonTextWriter*, int16_t))(Il2CppBase() + 0x40BA5F4))(this, value);
	}
	template <typename T = void> T WriteValue_12(uint16_t value) {
		return ((T (*)(JsonTextWriter*, uint16_t))(Il2CppBase() + 0x40BA640))(this, value);
	}
	template <typename T = void> T WriteValue_13(char value) {
		return ((T (*)(JsonTextWriter*, char))(Il2CppBase() + 0x40BA68C))(this, value);
	}
	template <typename T = void> T WriteValue_14(unsigned char value) {
		return ((T (*)(JsonTextWriter*, unsigned char))(Il2CppBase() + 0x40BA75C))(this, value);
	}
	template <typename T = void> T WriteValue_15(signed char value) {
		return ((T (*)(JsonTextWriter*, signed char))(Il2CppBase() + 0x40BA7A8))(this, value);
	}
	template <typename T = void> T WriteValue_16(uintptr_t value) {
		return ((T (*)(JsonTextWriter*, uintptr_t))(Il2CppBase() + 0x40BA7F4))(this, value);
	}
	template <typename T = void> T WriteValue_17(uintptr_t value) {
		return ((T (*)(JsonTextWriter*, uintptr_t))(Il2CppBase() + 0x40BA8E4))(this, value);
	}
	template <typename T = void> T WriteValue_18(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(JsonTextWriter*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x40BACC4))(this, value);
	}
	template <typename T = void> T WriteValue_19(uintptr_t value) {
		return ((T (*)(JsonTextWriter*, uintptr_t))(Il2CppBase() + 0x40BADB0))(this, value);
	}
	template <typename T = void> T WriteValue_20(uintptr_t value) {
		return ((T (*)(JsonTextWriter*, uintptr_t))(Il2CppBase() + 0x40BB0F8))(this, value);
	}
	template <typename T = void> T WriteValue_21(uintptr_t value) {
		return ((T (*)(JsonTextWriter*, uintptr_t))(Il2CppBase() + 0x40BB26C))(this, value);
	}
	template <typename T = void> T WriteValue_22(uintptr_t value) {
		return ((T (*)(JsonTextWriter*, uintptr_t))(Il2CppBase() + 0x40BB324))(this, value);
	}
	template <typename T = void> T WriteComment(Il2CppString* text) {
		return ((T (*)(JsonTextWriter*, Il2CppString*))(Il2CppBase() + 0x40BB444))(this, text);
	}
	template <typename T = void> T EnsureWriteBuffer() {
		return ((T (*)(JsonTextWriter*))(Il2CppBase() + 0x40B9CE0))(this);
	}
	template <typename T = void> T WriteIntegerValue(int64_t value) {
		return ((T (*)(JsonTextWriter*, int64_t))(Il2CppBase() + 0x40B9D60))(this, value);
	}
	template <typename T = void> T WriteIntegerValue_1(uint64_t uvalue) {
		return ((T (*)(JsonTextWriter*, uint64_t))(Il2CppBase() + 0x40B9F04))(this, uvalue);
	}

};

}
