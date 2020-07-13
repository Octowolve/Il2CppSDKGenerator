#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TODSky
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TOD_Sky"));
	}

	template <typename T = uintptr_t> static T& instance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& lightSourceColor() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& tempColor() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& target() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& m_TargetCamera() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> T& _CloudScale() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = int32_t> T& _UvPow() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = int32_t> T& _CloudSpeed() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = int32_t> T& _CloudUV() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = int32_t> T& _IV_MVP() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = int32_t> T& _CloudVLitOffset() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = int32_t> T& _CloudCover() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = int32_t> T& _Contrast() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = int32_t> T& _Haziness() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = int32_t> T& _Fogginess() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = int32_t> T& _Horizon() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = int32_t> T& _OpticalDepth() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = int32_t> T& _OneOverBeta() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = int32_t> T& _BetaRayleigh() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = int32_t> T& _BetaRayleighTheta() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = int32_t> T& _BetaMie() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = int32_t> T& _BetaMieTheta() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = int32_t> T& _BetaMiePhase() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = int32_t> T& _SunnyDegree() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = int32_t> T& _CloudIntensity() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = int32_t> T& TOD_LightColor() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = int32_t> T& TOD_CloudColor() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = int32_t> T& TOD_SunColor() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = int32_t> T& TOD_AdditiveColor() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = int32_t> T& TOD_LocalSunDirection() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = bool> T& IsUpdating() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = bool> T& bUpdateCloud() {
		return *(T*)((uintptr_t)this + 0x99);
	}
	template <typename T = uintptr_t> T& vLitOffset() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = bool> T& _firstUpdate() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = float> static T& pi() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& pi2() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& pi3() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& pi4() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppVector2> T& opticalDepth() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = Il2CppVector3> T& oneOverBeta() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = Il2CppVector3> T& betaRayleigh() {
		return *(T*)((uintptr_t)this + 0xC4);
	}
	template <typename T = Il2CppVector3> T& betaRayleighTheta() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = Il2CppVector3> T& betaMie() {
		return *(T*)((uintptr_t)this + 0xDC);
	}
	template <typename T = Il2CppVector3> T& betaMieTheta() {
		return *(T*)((uintptr_t)this + 0xE8);
	}
	template <typename T = Il2CppVector2> T& betaMiePhase() {
		return *(T*)((uintptr_t)this + 0xF4);
	}
	template <typename T = Il2CppVector3> T& betaNight() {
		return *(T*)((uintptr_t)this + 0xFC);
	}
	template <typename T = float> T& RainyDegree() {
		return *(T*)((uintptr_t)this + 0x108);
	}
	template <typename T = uintptr_t> T& UnityColorSpace() {
		return *(T*)((uintptr_t)this + 0x10C);
	}
	template <typename T = uintptr_t> T& Cycle() {
		return *(T*)((uintptr_t)this + 0x110);
	}
	template <typename T = uintptr_t> T& Atmosphere() {
		return *(T*)((uintptr_t)this + 0x114);
	}
	template <typename T = uintptr_t> T& Day() {
		return *(T*)((uintptr_t)this + 0x118);
	}
	template <typename T = uintptr_t> T& Night() {
		return *(T*)((uintptr_t)this + 0x11C);
	}
	template <typename T = uintptr_t> T& Light() {
		return *(T*)((uintptr_t)this + 0x120);
	}
	template <typename T = uintptr_t> T& CloudsPbr() {
		return *(T*)((uintptr_t)this + 0x124);
	}
	template <typename T = uintptr_t> T& World() {
		return *(T*)((uintptr_t)this + 0x128);
	}
	template <typename T = uintptr_t> T& Components() {
		return *(T*)((uintptr_t)this + 0x12C);
	}
	template <typename T = float> T& LerpValue() {
		return *(T*)((uintptr_t)this + 0x130);
	}
	template <typename T = float> T& SunZenith() {
		return *(T*)((uintptr_t)this + 0x134);
	}
	template <typename T = uintptr_t> T& SunColor() {
		return *(T*)((uintptr_t)this + 0x138);
	}
	template <typename T = uintptr_t> T& MoonColor() {
		return *(T*)((uintptr_t)this + 0x148);
	}
	template <typename T = uintptr_t> T& MoonHaloColor() {
		return *(T*)((uintptr_t)this + 0x158);
	}
	template <typename T = uintptr_t> T& CloudColor() {
		return *(T*)((uintptr_t)this + 0x168);
	}
	template <typename T = uintptr_t> T& AdditiveColor() {
		return *(T*)((uintptr_t)this + 0x178);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetInstance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OrbitalToUnity() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SampleAtmosphere() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetupScattering() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetupSunAndMoon() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetupLightColor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetupLightIntensity() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SampleFogColor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SampleAmbientColor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PowRGB() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PowRGBA() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Max3() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Inverse() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetTargetTransform() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetTargetCamera() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEnable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateCloudPbrParamemters() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateAll() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateTod() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_LateUpdate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateGlobalVariables() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}

	template <typename T = uintptr_t> static T GetInstance() {
		return ((T (*)(void *))(Il2CppBase() + 0x4960F84))(0);
	}
	template <typename T = Il2CppVector3> T OrbitalToUnity(float radius, float theta, float phi) {
		return ((T (*)(TODSky*, float, float, float))(Il2CppBase() + 0x49611BC))(this, radius, theta, phi);
	}
	template <typename T = uintptr_t> T SampleAtmosphere(Il2CppVector3 direction) {
		return ((T (*)(TODSky*, Il2CppVector3))(Il2CppBase() + 0x496134C))(this, direction);
	}
	template <typename T = void> T SetupScattering() {
		return ((T (*)(TODSky*))(Il2CppBase() + 0x4961D20))(this);
	}
	template <typename T = void> T SetupSunAndMoon() {
		return ((T (*)(TODSky*))(Il2CppBase() + 0x4962260))(this);
	}
	template <typename T = void> T SetupLightColor(float theta) {
		return ((T (*)(TODSky*, float))(Il2CppBase() + 0x4962B80))(this, theta);
	}
	template <typename T = void> T SetupLightIntensity(float altitude) {
		return ((T (*)(TODSky*, float))(Il2CppBase() + 0x4963440))(this, altitude);
	}
	template <typename T = uintptr_t> T SampleFogColor() {
		return ((T (*)(TODSky*))(Il2CppBase() + 0x4963720))(this);
	}
	template <typename T = uintptr_t> T SampleAmbientColor() {
		return ((T (*)(TODSky*))(Il2CppBase() + 0x496398C))(this);
	}
	template <typename T = uintptr_t> T PowRGB(uintptr_t c, float p) {
		return ((T (*)(TODSky*, uintptr_t, float))(Il2CppBase() + 0x4961B68))(this, c, p);
	}
	template <typename T = uintptr_t> T PowRGBA(uintptr_t c, float p) {
		return ((T (*)(TODSky*, uintptr_t, float))(Il2CppBase() + 0x4963B78))(this, c, p);
	}
	template <typename T = float> T Max3(float a, float b, float c) {
		return ((T (*)(TODSky*, float, float, float))(Il2CppBase() + 0x4961A40))(this, a, b, c);
	}
	template <typename T = Il2CppVector3> T Inverse(Il2CppVector3 v) {
		return ((T (*)(TODSky*, Il2CppVector3))(Il2CppBase() + 0x4962120))(this, v);
	}
	template <typename T = uintptr_t> T GetTargetTransform() {
		return ((T (*)(TODSky*))(Il2CppBase() + 0x4963D2C))(this);
	}
	template <typename T = uintptr_t> T GetTargetCamera() {
		return ((T (*)(TODSky*))(Il2CppBase() + 0x4963EDC))(this);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(TODSky*))(Il2CppBase() + 0x4964094))(this);
	}
	template <typename T = void> T UpdateCloudPbrParamemters() {
		return ((T (*)(TODSky*))(Il2CppBase() + 0x4964578))(this);
	}
	template <typename T = void> T UpdateAll() {
		return ((T (*)(TODSky*))(Il2CppBase() + 0x49656CC))(this);
	}
	template <typename T = void> T UpdateTod() {
		return ((T (*)(TODSky*))(Il2CppBase() + 0x4965900))(this);
	}
	template <typename T = void> T LateUpdate() {
		return ((T (*)(TODSky*))(Il2CppBase() + 0x4965BE8))(this);
	}
	template <typename T = void> T UpdateGlobalVariables() {
		return ((T (*)(TODSky*))(Il2CppBase() + 0x49659EC))(this);
	}
	template <typename T = uintptr_t> T get_Components() {
		return ((T (*)(TODSky*))(Il2CppBase() + 0x49619C4))(this);
	}
	template <typename T = void> T set_Components(uintptr_t value) {
		return ((T (*)(TODSky*, uintptr_t))(Il2CppBase() + 0x4964570))(this, value);
	}
	template <typename T = bool> T get_IsDay() {
		return ((T (*)(TODSky*))(Il2CppBase() + 0x4965CBC))(this);
	}
	template <typename T = bool> T get_IsNight() {
		return ((T (*)(TODSky*))(Il2CppBase() + 0x4965CD4))(this);
	}
	template <typename T = float> T get_Radius() {
		return ((T (*)(TODSky*))(Il2CppBase() + 0x4962B34))(this);
	}
	template <typename T = float> T get_Gamma() {
		return ((T (*)(TODSky*))(Il2CppBase() + 0x4965CEC))(this);
	}
	template <typename T = float> T get_OneOverGamma() {
		return ((T (*)(TODSky*))(Il2CppBase() + 0x49656C4))(this);
	}
	template <typename T = float> T get_LerpValue() {
		return ((T (*)(TODSky*))(Il2CppBase() + 0x49636A0))(this);
	}
	template <typename T = void> T set_LerpValue(float value) {
		return ((T (*)(TODSky*, float))(Il2CppBase() + 0x4963690))(this, value);
	}
	template <typename T = float> T get_SunZenith() {
		return ((T (*)(TODSky*))(Il2CppBase() + 0x4963698))(this);
	}
	template <typename T = void> T set_SunZenith(float value) {
		return ((T (*)(TODSky*, float))(Il2CppBase() + 0x4962B78))(this, value);
	}
	template <typename T = float> T get_LightZenith() {
		return ((T (*)(TODSky*))(Il2CppBase() + 0x4965CF4))(this);
	}
	template <typename T = float> T get_LightIntensity() {
		return ((T (*)(TODSky*))(Il2CppBase() + 0x4965CFC))(this);
	}
	template <typename T = Il2CppVector3> T get_SunDirection() {
		return ((T (*)(TODSky*))(Il2CppBase() + 0x4961A0C))(this);
	}
	template <typename T = Il2CppVector3> T get_LightDirection() {
		return ((T (*)(TODSky*))(Il2CppBase() + 0x49656B4))(this);
	}
	template <typename T = uintptr_t> T get_LightColor() {
		return ((T (*)(TODSky*))(Il2CppBase() + 0x4963B40))(this);
	}
	template <typename T = uintptr_t> T get_SunColor() {
		return ((T (*)(TODSky*))(Il2CppBase() + 0x49619CC))(this);
	}
	template <typename T = void> T set_SunColor(uintptr_t value) {
		return ((T (*)(TODSky*, uintptr_t))(Il2CppBase() + 0x49636A8))(this, value);
	}
	template <typename T = uintptr_t> T get_MoonColor() {
		return ((T (*)(TODSky*))(Il2CppBase() + 0x49619DC))(this);
	}
	template <typename T = void> T set_MoonColor(uintptr_t value) {
		return ((T (*)(TODSky*, uintptr_t))(Il2CppBase() + 0x49636C0))(this, value);
	}
	template <typename T = uintptr_t> T get_MoonHaloColor() {
		return ((T (*)(TODSky*))(Il2CppBase() + 0x4965D2C))(this);
	}
	template <typename T = void> T set_MoonHaloColor(uintptr_t value) {
		return ((T (*)(TODSky*, uintptr_t))(Il2CppBase() + 0x49636D8))(this, value);
	}
	template <typename T = uintptr_t> T get_CloudColor() {
		return ((T (*)(TODSky*))(Il2CppBase() + 0x49619EC))(this);
	}
	template <typename T = void> T set_CloudColor(uintptr_t value) {
		return ((T (*)(TODSky*, uintptr_t))(Il2CppBase() + 0x49636F0))(this, value);
	}
	template <typename T = uintptr_t> T get_AdditiveColor() {
		return ((T (*)(TODSky*))(Il2CppBase() + 0x49619FC))(this);
	}
	template <typename T = void> T set_AdditiveColor(uintptr_t value) {
		return ((T (*)(TODSky*, uintptr_t))(Il2CppBase() + 0x4963708))(this, value);
	}
	template <typename T = uintptr_t> T get_AmbientColor() {
		return ((T (*)(TODSky*))(Il2CppBase() + 0x4965D3C))(this);
	}
	template <typename T = uintptr_t> T get_FogColor() {
		return ((T (*)(TODSky*))(Il2CppBase() + 0x4965DAC))(this);
	}

};

}
