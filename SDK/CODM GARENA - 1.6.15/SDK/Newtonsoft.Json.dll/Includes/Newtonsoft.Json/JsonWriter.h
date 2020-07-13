#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Newtonsoft.Json {

class JsonWriter
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Newtonsoft.Json.dll", "Newtonsoft.Json", "JsonWriter"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> static T& StateArray() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& StateArrayTempate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _stack() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& _currentPosition() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& _currentState() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& _formatting() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = bool> T& CloseOutput() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& _dateFormatHandling() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& _dateTimeZoneHandling() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& _stringEscapeHandling() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& _floatFormatHandling() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = Il2CppString*> T& _dateFormatString() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& _culture() {
		return *(T*)((uintptr_t)this + 0x3C);
	}

	template <typename T = Il2CppArray<uintptr_t>*> static T BuildStateArray() {
		return ((T (*)(void *))(Il2CppBase() + 0x40BB558))(0);
	}
	template <typename T = bool> T get_CloseOutput() {
		return ((T (*)(JsonWriter*))(Il2CppBase() + 0x408BF20))(this);
	}
	template <typename T = void> T set_CloseOutput(bool value) {
		return ((T (*)(JsonWriter*, bool))(Il2CppBase() + 0x40BC700))(this, value);
	}
	template <typename T = int32_t> T get_Top() {
		return ((T (*)(JsonWriter*))(Il2CppBase() + 0x408BA00))(this);
	}
	template <typename T = uintptr_t> T get_WriteState() {
		return ((T (*)(JsonWriter*))(Il2CppBase() + 0x40BC710))(this);
	}
	template <typename T = Il2CppString*> T get_ContainerPath() {
		return ((T (*)(JsonWriter*))(Il2CppBase() + 0x40BC83C))(this);
	}
	template <typename T = Il2CppString*> T get_Path() {
		return ((T (*)(JsonWriter*))(Il2CppBase() + 0x40BC9E4))(this);
	}
	template <typename T = uintptr_t> T get_Formatting() {
		return ((T (*)(JsonWriter*))(Il2CppBase() + 0x40B0100))(this);
	}
	template <typename T = void> T set_Formatting(uintptr_t value) {
		return ((T (*)(JsonWriter*, uintptr_t))(Il2CppBase() + 0x40B0108))(this, value);
	}
	template <typename T = uintptr_t> T get_DateFormatHandling() {
		return ((T (*)(JsonWriter*))(Il2CppBase() + 0x40B01C4))(this);
	}
	template <typename T = void> T set_DateFormatHandling(uintptr_t value) {
		return ((T (*)(JsonWriter*, uintptr_t))(Il2CppBase() + 0x40B01CC))(this, value);
	}
	template <typename T = uintptr_t> T get_DateTimeZoneHandling() {
		return ((T (*)(JsonWriter*))(Il2CppBase() + 0x408D324))(this);
	}
	template <typename T = void> T set_DateTimeZoneHandling(uintptr_t value) {
		return ((T (*)(JsonWriter*, uintptr_t))(Il2CppBase() + 0x40B0288))(this, value);
	}
	template <typename T = uintptr_t> T get_StringEscapeHandling() {
		return ((T (*)(JsonWriter*))(Il2CppBase() + 0x40B0408))(this);
	}
	template <typename T = void> T set_StringEscapeHandling(uintptr_t value) {
		return ((T (*)(JsonWriter*, uintptr_t))(Il2CppBase() + 0x40B0410))(this, value);
	}
	template <typename T = void> T OnStringEscapeHandlingChanged() {
		return ((T (*)(JsonWriter*))(Il2CppBase() + 0x40BCBE4))(this);
	}
	template <typename T = uintptr_t> T get_FloatFormatHandling() {
		return ((T (*)(JsonWriter*))(Il2CppBase() + 0x40B0344))(this);
	}
	template <typename T = void> T set_FloatFormatHandling(uintptr_t value) {
		return ((T (*)(JsonWriter*, uintptr_t))(Il2CppBase() + 0x40B034C))(this, value);
	}
	template <typename T = Il2CppString*> T get_DateFormatString() {
		return ((T (*)(JsonWriter*))(Il2CppBase() + 0x40B059C))(this);
	}
	template <typename T = void> T set_DateFormatString(Il2CppString* value) {
		return ((T (*)(JsonWriter*, Il2CppString*))(Il2CppBase() + 0x40B05A4))(this, value);
	}
	template <typename T = uintptr_t> T get_Culture() {
		return ((T (*)(JsonWriter*))(Il2CppBase() + 0x40B04E4))(this);
	}
	template <typename T = void> T set_Culture(uintptr_t value) {
		return ((T (*)(JsonWriter*, uintptr_t))(Il2CppBase() + 0x40B0594))(this, value);
	}
	template <typename T = void> T UpdateScopeWithFinishedValue() {
		return ((T (*)(JsonWriter*))(Il2CppBase() + 0x408DA24))(this);
	}
	template <typename T = void> T Push(uintptr_t value) {
		return ((T (*)(JsonWriter*, uintptr_t))(Il2CppBase() + 0x40BCBE8))(this, value);
	}
	template <typename T = uintptr_t> T Pop() {
		return ((T (*)(JsonWriter*))(Il2CppBase() + 0x40BCD18))(this);
	}
	template <typename T = uintptr_t> T Peek() {
		return ((T (*)(JsonWriter*))(Il2CppBase() + 0x40BC708))(this);
	}
	template <typename T = void> T Close() {
		return ((T (*)(JsonWriter*))(Il2CppBase() + 0x408BF1C))(this);
	}
	template <typename T = void> T WriteStartObject() {
		return ((T (*)(JsonWriter*))(Il2CppBase() + 0x408BEB0))(this);
	}
	template <typename T = void> T WriteEndObject() {
		return ((T (*)(JsonWriter*))(Il2CppBase() + 0x40BCEF4))(this);
	}
	template <typename T = void> T WriteStartArray() {
		return ((T (*)(JsonWriter*))(Il2CppBase() + 0x408BDE0))(this);
	}
	template <typename T = void> T WriteEndArray() {
		return ((T (*)(JsonWriter*))(Il2CppBase() + 0x40BCF00))(this);
	}
	template <typename T = void> T WriteStartConstructor(Il2CppString* name) {
		return ((T (*)(JsonWriter*, Il2CppString*))(Il2CppBase() + 0x40BCF08))(this, name);
	}
	template <typename T = void> T WriteEndConstructor() {
		return ((T (*)(JsonWriter*))(Il2CppBase() + 0x40BCF14))(this);
	}
	template <typename T = void> T WritePropertyName(Il2CppString* name) {
		return ((T (*)(JsonWriter*, Il2CppString*))(Il2CppBase() + 0x408BEE0))(this, name);
	}
	template <typename T = void> T WritePropertyName_1(Il2CppString* name, bool escape) {
		return ((T (*)(JsonWriter*, Il2CppString*, bool))(Il2CppBase() + 0x40BCF1C))(this, name, escape);
	}
	template <typename T = void> T WriteEnd() {
		return ((T (*)(JsonWriter*))(Il2CppBase() + 0x40BCF2C))(this);
	}
	template <typename T = void> T WriteToken(uintptr_t reader) {
		return ((T (*)(JsonWriter*, uintptr_t))(Il2CppBase() + 0x40BD08C))(this, reader);
	}
	template <typename T = void> T WriteToken_1(uintptr_t reader, bool writeChildren) {
		return ((T (*)(JsonWriter*, uintptr_t, bool))(Il2CppBase() + 0x40BD094))(this, reader, writeChildren);
	}
	template <typename T = void> T WriteToken_2(uintptr_t token, uintptr_t value) {
		return ((T (*)(JsonWriter*, uintptr_t, uintptr_t))(Il2CppBase() + 0x40BD15C))(this, token, value);
	}
	template <typename T = void> T WriteToken_3(uintptr_t reader, bool writeChildren, bool writeDateConstructorAsDate, bool writeComments) {
		return ((T (*)(JsonWriter*, uintptr_t, bool, bool, bool))(Il2CppBase() + 0x40BDA00))(this, reader, writeChildren, writeDateConstructorAsDate, writeComments);
	}
	template <typename T = void> T WriteConstructorDate(uintptr_t reader) {
		return ((T (*)(JsonWriter*, uintptr_t))(Il2CppBase() + 0x40BDCAC))(this, reader);
	}
	template <typename T = void> T WriteEnd_1(uintptr_t type) {
		return ((T (*)(JsonWriter*, uintptr_t))(Il2CppBase() + 0x40BCF34))(this, type);
	}
	template <typename T = void> T AutoCompleteAll() {
		return ((T (*)(JsonWriter*))(Il2CppBase() + 0x40BCEB4))(this);
	}
	template <typename T = uintptr_t> T GetCloseTokenForType(uintptr_t type) {
		return ((T (*)(JsonWriter*, uintptr_t))(Il2CppBase() + 0x40BDFC0))(this, type);
	}
	template <typename T = void> T AutoCompleteClose(uintptr_t type) {
		return ((T (*)(JsonWriter*, uintptr_t))(Il2CppBase() + 0x40BE0D8))(this, type);
	}
	template <typename T = void> T WriteEnd_2(uintptr_t token) {
		return ((T (*)(JsonWriter*, uintptr_t))(Il2CppBase() + 0x408B9D4))(this, token);
	}
	template <typename T = void> T WriteIndent() {
		return ((T (*)(JsonWriter*))(Il2CppBase() + 0x40BE380))(this);
	}
	template <typename T = void> T WriteValueDelimiter() {
		return ((T (*)(JsonWriter*))(Il2CppBase() + 0x40BE384))(this);
	}
	template <typename T = void> T WriteIndentSpace() {
		return ((T (*)(JsonWriter*))(Il2CppBase() + 0x40BE388))(this);
	}
	template <typename T = void> T AutoComplete(uintptr_t tokenBeingWritten) {
		return ((T (*)(JsonWriter*, uintptr_t))(Il2CppBase() + 0x408DA3C))(this, tokenBeingWritten);
	}
	template <typename T = void> T WriteNull() {
		return ((T (*)(JsonWriter*))(Il2CppBase() + 0x408C3C8))(this);
	}
	template <typename T = void> T WriteUndefined() {
		return ((T (*)(JsonWriter*))(Il2CppBase() + 0x408C424))(this);
	}
	template <typename T = void> T WriteRaw(Il2CppString* json) {
		return ((T (*)(JsonWriter*, Il2CppString*))(Il2CppBase() + 0x40BE38C))(this, json);
	}
	template <typename T = void> T WriteRawValue(Il2CppString* json) {
		return ((T (*)(JsonWriter*, Il2CppString*))(Il2CppBase() + 0x40BE390))(this, json);
	}
	template <typename T = void> T WriteValue(Il2CppString* value) {
		return ((T (*)(JsonWriter*, Il2CppString*))(Il2CppBase() + 0x408C52C))(this, value);
	}
	template <typename T = void> T WriteValue_1(int32_t value) {
		return ((T (*)(JsonWriter*, int32_t))(Il2CppBase() + 0x408C60C))(this, value);
	}
	template <typename T = void> T WriteValue_2(uint32_t value) {
		return ((T (*)(JsonWriter*, uint32_t))(Il2CppBase() + 0x408C728))(this, value);
	}
	template <typename T = void> T WriteValue_3(int64_t value) {
		return ((T (*)(JsonWriter*, int64_t))(Il2CppBase() + 0x408C810))(this, value);
	}
	template <typename T = void> T WriteValue_4(uint64_t value) {
		return ((T (*)(JsonWriter*, uint64_t))(Il2CppBase() + 0x408C934))(this, value);
	}
	template <typename T = void> T WriteValue_5(float value) {
		return ((T (*)(JsonWriter*, float))(Il2CppBase() + 0x408CA20))(this, value);
	}
	template <typename T = void> T WriteValue_6(double value) {
		return ((T (*)(JsonWriter*, double))(Il2CppBase() + 0x408CB10))(this, value);
	}
	template <typename T = void> T WriteValue_7(bool value) {
		return ((T (*)(JsonWriter*, bool))(Il2CppBase() + 0x408CBF0))(this, value);
	}
	template <typename T = void> T WriteValue_8(int16_t value) {
		return ((T (*)(JsonWriter*, int16_t))(Il2CppBase() + 0x408CCD0))(this, value);
	}
	template <typename T = void> T WriteValue_9(uint16_t value) {
		return ((T (*)(JsonWriter*, uint16_t))(Il2CppBase() + 0x408CDB0))(this, value);
	}
	template <typename T = void> T WriteValue_10(char value) {
		return ((T (*)(JsonWriter*, char))(Il2CppBase() + 0x408CEFC))(this, value);
	}
	template <typename T = void> T WriteValue_11(unsigned char value) {
		return ((T (*)(JsonWriter*, unsigned char))(Il2CppBase() + 0x408CFDC))(this, value);
	}
	template <typename T = void> T WriteValue_12(signed char value) {
		return ((T (*)(JsonWriter*, signed char))(Il2CppBase() + 0x408D0BC))(this, value);
	}
	template <typename T = void> T WriteValue_13(uintptr_t value) {
		return ((T (*)(JsonWriter*, uintptr_t))(Il2CppBase() + 0x408D1B0))(this, value);
	}
	template <typename T = void> T WriteValue_14(uintptr_t value) {
		return ((T (*)(JsonWriter*, uintptr_t))(Il2CppBase() + 0x408D308))(this, value);
	}
	template <typename T = void> T WriteValue_15(uintptr_t value) {
		return ((T (*)(JsonWriter*, uintptr_t))(Il2CppBase() + 0x408D414))(this, value);
	}
	template <typename T = void> T WriteValue_16(uintptr_t value) {
		return ((T (*)(JsonWriter*, uintptr_t))(Il2CppBase() + 0x408D610))(this, value);
	}
	template <typename T = void> T WriteValue_17(uintptr_t value) {
		return ((T (*)(JsonWriter*, uintptr_t))(Il2CppBase() + 0x408D714))(this, value);
	}
	template <typename T = void> T WriteValue_18(void* value) {
		return ((T (*)(JsonWriter*, void*))(Il2CppBase() + 0x40BE3DC))(this, value);
	}
	template <typename T = void> T WriteValue_19(void* value) {
		return ((T (*)(JsonWriter*, void*))(Il2CppBase() + 0x40BE4C8))(this, value);
	}
	template <typename T = void> T WriteValue_20(void* value) {
		return ((T (*)(JsonWriter*, void*))(Il2CppBase() + 0x40BE5B4))(this, value);
	}
	template <typename T = void> T WriteValue_21(void* value) {
		return ((T (*)(JsonWriter*, void*))(Il2CppBase() + 0x40BE6BC))(this, value);
	}
	template <typename T = void> T WriteValue_22(void* value) {
		return ((T (*)(JsonWriter*, void*))(Il2CppBase() + 0x40BE7C4))(this, value);
	}
	template <typename T = void> T WriteValue_23(void* value) {
		return ((T (*)(JsonWriter*, void*))(Il2CppBase() + 0x40BE8B0))(this, value);
	}
	template <typename T = void> T WriteValue_24(void* value) {
		return ((T (*)(JsonWriter*, void*))(Il2CppBase() + 0x40BE9B8))(this, value);
	}
	template <typename T = void> T WriteValue_25(void* value) {
		return ((T (*)(JsonWriter*, void*))(Il2CppBase() + 0x40BEAA4))(this, value);
	}
	template <typename T = void> T WriteValue_26(void* value) {
		return ((T (*)(JsonWriter*, void*))(Il2CppBase() + 0x40BEB90))(this, value);
	}
	template <typename T = void> T WriteValue_27(void* value) {
		return ((T (*)(JsonWriter*, void*))(Il2CppBase() + 0x40BEC7C))(this, value);
	}
	template <typename T = void> T WriteValue_28(void* value) {
		return ((T (*)(JsonWriter*, void*))(Il2CppBase() + 0x40BED68))(this, value);
	}
	template <typename T = void> T WriteValue_29(void* value) {
		return ((T (*)(JsonWriter*, void*))(Il2CppBase() + 0x40BEE54))(this, value);
	}
	template <typename T = void> T WriteValue_30(void* value) {
		return ((T (*)(JsonWriter*, void*))(Il2CppBase() + 0x40BEF40))(this, value);
	}
	template <typename T = void> T WriteValue_31(void* value) {
		return ((T (*)(JsonWriter*, void*))(Il2CppBase() + 0x40BF04C))(this, value);
	}
	template <typename T = void> T WriteValue_32(void* value) {
		return ((T (*)(JsonWriter*, void*))(Il2CppBase() + 0x40BF164))(this, value);
	}
	template <typename T = void> T WriteValue_33(void* value) {
		return ((T (*)(JsonWriter*, void*))(Il2CppBase() + 0x40BF298))(this, value);
	}
	template <typename T = void> T WriteValue_34(void* value) {
		return ((T (*)(JsonWriter*, void*))(Il2CppBase() + 0x40BF3A4))(this, value);
	}
	template <typename T = void> T WriteValue_35(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(JsonWriter*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x408D4EC))(this, value);
	}
	template <typename T = void> T WriteValue_36(uintptr_t value) {
		return ((T (*)(JsonWriter*, uintptr_t))(Il2CppBase() + 0x408D818))(this, value);
	}
	template <typename T = void> T WriteValue_37(uintptr_t value) {
		return ((T (*)(JsonWriter*, uintptr_t))(Il2CppBase() + 0x408C254))(this, value);
	}
	template <typename T = void> T WriteComment(Il2CppString* text) {
		return ((T (*)(JsonWriter*, Il2CppString*))(Il2CppBase() + 0x40C0E40))(this, text);
	}
	template <typename T = void> T System_IDisposable_Dispose() {
		return ((T (*)(JsonWriter*))(Il2CppBase() + 0x40C0E48))(this);
	}
	template <typename T = void> T Dispose(bool disposing) {
		return ((T (*)(JsonWriter*, bool))(Il2CppBase() + 0x40C0E80))(this, disposing);
	}
	template <typename T = void> static T WriteValue_38(uintptr_t writer, uintptr_t typeCode, uintptr_t value) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x40BF4B0))(0, writer, typeCode, value);
	}
	template <typename T = uintptr_t> static T CreateUnsupportedTypeException(uintptr_t writer, uintptr_t value) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x40C0EA8))(0, writer, value);
	}
	template <typename T = void> T InternalWriteEnd(uintptr_t container) {
		return ((T (*)(JsonWriter*, uintptr_t))(Il2CppBase() + 0x40BCEFC))(this, container);
	}
	template <typename T = void> T InternalWritePropertyName(Il2CppString* name) {
		return ((T (*)(JsonWriter*, Il2CppString*))(Il2CppBase() + 0x40B9644))(this, name);
	}
	template <typename T = void> T InternalWriteRaw() {
		return ((T (*)(JsonWriter*))(Il2CppBase() + 0x40B9BE0))(this);
	}
	template <typename T = void> T InternalWriteStart(uintptr_t token, uintptr_t container) {
		return ((T (*)(JsonWriter*, uintptr_t, uintptr_t))(Il2CppBase() + 0x40B92DC))(this, token, container);
	}
	template <typename T = void> T InternalWriteValue(uintptr_t token) {
		return ((T (*)(JsonWriter*, uintptr_t))(Il2CppBase() + 0x40B9AB8))(this, token);
	}
	template <typename T = void> T InternalWriteComment() {
		return ((T (*)(JsonWriter*))(Il2CppBase() + 0x40BB550))(this);
	}

};

}
