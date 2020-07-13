#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class IniFileManager
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "IniFileManager"));
	}

	template <typename T = uintptr_t> static T& IniParserObj() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, uintptr_t>*> static T& m_IniCache() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LoadIniData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClearCache() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_ClearCache() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReadIniData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LoadFromConfig() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_LoadFromConfig() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TryLoadParentIni() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ConvertToBaseType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Format() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HasSection() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}

	template <typename T = bool> static T LoadIniData(Il2CppString* configPath, uintptr_t data, uintptr_t obj, uintptr_t dataType, Il2CppString* section) {
		return ((T (*)(void *, Il2CppString*, uintptr_t, uintptr_t, uintptr_t, Il2CppString*))(Il2CppBase() + 0x370BFBC))(0, configPath, data, obj, dataType, section);
	}
	template <typename T = void> static T ClearCache() {
		return ((T (*)(void *))(Il2CppBase() + 0x370BD4C))(0);
	}
	template <typename T = void> static T ClearCache_1(Il2CppString* path) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x370D238))(0, path);
	}
	template <typename T = uintptr_t> static T ReadIniData(Il2CppString* path) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x370D404))(0, path);
	}
	template <typename T = uintptr_t> static T LoadFromConfig(Il2CppString* path, uintptr_t dataType, Il2CppString* section) {
		return ((T (*)(void *, Il2CppString*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x370B3C8))(0, path, dataType, section);
	}
	template <typename T = uintptr_t> static T LoadFromConfig_1(Il2CppString* path, uintptr_t obj, uintptr_t dataType, Il2CppString* section) {
		return ((T (*)(void *, Il2CppString*, uintptr_t, uintptr_t, Il2CppString*))(Il2CppBase() + 0x370D7EC))(0, path, obj, dataType, section);
	}
	template <typename T = bool> static T TryLoadParentIni(uintptr_t obj, uintptr_t dataType, uintptr_t data) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x370DA50))(0, obj, dataType, data);
	}
	template <typename T = uintptr_t> static T ConvertToBaseType(Il2CppString* fieldName, Il2CppString* str, uintptr_t type) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x370DF74))(0, fieldName, str, type);
	}
	template <typename T = uintptr_t> static T Format(Il2CppString* fieldName, Il2CppString* str, uintptr_t type) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x370C6B8))(0, fieldName, str, type);
	}
	template <typename T = bool> static T HasSection(Il2CppString* path, Il2CppString* sectionName) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x370AEBC))(0, path, sectionName);
	}

};

}
