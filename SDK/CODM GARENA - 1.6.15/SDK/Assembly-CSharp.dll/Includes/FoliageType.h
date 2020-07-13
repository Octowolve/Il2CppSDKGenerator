#pragma once
#include <Il2Cpp/Il2Cpp.h>

class FoliageType
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "FoliageType"));
	}

	template <typename T = uintptr_t> T& layerType() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& hash() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& prefab() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& runtimeData() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& localBounds() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& maxDrawDistance() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
