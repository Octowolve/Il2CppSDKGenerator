#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System {

class Uri
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.dll", "System", "Uri"));
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
	template <typename T = bool> T& isAbsoluteUri() {
		return *(T*)((uintptr_t)this + 0x2E);
	}
	template <typename T = bool> T& userEscaped() {
		return *(T*)((uintptr_t)this + 0x2F);
	}
	template <typename T = Il2CppString*> T& cachedAbsoluteUri() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppString*> T& cachedToString() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = Il2CppString*> T& cachedLocalPath() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = int32_t> T& cachedHashCode() {
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
	template <typename T = Il2CppString*> static T& UriSchemeNetPipe() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = Il2CppString*> static T& UriSchemeNetTcp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& schemes() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> T& parser() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, int32_t>*> static T& f__switch$map12() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, int32_t>*> static T& f__switch$map13() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, int32_t>*> static T& f__switch$map14() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, int32_t>*> static T& f__switch$map15() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, int32_t>*> static T& f__switch$map16() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}

	template <typename T = void> T System_Runtime_Serialization_ISerializable_GetObjectData(uintptr_t info, uintptr_t context) {
		return ((T (*)(Uri*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4AEE444))(this, info, context);
	}
	template <typename T = void> T Merge(uintptr_t baseUri, Il2CppString* relativeUri) {
		return ((T (*)(Uri*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x4AED084))(this, baseUri, relativeUri);
	}
	template <typename T = Il2CppString*> T get_AbsolutePath() {
		return ((T (*)(Uri*))(Il2CppBase() + 0x4AEEA90))(this);
	}
	template <typename T = Il2CppString*> T get_AbsoluteUri() {
		return ((T (*)(Uri*))(Il2CppBase() + 0x4AEE4F0))(this);
	}
	template <typename T = Il2CppString*> T get_Authority() {
		return ((T (*)(Uri*))(Il2CppBase() + 0x4AEF82C))(this);
	}
	template <typename T = Il2CppString*> T get_Host() {
		return ((T (*)(Uri*))(Il2CppBase() + 0x4AEFA3C))(this);
	}
	template <typename T = uintptr_t> T get_HostNameType() {
		return ((T (*)(Uri*))(Il2CppBase() + 0x4AEFA54))(this);
	}
	template <typename T = bool> T get_IsDefaultPort() {
		return ((T (*)(Uri*))(Il2CppBase() + 0x4AEFF7C))(this);
	}
	template <typename T = bool> T get_IsFile() {
		return ((T (*)(Uri*))(Il2CppBase() + 0x4AEFE68))(this);
	}
	template <typename T = bool> T get_IsLoopback() {
		return ((T (*)(Uri*))(Il2CppBase() + 0x4AF0044))(this);
	}
	template <typename T = bool> T get_IsUnc() {
		return ((T (*)(Uri*))(Il2CppBase() + 0x4AF0354))(this);
	}
	template <typename T = Il2CppString*> T get_LocalPath() {
		return ((T (*)(Uri*))(Il2CppBase() + 0x4AF036C))(this);
	}
	template <typename T = Il2CppString*> T get_PathAndQuery() {
		return ((T (*)(Uri*))(Il2CppBase() + 0x4AF07F4))(this);
	}
	template <typename T = int32_t> T get_Port() {
		return ((T (*)(Uri*))(Il2CppBase() + 0x4AF08D0))(this);
	}
	template <typename T = Il2CppString*> T get_Query() {
		return ((T (*)(Uri*))(Il2CppBase() + 0x4AF08B8))(this);
	}
	template <typename T = Il2CppString*> T get_Scheme() {
		return ((T (*)(Uri*))(Il2CppBase() + 0x4AEE66C))(this);
	}
	template <typename T = bool> T get_IsAbsoluteUri() {
		return ((T (*)(Uri*))(Il2CppBase() + 0x4AEAE64))(this);
	}
	template <typename T = Il2CppString*> T get_OriginalString() {
		return ((T (*)(Uri*))(Il2CppBase() + 0x4AED064))(this);
	}
	template <typename T = uintptr_t> static T CheckHostName(Il2CppString* name) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x4AEFCEC))(0, name);
	}
	template <typename T = bool> static T IsIPv4Address(Il2CppString* name) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x4AF08E8))(0, name);
	}
	template <typename T = bool> static T IsDomainAddress(Il2CppString* name) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x4AF0A8C))(0, name);
	}
	template <typename T = bool> static T CheckSchemeName(Il2CppString* schemeName) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x4AF0C38))(0, schemeName);
	}
	template <typename T = bool> static T IsAlpha(char c) {
		return ((T (*)(void *, char))(Il2CppBase() + 0x4AF0E24))(0, c);
	}
	template <typename T = bool> T Equals(uintptr_t comparant) {
		return ((T (*)(Uri*, uintptr_t))(Il2CppBase() + 0x4AF0E50))(this, comparant);
	}
	template <typename T = bool> T InternalEquals(uintptr_t uri) {
		return ((T (*)(Uri*, uintptr_t))(Il2CppBase() + 0x4AF0F50))(this, uri);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(Uri*))(Il2CppBase() + 0x4AF1240))(this);
	}
	template <typename T = Il2CppString*> T GetLeftPart(uintptr_t part) {
		return ((T (*)(Uri*, uintptr_t))(Il2CppBase() + 0x4AEEF00))(this, part);
	}
	template <typename T = int32_t> static T FromHex(char digit) {
		return ((T (*)(void *, char))(Il2CppBase() + 0x4AF202C))(0, digit);
	}
	template <typename T = Il2CppString*> static T HexEscape(char character) {
		return ((T (*)(void *, char))(Il2CppBase() + 0x4AF211C))(0, character);
	}
	template <typename T = bool> static T IsHexDigit(char digit) {
		return ((T (*)(void *, char))(Il2CppBase() + 0x4AF2324))(0, digit);
	}
	template <typename T = bool> static T IsHexEncoding(Il2CppString* pattern, int32_t index) {
		return ((T (*)(void *, Il2CppString*, int32_t))(Il2CppBase() + 0x4AF2360))(0, pattern, index);
	}
	template <typename T = void> T AppendQueryAndFragment(uintptr_t result) {
		return ((T (*)(Uri*, uintptr_t))(Il2CppBase() + 0x4AF250C))(this, result);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(Uri*))(Il2CppBase() + 0x4AF2A64))(this);
	}
	template <typename T = Il2CppString*> static T EscapeString(Il2CppString* str) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x4AEE9D8))(0, str);
	}
	template <typename T = Il2CppString*> static T EscapeString_1(Il2CppString* str, bool escapeReserved, bool escapeHex, bool escapeBrackets) {
		return ((T (*)(void *, Il2CppString*, bool, bool, bool))(Il2CppBase() + 0x4AF2B64))(0, str, escapeReserved, escapeHex, escapeBrackets);
	}
	template <typename T = void> T ParseUri(uintptr_t kind) {
		return ((T (*)(Uri*, uintptr_t))(Il2CppBase() + 0x4AEAC50))(this, kind);
	}
	template <typename T = Il2CppString*> T Unescape(Il2CppString* str) {
		return ((T (*)(Uri*, Il2CppString*))(Il2CppBase() + 0x4AF30BC))(this, str);
	}
	template <typename T = Il2CppString*> static T Unescape_1(Il2CppString* str, bool excludeSpecial) {
		return ((T (*)(void *, Il2CppString*, bool))(Il2CppBase() + 0x4AF27A4))(0, str, excludeSpecial);
	}
	template <typename T = void> T ParseAsWindowsUNC(Il2CppString* uriString) {
		return ((T (*)(Uri*, Il2CppString*))(Il2CppBase() + 0x4AF366C))(this, uriString);
	}
	template <typename T = Il2CppString*> T ParseAsWindowsAbsoluteFilePath(Il2CppString* uriString) {
		return ((T (*)(Uri*, Il2CppString*))(Il2CppBase() + 0x4AF3910))(this, uriString);
	}
	template <typename T = void> T ParseAsUnixAbsoluteFilePath(Il2CppString* uriString) {
		return ((T (*)(Uri*, Il2CppString*))(Il2CppBase() + 0x4AF3B0C))(this, uriString);
	}
	template <typename T = void> T Parse(uintptr_t kind, Il2CppString* uriString) {
		return ((T (*)(Uri*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x4AF2FA4))(this, kind, uriString);
	}
	template <typename T = Il2CppString*> T ParseNoExceptions(uintptr_t kind, Il2CppString* uriString) {
		return ((T (*)(Uri*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x4AEB144))(this, kind, uriString);
	}
	template <typename T = bool> static T CompactEscaped(Il2CppString* scheme) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x4AF1490))(0, scheme);
	}
	template <typename T = Il2CppString*> static T Reduce(Il2CppString* path, bool compact_escaped) {
		return ((T (*)(void *, Il2CppString*, bool))(Il2CppBase() + 0x4AF1744))(0, path, compact_escaped);
	}
	template <typename T = char> static T HexUnescapeMultiByte(Il2CppString* pattern, uintptr_t index, uintptr_t* surrogate) {
		return ((T (*)(void *, Il2CppString*, uintptr_t, uintptr_t*))(Il2CppBase() + 0x4AF3160))(0, pattern, index, surrogate);
	}
	template <typename T = Il2CppString*> static T GetSchemeDelimiter(Il2CppString* scheme) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x4AF3EBC))(0, scheme);
	}
	template <typename T = int32_t> static T GetDefaultPort(Il2CppString* scheme) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x4AEF98C))(0, scheme);
	}
	template <typename T = Il2CppString*> T GetOpaqueWiseSchemeDelimiter() {
		return ((T (*)(Uri*))(Il2CppBase() + 0x4AF13C0))(this);
	}
	template <typename T = bool> static T MaybeUri(Il2CppString* s) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x4AF4268))(0, s);
	}
	template <typename T = bool> static T IsPredefinedScheme(Il2CppString* scheme) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x4AEE684))(0, scheme);
	}
	template <typename T = uintptr_t> T get_Parser() {
		return ((T (*)(Uri*))(Il2CppBase() + 0x4AF3DAC))(this);
	}
	template <typename T = bool> static T TryCreate(Il2CppString* uriString, uintptr_t uriKind, uintptr_t* result) {
		return ((T (*)(void *, Il2CppString*, uintptr_t, uintptr_t*))(Il2CppBase() + 0x4AF4360))(0, uriString, uriKind, result);
	}
	template <typename T = Il2CppString*> static T UnescapeDataString(Il2CppString* stringToUnescape) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x4AF441C))(0, stringToUnescape);
	}
	template <typename T = int32_t> static T GetInt(unsigned char b) {
		return ((T (*)(void *, unsigned char))(Il2CppBase() + 0x4AF4C2C))(0, b);
	}
	template <typename T = int32_t> static T GetChar(Il2CppString* str, int32_t offset, int32_t length) {
		return ((T (*)(void *, Il2CppString*, int32_t, int32_t))(Il2CppBase() + 0x4AF4AD4))(0, str, offset, length);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T GetChars(uintptr_t b, uintptr_t e) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x4AF4A4C))(0, b, e);
	}
	template <typename T = void> T EnsureAbsoluteUri() {
		return ((T (*)(Uri*))(Il2CppBase() + 0x4AEEE48))(this);
	}
	template <typename T = bool> static T op_Equality(uintptr_t u1, uintptr_t u2) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x4AED058))(0, u1, u2);
	}
	template <typename T = bool> static T op_Inequality(uintptr_t u1, uintptr_t u2) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x4AF4C68))(0, u1, u2);
	}

};

}
