#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class SceneSetting
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "SceneSetting"));
	}

	template <typename T = uintptr_t> static T& m_Instance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& Distances() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& ShadowLightDir() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& EmissionFactorFor3P() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& DiffuseFactorFor3P() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = float> T& PBRReflectionFactor() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& PBRAmbientFactor() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = Il2CppString*> static T& EmissionFactorFor3PKey() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& DiffuseFactorFor3PKey() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& PBRReflectionFactorKey() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& PBRAmbientFactorKey() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> T& CharacterAddLightStrength() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = float> T& CharacterAddLightNearDist() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = float> T& CharacterAddLightFarDist() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = float> T& CharacterAddLightFarStrength() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = bool> T& m_EnableAutoExposureInCurrentScene() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = bool> T& m_ClampExposure() {
		return *(T*)((uintptr_t)this + 0x41);
	}
	template <typename T = float> T& m_TargetDensity() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = float> static T& TotalFogTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> T& mFogTime() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> static T& DefaultLut2DTex() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& CurrentLut2DTex() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = void*> static T& onOnePassChanged() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = float> static T& ClampOBExposure_Min() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = float> static T& ClampOBExposure_Max() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetEmissionFactor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetDiffuseFactor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetPBRReflectionFactor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetPBRAmbientFactor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitShaderGlobalValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetAllFactor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RevertAllFactor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEnable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDisable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LerpTargetFog() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FillCullDistances() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OpenOnePassTonemapping() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsOnePass() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OpenOnePassBCGS() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OpenOnePassLut2D() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OpenOnePassSimpleACE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetRadBlurParam() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetDistortParam() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetDizzyBlurParam() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetExposureScale() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClampMatchOBAndFreeViewExposure() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetExposureParam() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CalculateExposureParam() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetACEParam() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x84);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_SetACEParam() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x88);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetBCGSParam() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetDefaultBCGSParam() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x90);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CloseOnepassTonemapping() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x94);
	}

	template <typename T = uintptr_t> static T get_instance() {
		return ((T (*)(void *))(Il2CppBase() + 0x33EC210))(0);
	}
	template <typename T = bool> T get_EnableAutoExposureInCurrentScene() {
		return ((T (*)(SceneSetting*))(Il2CppBase() + 0x33EC2C0))(this);
	}
	template <typename T = void> T set_EnableAutoExposureInCurrentScene(bool value) {
		return ((T (*)(SceneSetting*, bool))(Il2CppBase() + 0x33EC2C8))(this, value);
	}
	template <typename T = bool> T get_ClampExposure() {
		return ((T (*)(SceneSetting*))(Il2CppBase() + 0x33EC2D0))(this);
	}
	template <typename T = void> T set_ClampExposure(bool value) {
		return ((T (*)(SceneSetting*, bool))(Il2CppBase() + 0x33EC2D8))(this, value);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(SceneSetting*))(Il2CppBase() + 0x33EC2E0))(this);
	}
	template <typename T = void> static T SetEmissionFactor(float v) {
		return ((T (*)(void *, float))(Il2CppBase() + 0x33EC3E8))(0, v);
	}
	template <typename T = void> static T SetDiffuseFactor(float v) {
		return ((T (*)(void *, float))(Il2CppBase() + 0x33EC544))(0, v);
	}
	template <typename T = void> static T SetPBRReflectionFactor(float v) {
		return ((T (*)(void *, float))(Il2CppBase() + 0x33EC6A0))(0, v);
	}
	template <typename T = void> static T SetPBRAmbientFactor(float v) {
		return ((T (*)(void *, float))(Il2CppBase() + 0x33EC800))(0, v);
	}
	template <typename T = void> static T InitShaderGlobalValue() {
		return ((T (*)(void *))(Il2CppBase() + 0x33EC960))(0);
	}
	template <typename T = void> T SetAllFactor() {
		return ((T (*)(SceneSetting*))(Il2CppBase() + 0x33ECBDC))(this);
	}
	template <typename T = void> static T RevertAllFactor() {
		return ((T (*)(void *))(Il2CppBase() + 0x33ECA48))(0);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(SceneSetting*))(Il2CppBase() + 0x33ECD88))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(SceneSetting*))(Il2CppBase() + 0x33ECE5C))(this);
	}
	template <typename T = void> T Start() {
		return ((T (*)(SceneSetting*))(Il2CppBase() + 0x33ECF4C))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(SceneSetting*))(Il2CppBase() + 0x33ED268))(this);
	}
	template <typename T = void> T LerpTargetFog() {
		return ((T (*)(SceneSetting*))(Il2CppBase() + 0x33ED408))(this);
	}
	template <typename T = void> T FillCullDistances(uintptr_t cam) {
		return ((T (*)(SceneSetting*, uintptr_t))(Il2CppBase() + 0x33ED0BC))(this, cam);
	}
	template <typename T = void> static T OpenOnePassTonemapping(uintptr_t profile) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x33ED508))(0, profile);
	}
	template <typename T = bool> static T IsOnePass() {
		return ((T (*)(void *))(Il2CppBase() + 0x33EDD38))(0);
	}
	template <typename T = void> static T OpenOnePassBCGS(uintptr_t setting) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x33ED9A0))(0, setting);
	}
	template <typename T = void> static T OpenOnePassLut2D(uintptr_t setting) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x33EE1F4))(0, setting);
	}
	template <typename T = void> static T OpenOnePassSimpleACE(uintptr_t setting) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x33ED834))(0, setting);
	}
	template <typename T = void> static T SetRadBlurParam(uintptr_t setting) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x33EE81C))(0, setting);
	}
	template <typename T = void> static T SetDistortParam(uintptr_t setting) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x33EE928))(0, setting);
	}
	template <typename T = void> static T SetDizzyBlurParam(uintptr_t setting) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x33EEAB4))(0, setting);
	}
	template <typename T = float> static T GetExposureScale(uintptr_t setting) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x33EEC54))(0, setting);
	}
	template <typename T = float> static T ClampMatchOBAndFreeViewExposure(float baseVal) {
		return ((T (*)(void *, float))(Il2CppBase() + 0x33EF0CC))(0, baseVal);
	}
	template <typename T = void> static T SetExposureParam(uintptr_t setting, bool InLobby) {
		return ((T (*)(void *, uintptr_t, bool))(Il2CppBase() + 0x33EDB10))(0, setting, InLobby);
	}
	template <typename T = float> static T CalculateExposureParam(float shutterSpeed, float ISO, float aperture) {
		return ((T (*)(void *, float, float, float))(Il2CppBase() + 0x33EEFA4))(0, shutterSpeed, ISO, aperture);
	}
	template <typename T = void> static T SetACEParam(uintptr_t setting) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x33EE6B4))(0, setting);
	}
	template <typename T = void> static T SetACEParam_1(uintptr_t setting, uintptr_t aceMat) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x33EF244))(0, setting, aceMat);
	}
	template <typename T = void> static T SetBCGSParam(uintptr_t setting, uintptr_t bcgsMat) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x33EDE24))(0, setting, bcgsMat);
	}
	template <typename T = void> static T SetDefaultBCGSParam(uintptr_t bcgsMat) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x33EF3C4))(0, bcgsMat);
	}
	template <typename T = void> static T CloseOnepassTonemapping() {
		return ((T (*)(void *))(Il2CppBase() + 0x33EF9B4))(0);
	}

};

}
