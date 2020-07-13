#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Text {

class StringBuilderCache
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "System.Text", "StringBuilderCache"));
	}

	template <typename T = int32_t> static T& MAX_BUILDER_SIZE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& CachedInstance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Acquire() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Release() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetStringAndRelease() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = uintptr_t> static T Acquire(int32_t capacity) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x3F3C730))(0, capacity);
	}
	template <typename T = void> static T Release(uintptr_t sb) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3F3C860))(0, sb);
	}
	template <typename T = Il2CppString*> static T GetStringAndRelease(uintptr_t sb) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3F3C944))(0, sb);
	}

};

}
