#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Mono.Security {

class Uri
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "Mono.Security", "Uri"));
	}

	template <typename T = bool> T& isUnixFilePath() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppString*> T& source() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppString*> T& scheme() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& host() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& port() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& path() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppString*> T& query() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppString*> T& fragment() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppString*> T& userinfo() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = bool> T& isUnc() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = bool> T& isOpaquePart() {
		return *(T*)((uintptr_t)this + 0x2D);
	}
	template <typename T = bool> T& userEscaped() {
		return *(T*)((uintptr_t)this + 0x2E);
	}
	template <typename T = Il2CppString*> T& cachedToString() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppString*> T& cachedLocalPath() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = int32_t> T& cachedHashCode() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = bool> T& reduce() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = Il2CppString*> static T& hexUpperChars() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& SchemeDelimiter() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = Il2CppString*> static T& UriSchemeFile() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = Il2CppString*> static T& UriSchemeFtp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = Il2CppString*> static T& UriSchemeGopher() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = Il2CppString*> static T& UriSchemeHttp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = Il2CppString*> static T& UriSchemeHttps() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = Il2CppString*> static T& UriSchemeMailto() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = Il2CppString*> static T& UriSchemeNews() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = Il2CppString*> static T& UriSchemeNntp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& schemes() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, int32_t>*> static T& f__switch$map17() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}

	template <typename T = Il2CppString*> T get_AbsolutePath() {
		return ((T (*)(Uri*))(Il2CppBase() + 0x3FB3294))(this);
	}
	template <typename T = bool> T get_IsFile() {
		return ((T (*)(Uri*))(Il2CppBase() + 0x3FB329C))(this);
	}
	template <typename T = bool> T get_IsUnc() {
		return ((T (*)(Uri*))(Il2CppBase() + 0x3FB33A0))(this);
	}
	template <typename T = Il2CppString*> T get_LocalPath() {
		return ((T (*)(Uri*))(Il2CppBase() + 0x3FB33A8))(this);
	}
	template <typename T = bool> T Equals(uintptr_t comparant) {
		return ((T (*)(Uri*, uintptr_t))(Il2CppBase() + 0x3FB3814))(this, comparant);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(Uri*))(Il2CppBase() + 0x3FB3BEC))(this);
	}
	template <typename T = Il2CppString*> T GetLeftPart(uintptr_t part) {
		return ((T (*)(Uri*, uintptr_t))(Il2CppBase() + 0x3FB3CA4))(this, part);
	}
	template <typename T = int32_t> static T FromHex(char digit) {
		return ((T (*)(void *, char))(Il2CppBase() + 0x3FB46A0))(0, digit);
	}
	template <typename T = Il2CppString*> static T HexEscape(char character) {
		return ((T (*)(void *, char))(Il2CppBase() + 0x3FB4790))(0, character);
	}
	template <typename T = char> static T HexUnescape(Il2CppString* pattern, uintptr_t index) {
		return ((T (*)(void *, Il2CppString*, uintptr_t))(Il2CppBase() + 0x3FB4998))(0, pattern, index);
	}
	template <typename T = bool> static T IsHexDigit(char digit) {
		return ((T (*)(void *, char))(Il2CppBase() + 0x3FB4D54))(0, digit);
	}
	template <typename T = bool> static T IsHexEncoding(Il2CppString* pattern, int32_t index) {
		return ((T (*)(void *, Il2CppString*, int32_t))(Il2CppBase() + 0x3FB4D90))(0, pattern, index);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(Uri*))(Il2CppBase() + 0x3FB4F3C))(this);
	}
	template <typename T = Il2CppString*> static T EscapeString(Il2CppString* str) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x3FB534C))(0, str);
	}
	template <typename T = Il2CppString*> static T EscapeString_1(Il2CppString* str, bool escapeReserved, bool escapeHex, bool escapeBrackets) {
		return ((T (*)(void *, Il2CppString*, bool, bool, bool))(Il2CppBase() + 0x3FB5404))(0, str, escapeReserved, escapeHex, escapeBrackets);
	}
	template <typename T = void> T Parse() {
		return ((T (*)(Uri*))(Il2CppBase() + 0x3FB2D9C))(this);
	}
	template <typename T = Il2CppString*> T Unescape(Il2CppString* str) {
		return ((T (*)(Uri*, Il2CppString*))(Il2CppBase() + 0x3FB380C))(this, str);
	}
	template <typename T = Il2CppString*> T Unescape_1(Il2CppString* str, bool excludeSharp) {
		return ((T (*)(Uri*, Il2CppString*, bool))(Il2CppBase() + 0x3FB5120))(this, str, excludeSharp);
	}
	template <typename T = void> T ParseAsWindowsUNC(Il2CppString* uriString) {
		return ((T (*)(Uri*, Il2CppString*))(Il2CppBase() + 0x3FB6A24))(this, uriString);
	}
	template <typename T = void> T ParseAsWindowsAbsoluteFilePath(Il2CppString* uriString) {
		return ((T (*)(Uri*, Il2CppString*))(Il2CppBase() + 0x3FB6CC8))(this, uriString);
	}
	template <typename T = void> T ParseAsUnixAbsoluteFilePath(Il2CppString* uriString) {
		return ((T (*)(Uri*, Il2CppString*))(Il2CppBase() + 0x3FB6EEC))(this, uriString);
	}
	template <typename T = void> T Parse_1(Il2CppString* uriString) {
		return ((T (*)(Uri*, Il2CppString*))(Il2CppBase() + 0x3FB5844))(this, uriString);
	}
	template <typename T = Il2CppString*> static T Reduce(Il2CppString* path) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x3FB748C))(0, path);
	}
	template <typename T = Il2CppString*> static T GetSchemeDelimiter(Il2CppString* scheme) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x3FB79B4))(0, scheme);
	}
	template <typename T = int32_t> static T GetDefaultPort(Il2CppString* scheme) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x3FB4490))(0, scheme);
	}
	template <typename T = Il2CppString*> T GetOpaqueWiseSchemeDelimiter() {
		return ((T (*)(Uri*))(Il2CppBase() + 0x3FB43C0))(this);
	}
	template <typename T = bool> static T IsPredefinedScheme(Il2CppString* scheme) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x3FB7178))(0, scheme);
	}

};

}
