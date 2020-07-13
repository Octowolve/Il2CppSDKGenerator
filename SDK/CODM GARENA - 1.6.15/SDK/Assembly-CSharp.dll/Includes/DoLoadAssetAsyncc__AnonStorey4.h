#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DoLoadAssetAsynccAnonStorey4
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "<DoLoadAssetAsync>c__AnonStorey4"));
	}

	template <typename T = Il2CppString*> T& path() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& assetID() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& loadGen() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = void*> T& cb2AssetManager() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& $this() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T m__0(uintptr_t obj) {
		return ((T (*)(DoLoadAssetAsynccAnonStorey4*, uintptr_t))(Il2CppBase() + 0x2B965FC))(this, obj);
	}

};

}
