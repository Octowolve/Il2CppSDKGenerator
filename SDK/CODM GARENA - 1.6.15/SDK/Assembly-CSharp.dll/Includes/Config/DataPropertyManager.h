#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Config {

class DataPropertyManager
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Config", "DataPropertyManager"));
	}

	template <typename T = Il2CppDictionary<Il2CppString*, uintptr_t>*> static T& m_ConfigCacheDic() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Get() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_Get() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HasSection() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetKey() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Clear() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = uintptr_t> static T Get(Il2CppString* tag, Il2CppString* configName, uintptr_t instanceType) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x463F3B4))(0, tag, configName, instanceType);
	}
	template <typename T = uintptr_t> static T Get_1(Il2CppString* tag, Il2CppString* configName, Il2CppString* section, uintptr_t instanceType) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x463FD78))(0, tag, configName, section, instanceType);
	}
	template <typename T = bool> static T HasSection(Il2CppString* tag, Il2CppString* configName, Il2CppString* section) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x4640300))(0, tag, configName, section);
	}
	template <typename T = Il2CppString*> static T GetKey(Il2CppString* configName, Il2CppString* section) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x463FAEC))(0, configName, section);
	}
	template <typename T = void> static T Clear() {
		return ((T (*)(void *))(Il2CppBase() + 0x464046C))(0);
	}

};

}
