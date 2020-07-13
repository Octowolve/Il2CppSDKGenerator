#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class IniConfigContainer
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "IniConfigContainer"));
	}

	template <typename T = Il2CppDictionary<Il2CppString*, uintptr_t>*> static T& m_ConfigCacheDic() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetKey() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPath() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Clear() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HasSection() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetIniConfig() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = Il2CppString*> static T GetKey(Il2CppString* tag, Il2CppString* configName, Il2CppString* section) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x370A984))(0, tag, configName, section);
	}
	template <typename T = Il2CppString*> static T GetPath(Il2CppString* tag, Il2CppString* configName) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x370AAE0))(0, tag, configName);
	}
	template <typename T = void> static T Clear() {
		return ((T (*)(void *))(Il2CppBase() + 0x370AC2C))(0);
	}
	template <typename T = bool> static T HasSection(Il2CppString* tag, Il2CppString* configName, Il2CppString* section) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x370AD60))(0, tag, configName, section);
	}
	template <typename T = uintptr_t> static T GetIniConfig(Il2CppString* tag, Il2CppString* configName, uintptr_t dataType, Il2CppString* section) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x370B0B4))(0, tag, configName, dataType, section);
	}

};

}
