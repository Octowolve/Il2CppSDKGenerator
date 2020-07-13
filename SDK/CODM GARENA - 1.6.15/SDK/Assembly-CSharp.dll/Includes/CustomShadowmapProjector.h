#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CustomShadowmapProjector
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CustomShadowmapProjector"));
	}

	template <typename T = uintptr_t> T& casterShader() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& projectCamera() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& customShadowMap() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppString*> static T& customShadowMapName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& cShadowmapPropName() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& cShadowmapUniformID() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppString*> T& cSmLightMatrixPropStr() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& cSmLightMatrixUniformID() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppString*> T& cSmScalePropStr() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& cSmScaleUniformID() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = Il2CppString*> T& cSmParamPropName() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> T& cSmParamID() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = Il2CppString*> T& cSmKeyword() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppString*> T& cSmSoftKeyword() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = Il2CppString*> T& cTwoAddupBasePassLight() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppString*> T& shadowCasterShaderName() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = bool> T& IsEnabled() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& smParams() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uintptr_t> T& smScales() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = uintptr_t> T& currentConfig() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& configGroup() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = int32_t> static T& surppotFlag() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = int32_t> T& currentConfigIndex() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsSystemSupport() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateShadowMapResource() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReleaseShadowmapResource() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateShadowmapCamera() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CollectShaderUniform() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PrepareResource() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DestroyResource() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetConfig() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetConfigFromConfigGroup() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetShaderParameter() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetShadowmapScale() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetShadowmapParamerters() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetProjectCamera() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetShadowMapUniform() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetShaderParameterUniform() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EnableShadowmap() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DisableShadowmap() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEnable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDisable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDestroy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_EditorUpdate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CODMCheckQuality() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}

	template <typename T = bool> T get_IsEnabled() {
		return ((T (*)(CustomShadowmapProjector*))(Il2CppBase() + 0x415EAC4))(this);
	}
	template <typename T = void> T set_IsEnabled(bool value) {
		return ((T (*)(CustomShadowmapProjector*, bool))(Il2CppBase() + 0x415EACC))(this, value);
	}
	template <typename T = bool> static T get_IsShadowMappingSurppot() {
		return ((T (*)(void *))(Il2CppBase() + 0x415EAD4))(0);
	}
	template <typename T = bool> static T IsSystemSupport() {
		return ((T (*)(void *))(Il2CppBase() + 0x415EC54))(0);
	}
	template <typename T = void> T CreateShadowMapResource(int32_t size, int32_t depth) {
		return ((T (*)(CustomShadowmapProjector*, int32_t, int32_t))(Il2CppBase() + 0x415EDB4))(this, size, depth);
	}
	template <typename T = void> T ReleaseShadowmapResource() {
		return ((T (*)(CustomShadowmapProjector*))(Il2CppBase() + 0x415F214))(this);
	}
	template <typename T = void> T CreateShadowmapCamera() {
		return ((T (*)(CustomShadowmapProjector*))(Il2CppBase() + 0x415F484))(this);
	}
	template <typename T = void> T CollectShaderUniform() {
		return ((T (*)(CustomShadowmapProjector*))(Il2CppBase() + 0x415F7A4))(this);
	}
	template <typename T = bool> T PrepareResource() {
		return ((T (*)(CustomShadowmapProjector*))(Il2CppBase() + 0x415F8C0))(this);
	}
	template <typename T = void> T DestroyResource() {
		return ((T (*)(CustomShadowmapProjector*))(Il2CppBase() + 0x415FD7C))(this);
	}
	template <typename T = void> T SetConfig(uintptr_t newConfig) {
		return ((T (*)(CustomShadowmapProjector*, uintptr_t))(Il2CppBase() + 0x415FE60))(this, newConfig);
	}
	template <typename T = void> T SetConfigFromConfigGroup(int32_t configIndex) {
		return ((T (*)(CustomShadowmapProjector*, int32_t))(Il2CppBase() + 0x4160884))(this, configIndex);
	}
	template <typename T = void> T SetShaderParameter(uintptr_t cfg) {
		return ((T (*)(CustomShadowmapProjector*, uintptr_t))(Il2CppBase() + 0x4160374))(this, cfg);
	}
	template <typename T = void> T SetShadowmapScale(float radius, float shadowDistance, int32_t resolution) {
		return ((T (*)(CustomShadowmapProjector*, float, float, int32_t))(Il2CppBase() + 0x4160998))(this, radius, shadowDistance, resolution);
	}
	template <typename T = void> T SetShadowmapParamerters(float depthBias, float normalBias, float softenRadius) {
		return ((T (*)(CustomShadowmapProjector*, float, float, float))(Il2CppBase() + 0x4160AEC))(this, depthBias, normalBias, softenRadius);
	}
	template <typename T = void> T SetProjectCamera(uintptr_t cfg) {
		return ((T (*)(CustomShadowmapProjector*, uintptr_t))(Il2CppBase() + 0x41601E8))(this, cfg);
	}
	template <typename T = void> T SetShadowMapUniform() {
		return ((T (*)(CustomShadowmapProjector*))(Il2CppBase() + 0x4160490))(this);
	}
	template <typename T = void> T SetShaderParameterUniform() {
		return ((T (*)(CustomShadowmapProjector*))(Il2CppBase() + 0x41605DC))(this);
	}
	template <typename T = void> T EnableShadowmap() {
		return ((T (*)(CustomShadowmapProjector*))(Il2CppBase() + 0x4160BF8))(this);
	}
	template <typename T = void> T DisableShadowmap() {
		return ((T (*)(CustomShadowmapProjector*))(Il2CppBase() + 0x415FB5C))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(CustomShadowmapProjector*))(Il2CppBase() + 0x4160ED8))(this);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(CustomShadowmapProjector*))(Il2CppBase() + 0x4160FF4))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(CustomShadowmapProjector*))(Il2CppBase() + 0x41613CC))(this);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(CustomShadowmapProjector*))(Il2CppBase() + 0x41614A0))(this);
	}
	template <typename T = void> T EditorUpdate() {
		return ((T (*)(CustomShadowmapProjector*))(Il2CppBase() + 0x4161574))(this);
	}
	template <typename T = void> T CODMCheckQuality() {
		return ((T (*)(CustomShadowmapProjector*))(Il2CppBase() + 0x4161140))(this);
	}

};

}
