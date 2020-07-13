#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Language {

class LanguageConfigMgr
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Language", "LanguageConfigMgr"));
	}

	template <typename T = int32_t> static T& DefaultDicCapacity() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> static T& InitComplete() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, Il2CppString*>*> static T& Dic() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& _lock() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Check() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LoadPack() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LoadPackAdditive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReadBytesForLanguagePack() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReadBody() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Translate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TryTranslate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResetAll() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LoadAddtive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}

	template <typename T = bool> static T get_InitComplete() {
		return ((T (*)(void *))(Il2CppBase() + 0x49290CC))(0);
	}
	template <typename T = void> static T set_InitComplete(bool value) {
		return ((T (*)(void *, bool))(Il2CppBase() + 0x492917C))(0, value);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, Il2CppString*>*> static T get_Dic() {
		return ((T (*)(void *))(Il2CppBase() + 0x4929230))(0);
	}
	template <typename T = void> static T set_Dic(Il2CppDictionary<Il2CppString*, Il2CppString*>* value) {
		return ((T (*)(void *, Il2CppDictionary<Il2CppString*, Il2CppString*>*))(Il2CppBase() + 0x49292E0))(0, value);
	}
	template <typename T = bool> static T Check() {
		return ((T (*)(void *))(Il2CppBase() + 0x4929394))(0);
	}
	template <typename T = bool> static T LoadPack() {
		return ((T (*)(void *))(Il2CppBase() + 0x49295C0))(0);
	}
	template <typename T = void> static T LoadPackAdditive() {
		return ((T (*)(void *))(Il2CppBase() + 0x4929E34))(0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T ReadBytesForLanguagePack(Il2CppString* language, bool isAdditive) {
		return ((T (*)(void *, Il2CppString*, bool))(Il2CppBase() + 0x49299E8))(0, language, isAdditive);
	}
	template <typename T = void> static T ReadBody(Il2CppArray<uintptr_t>* bytes) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4929B8C))(0, bytes);
	}
	template <typename T = Il2CppString*> static T Translate(Il2CppString* locID) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x492A0B4))(0, locID);
	}
	template <typename T = bool> static T TryTranslate(Il2CppString* locID, uintptr_t* content) {
		return ((T (*)(void *, Il2CppString*, uintptr_t*))(Il2CppBase() + 0x492A2A8))(0, locID, content);
	}
	template <typename T = void> static T ResetAll() {
		return ((T (*)(void *))(Il2CppBase() + 0x492A4AC))(0);
	}
	template <typename T = void> static T LoadAddtive() {
		return ((T (*)(void *))(Il2CppBase() + 0x492A5A0))(0);
	}

};

}
