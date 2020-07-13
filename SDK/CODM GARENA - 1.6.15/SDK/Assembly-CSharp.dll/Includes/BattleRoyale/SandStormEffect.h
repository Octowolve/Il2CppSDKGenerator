#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace BattleRoyale {

class SandStormEffect
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "BattleRoyale", "SandStormEffect"));
	}

	template <typename T = uintptr_t> T& CachedTransform() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& WallMaterialHigh() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& WallMaterialLow() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& WallObject() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& WallRenderer() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = float> T& InSandLowWallParam() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& OutSandLowWallParam() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = float> T& InSandDustAlpha() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& OutSandDustAlpha() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& m_DustEffectMat() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = float> T& InSandContrast() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> T& m_LastQuality() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = bool> T& m_IsQualityChanged() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = bool> T& m_StartShow() {
		return *(T*)((uintptr_t)this + 0x3D);
	}
	template <typename T = float> T& MaxRadius() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = float> T& Height() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = int32_t> T& Density() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = float> T& MinDensity() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = float> T& Lifetime() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = float> T& MinSize() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = float> T& MaxSize() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& StartColor() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = uintptr_t> T& TintColor() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = uintptr_t> T& AlphaCurve() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = int32_t> T& AlphaCurveCount() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = float> T& StartScale() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = float> T& EndScale() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = float> T& PosLimitFactor() {
		return *(T*)((uintptr_t)this + 0x8C);
	}
	template <typename T = float> T& MinDistance() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = float> T& MinDistanceFade() {
		return *(T*)((uintptr_t)this + 0x94);
	}
	template <typename T = float> T& AlphaCompensateFactor() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = int32_t> T& RandomSeed() {
		return *(T*)((uintptr_t)this + 0x9C);
	}
	template <typename T = int32_t> T& LowDensity() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = float> T& LowMinDistance() {
		return *(T*)((uintptr_t)this + 0xA4);
	}
	template <typename T = float> T& LowAlphaCompensateFactor() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = int32_t> T& HighDensity() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = float> T& HighMinDistance() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = float> T& HighAlphaCompensateFactor() {
		return *(T*)((uintptr_t)this + 0xB4);
	}
	template <typename T = uintptr_t> T& Main() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> T& Sub() {
		return *(T*)((uintptr_t)this + 0xBC);
	}
	template <typename T = uintptr_t> T& MainMat() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = uintptr_t> T& SubMat() {
		return *(T*)((uintptr_t)this + 0xC4);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& Mats() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = uintptr_t> T& m_Mesh() {
		return *(T*)((uintptr_t)this + 0xCC);
	}
	template <typename T = bool> T& m_GpuParticleInit() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Awake() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Update() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetGPUParticleActive() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_MakeMesh() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitGPUParticle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateGPUParticle() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(SandStormEffect*))(Il2CppBase() + 0x357384C))(this);
	}
	template <typename T = void> T Update() {
		return ((T (*)(SandStormEffect*))(Il2CppBase() + 0x3573FD4))(this);
	}
	template <typename T = void> T SetGPUParticleActive(bool active) {
		return ((T (*)(SandStormEffect*, bool))(Il2CppBase() + 0x3574B90))(this, active);
	}
	template <typename T = void> T MakeMesh(uintptr_t mesh) {
		return ((T (*)(SandStormEffect*, uintptr_t))(Il2CppBase() + 0x3574C90))(this, mesh);
	}
	template <typename T = void> T InitGPUParticle() {
		return ((T (*)(SandStormEffect*))(Il2CppBase() + 0x3573A34))(this);
	}
	template <typename T = void> T UpdateGPUParticle(float radius) {
		return ((T (*)(SandStormEffect*, float))(Il2CppBase() + 0x3574828))(this, radius);
	}

};

}
