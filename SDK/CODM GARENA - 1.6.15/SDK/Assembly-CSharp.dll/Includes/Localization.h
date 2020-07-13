#pragma once
#include <Il2Cpp/Il2Cpp.h>

class Localization
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "Localization"));
	}

	template <typename T = uintptr_t> static T& loadFunction() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& onLocalize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = bool> static T& localizationHasBeenSet() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& mLanguages() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, Il2CppString*>*> static T& mOldDictionary() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, Il2CppArray<uintptr_t>*>*> static T& mDictionary() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, Il2CppString*>*> static T& mReplacement() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = int32_t> static T& mLanguageIndex() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = Il2CppString*> static T& mLanguage() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = bool> static T& mMerging() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LoadDictionary() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LoadAndSelect() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Load() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Set() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReplaceKey() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClearReplacements() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LoadCSV() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_LoadCSV() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HasLanguage() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix2_LoadCSV() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddCSV() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ExtractStrings() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SelectLanguage() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_Set() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix2_Set() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Get() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Exists() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix3_Set() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}

	template <typename T = Il2CppDictionary<Il2CppString*, Il2CppArray<uintptr_t>*>*> static T get_dictionary() {
		return ((T (*)(void *))(Il2CppBase() + 0x434795C))(0);
	}
	template <typename T = void> static T set_dictionary(Il2CppDictionary<Il2CppString*, Il2CppArray<uintptr_t>*>* value) {
		return ((T (*)(void *, Il2CppDictionary<Il2CppString*, Il2CppArray<uintptr_t>*>*))(Il2CppBase() + 0x4347B98))(0, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T get_knownLanguages() {
		return ((T (*)(void *))(Il2CppBase() + 0x4347C74))(0);
	}
	template <typename T = Il2CppString*> static T get_language() {
		return ((T (*)(void *))(Il2CppBase() + 0x4347DE0))(0);
	}
	template <typename T = void> static T set_language(Il2CppString* value) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x4348394))(0, value);
	}
	template <typename T = bool> static T LoadDictionary(Il2CppString* value) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x4347AC8))(0, value);
	}
	template <typename T = bool> static T LoadAndSelect(Il2CppString* value) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x4347FC8))(0, value);
	}
	template <typename T = void> static T Load(uintptr_t asset) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x4348930))(0, asset);
	}
	template <typename T = void> static T Set(Il2CppString* languageName, Il2CppArray<uintptr_t>* bytes) {
		return ((T (*)(void *, Il2CppString*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4348D70))(0, languageName, bytes);
	}
	template <typename T = void> static T ReplaceKey(Il2CppString* key, Il2CppString* val) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x4348ED4))(0, key, val);
	}
	template <typename T = void> static T ClearReplacements() {
		return ((T (*)(void *))(Il2CppBase() + 0x43490F4))(0);
	}
	template <typename T = bool> static T LoadCSV(uintptr_t asset, bool merge) {
		return ((T (*)(void *, uintptr_t, bool))(Il2CppBase() + 0x4349228))(0, asset, merge);
	}
	template <typename T = bool> static T LoadCSV_1(Il2CppArray<uintptr_t>* bytes, bool merge) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, bool))(Il2CppBase() + 0x434A3E4))(0, bytes, merge);
	}
	template <typename T = bool> static T HasLanguage(Il2CppString* languageName) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x434A4F0))(0, languageName);
	}
	template <typename T = bool> static T LoadCSV_2(Il2CppArray<uintptr_t>* bytes, uintptr_t asset, bool merge) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, uintptr_t, bool))(Il2CppBase() + 0x4349368))(0, bytes, asset, merge);
	}
	template <typename T = void> static T AddCSV(void* newValues, Il2CppArray<uintptr_t>* newLanguages, Il2CppDictionary<Il2CppString*, int32_t>* languageIndices) {
		return ((T (*)(void *, void*, Il2CppArray<uintptr_t>*, Il2CppDictionary<Il2CppString*, int32_t>*))(Il2CppBase() + 0x434A70C))(0, newValues, newLanguages, languageIndices);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T ExtractStrings(void* added, Il2CppArray<uintptr_t>* newLanguages, Il2CppDictionary<Il2CppString*, int32_t>* languageIndices) {
		return ((T (*)(void *, void*, Il2CppArray<uintptr_t>*, Il2CppDictionary<Il2CppString*, int32_t>*))(Il2CppBase() + 0x434ACCC))(0, added, newLanguages, languageIndices);
	}
	template <typename T = bool> static T SelectLanguage(Il2CppString* language) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x43484F0))(0, language);
	}
	template <typename T = void> static T Set_1(Il2CppString* languageName, Il2CppDictionary<Il2CppString*, Il2CppString*>* dictionary) {
		return ((T (*)(void *, Il2CppString*, Il2CppDictionary<Il2CppString*, Il2CppString*>*))(Il2CppBase() + 0x4348AA4))(0, languageName, dictionary);
	}
	template <typename T = void> static T Set_2(Il2CppString* key, Il2CppString* value) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x434B17C))(0, key, value);
	}
	template <typename T = Il2CppString*> static T Get(Il2CppString* key) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x434B3B4))(0, key);
	}
	template <typename T = bool> static T Exists(Il2CppString* key) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x434C220))(0, key);
	}
	template <typename T = void> static T Set_3(Il2CppString* language, Il2CppString* key, Il2CppString* text) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x434C5F8))(0, language, key, text);
	}

};

}
