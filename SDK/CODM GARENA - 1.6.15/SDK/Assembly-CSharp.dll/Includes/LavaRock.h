#pragma once
#include <Il2Cpp/Il2Cpp.h>

class LavaRock
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LavaRock"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Disapper() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Submerge() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> T Disapper() {
		return ((T (*)(LavaRock*))(Il2CppBase() + 0x492DBCC))(this);
	}
	template <typename T = uintptr_t> T Submerge() {
		return ((T (*)(LavaRock*))(Il2CppBase() + 0x492DD70))(this);
	}

};

}
