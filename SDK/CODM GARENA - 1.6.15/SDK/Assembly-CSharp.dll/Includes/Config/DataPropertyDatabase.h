#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Config {

class DataPropertyDatabase
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Config", "DataPropertyDatabase"));
	}

	template <typename T = Il2CppDictionary<Il2CppString*, uintptr_t>*> static T& m_db() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetBytesPtr() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetBytesOffset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LoadSingleTagInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Clear() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = Il2CppArray<uintptr_t>*> static T GetBytesPtr(Il2CppString* tag) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x463E684))(0, tag);
	}
	template <typename T = int32_t> static T GetBytesOffset(Il2CppString* tag, Il2CppString* key) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x463E7FC))(0, tag, key);
	}
	template <typename T = uintptr_t> static T LoadSingleTagInfo(Il2CppString* tag) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x463EA80))(0, tag);
	}
	template <typename T = void> static T Clear() {
		return ((T (*)(void *))(Il2CppBase() + 0x463F0FC))(0);
	}

};

}
