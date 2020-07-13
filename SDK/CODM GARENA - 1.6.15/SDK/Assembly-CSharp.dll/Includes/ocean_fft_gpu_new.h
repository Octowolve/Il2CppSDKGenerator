#pragma once
#include <Il2Cpp/Il2Cpp.h>

class oceanfftgpunew
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ocean_fft_gpu_new"));
	}

	template <typename T = float> T& m_time() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& m_updateCount() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& minHeight() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = float> T& maxHeight() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& N() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = float> T& A() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppVector2> T& w() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = float> T& length() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = float> T& g() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = float> T& lambda() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& m_htilde() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& m_gpuFFT2D_slope() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& m_butterfly() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& m_JTex() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> T& m_matGenJTex() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& mat_ocean() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uintptr_t> T& mat_ocean_far() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& mat_river() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = uintptr_t> T& mat_lake() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_getHtilde0Tex() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_getFinalSlopeTex() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_getFinalSlopeTex_foe() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_saveJTex() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DumpRenderTexture() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_getJTex() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_getButterflyTex_index() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_getButterflyTex_T() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEnable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_init() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}

	template <typename T = uintptr_t> T getHtilde0Tex() {
		return ((T (*)(oceanfftgpunew*))(Il2CppBase() + 0x3EE8B38))(this);
	}
	template <typename T = uintptr_t> T getFinalSlopeTex() {
		return ((T (*)(oceanfftgpunew*))(Il2CppBase() + 0x3EE8BF4))(this);
	}
	template <typename T = uintptr_t> T getFinalSlopeTex_foe() {
		return ((T (*)(oceanfftgpunew*))(Il2CppBase() + 0x3EE8CB0))(this);
	}
	template <typename T = void> T saveJTex() {
		return ((T (*)(oceanfftgpunew*))(Il2CppBase() + 0x3EE8D6C))(this);
	}
	template <typename T = void> static T DumpRenderTexture(uintptr_t rt, Il2CppString* pngOutPath) {
		return ((T (*)(void *, uintptr_t, Il2CppString*))(Il2CppBase() + 0x3EE8E04))(0, rt, pngOutPath);
	}
	template <typename T = uintptr_t> T getJTex() {
		return ((T (*)(oceanfftgpunew*))(Il2CppBase() + 0x3EE8EA4))(this);
	}
	template <typename T = uintptr_t> T getButterflyTex_index() {
		return ((T (*)(oceanfftgpunew*))(Il2CppBase() + 0x3EE8F44))(this);
	}
	template <typename T = uintptr_t> T getButterflyTex_T() {
		return ((T (*)(oceanfftgpunew*))(Il2CppBase() + 0x3EE9000))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(oceanfftgpunew*))(Il2CppBase() + 0x3EE90BC))(this);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(oceanfftgpunew*))(Il2CppBase() + 0x3EE9154))(this);
	}
	template <typename T = void> T init(int32_t _N, float _A, Il2CppVector2 _w, float _lambda) {
		return ((T (*)(oceanfftgpunew*, int32_t, float, Il2CppVector2, float))(Il2CppBase() + 0x3EE91EC))(this, _N, _A, _w, _lambda);
	}

};

}
