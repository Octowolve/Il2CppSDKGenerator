#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Newtonsoft.Json {

class JsonTextReader
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Newtonsoft.Json.dll", "Newtonsoft.Json", "JsonTextReader"));
	}

	template <typename T = uintptr_t> T& _reader() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _chars() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = int32_t> T& _charsUsed() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = int32_t> T& _charPos() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = int32_t> T& _lineStartPos() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = int32_t> T& _lineNumber() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = bool> T& _isEndOfFile() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = uintptr_t> T& _stringBuffer() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = uintptr_t> T& _stringReference() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = void*> T& _arrayPool() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& NameTable() {
		return *(T*)((uintptr_t)this + 0x84);
	}

	template <typename T = void> T EnsureBufferNotEmpty() {
		return ((T (*)(JsonTextReader*))(Il2CppBase() + 0x40B09DC))(this);
	}
	template <typename T = void> T OnNewLine(int32_t pos) {
		return ((T (*)(JsonTextReader*, int32_t))(Il2CppBase() + 0x40B0A34))(this, pos);
	}
	template <typename T = void> T ParseString(char quote, uintptr_t readType) {
		return ((T (*)(JsonTextReader*, char, uintptr_t))(Il2CppBase() + 0x40B0A48))(this, quote, readType);
	}
	template <typename T = void> static T BlockCopyChars(Il2CppArray<uintptr_t>* src, int32_t srcOffset, Il2CppArray<uintptr_t>* dst, int32_t dstOffset, int32_t count) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, int32_t, Il2CppArray<uintptr_t>*, int32_t, int32_t))(Il2CppBase() + 0x40B16A0))(0, src, srcOffset, dst, dstOffset, count);
	}
	template <typename T = void> T ShiftBufferIfNeeded() {
		return ((T (*)(JsonTextReader*))(Il2CppBase() + 0x40B0EC8))(this);
	}
	template <typename T = int32_t> T ReadData(bool append) {
		return ((T (*)(JsonTextReader*, bool))(Il2CppBase() + 0x40B16D8))(this, append);
	}
	template <typename T = int32_t> T ReadData_1(bool append, int32_t charsRequired) {
		return ((T (*)(JsonTextReader*, bool, int32_t))(Il2CppBase() + 0x40B16E0))(this, append, charsRequired);
	}
	template <typename T = bool> T EnsureChars(int32_t relativePosition, bool append) {
		return ((T (*)(JsonTextReader*, int32_t, bool))(Il2CppBase() + 0x40B190C))(this, relativePosition, append);
	}
	template <typename T = bool> T ReadChars(int32_t relativePosition, bool append) {
		return ((T (*)(JsonTextReader*, int32_t, bool))(Il2CppBase() + 0x40B193C))(this, relativePosition, append);
	}
	template <typename T = bool> T Read() {
		return ((T (*)(JsonTextReader*))(Il2CppBase() + 0x40B19A8))(this);
	}
	template <typename T = void*> T ReadAsInt32() {
		return ((T (*)(JsonTextReader*))(Il2CppBase() + 0x40B2D88))(this);
	}
	template <typename T = void*> T ReadAsDateTime() {
		return ((T (*)(JsonTextReader*))(Il2CppBase() + 0x40B34B4))(this);
	}
	template <typename T = Il2CppString*> T ReadAsString() {
		return ((T (*)(JsonTextReader*))(Il2CppBase() + 0x40B3FC8))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T ReadAsBytes() {
		return ((T (*)(JsonTextReader*))(Il2CppBase() + 0x40B4144))(this);
	}
	template <typename T = uintptr_t> T ReadStringValue(uintptr_t readType) {
		return ((T (*)(JsonTextReader*, uintptr_t))(Il2CppBase() + 0x40B3548))(this, readType);
	}
	template <typename T = uintptr_t> T CreateUnexpectedCharacterException(char c) {
		return ((T (*)(JsonTextReader*, char))(Il2CppBase() + 0x40B4838))(this, c);
	}
	template <typename T = void*> T ReadAsBoolean() {
		return ((T (*)(JsonTextReader*))(Il2CppBase() + 0x40B6C60))(this);
	}
	template <typename T = void> T ProcessValueComma() {
		return ((T (*)(JsonTextReader*))(Il2CppBase() + 0x40B47D4))(this);
	}
	template <typename T = uintptr_t> T ReadNumberValue(uintptr_t readType) {
		return ((T (*)(JsonTextReader*, uintptr_t))(Il2CppBase() + 0x40B2E30))(this, readType);
	}
	template <typename T = void*> T ReadAsDateTimeOffset() {
		return ((T (*)(JsonTextReader*))(Il2CppBase() + 0x40B73F4))(this);
	}
	template <typename T = void*> T ReadAsDecimal() {
		return ((T (*)(JsonTextReader*))(Il2CppBase() + 0x40B7488))(this);
	}
	template <typename T = void*> T ReadAsDouble() {
		return ((T (*)(JsonTextReader*))(Il2CppBase() + 0x40B751C))(this);
	}
	template <typename T = void> T HandleNull() {
		return ((T (*)(JsonTextReader*))(Il2CppBase() + 0x40B46E4))(this);
	}
	template <typename T = void> T ReadFinished() {
		return ((T (*)(JsonTextReader*))(Il2CppBase() + 0x40B4A0C))(this);
	}
	template <typename T = bool> T ReadNullChar() {
		return ((T (*)(JsonTextReader*))(Il2CppBase() + 0x40B4690))(this);
	}
	template <typename T = void> T EnsureBuffer() {
		return ((T (*)(JsonTextReader*))(Il2CppBase() + 0x40B1D30))(this);
	}
	template <typename T = void> T ReadStringIntoBuffer(char quote) {
		return ((T (*)(JsonTextReader*, char))(Il2CppBase() + 0x40B0FB0))(this, quote);
	}
	template <typename T = void> T WriteCharToBuffer(char writeChar, int32_t lastWritePosition, int32_t writeToPosition) {
		return ((T (*)(JsonTextReader*, char, int32_t, int32_t))(Il2CppBase() + 0x40B7840))(this, writeChar, lastWritePosition, writeToPosition);
	}
	template <typename T = char> T ParseUnicode() {
		return ((T (*)(JsonTextReader*))(Il2CppBase() + 0x40B76C4))(this);
	}
	template <typename T = void> T ReadNumberIntoBuffer() {
		return ((T (*)(JsonTextReader*))(Il2CppBase() + 0x40B78A4))(this);
	}
	template <typename T = void> T ClearRecentString() {
		return ((T (*)(JsonTextReader*))(Il2CppBase() + 0x40B7B38))(this);
	}
	template <typename T = bool> T ParsePostValue() {
		return ((T (*)(JsonTextReader*))(Il2CppBase() + 0x40B24D8))(this);
	}
	template <typename T = bool> T ParseObject() {
		return ((T (*)(JsonTextReader*))(Il2CppBase() + 0x40B22E0))(this);
	}
	template <typename T = bool> T ParseProperty() {
		return ((T (*)(JsonTextReader*))(Il2CppBase() + 0x40B7BF0))(this);
	}
	template <typename T = bool> T ValidIdentifierChar(char value) {
		return ((T (*)(JsonTextReader*, char))(Il2CppBase() + 0x40B7F4C))(this, value);
	}
	template <typename T = void> T ParseUnquotedProperty() {
		return ((T (*)(JsonTextReader*))(Il2CppBase() + 0x40B8014))(this);
	}
	template <typename T = bool> T ParseValue() {
		return ((T (*)(JsonTextReader*))(Il2CppBase() + 0x40B1D98))(this);
	}
	template <typename T = void> T ProcessLineFeed() {
		return ((T (*)(JsonTextReader*))(Il2CppBase() + 0x40B49EC))(this);
	}
	template <typename T = void> T ProcessCarriageReturn(bool append) {
		return ((T (*)(JsonTextReader*, bool))(Il2CppBase() + 0x40B494C))(this, append);
	}
	template <typename T = bool> T EatWhitespace(bool oneOrMore) {
		return ((T (*)(JsonTextReader*, bool))(Il2CppBase() + 0x40B27F8))(this, oneOrMore);
	}
	template <typename T = void> T ParseConstructor() {
		return ((T (*)(JsonTextReader*))(Il2CppBase() + 0x40B855C))(this);
	}
	template <typename T = void> T ParseNumber(uintptr_t readType) {
		return ((T (*)(JsonTextReader*, uintptr_t))(Il2CppBase() + 0x40B4E50))(this, readType);
	}
	template <typename T = void> T ParseComment(bool setToken) {
		return ((T (*)(JsonTextReader*, bool))(Il2CppBase() + 0x40B29AC))(this, setToken);
	}
	template <typename T = void> T EndComment(bool setToken, int32_t initialPosition, int32_t endPosition) {
		return ((T (*)(JsonTextReader*, bool, int32_t, int32_t))(Il2CppBase() + 0x40B8AE8))(this, setToken, initialPosition, endPosition);
	}
	template <typename T = bool> T MatchValue(Il2CppString* value) {
		return ((T (*)(JsonTextReader*, Il2CppString*))(Il2CppBase() + 0x40B8B80))(this, value);
	}
	template <typename T = bool> T MatchValueWithTrailingSeparator(Il2CppString* value) {
		return ((T (*)(JsonTextReader*, Il2CppString*))(Il2CppBase() + 0x40B674C))(this, value);
	}
	template <typename T = bool> T IsSeparator(char c) {
		return ((T (*)(JsonTextReader*, char))(Il2CppBase() + 0x40B8CA0))(this, c);
	}
	template <typename T = void> T ParseTrue() {
		return ((T (*)(JsonTextReader*))(Il2CppBase() + 0x40B82DC))(this);
	}
	template <typename T = void> T ParseNull() {
		return ((T (*)(JsonTextReader*))(Il2CppBase() + 0x40B75B0))(this);
	}
	template <typename T = void> T ParseUndefined() {
		return ((T (*)(JsonTextReader*))(Il2CppBase() + 0x40B89D4))(this);
	}
	template <typename T = void> T ParseFalse() {
		return ((T (*)(JsonTextReader*))(Il2CppBase() + 0x40B841C))(this);
	}
	template <typename T = uintptr_t> T ParseNumberNegativeInfinity(uintptr_t readType) {
		return ((T (*)(JsonTextReader*, uintptr_t))(Il2CppBase() + 0x40B4C30))(this, readType);
	}
	template <typename T = uintptr_t> T ParseNumberPositiveInfinity(uintptr_t readType) {
		return ((T (*)(JsonTextReader*, uintptr_t))(Il2CppBase() + 0x40B6828))(this, readType);
	}
	template <typename T = uintptr_t> T ParseNumberNaN(uintptr_t readType) {
		return ((T (*)(JsonTextReader*, uintptr_t))(Il2CppBase() + 0x40B6A44))(this, readType);
	}
	template <typename T = void> T Close() {
		return ((T (*)(JsonTextReader*))(Il2CppBase() + 0x40B8E6C))(this);
	}
	template <typename T = bool> T HasLineInfo() {
		return ((T (*)(JsonTextReader*))(Il2CppBase() + 0x40B8EE4))(this);
	}
	template <typename T = int32_t> T get_LineNumber() {
		return ((T (*)(JsonTextReader*))(Il2CppBase() + 0x40B8EEC))(this);
	}
	template <typename T = int32_t> T get_LinePosition() {
		return ((T (*)(JsonTextReader*))(Il2CppBase() + 0x40B8F44))(this);
	}

};

}
