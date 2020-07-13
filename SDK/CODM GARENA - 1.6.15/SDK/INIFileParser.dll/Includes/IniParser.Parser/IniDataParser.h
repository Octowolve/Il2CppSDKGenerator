#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace IniParser.Parser {

class IniDataParser
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("INIFileParser.dll", "IniParser.Parser", "IniDataParser"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& _errorExceptions() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& Configuration() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppList<Il2CppString*>*> T& _currentCommentListTemp() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& _currentSectionNameTemp() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = uintptr_t> T get_Configuration() {
		return ((T (*)(IniDataParser*))(Il2CppBase() + 0x52140C8))(this);
	}
	template <typename T = void> T set_Configuration(uintptr_t value) {
		return ((T (*)(IniDataParser*, uintptr_t))(Il2CppBase() + 0x52140D0))(this, value);
	}
	template <typename T = bool> T get_HasError() {
		return ((T (*)(IniDataParser*))(Il2CppBase() + 0x52140D8))(this);
	}
	template <typename T = uintptr_t> T Parse(Il2CppString* iniDataString) {
		return ((T (*)(IniDataParser*, Il2CppString*))(Il2CppBase() + 0x5214180))(this, iniDataString);
	}
	template <typename T = bool> T LineContainsAComment(Il2CppString* line) {
		return ((T (*)(IniDataParser*, Il2CppString*))(Il2CppBase() + 0x5214A40))(this, line);
	}
	template <typename T = bool> T LineMatchesASection(Il2CppString* line) {
		return ((T (*)(IniDataParser*, Il2CppString*))(Il2CppBase() + 0x5214B4C))(this, line);
	}
	template <typename T = bool> T LineMatchesAKeyValuePair(Il2CppString* line) {
		return ((T (*)(IniDataParser*, Il2CppString*))(Il2CppBase() + 0x5214C58))(this, line);
	}
	template <typename T = Il2CppString*> T ExtractComment(Il2CppString* line) {
		return ((T (*)(IniDataParser*, Il2CppString*))(Il2CppBase() + 0x5214D78))(this, line);
	}
	template <typename T = void> T ProcessLine(Il2CppString* currentLine, uintptr_t currentIniData) {
		return ((T (*)(IniDataParser*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x5214EDC))(this, currentLine, currentIniData);
	}
	template <typename T = void> T ProcessSection(Il2CppString* line, uintptr_t currentIniData) {
		return ((T (*)(IniDataParser*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x5215150))(this, line, currentIniData);
	}
	template <typename T = void> T ProcessKeyValuePair(Il2CppString* line, uintptr_t currentIniData) {
		return ((T (*)(IniDataParser*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x521545C))(this, line, currentIniData);
	}
	template <typename T = Il2CppString*> T ExtractKey(Il2CppString* s) {
		return ((T (*)(IniDataParser*, Il2CppString*))(Il2CppBase() + 0x52157D0))(this, s);
	}
	template <typename T = Il2CppString*> T ExtractValue(Il2CppString* s) {
		return ((T (*)(IniDataParser*, Il2CppString*))(Il2CppBase() + 0x5215840))(this, s);
	}
	template <typename T = void> T HandleDuplicatedKeyInCollection(Il2CppString* key, Il2CppString* value, uintptr_t keyDataCollection, Il2CppString* sectionName) {
		return ((T (*)(IniDataParser*, Il2CppString*, Il2CppString*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x52158C4))(this, key, value, keyDataCollection, sectionName);
	}
	template <typename T = void> T AddKeyToKeyValueCollection(Il2CppString* key, Il2CppString* value, uintptr_t keyDataCollection, Il2CppString* sectionName) {
		return ((T (*)(IniDataParser*, Il2CppString*, Il2CppString*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x52156B0))(this, key, value, keyDataCollection, sectionName);
	}

};

}
