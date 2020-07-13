#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace IniParser.Model.Configuration {

class IniParserConfiguration
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("INIFileParser.dll", "IniParser.Model.Configuration", "IniParserConfiguration"));
	}

	template <typename T = uintptr_t> T& CommentRegex() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& SectionRegex() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = bool> T& CaseInsensitive() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& NewLineStr() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = char> T& KeyValueAssigmentChar() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& AssigmentSpacer() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = bool> T& AllowKeysWithoutSection() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = bool> T& AllowDuplicateKeys() {
		return *(T*)((uintptr_t)this + 0x21);
	}
	template <typename T = bool> T& OverrideDuplicateKeys() {
		return *(T*)((uintptr_t)this + 0x22);
	}
	template <typename T = bool> T& ConcatenateDuplicateKeys() {
		return *(T*)((uintptr_t)this + 0x23);
	}
	template <typename T = bool> T& ThrowExceptionsOnError() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = bool> T& AllowDuplicateSections() {
		return *(T*)((uintptr_t)this + 0x25);
	}
	template <typename T = bool> T& AllowCreateSectionsOnFly() {
		return *(T*)((uintptr_t)this + 0x26);
	}
	template <typename T = bool> T& SkipInvalidLines() {
		return *(T*)((uintptr_t)this + 0x27);
	}
	template <typename T = char> T& _sectionStartChar() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = char> T& _sectionEndChar() {
		return *(T*)((uintptr_t)this + 0x2A);
	}
	template <typename T = Il2CppString*> T& _commentString() {
		return *(T*)((uintptr_t)this + 0x2C);
	}

	template <typename T = uintptr_t> T get_CommentRegex() {
		return ((T (*)(IniParserConfiguration*))(Il2CppBase() + 0x520F46C))(this);
	}
	template <typename T = void> T set_CommentRegex(uintptr_t value) {
		return ((T (*)(IniParserConfiguration*, uintptr_t))(Il2CppBase() + 0x520F474))(this, value);
	}
	template <typename T = uintptr_t> T get_SectionRegex() {
		return ((T (*)(IniParserConfiguration*))(Il2CppBase() + 0x520F47C))(this);
	}
	template <typename T = void> T set_SectionRegex(uintptr_t value) {
		return ((T (*)(IniParserConfiguration*, uintptr_t))(Il2CppBase() + 0x520F484))(this, value);
	}
	template <typename T = char> T get_SectionStartChar() {
		return ((T (*)(IniParserConfiguration*))(Il2CppBase() + 0x520F48C))(this);
	}
	template <typename T = void> T set_SectionStartChar(char value) {
		return ((T (*)(IniParserConfiguration*, char))(Il2CppBase() + 0x520F40C))(this, value);
	}
	template <typename T = char> T get_SectionEndChar() {
		return ((T (*)(IniParserConfiguration*))(Il2CppBase() + 0x520F9E0))(this);
	}
	template <typename T = void> T set_SectionEndChar(char value) {
		return ((T (*)(IniParserConfiguration*, char))(Il2CppBase() + 0x520F414))(this, value);
	}
	template <typename T = bool> T get_CaseInsensitive() {
		return ((T (*)(IniParserConfiguration*))(Il2CppBase() + 0x520F9E8))(this);
	}
	template <typename T = Il2CppString*> T get_CommentString() {
		return ((T (*)(IniParserConfiguration*))(Il2CppBase() + 0x520F9F0))(this);
	}
	template <typename T = void> T set_CommentString(Il2CppString* value) {
		return ((T (*)(IniParserConfiguration*, Il2CppString*))(Il2CppBase() + 0x520F1F8))(this, value);
	}
	template <typename T = Il2CppString*> T get_NewLineStr() {
		return ((T (*)(IniParserConfiguration*))(Il2CppBase() + 0x520FAB0))(this);
	}
	template <typename T = void> T set_NewLineStr(Il2CppString* value) {
		return ((T (*)(IniParserConfiguration*, Il2CppString*))(Il2CppBase() + 0x520F42C))(this, value);
	}
	template <typename T = char> T get_KeyValueAssigmentChar() {
		return ((T (*)(IniParserConfiguration*))(Il2CppBase() + 0x520FAB8))(this);
	}
	template <typename T = void> T set_KeyValueAssigmentChar(char value) {
		return ((T (*)(IniParserConfiguration*, char))(Il2CppBase() + 0x520F41C))(this, value);
	}
	template <typename T = Il2CppString*> T get_AssigmentSpacer() {
		return ((T (*)(IniParserConfiguration*))(Il2CppBase() + 0x520FAC0))(this);
	}
	template <typename T = void> T set_AssigmentSpacer(Il2CppString* value) {
		return ((T (*)(IniParserConfiguration*, Il2CppString*))(Il2CppBase() + 0x520F424))(this, value);
	}
	template <typename T = bool> T get_AllowKeysWithoutSection() {
		return ((T (*)(IniParserConfiguration*))(Il2CppBase() + 0x520FAC8))(this);
	}
	template <typename T = void> T set_AllowKeysWithoutSection(bool value) {
		return ((T (*)(IniParserConfiguration*, bool))(Il2CppBase() + 0x520F43C))(this, value);
	}
	template <typename T = bool> T get_AllowDuplicateKeys() {
		return ((T (*)(IniParserConfiguration*))(Il2CppBase() + 0x520FAD0))(this);
	}
	template <typename T = void> T set_AllowDuplicateKeys(bool value) {
		return ((T (*)(IniParserConfiguration*, bool))(Il2CppBase() + 0x520F444))(this, value);
	}
	template <typename T = bool> T get_OverrideDuplicateKeys() {
		return ((T (*)(IniParserConfiguration*))(Il2CppBase() + 0x520FAD8))(this);
	}
	template <typename T = void> T set_ConcatenateDuplicateKeys(bool value) {
		return ((T (*)(IniParserConfiguration*, bool))(Il2CppBase() + 0x520F434))(this, value);
	}
	template <typename T = bool> T get_ThrowExceptionsOnError() {
		return ((T (*)(IniParserConfiguration*))(Il2CppBase() + 0x520FAE0))(this);
	}
	template <typename T = void> T set_ThrowExceptionsOnError(bool value) {
		return ((T (*)(IniParserConfiguration*, bool))(Il2CppBase() + 0x520F45C))(this, value);
	}
	template <typename T = bool> T get_AllowDuplicateSections() {
		return ((T (*)(IniParserConfiguration*))(Il2CppBase() + 0x520FAE8))(this);
	}
	template <typename T = void> T set_AllowDuplicateSections(bool value) {
		return ((T (*)(IniParserConfiguration*, bool))(Il2CppBase() + 0x520F44C))(this, value);
	}
	template <typename T = void> T set_AllowCreateSectionsOnFly(bool value) {
		return ((T (*)(IniParserConfiguration*, bool))(Il2CppBase() + 0x520F454))(this, value);
	}
	template <typename T = bool> T get_SkipInvalidLines() {
		return ((T (*)(IniParserConfiguration*))(Il2CppBase() + 0x520FAF0))(this);
	}
	template <typename T = void> T set_SkipInvalidLines(bool value) {
		return ((T (*)(IniParserConfiguration*, bool))(Il2CppBase() + 0x520F464))(this, value);
	}
	template <typename T = void> T RecreateSectionRegex(char value) {
		return ((T (*)(IniParserConfiguration*, char))(Il2CppBase() + 0x520F494))(this, value);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(IniParserConfiguration*))(Il2CppBase() + 0x520FAF8))(this);
	}
	template <typename T = bool> T Equals(uintptr_t obj) {
		return ((T (*)(IniParserConfiguration*, uintptr_t))(Il2CppBase() + 0x520FBB0))(this, obj);
	}
	template <typename T = uintptr_t> T Clone() {
		return ((T (*)(IniParserConfiguration*))(Il2CppBase() + 0x520FE1C))(this);
	}
	template <typename T = uintptr_t> T System_ICloneable_Clone() {
		return ((T (*)(IniParserConfiguration*))(Il2CppBase() + 0x520FEE0))(this);
	}

};

}
