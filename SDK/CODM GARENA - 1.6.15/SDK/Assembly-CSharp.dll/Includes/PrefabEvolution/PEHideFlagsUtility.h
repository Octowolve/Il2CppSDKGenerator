#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace PrefabEvolution {

class PEHideFlagsUtility
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "PrefabEvolution", "PEHideFlagsUtility"));
	}

	template <typename T = uintptr_t> static T& __Hotfix0_HideFlagsSet() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_AddHideFlags() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RemoveHideFlags() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> static T HideFlagsSet(uintptr_t obj, uintptr_t flags, bool value) {
		return ((T (*)(void *, uintptr_t, uintptr_t, bool))(Il2CppBase() + 0x480A988))(0, obj, flags, value);
	}
	template <typename T = void> static T AddHideFlags(uintptr_t obj, uintptr_t flags) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x480AA60))(0, obj, flags);
	}
	template <typename T = void> static T RemoveHideFlags(uintptr_t obj, uintptr_t flags) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x480AB34))(0, obj, flags);
	}

};

}
