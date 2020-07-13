#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AkObstructionOcclusion
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AkObstructionOcclusion"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& listenersToRemove() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppDictionary<uintptr_t, uintptr_t>*> T& ObstructionOcclusionValues() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& fadeRate() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = float> T& fadeTime() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& LayerMask() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = float> T& maxDistance() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& refreshInterval() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = float> T& refreshTime() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void> T InitIntervalsAndFadeRates() {
		return ((T (*)(AkObstructionOcclusion*))(Il2CppBase() + 0x48FB3D8))(this);
	}
	template <typename T = void> T UpdateObstructionOcclusionValues(Il2CppList<uintptr_t>* listenerList) {
		return ((T (*)(AkObstructionOcclusion*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x48FBB50))(this, listenerList);
	}
	template <typename T = void> T UpdateObstructionOcclusionValues_1(uintptr_t listener) {
		return ((T (*)(AkObstructionOcclusion*, uintptr_t))(Il2CppBase() + 0x48FB708))(this, listener);
	}
	template <typename T = void> T CastRays() {
		return ((T (*)(AkObstructionOcclusion*))(Il2CppBase() + 0x4911B5C))(this);
	}
	template <typename T = void> T UpdateObstructionOcclusionValuesForListeners() {
		return ((T (*)(AkObstructionOcclusion*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T SetObstructionOcclusion(void* ObsOccPair) {
		return ((T (*)(AkObstructionOcclusion*, void*))(Il2CppBase() + 0x0))(this, ObsOccPair);
	}
	template <typename T = void> T Update() {
		return ((T (*)(AkObstructionOcclusion*))(Il2CppBase() + 0x4911FB8))(this);
	}

};

}
