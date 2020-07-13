#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace WellFired.Shared {

class PlatformSpecificFactory
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("sharedRuntime.dll", "WellFired.Shared", "PlatformSpecificFactory"));
	}

	template <typename T = uintptr_t> static T& cachedReflectionType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& cachedReflectionHelper() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& cachedUnityEditorType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& cachedUnityEditorHelper() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = uintptr_t> static T get_ReflectionHelper() {
		return ((T (*)(void *))(Il2CppBase() + 0x5224F18))(0);
	}
	template <typename T = uintptr_t> static T get_UnityEditorHelper() {
		return ((T (*)(void *))(Il2CppBase() + 0x52251C8))(0);
	}

};

}
