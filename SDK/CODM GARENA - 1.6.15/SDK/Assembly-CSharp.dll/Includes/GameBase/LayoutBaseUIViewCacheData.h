#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class LayoutBaseUIViewCacheData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "LayoutBaseUIViewCacheData"));
	}

	template <typename T = uintptr_t> T& CacheType() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& CacheView() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Reset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> T Reset(uintptr_t conf) {
		return ((T (*)(LayoutBaseUIViewCacheData*, uintptr_t))(Il2CppBase() + 0x2E2D52C))(this, conf);
	}

};

}
