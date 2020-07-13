#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AkEmitterObstructionOcclusion
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AkEmitterObstructionOcclusion"));
	}

	template <typename T = uintptr_t> T& m_gameObj() {
		return *(T*)((uintptr_t)this + 0x2C);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(AkEmitterObstructionOcclusion*))(Il2CppBase() + 0x48FB328))(this);
	}
	template <typename T = void> T UpdateObstructionOcclusionValuesForListeners() {
		return ((T (*)(AkEmitterObstructionOcclusion*))(Il2CppBase() + 0x48FB410))(this);
	}
	template <typename T = void> T SetObstructionOcclusion(void* ObsOccPair) {
		return ((T (*)(AkEmitterObstructionOcclusion*, void*))(Il2CppBase() + 0x48FBFE4))(this, ObsOccPair);
	}

};

}
