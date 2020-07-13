#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class IniConfigManager
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "IniConfigManager"));
	}

	template <typename T = Il2CppDictionary<int32_t, Il2CppString*>*> static T& s_ConfigTagDic() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& SUFFIX_CONFIG_HIP() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetConfig() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_GetConfig() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix2_GetConfig() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HasSection() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UseDataProperty() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsHip() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClearCache() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}

	template <typename T = uintptr_t> static T GetConfig(Il2CppString* configName, uintptr_t etag) {
		return ((T (*)(void *, Il2CppString*, uintptr_t))(Il2CppBase() + 0x3351510))(0, configName, etag);
	}
	template <typename T = uintptr_t> static T GetConfig_1(Il2CppString* configName, uintptr_t etag, uintptr_t dataType) {
		return ((T (*)(void *, Il2CppString*, uintptr_t, uintptr_t))(Il2CppBase() + 0x33516FC))(0, configName, etag, dataType);
	}
	template <typename T = uintptr_t> static T GetConfig_2(Il2CppString* configName, uintptr_t etag, uintptr_t dataType, Il2CppString* section) {
		return ((T (*)(void *, Il2CppString*, uintptr_t, uintptr_t, Il2CppString*))(Il2CppBase() + 0x3351A98))(0, configName, etag, dataType, section);
	}
	template <typename T = bool> static T HasSection(uintptr_t etag, Il2CppString* configName, Il2CppString* section) {
		return ((T (*)(void *, uintptr_t, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x370B66C))(0, etag, configName, section);
	}
	template <typename T = bool> static T UseDataProperty() {
		return ((T (*)(void *))(Il2CppBase() + 0x370B934))(0);
	}
	template <typename T = bool> static T IsHip(Il2CppString* confName) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x370BA40))(0, confName);
	}
	template <typename T = void> static T ClearCache() {
		return ((T (*)(void *))(Il2CppBase() + 0x370BBCC))(0);
	}

};

}
