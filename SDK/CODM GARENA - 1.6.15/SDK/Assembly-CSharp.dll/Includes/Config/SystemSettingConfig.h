#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Config {

class SystemSettingConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Config", "SystemSettingConfig"));
	}

	template <typename T = int32_t> T& UserSettingLevel() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& ShaderLOD() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& DecalAlivetime() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& UnityQualityLevel() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& ParticleLODBias() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = float> T& SASmallLayerDistBias() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& SAMediumLayerDistBias() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = float> T& AudioQuality() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = bool> T& DisableSceneGONotImportant() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = float> T& BRfixedDeltaTime() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = float> T& PVPfixedDeltaTime() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = float> T& PVEfixedDeltaTime() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = float> T& VehiclefixedDeltaTime() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = int32_t> T& LimitMinFps() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = float> T& MaxParticleDeltaTime() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = bool> T& FireImpactEffectOnlyForFirstHit() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = int32_t> T& AudioMaxCount() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = int32_t> T& BrightnessForDakenScreen() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = float> T& TimeForDakenScreenBrightness() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = int32_t> T& RuntimeMaxLOD() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = float> T& FoliageLODBias() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = int32_t> T& TextureMasterLimit() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = int32_t> T& MaxFrameRateUnderLowQuality() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = int32_t> T& MaxFrameRateLevel() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = int32_t> T& DefaultFrameRateLevel() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = float> T& SceneStreamingDistBias() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPrimaryKeyValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Deserialize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = int32_t> T GetPrimaryKeyValue() {
		return ((T (*)(SystemSettingConfig*))(Il2CppBase() + 0x30EDC9C))(this);
	}
	template <typename T = int32_t> T get_UserSettingLevel() {
		return ((T (*)(SystemSettingConfig*))(Il2CppBase() + 0x30EDD3C))(this);
	}
	template <typename T = void> T set_UserSettingLevel(int32_t value) {
		return ((T (*)(SystemSettingConfig*, int32_t))(Il2CppBase() + 0x30EDD44))(this, value);
	}
	template <typename T = int32_t> T get_ShaderLOD() {
		return ((T (*)(SystemSettingConfig*))(Il2CppBase() + 0x30EDD4C))(this);
	}
	template <typename T = void> T set_ShaderLOD(int32_t value) {
		return ((T (*)(SystemSettingConfig*, int32_t))(Il2CppBase() + 0x30EDD54))(this, value);
	}
	template <typename T = float> T get_DecalAlivetime() {
		return ((T (*)(SystemSettingConfig*))(Il2CppBase() + 0x30EDD5C))(this);
	}
	template <typename T = void> T set_DecalAlivetime(float value) {
		return ((T (*)(SystemSettingConfig*, float))(Il2CppBase() + 0x30EDD64))(this, value);
	}
	template <typename T = int32_t> T get_UnityQualityLevel() {
		return ((T (*)(SystemSettingConfig*))(Il2CppBase() + 0x30EDD6C))(this);
	}
	template <typename T = void> T set_UnityQualityLevel(int32_t value) {
		return ((T (*)(SystemSettingConfig*, int32_t))(Il2CppBase() + 0x30EDD74))(this, value);
	}
	template <typename T = int32_t> T get_ParticleLODBias() {
		return ((T (*)(SystemSettingConfig*))(Il2CppBase() + 0x30EDD7C))(this);
	}
	template <typename T = void> T set_ParticleLODBias(int32_t value) {
		return ((T (*)(SystemSettingConfig*, int32_t))(Il2CppBase() + 0x30EDD84))(this, value);
	}
	template <typename T = float> T get_SASmallLayerDistBias() {
		return ((T (*)(SystemSettingConfig*))(Il2CppBase() + 0x30EDD8C))(this);
	}
	template <typename T = void> T set_SASmallLayerDistBias(float value) {
		return ((T (*)(SystemSettingConfig*, float))(Il2CppBase() + 0x30EDD94))(this, value);
	}
	template <typename T = float> T get_SAMediumLayerDistBias() {
		return ((T (*)(SystemSettingConfig*))(Il2CppBase() + 0x30EDD9C))(this);
	}
	template <typename T = void> T set_SAMediumLayerDistBias(float value) {
		return ((T (*)(SystemSettingConfig*, float))(Il2CppBase() + 0x30EDDA4))(this, value);
	}
	template <typename T = float> T get_AudioQuality() {
		return ((T (*)(SystemSettingConfig*))(Il2CppBase() + 0x30EDDAC))(this);
	}
	template <typename T = void> T set_AudioQuality(float value) {
		return ((T (*)(SystemSettingConfig*, float))(Il2CppBase() + 0x30EDDB4))(this, value);
	}
	template <typename T = bool> T get_DisableSceneGONotImportant() {
		return ((T (*)(SystemSettingConfig*))(Il2CppBase() + 0x30EDDBC))(this);
	}
	template <typename T = void> T set_DisableSceneGONotImportant(bool value) {
		return ((T (*)(SystemSettingConfig*, bool))(Il2CppBase() + 0x30EDDC4))(this, value);
	}
	template <typename T = float> T get_BRfixedDeltaTime() {
		return ((T (*)(SystemSettingConfig*))(Il2CppBase() + 0x30EDDCC))(this);
	}
	template <typename T = void> T set_BRfixedDeltaTime(float value) {
		return ((T (*)(SystemSettingConfig*, float))(Il2CppBase() + 0x30EDDD4))(this, value);
	}
	template <typename T = float> T get_PVPfixedDeltaTime() {
		return ((T (*)(SystemSettingConfig*))(Il2CppBase() + 0x30EDDDC))(this);
	}
	template <typename T = void> T set_PVPfixedDeltaTime(float value) {
		return ((T (*)(SystemSettingConfig*, float))(Il2CppBase() + 0x30EDDE4))(this, value);
	}
	template <typename T = float> T get_PVEfixedDeltaTime() {
		return ((T (*)(SystemSettingConfig*))(Il2CppBase() + 0x30EDDEC))(this);
	}
	template <typename T = void> T set_PVEfixedDeltaTime(float value) {
		return ((T (*)(SystemSettingConfig*, float))(Il2CppBase() + 0x30EDDF4))(this, value);
	}
	template <typename T = float> T get_VehiclefixedDeltaTime() {
		return ((T (*)(SystemSettingConfig*))(Il2CppBase() + 0x30EDDFC))(this);
	}
	template <typename T = void> T set_VehiclefixedDeltaTime(float value) {
		return ((T (*)(SystemSettingConfig*, float))(Il2CppBase() + 0x30EDE04))(this, value);
	}
	template <typename T = int32_t> T get_LimitMinFps() {
		return ((T (*)(SystemSettingConfig*))(Il2CppBase() + 0x30EDE0C))(this);
	}
	template <typename T = void> T set_LimitMinFps(int32_t value) {
		return ((T (*)(SystemSettingConfig*, int32_t))(Il2CppBase() + 0x30EDE14))(this, value);
	}
	template <typename T = float> T get_MaxParticleDeltaTime() {
		return ((T (*)(SystemSettingConfig*))(Il2CppBase() + 0x30EDE1C))(this);
	}
	template <typename T = void> T set_MaxParticleDeltaTime(float value) {
		return ((T (*)(SystemSettingConfig*, float))(Il2CppBase() + 0x30EDE24))(this, value);
	}
	template <typename T = bool> T get_FireImpactEffectOnlyForFirstHit() {
		return ((T (*)(SystemSettingConfig*))(Il2CppBase() + 0x30EDE2C))(this);
	}
	template <typename T = void> T set_FireImpactEffectOnlyForFirstHit(bool value) {
		return ((T (*)(SystemSettingConfig*, bool))(Il2CppBase() + 0x30EDE34))(this, value);
	}
	template <typename T = int32_t> T get_AudioMaxCount() {
		return ((T (*)(SystemSettingConfig*))(Il2CppBase() + 0x30EDE3C))(this);
	}
	template <typename T = void> T set_AudioMaxCount(int32_t value) {
		return ((T (*)(SystemSettingConfig*, int32_t))(Il2CppBase() + 0x30EDE44))(this, value);
	}
	template <typename T = int32_t> T get_BrightnessForDakenScreen() {
		return ((T (*)(SystemSettingConfig*))(Il2CppBase() + 0x30EDE4C))(this);
	}
	template <typename T = void> T set_BrightnessForDakenScreen(int32_t value) {
		return ((T (*)(SystemSettingConfig*, int32_t))(Il2CppBase() + 0x30EDE54))(this, value);
	}
	template <typename T = float> T get_TimeForDakenScreenBrightness() {
		return ((T (*)(SystemSettingConfig*))(Il2CppBase() + 0x30EDE5C))(this);
	}
	template <typename T = void> T set_TimeForDakenScreenBrightness(float value) {
		return ((T (*)(SystemSettingConfig*, float))(Il2CppBase() + 0x30EDE64))(this, value);
	}
	template <typename T = int32_t> T get_RuntimeMaxLOD() {
		return ((T (*)(SystemSettingConfig*))(Il2CppBase() + 0x30EDE6C))(this);
	}
	template <typename T = void> T set_RuntimeMaxLOD(int32_t value) {
		return ((T (*)(SystemSettingConfig*, int32_t))(Il2CppBase() + 0x30EDE74))(this, value);
	}
	template <typename T = float> T get_FoliageLODBias() {
		return ((T (*)(SystemSettingConfig*))(Il2CppBase() + 0x30EDE7C))(this);
	}
	template <typename T = void> T set_FoliageLODBias(float value) {
		return ((T (*)(SystemSettingConfig*, float))(Il2CppBase() + 0x30EDE84))(this, value);
	}
	template <typename T = int32_t> T get_TextureMasterLimit() {
		return ((T (*)(SystemSettingConfig*))(Il2CppBase() + 0x30EDE8C))(this);
	}
	template <typename T = void> T set_TextureMasterLimit(int32_t value) {
		return ((T (*)(SystemSettingConfig*, int32_t))(Il2CppBase() + 0x30EDE94))(this, value);
	}
	template <typename T = int32_t> T get_MaxFrameRateUnderLowQuality() {
		return ((T (*)(SystemSettingConfig*))(Il2CppBase() + 0x30EDE9C))(this);
	}
	template <typename T = void> T set_MaxFrameRateUnderLowQuality(int32_t value) {
		return ((T (*)(SystemSettingConfig*, int32_t))(Il2CppBase() + 0x30EDEA4))(this, value);
	}
	template <typename T = int32_t> T get_MaxFrameRateLevel() {
		return ((T (*)(SystemSettingConfig*))(Il2CppBase() + 0x30EDEAC))(this);
	}
	template <typename T = void> T set_MaxFrameRateLevel(int32_t value) {
		return ((T (*)(SystemSettingConfig*, int32_t))(Il2CppBase() + 0x30EDEB4))(this, value);
	}
	template <typename T = int32_t> T get_DefaultFrameRateLevel() {
		return ((T (*)(SystemSettingConfig*))(Il2CppBase() + 0x30EDEBC))(this);
	}
	template <typename T = void> T set_DefaultFrameRateLevel(int32_t value) {
		return ((T (*)(SystemSettingConfig*, int32_t))(Il2CppBase() + 0x30EDEC4))(this, value);
	}
	template <typename T = float> T get_SceneStreamingDistBias() {
		return ((T (*)(SystemSettingConfig*))(Il2CppBase() + 0x30EDECC))(this);
	}
	template <typename T = void> T set_SceneStreamingDistBias(float value) {
		return ((T (*)(SystemSettingConfig*, float))(Il2CppBase() + 0x30EDED4))(this, value);
	}
	template <typename T = int32_t> T Deserialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(SystemSettingConfig*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x30EDEDC))(this, bytes, position);
	}

};

}
