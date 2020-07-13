#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SightUpdateInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SightUpdateInfo"));
	}

	template <typename T = float> T& StaleTime() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = bool> T& IsStale() {
		return *(T*)((uintptr_t)this + 0x4);
	}
	template <typename T = bool> T& NeedUpdateSight() {
		return *(T*)((uintptr_t)this + 0x5);
	}
	template <typename T = bool> T& ForceUpdateSight() {
		return *(T*)((uintptr_t)this + 0x6);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Clear() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = void> T Clear() {
		return ((T (*)(SightUpdateInfo*))(Il2CppBase() + 0x4377D34))(this);
	}

};

}
