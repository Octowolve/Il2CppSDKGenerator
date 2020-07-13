#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Xml {

class XmlConvert
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Xml.dll", "System.Xml", "XmlConvert"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> static T& datetimeFormats() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& defaultDateTimeFormats() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& roundtripDateTimeFormats() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& localDateTimeFormats() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& utcDateTimeFormats() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& unspecifiedDateTimeFormats() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& _defaultStyle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, int32_t>*> static T& f__switch$map49() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}

	template <typename T = Il2CppString*> static T TryDecoding(Il2CppString* s) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x37CAEC4))(0, s);
	}
	template <typename T = Il2CppString*> static T DecodeName(Il2CppString* name) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x37CB1F4))(0, name);
	}
	template <typename T = Il2CppString*> static T EncodeLocalName(Il2CppString* name) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x37C471C))(0, name);
	}
	template <typename T = bool> static T IsInvalid(char c, bool firstOnlyLetter) {
		return ((T (*)(void *, char, bool))(Il2CppBase() + 0x37CB538))(0, c, firstOnlyLetter);
	}
	template <typename T = Il2CppString*> static T EncodeName(Il2CppString* name, bool nmtoken) {
		return ((T (*)(void *, Il2CppString*, bool))(Il2CppBase() + 0x37CB620))(0, name, nmtoken);
	}
	template <typename T = Il2CppString*> static T EncodeName_1(Il2CppString* name) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x37CB494))(0, name);
	}
	template <typename T = bool> static T ToBoolean(Il2CppString* s) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x37B9050))(0, s);
	}
	template <typename T = unsigned char> static T ToByte(Il2CppString* s) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x37CB8B4))(0, s);
	}
	template <typename T = uintptr_t> static T ToDateTime(Il2CppString* s) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x37CB97C))(0, s);
	}
	template <typename T = uintptr_t> static T ToDateTime_1(Il2CppString* s, Il2CppArray<uintptr_t>* formats) {
		return ((T (*)(void *, Il2CppString*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x37CBA48))(0, s, formats);
	}
	template <typename T = uintptr_t> static T ToDateTime_2(Il2CppString* s, Il2CppArray<uintptr_t>* formats, uintptr_t style) {
		return ((T (*)(void *, Il2CppString*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x37CBB20))(0, s, formats, style);
	}
	template <typename T = uintptr_t> static T ToDecimal(Il2CppString* s) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x37CBC30))(0, s);
	}
	template <typename T = double> static T ToDouble(Il2CppString* s) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x37CBD38))(0, s);
	}
	template <typename T = float> static T TryParseStringFloatConstants(Il2CppString* s) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x37CBEA4))(0, s);
	}
	template <typename T = bool> static T TryParseStringConstant(Il2CppString* format, Il2CppString* s, int32_t start, int32_t end) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*, int32_t, int32_t))(Il2CppBase() + 0x37CC2A0))(0, format, s, start, end);
	}
	template <typename T = int16_t> static T ToInt16(Il2CppString* s) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x37CC3BC))(0, s);
	}
	template <typename T = int32_t> static T ToInt32(Il2CppString* s) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x37CC484))(0, s);
	}
	template <typename T = int64_t> static T ToInt64(Il2CppString* s) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x37CC54C))(0, s);
	}
	template <typename T = signed char> static T ToSByte(Il2CppString* s) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x37CC614))(0, s);
	}
	template <typename T = float> static T ToSingle(Il2CppString* s) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x37CC6DC))(0, s);
	}
	template <typename T = Il2CppString*> static T ToString(int64_t value) {
		return ((T (*)(void *, int64_t))(Il2CppBase() + 0x37CC838))(0, value);
	}
	template <typename T = Il2CppString*> static T ToString_1(bool value) {
		return ((T (*)(void *, bool))(Il2CppBase() + 0x37CC8F4))(0, value);
	}
	template <typename T = Il2CppString*> static T ToString_2(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x37CC980))(0, value);
	}
	template <typename T = Il2CppString*> static T ToString_3(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x37CCA44))(0, value);
	}
	template <typename T = Il2CppString*> static T ToString_4(double value) {
		return ((T (*)(void *, double))(Il2CppBase() + 0x37CD008))(0, value);
	}
	template <typename T = Il2CppString*> static T ToString_5(float value) {
		return ((T (*)(void *, float))(Il2CppBase() + 0x37CD198))(0, value);
	}
	template <typename T = Il2CppString*> static T ToString_6(uintptr_t value, uintptr_t mode) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x37CD30C))(0, value, mode);
	}
	template <typename T = uintptr_t> static T ToTimeSpan(Il2CppString* s) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x37CD8E4))(0, s);
	}
	template <typename T = uint16_t> static T ToUInt16(Il2CppString* s) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x37CDF58))(0, s);
	}
	template <typename T = uint32_t> static T ToUInt32(Il2CppString* s) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x37CE020))(0, s);
	}
	template <typename T = uint64_t> static T ToUInt64(Il2CppString* s) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x37CE0E8))(0, s);
	}
	template <typename T = Il2CppString*> static T VerifyName(Il2CppString* name) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x37CE1B0))(0, name);
	}
	template <typename T = Il2CppString*> static T VerifyNCName(Il2CppString* ncname) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x37CE378))(0, ncname);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T FromBinHexString(Il2CppString* s) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x37CE540))(0, s);
	}
	template <typename T = int32_t> static T FromBinHexString_1(Il2CppArray<uintptr_t>* chars, int32_t offset, int32_t charLength, Il2CppArray<uintptr_t>* buffer) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, int32_t, int32_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x37CE660))(0, chars, offset, charLength, buffer);
	}
	template <typename T = Il2CppString*> static T ToString_7(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x37CE86C))(0, value);
	}
	template <typename T = Il2CppString*> static T ToString_8(uintptr_t value, Il2CppString* format) {
		return ((T (*)(void *, uintptr_t, Il2CppString*))(Il2CppBase() + 0x37CE948))(0, value, format);
	}

};

}
