#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AnimEventEffect
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AnimEventEffect"));
	}

	template <typename T = Il2CppString*> T& name() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> T& effectPrefab() {
		return *(T*)((uintptr_t)this + 0x4);
	}
	template <typename T = int32_t> T& effectAssetID() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& effectTransform() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = bool> T& attach() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& lifeSpan() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppString*> T& soundEvent() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& soundBank() {
		return *(T*)((uintptr_t)this + 0x1C);
	}


};

}
