#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AtmosphericScatteringLightShaft
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AtmosphericScatteringLightShaft"));
	}

	template <typename T = bool> T& useOcclusion() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = float> T& occlusionBias() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& occlusionBiasIndirect() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = float> T& occlusionBiasClouds() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& occlusionDownscale() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& occlusionSamples() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = bool> T& occlusionDepthFixup() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = float> T& occlusionDepthThreshold() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = bool> T& occlusionFullSky() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = float> T& occlusionBiasSkyRayleigh() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = float> T& occlusionBiasSkyMie() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& depthTexture() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& debugMode() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& occlusionShader() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& m_occlusionMaterial() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> T& m_occlusionCmdAfterShadows() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& m_occlusionCmdBeforeScreen() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uintptr_t> T& m_EventOfPass2() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& m_currentCamera() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = bool> T& m_isAwake() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& _ditheringTexture() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEnable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDisable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EnsureHookedLightSource() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateKeywords() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnValidate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnWillRenderObject() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRenderObject() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateStaticUniforms() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateDynamicUniforms() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GenerateDitherTexture() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(AtmosphericScatteringLightShaft*))(Il2CppBase() + 0x22D8598))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(AtmosphericScatteringLightShaft*))(Il2CppBase() + 0x22D98FC))(this);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(AtmosphericScatteringLightShaft*))(Il2CppBase() + 0x22D9994))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(AtmosphericScatteringLightShaft*))(Il2CppBase() + 0x22D9A70))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(AtmosphericScatteringLightShaft*))(Il2CppBase() + 0x22D9B24))(this);
	}
	template <typename T = void> T EnsureHookedLightSource(uintptr_t light) {
		return ((T (*)(AtmosphericScatteringLightShaft*, uintptr_t))(Il2CppBase() + 0x22D9BBC))(this, light);
	}
	template <typename T = void> T UpdateKeywords(bool enable) {
		return ((T (*)(AtmosphericScatteringLightShaft*, bool))(Il2CppBase() + 0x22D9E78))(this, enable);
	}
	template <typename T = void> T OnValidate() {
		return ((T (*)(AtmosphericScatteringLightShaft*))(Il2CppBase() + 0x22DA088))(this);
	}
	template <typename T = void> T OnWillRenderObject() {
		return ((T (*)(AtmosphericScatteringLightShaft*))(Il2CppBase() + 0x22DA1D0))(this);
	}
	template <typename T = void> T OnRenderObject() {
		return ((T (*)(AtmosphericScatteringLightShaft*))(Il2CppBase() + 0x22DABA0))(this);
	}
	template <typename T = void> T UpdateStaticUniforms() {
		return ((T (*)(AtmosphericScatteringLightShaft*))(Il2CppBase() + 0x22DACA8))(this);
	}
	template <typename T = void> T UpdateDynamicUniforms() {
		return ((T (*)(AtmosphericScatteringLightShaft*))(Il2CppBase() + 0x22DAEF0))(this);
	}
	template <typename T = void> T GenerateDitherTexture() {
		return ((T (*)(AtmosphericScatteringLightShaft*))(Il2CppBase() + 0x22D8798))(this);
	}

};

}
