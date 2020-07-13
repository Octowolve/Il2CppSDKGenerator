#pragma once
#include <Il2Cpp/Il2Cpp.h>

class FoliageUtils
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "FoliageUtils"));
	}

	template <typename T = uintptr_t> static T& __Hotfix0_GetUniqueHash() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetStableHashCode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = int32_t> static T GetUniqueHash(uintptr_t prefab) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3CD8544))(0, prefab);
	}
	template <typename T = int32_t> static T GetStableHashCode(Il2CppString* str) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x3CD8608))(0, str);
	}

};

}
