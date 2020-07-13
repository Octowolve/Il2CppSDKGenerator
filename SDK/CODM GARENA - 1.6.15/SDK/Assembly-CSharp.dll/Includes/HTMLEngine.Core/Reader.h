#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HTMLEngine.Core {

class Reader
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "HTMLEngine.Core", "Reader"));
	}

	template <typename T = uintptr_t> static T& Instance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> T& AutoSkipMLComments() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = bool> T& AutoSkipSLComments() {
		return *(T*)((uintptr_t)this + 0x9);
	}
	template <typename T = bool> T& AutoSkipWhitespace() {
		return *(T*)((uintptr_t)this + 0xA);
	}
	template <typename T = Il2CppString*> T& text() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& begin() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& end() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& curr() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& sb() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetSource() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DoAutoSkip() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SkipToChar() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Skip() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SkipWhitespace() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReadToStopChar() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_ReadToStopChar() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReadToStopText() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReadToWhitespace() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReadToWhitespaceOrChar() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReadQuotedString() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsOnSLComments() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsOnMLComments() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsOnWhitespace() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsOnQuote() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsOnDigit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsOnLetter() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsOnLetterOrDigit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsOnChar() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_IsOnChar() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsOnText() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CompareChars() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}

	template <typename T = Il2CppString*> T get_CurrentText() {
		return ((T (*)(Reader*))(Il2CppBase() + 0x4761DA8))(this);
	}
	template <typename T = bool> T get_IsEof() {
		return ((T (*)(Reader*))(Il2CppBase() + 0x4760668))(this);
	}
	template <typename T = int64_t> T get_Length() {
		return ((T (*)(Reader*))(Il2CppBase() + 0x4761E58))(this);
	}
	template <typename T = int64_t> T get_Position() {
		return ((T (*)(Reader*))(Il2CppBase() + 0x4761E6C))(this);
	}
	template <typename T = int64_t> T get_Rest() {
		return ((T (*)(Reader*))(Il2CppBase() + 0x4761E80))(this);
	}
	template <typename T = void> T SetSource(Il2CppString* text) {
		return ((T (*)(Reader*, Il2CppString*))(Il2CppBase() + 0x4761E94))(this, text);
	}
	template <typename T = char> T get_CurrChar() {
		return ((T (*)(Reader*))(Il2CppBase() + 0x4760978))(this);
	}
	template <typename T = char> T get_NextChar() {
		return ((T (*)(Reader*))(Il2CppBase() + 0x4761FA0))(this);
	}
	template <typename T = char> T get_PrevChar() {
		return ((T (*)(Reader*))(Il2CppBase() + 0x4761FF0))(this);
	}
	template <typename T = void> T DoAutoSkip() {
		return ((T (*)(Reader*))(Il2CppBase() + 0x4762038))(this);
	}
	template <typename T = bool> T SkipToChar(char c, bool thenSkipThisChar) {
		return ((T (*)(Reader*, char, bool))(Il2CppBase() + 0x4762200))(this, c, thenSkipThisChar);
	}
	template <typename T = void> T Skip(int32_t count) {
		return ((T (*)(Reader*, int32_t))(Il2CppBase() + 0x4760890))(this, count);
	}
	template <typename T = bool> T SkipWhitespace() {
		return ((T (*)(Reader*))(Il2CppBase() + 0x475FCF0))(this);
	}
	template <typename T = Il2CppString*> T ReadToStopChar(char stopChar, bool ignoreCase) {
		return ((T (*)(Reader*, char, bool))(Il2CppBase() + 0x4760C08))(this, stopChar, ignoreCase);
	}
	template <typename T = Il2CppString*> T ReadToStopChar_1(Il2CppArray<uintptr_t>* chars, bool ignoreCase) {
		return ((T (*)(Reader*, Il2CppArray<uintptr_t>*, bool))(Il2CppBase() + 0x47609C8))(this, chars, ignoreCase);
	}
	template <typename T = Il2CppString*> T ReadToStopText(Il2CppString* stopText, bool ignoreCase) {
		return ((T (*)(Reader*, Il2CppString*, bool))(Il2CppBase() + 0x47627D8))(this, stopText, ignoreCase);
	}
	template <typename T = Il2CppString*> T ReadToWhitespace() {
		return ((T (*)(Reader*))(Il2CppBase() + 0x4762B30))(this);
	}
	template <typename T = Il2CppString*> T ReadToWhitespaceOrChar(char c) {
		return ((T (*)(Reader*, char))(Il2CppBase() + 0x47619D4))(this, c);
	}
	template <typename T = Il2CppString*> T ReadQuotedString() {
		return ((T (*)(Reader*))(Il2CppBase() + 0x4760EE4))(this);
	}
	template <typename T = bool> T IsOnSLComments() {
		return ((T (*)(Reader*))(Il2CppBase() + 0x476233C))(this);
	}
	template <typename T = bool> T IsOnMLComments() {
		return ((T (*)(Reader*))(Il2CppBase() + 0x4762458))(this);
	}
	template <typename T = bool> T IsOnWhitespace() {
		return ((T (*)(Reader*))(Il2CppBase() + 0x4762574))(this);
	}
	template <typename T = bool> T IsOnQuote() {
		return ((T (*)(Reader*))(Il2CppBase() + 0x4760DD8))(this);
	}
	template <typename T = bool> T IsOnDigit() {
		return ((T (*)(Reader*))(Il2CppBase() + 0x4762CC8))(this);
	}
	template <typename T = bool> T IsOnLetter() {
		return ((T (*)(Reader*))(Il2CppBase() + 0x47610B0))(this);
	}
	template <typename T = bool> T IsOnLetterOrDigit() {
		return ((T (*)(Reader*))(Il2CppBase() + 0x4762DFC))(this);
	}
	template <typename T = bool> T IsOnChar(char c, bool ignoreCase) {
		return ((T (*)(Reader*, char, bool))(Il2CppBase() + 0x475FDFC))(this, c, ignoreCase);
	}
	template <typename T = bool> T IsOnChar_1(Il2CppArray<uintptr_t>* chars, bool ignoreCase) {
		return ((T (*)(Reader*, Il2CppArray<uintptr_t>*, bool))(Il2CppBase() + 0x4762F30))(this, chars, ignoreCase);
	}
	template <typename T = bool> T IsOnText(Il2CppString* text, bool ignoreCase) {
		return ((T (*)(Reader*, Il2CppString*, bool))(Il2CppBase() + 0x47629DC))(this, text, ignoreCase);
	}
	template <typename T = bool> static T CompareChars(char c1, char c2, bool ignoreCase) {
		return ((T (*)(void *, char, char, bool))(Il2CppBase() + 0x476266C))(0, c1, c2, ignoreCase);
	}

};

}
