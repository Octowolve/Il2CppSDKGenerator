#pragma once
#include <Il2Cpp/Il2Cpp.h>

class StringUtil
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "StringUtil"));
	}

	template <typename T = Il2CppString*> static T& PortraitUrlPrefix() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& PortraitUrlSuffix40() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& PortraitUrlSuffix100() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& RANDOM_CHARS() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& regexEmoji() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& regexOutOfMem() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = Il2CppString*> static T& FORMATSTRING_OPENBRACE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& FORMATSTRING_OPENBRACEDOUBLIE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& FORMATSTRING_CLOSEBRACE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& FORMATSTRING_CLOSEBRACEDOUBLIE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& cov_map_from_utf8() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = int32_t> static T& minEmoji1() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = int32_t> static T& maxEmoji1() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = int32_t> static T& minEmoji2() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = int32_t> static T& maxEmoji2() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = int32_t> static T& minEmoji3() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = int32_t> static T& maxEmoji3() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = int32_t> static T& minEmoji4() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = int32_t> static T& maxEmoji4() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = int32_t> static T& minEmoji5() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = int32_t> static T& maxEmoji5() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = int32_t> static T& minEmoji6() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = int32_t> static T& maxEmoji6() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = int32_t> static T& minEmoji7() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = int32_t> static T& maxEmoji7() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& ThreeEmojiValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& TwoByteEmojiValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = Il2CppString*> static T& NULL_STRING() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& sb() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = Il2CppString*> static T& BOT_PREFIX() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IntToIp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ConvertToColor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_ConvertToColor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ConvertStringToFloat() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ConvertStringToVector3() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ConvertStringToQuaternion() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ConvertStringToUShort() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ConvertStringToInt() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ConvertStringToUlong() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Utf8BytesToString() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StringToUtf8Bytes() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HexToString() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x84);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReplaceLinefeedString() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x88);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StringToEnum() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TryParseEnum() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x90);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ConvertQQPortraitUrl100To40() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x94);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CompareTextureUrl() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x98);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetRandomChars() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x9C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetByteCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_VerifyTLogReportString() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CleanString() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsValidChar() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xAC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsEmojiFirstChar() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsEmojiSecondChar() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetTVersionString() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetAppVersionString() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xBC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetStackTrace() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_VersionCompare_A_GreaterThen_B() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ContainsIgnoreCase() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClearFormatString() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xCC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckStringValidate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckAndFilterUtf8bytes() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_isInThreeBytesEmojiBlock() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_isInTwoBytesEmojiBlock() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xDC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckUtf8CodeLenth() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FormatTimeStringBySeconds() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ToReadableString() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xE8);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_ToReadableString() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xEC);
	}
	template <typename T = uintptr_t> static T& __Hotfix2_ToReadableString() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF0);
	}
	template <typename T = uintptr_t> static T& __Hotfix3_ToReadableString() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ToSimpleReadableString() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xF8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InsertBeforeUpperCase() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xFC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsNullOrEmpty() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x100);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_IsNullOrEmpty() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x104);
	}
	template <typename T = uintptr_t> static T& __Hotfix2_IsNullOrEmpty() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x108);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LimitString() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TranslateServerPlayerName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x110);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_StrEndsWith() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x114);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_StrEndsWith() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x118);
	}

	template <typename T = Il2CppString*> static T IntToIp(int64_t ipInt) {
		return ((T (*)(void *, int64_t))(Il2CppBase() + 0x3F2622C))(0, ipInt);
	}
	template <typename T = uintptr_t> static T ConvertToColor(Il2CppString* str) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x3F265D4))(0, str);
	}
	template <typename T = uintptr_t> static T ConvertToColor_1(Il2CppString* str, uintptr_t defaultValue) {
		return ((T (*)(void *, Il2CppString*, uintptr_t))(Il2CppBase() + 0x3F26710))(0, str, defaultValue);
	}
	template <typename T = float> static T ConvertStringToFloat(Il2CppString* str, float defaultValue) {
		return ((T (*)(void *, Il2CppString*, float))(Il2CppBase() + 0x3F268AC))(0, str, defaultValue);
	}
	template <typename T = Il2CppVector3> static T ConvertStringToVector3(Il2CppString* str, Il2CppVector3 defaultValue) {
		return ((T (*)(void *, Il2CppString*, Il2CppVector3))(Il2CppBase() + 0x3F26AA8))(0, str, defaultValue);
	}
	template <typename T = Il2CppQuaternion> static T ConvertStringToQuaternion(Il2CppString* str, Il2CppQuaternion defaultValue) {
		return ((T (*)(void *, Il2CppString*, Il2CppQuaternion))(Il2CppBase() + 0x3F26D90))(0, str, defaultValue);
	}
	template <typename T = uint16_t> static T ConvertStringToUShort(Il2CppString* str, uint16_t defaultValue) {
		return ((T (*)(void *, Il2CppString*, uint16_t))(Il2CppBase() + 0x3F27098))(0, str, defaultValue);
	}
	template <typename T = int32_t> static T ConvertStringToInt(Il2CppString* str, int32_t defaultValue, bool inFromHex) {
		return ((T (*)(void *, Il2CppString*, int32_t, bool))(Il2CppBase() + 0x3F27280))(0, str, defaultValue, inFromHex);
	}
	template <typename T = uint64_t> static T ConvertStringToUlong(Il2CppString* str, uint64_t defaultValue) {
		return ((T (*)(void *, Il2CppString*, uint64_t))(Il2CppBase() + 0x3F274D4))(0, str, defaultValue);
	}
	template <typename T = Il2CppString*> static T Utf8BytesToString(Il2CppArray<uintptr_t>* utf8Bytes, bool checkEmoji) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, bool))(Il2CppBase() + 0x3F276E0))(0, utf8Bytes, checkEmoji);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T StringToUtf8Bytes(Il2CppString* str) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x3F27FC0))(0, str);
	}
	template <typename T = Il2CppString*> static T HexToString(Il2CppArray<uintptr_t>* bytes) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x3F28154))(0, bytes);
	}
	template <typename T = Il2CppString*> static T ReplaceLinefeedString(Il2CppString* str) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x3F28324))(0, str);
	}
	template <typename T = uintptr_t> static T StringToEnum(Il2CppString* str) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x3365870))(0, str);
	}
	template <typename T = bool> static T TryParseEnum(Il2CppString* str, uintptr_t* output) {
		return ((T (*)(void *, Il2CppString*, uintptr_t*))(Il2CppBase() + 0x1BA4E34))(0, str, output);
	}
	template <typename T = Il2CppString*> static T ConvertQQPortraitUrl100To40(Il2CppString* urlWidth100) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x3F2849C))(0, urlWidth100);
	}
	template <typename T = bool> static T CompareTextureUrl(Il2CppString* textureUrl, Il2CppString* url) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x3F286A4))(0, textureUrl, url);
	}
	template <typename T = Il2CppString*> static T GetRandomChars(int32_t length, int32_t seed) {
		return ((T (*)(void *, int32_t, int32_t))(Il2CppBase() + 0x3F28C44))(0, length, seed);
	}
	template <typename T = int32_t> static T GetByteCount(Il2CppString* text) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x3F28F18))(0, text);
	}
	template <typename T = void> static T VerifyTLogReportString(uintptr_t inSourceString) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3F29050))(0, inSourceString);
	}
	template <typename T = Il2CppString*> static T CleanString(Il2CppString* str) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x3F291B8))(0, str);
	}
	template <typename T = bool> static T IsValidChar(char inputChar) {
		return ((T (*)(void *, char))(Il2CppBase() + 0x3F293F4))(0, inputChar);
	}
	template <typename T = bool> static T IsEmojiFirstChar(char inputChar) {
		return ((T (*)(void *, char))(Il2CppBase() + 0x3F294CC))(0, inputChar);
	}
	template <typename T = bool> static T IsEmojiSecondChar(char inputChar) {
		return ((T (*)(void *, char))(Il2CppBase() + 0x3F295E0))(0, inputChar);
	}
	template <typename T = Il2CppString*> static T GetTVersionString() {
		return ((T (*)(void *))(Il2CppBase() + 0x3F29718))(0);
	}
	template <typename T = Il2CppString*> static T GetAppVersionString() {
		return ((T (*)(void *))(Il2CppBase() + 0x3F298D8))(0);
	}
	template <typename T = Il2CppString*> static T GetStackTrace() {
		return ((T (*)(void *))(Il2CppBase() + 0x3F299F0))(0);
	}
	template <typename T = int32_t> static T VersionCompare_A_GreaterThen_B(Il2CppString* A, Il2CppString* B) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x3F29EE0))(0, A, B);
	}
	template <typename T = bool> static T ContainsIgnoreCase(Il2CppString* inSrc, Il2CppString* inCheck, uintptr_t inComp) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x3F2A25C))(0, inSrc, inCheck, inComp);
	}
	template <typename T = Il2CppString*> static T ClearFormatString(Il2CppString* source) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x3F2A380))(0, source);
	}
	template <typename T = bool> static T CheckStringValidate(Il2CppString* source) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x3F2A52C))(0, source);
	}
	template <typename T = bool> static T CheckAndFilterUtf8bytes(Il2CppArray<uintptr_t>* utf8Bytes, bool checkEmoji, Il2CppArray<uintptr_t>** CheckValue) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, bool, Il2CppArray<uintptr_t>**))(Il2CppBase() + 0x3F278EC))(0, utf8Bytes, checkEmoji, CheckValue);
	}
	template <typename T = bool> static T isInThreeBytesEmojiBlock(int32_t checkvalue) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x3F2A90C))(0, checkvalue);
	}
	template <typename T = bool> static T isInTwoBytesEmojiBlock(int32_t checkvalue) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x3F2AE88))(0, checkvalue);
	}
	template <typename T = bool> static T CheckUtf8CodeLenth(unsigned char from, uintptr_t* size) {
		return ((T (*)(void *, unsigned char, uintptr_t*))(Il2CppBase() + 0x3F2A77C))(0, from, size);
	}
	template <typename T = Il2CppString*> static T FormatTimeStringBySeconds(int64_t seconds) {
		return ((T (*)(void *, int64_t))(Il2CppBase() + 0x3F2B044))(0, seconds);
	}
	template <typename T = Il2CppString*> static T ToReadableString(void* dic) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x1E77F84))(0, dic);
	}
	template <typename T = Il2CppString*> static T ToReadableString_1(void* collection) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x1E78C18))(0, collection);
	}
	template <typename T = Il2CppString*> static T ToReadableString_2(Il2CppString* str) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x3F2B2AC))(0, str);
	}
	template <typename T = Il2CppString*> static T ToReadableString_3(uintptr_t container) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3F2B3E8))(0, container);
	}
	template <typename T = Il2CppString*> static T ToSimpleReadableString(void* collection) {
		return ((T (*)(void *, void*))(Il2CppBase() + 0x1E793CC))(0, collection);
	}
	template <typename T = Il2CppString*> static T InsertBeforeUpperCase(Il2CppString* input, char insert) {
		return ((T (*)(void *, Il2CppString*, char))(Il2CppBase() + 0x3F2B9B0))(0, input, insert);
	}
	template <typename T = bool> static T IsNullOrEmpty(uintptr_t col) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3F0F77C))(0, col);
	}
	template <typename T = bool> static T IsNullOrEmpty_1(uintptr_t enumerable) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3F2BCDC))(0, enumerable);
	}
	template <typename T = bool> static T IsNullOrEmpty_2(Il2CppString* str) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x3F2BEC8))(0, str);
	}
	template <typename T = Il2CppString*> static T LimitString(Il2CppString* content, int32_t limit) {
		return ((T (*)(void *, Il2CppString*, int32_t))(Il2CppBase() + 0x3F2BFDC))(0, content, limit);
	}
	template <typename T = Il2CppString*> static T TranslateServerPlayerName(Il2CppString* serverPlayerName) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x3F2C1A4))(0, serverPlayerName);
	}
	template <typename T = bool> static T StrEndsWith(Il2CppString* str1, int32_t str1Length, Il2CppString* suffix, int32_t suffixLength) {
		return ((T (*)(void *, Il2CppString*, int32_t, Il2CppString*, int32_t))(Il2CppBase() + 0x3F2C51C))(0, str1, str1Length, suffix, suffixLength);
	}
	template <typename T = bool> static T StrEndsWith_1(Il2CppString* str1, Il2CppString* suffix) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x3F28A54))(0, str1, suffix);
	}

};

}
