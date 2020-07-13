#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Config {

class ConfigBufferCache
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Config", "ConfigBufferCache"));
	}

	template <typename T = int32_t> static T& MAX_BUILDER_SIZE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& CachedInstance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& CachedInstanceForCryptography() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Acquire() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Release() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AcquireForCryptography() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReleaseForCryptography() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = Il2CppArray<uintptr_t>*> static T Acquire(int32_t capacity) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x4636010))(0, capacity);
	}
	template <typename T = void> static T Release(Il2CppArray<uintptr_t>* bytes) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4636134))(0, bytes);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T AcquireForCryptography(int32_t capacity) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x46361FC))(0, capacity);
	}
	template <typename T = void> static T ReleaseForCryptography(Il2CppArray<uintptr_t>* bytes) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4636320))(0, bytes);
	}

};

}
