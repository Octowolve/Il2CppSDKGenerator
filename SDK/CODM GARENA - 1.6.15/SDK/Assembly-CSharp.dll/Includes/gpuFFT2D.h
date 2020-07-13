#pragma once
#include <Il2Cpp/Il2Cpp.h>

class gpuFFT2D
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "gpuFFT2D"));
	}

	template <typename T = uintptr_t> T& m_inputTex() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& m_butterflyTex_index() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& m_butterflyTex_T() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& m_N() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& m_log_2_N() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& m_mat_fftRows() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& m_mat_fftCols() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& m_mat_signCorrect() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& m_finalRT() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& m_finalRT_foe() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = float> T& m_lerpFactor() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& m_bitReverse() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& m_bitReverseTex() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = int32_t> T& m_channelCount() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& m_mat_bitReverse() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& h_back() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> T& h_front() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_fft2D() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_getFinalRT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_getFinalRT_foe() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = void> T init(uintptr_t inputTex, uintptr_t butterflyTex_index, uintptr_t butterflyTex_T) {
		return ((T (*)(gpuFFT2D*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x3E23378))(this, inputTex, butterflyTex_index, butterflyTex_T);
	}
	template <typename T = void> T fft2D(int32_t updateCount) {
		return ((T (*)(gpuFFT2D*, int32_t))(Il2CppBase() + 0x3E23448))(this, updateCount);
	}
	template <typename T = uintptr_t> T getFinalRT() {
		return ((T (*)(gpuFFT2D*))(Il2CppBase() + 0x3E2401C))(this);
	}
	template <typename T = uintptr_t> T getFinalRT_foe() {
		return ((T (*)(gpuFFT2D*))(Il2CppBase() + 0x3E240BC))(this);
	}

};

}
