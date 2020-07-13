#pragma once
#include <Il2Cpp/Il2Cpp.h>

class bloomParamControl
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "bloomParamControl"));
	}

	template <typename T = float> T& m_intensity() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = float> T& m_threshold() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& postEffectChain() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEnable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnValidate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDisable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Reset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_getNuclearBombBloomIntensity() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_getNuclearBombBloomThreshold() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_getStartBloomIntensity() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_getStartBloomThreshold() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetParam() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Apply() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}

	template <typename T = void> T OnEnable() {
		return ((T (*)(bloomParamControl*))(Il2CppBase() + 0x35BDBD0))(this);
	}
	template <typename T = void> T OnValidate() {
		return ((T (*)(bloomParamControl*))(Il2CppBase() + 0x35BDE58))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(bloomParamControl*))(Il2CppBase() + 0x35BDFD0))(this);
	}
	template <typename T = void> T Reset() {
		return ((T (*)(bloomParamControl*))(Il2CppBase() + 0x35BE068))(this);
	}
	template <typename T = float> T getNuclearBombBloomIntensity() {
		return ((T (*)(bloomParamControl*))(Il2CppBase() + 0x35BE138))(this);
	}
	template <typename T = float> T getNuclearBombBloomThreshold() {
		return ((T (*)(bloomParamControl*))(Il2CppBase() + 0x35BE1F4))(this);
	}
	template <typename T = float> T getStartBloomIntensity() {
		return ((T (*)(bloomParamControl*))(Il2CppBase() + 0x35BE2B0))(this);
	}
	template <typename T = float> T getStartBloomThreshold() {
		return ((T (*)(bloomParamControl*))(Il2CppBase() + 0x35BE36C))(this);
	}
	template <typename T = void> T SetParam(float intensity, float threshold) {
		return ((T (*)(bloomParamControl*, float, float))(Il2CppBase() + 0x35BE428))(this, intensity, threshold);
	}
	template <typename T = void> T Apply() {
		return ((T (*)(bloomParamControl*))(Il2CppBase() + 0x35BDD80))(this);
	}

};

}
