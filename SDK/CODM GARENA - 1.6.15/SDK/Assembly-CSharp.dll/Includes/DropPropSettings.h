#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DropPropSettings
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DropPropSettings"));
	}

	template <typename T = int32_t> T& PropAssetID() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = int32_t> T& PropDropPercentage() {
		return *(T*)((uintptr_t)this + 0x4);
	}
	template <typename T = int32_t> T& PropDropCount() {
		return *(T*)((uintptr_t)this + 0x8);
	}


};

}
