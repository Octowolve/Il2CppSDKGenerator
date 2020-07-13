#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AtmosphericScattering
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AtmosphericScattering"));
	}

	template <typename T = float> T& FogDistanceScaleBegin() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = float> T& FogDistanceScaleEnd() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& FogDensityBegin() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = float> T& FogDensityEnd() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& FogFalloffBeginHeight() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = float> T& FogFalloffEndHeight() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& JumpScaleBegin() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = float> T& JumpScaleEnd() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& FogDensity() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& WaterFogShoreColor() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& WaterFogColor() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& OceanMats() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = float> T& HeightFogDensity() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = float> T& FogHeightScale() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = float> T& FogHeightOffset() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = float> T& FogHeightAtten() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = float> T& NearFogAtten() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = float> T& FarFogAtten() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = float> T& FogDistanceBegin() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = float> T& FogDistanceScale() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = float> T& RayleighIntensity() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = float> T& MieIntensity() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = Il2CppVector3> T& Br() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = Il2CppVector3> T& Bm() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& RayLeighColor() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = uintptr_t> T& MieColor() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = uintptr_t> T& LowLevelFogColor() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = float> T& LowLevelFogDensity() {
		return *(T*)((uintptr_t)this + 0xC4);
	}
	template <typename T = float> T& OceanDistance() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = float> T& SkyIntensity() {
		return *(T*)((uintptr_t)this + 0xCC);
	}
	template <typename T = float> T& NightIntensity() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = float> T& SkyBound() {
		return *(T*)((uintptr_t)this + 0xD4);
	}
	template <typename T = uintptr_t> static T& instance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& mWaterRenderers() {
		return *(T*)((uintptr_t)this + 0xD8);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnEnable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateOceanMat() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FogInit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDisable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateStaticUniforms() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetFogDensity() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetFogDistanceScale() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ChangeJumpOceanUVScale() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetFogDensityWithHeight() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}

	template <typename T = uintptr_t> static T get_instance() {
		return ((T (*)(void *))(Il2CppBase() + 0x22D684C))(0);
	}
	template <typename T = void> static T set_instance(uintptr_t value) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x22D68CC))(0, value);
	}
	template <typename T = void> T Start() {
		return ((T (*)(AtmosphericScattering*))(Il2CppBase() + 0x22D6950))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(AtmosphericScattering*))(Il2CppBase() + 0x22D69FC))(this);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(AtmosphericScattering*))(Il2CppBase() + 0x22D72DC))(this);
	}
	template <typename T = void> T UpdateOceanMat() {
		return ((T (*)(AtmosphericScattering*))(Il2CppBase() + 0x22D6C18))(this);
	}
	template <typename T = void> T FogInit() {
		return ((T (*)(AtmosphericScattering*))(Il2CppBase() + 0x22D7174))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(AtmosphericScattering*))(Il2CppBase() + 0x22D7C7C))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(AtmosphericScattering*))(Il2CppBase() + 0x22D8098))(this);
	}
	template <typename T = void> T UpdateStaticUniforms() {
		return ((T (*)(AtmosphericScattering*))(Il2CppBase() + 0x22D76D8))(this);
	}
	template <typename T = void> T SetFogDensity(float density) {
		return ((T (*)(AtmosphericScattering*, float))(Il2CppBase() + 0x22D8130))(this, density);
	}
	template <typename T = void> T SetFogDistanceScale(float distance) {
		return ((T (*)(AtmosphericScattering*, float))(Il2CppBase() + 0x22D824C))(this, distance);
	}
	template <typename T = void> T ChangeJumpOceanUVScale(float oceanUVScale) {
		return ((T (*)(AtmosphericScattering*, float))(Il2CppBase() + 0x22D7BAC))(this, oceanUVScale);
	}
	template <typename T = void> T SetFogDensityWithHeight(float y) {
		return ((T (*)(AtmosphericScattering*, float))(Il2CppBase() + 0x22D8324))(this, y);
	}

};

}
