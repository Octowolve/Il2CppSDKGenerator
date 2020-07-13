#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PrefabUsageInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PrefabUsageInfo"));
	}

	template <typename T = uintptr_t> T& prefab() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& lastUsedFrameCount() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = float> T& lastUsedTime() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = float> T get_TimeSinceLastUsed() {
		return ((T (*)(PrefabUsageInfo*))(Il2CppBase() + 0x4803BC4))(this);
	}

};

}
