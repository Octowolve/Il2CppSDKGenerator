#pragma once
#include <Il2Cpp/Il2Cpp.h>

class MuscleProps
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp-firstpass.dll", "", "MuscleProps"));
	}

	template <typename T = float> T& unpinParents() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = float> T& unpinChildren() {
		return *(T*)((uintptr_t)this + 0x4);
	}
	template <typename T = float> T& unpinGroup() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = float> T& minMappingWeight() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = float> T& maxMappingWeight() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& disableColliders() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = float> T& regainPinSpeed() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& collisionResistance() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = float> T& knockOutDistance() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& puppetMaterial() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& unpinnedMaterial() {
		return *(T*)((uintptr_t)this + 0x28);
	}


};

}
