#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AsyncPreloadcAnonStorey1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<AsyncPreload>c__AnonStorey1"));
	}

	template <typename T = int32_t> T& assetID() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& preloadCount() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& limitCount() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& IntervalTime() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = bool> T& limitFIFO() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& keepAssetForever() {
		return *(T*)((uintptr_t)this + 0x19);
	}
	template <typename T = uintptr_t> T& $this() {
		return *(T*)((uintptr_t)this + 0x1C);
	}

	template <typename T = void> T m__0(uintptr_t prefab) {
		return ((T (*)(AsyncPreloadcAnonStorey1*, uintptr_t))(Il2CppBase() + 0x1EC896C))(this, prefab);
	}

};

}
