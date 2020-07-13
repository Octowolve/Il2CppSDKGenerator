#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ShadowMapCache
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ShadowMapCache"));
	}

	template <typename T = uintptr_t> T& Shadowmap() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetShadowmap() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDestroy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = uintptr_t> T GetShadowmap(int32_t size, int32_t depth) {
		return ((T (*)(ShadowMapCache*, int32_t, int32_t))(Il2CppBase() + 0x415F020))(this, size, depth);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(ShadowMapCache*))(Il2CppBase() + 0x4161964))(this);
	}

};

}
