#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PreloadOptions
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PreloadOptions"));
	}

	template <typename T = int32_t> T& assetID() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& preloadCount() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = bool> T& keepAssetForever() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
