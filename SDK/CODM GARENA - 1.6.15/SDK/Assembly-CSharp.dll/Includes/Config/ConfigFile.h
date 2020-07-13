#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Config {

class ConfigFile
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Config", "ConfigFile"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReadAllBytes() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_WriteAllBytes() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_WriteBytes() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = Il2CppArray<uintptr_t>*> static T ReadAllBytes(Il2CppString* path) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x46381B4))(0, path);
	}
	template <typename T = void> static T WriteAllBytes(Il2CppString* path, Il2CppArray<uintptr_t>* bytes) {
		return ((T (*)(void *, Il2CppString*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4638538))(0, path, bytes);
	}
	template <typename T = void> static T WriteBytes(Il2CppString* path, Il2CppArray<uintptr_t>* bytes, int32_t offset, int32_t count) {
		return ((T (*)(void *, Il2CppString*, Il2CppArray<uintptr_t>*, int32_t, int32_t))(Il2CppBase() + 0x4638614))(0, path, bytes, offset, count);
	}

};

}
