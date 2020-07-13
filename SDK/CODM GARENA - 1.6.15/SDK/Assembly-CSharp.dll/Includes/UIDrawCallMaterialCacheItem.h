#pragma once
#include <Il2Cpp/Il2Cpp.h>

class UIDrawCallMaterialCacheItem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UIDrawCallMaterialCacheItem"));
	}

	template <typename T = uintptr_t> T& CacheShader() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& CacheList() {
		return *(T*)((uintptr_t)this + 0x4);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetMat() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PushToCache() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Clear() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = uintptr_t> T GetMat() {
		return ((T (*)(UIDrawCallMaterialCacheItem*))(Il2CppBase() + 0x39E793C))(this);
	}
	template <typename T = void> T PushToCache(uintptr_t mat) {
		return ((T (*)(UIDrawCallMaterialCacheItem*, uintptr_t))(Il2CppBase() + 0x39E7944))(this, mat);
	}
	template <typename T = void> T Clear() {
		return ((T (*)(UIDrawCallMaterialCacheItem*))(Il2CppBase() + 0x39E794C))(this);
	}

};

}
