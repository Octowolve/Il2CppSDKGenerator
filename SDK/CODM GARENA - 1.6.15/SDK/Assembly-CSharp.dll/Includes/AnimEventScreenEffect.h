#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AnimEventScreenEffect
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AnimEventScreenEffect"));
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
	template <typename T = Il2CppVector3> T& position() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = float> T& rotationAngle() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& lifeSpan() {
		return *(T*)((uintptr_t)this + 0x1C);
	}


};

}
