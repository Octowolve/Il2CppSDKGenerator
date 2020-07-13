#pragma once
#include <Il2Cpp/Il2Cpp.h>

class LoadAssetStatInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LoadAssetStatInfo"));
	}

	template <typename T = int32_t> T& assetID() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = bool> T& isFinish() {
		return *(T*)((uintptr_t)this + 0x4);
	}
	template <typename T = float> T& startLoadTime() {
		return *(T*)((uintptr_t)this + 0x8);
	}


};

}
