#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PhotometryAreaLight
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PhotometryAreaLight"));
	}

	template <typename T = uintptr_t> T& m_lightMaterial() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& m_meshRenderer() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& m_lightMeshFilter() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = float> T& m_lummen() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& m_isDirty() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& m_filter() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& m_temperature() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& m_sRgbLightColor() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = Il2CppVector2> T& m_size() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> T& m_imageFilter() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = float> T& m_intensity() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = float> T& m_imgFilterCompensation() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = float> T& m_colorFilterCompensation() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = Il2CppString*> static T& emmissionTextureName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& albedoTextureName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& emmissionColorName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& emmissionCutoffKeywordName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& defaultLightMaterialShaderName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& photometryUnitScale() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CreateLightMaterial() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitLight() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ResizeFromObjectScale() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ApplyParamToMaterial() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ConvertLuxIntensityToShaderValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetTotalLummen() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CalculateLight() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CalculateFilterImageCompensation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateImageFilterCompensation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateColorFilterCompensation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetImageFillter() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}

	template <typename T = uintptr_t> T get_ImageFilter() {
		return ((T (*)(PhotometryAreaLight*))(Il2CppBase() + 0x47EA8EC))(this);
	}
	template <typename T = Il2CppVector2> T get_Size() {
		return ((T (*)(PhotometryAreaLight*))(Il2CppBase() + 0x47EA8F4))(this);
	}
	template <typename T = void> T set_Size(Il2CppVector2 value) {
		return ((T (*)(PhotometryAreaLight*, Il2CppVector2))(Il2CppBase() + 0x47EA908))(this, value);
	}
	template <typename T = uintptr_t> T get_ColorFilter() {
		return ((T (*)(PhotometryAreaLight*))(Il2CppBase() + 0x47EA91C))(this);
	}
	template <typename T = void> T set_ColorFilter(uintptr_t value) {
		return ((T (*)(PhotometryAreaLight*, uintptr_t))(Il2CppBase() + 0x47EA92C))(this, value);
	}
	template <typename T = float> T get_Temperature() {
		return ((T (*)(PhotometryAreaLight*))(Il2CppBase() + 0x47EA94C))(this);
	}
	template <typename T = void> T set_Temperature(float value) {
		return ((T (*)(PhotometryAreaLight*, float))(Il2CppBase() + 0x47EA954))(this, value);
	}
	template <typename T = float> T get_TotalLummen() {
		return ((T (*)(PhotometryAreaLight*))(Il2CppBase() + 0x47EA964))(this);
	}
	template <typename T = float> T get_Intensity() {
		return ((T (*)(PhotometryAreaLight*))(Il2CppBase() + 0x47EA96C))(this);
	}
	template <typename T = void> T set_Intensity(float value) {
		return ((T (*)(PhotometryAreaLight*, float))(Il2CppBase() + 0x47EA974))(this, value);
	}
	template <typename T = float> T get_ImageFilterEfficiency() {
		return ((T (*)(PhotometryAreaLight*))(Il2CppBase() + 0x47EA984))(this);
	}
	template <typename T = float> T get_ColorFilterCompensation() {
		return ((T (*)(PhotometryAreaLight*))(Il2CppBase() + 0x47EA98C))(this);
	}
	template <typename T = float> T get_LightEfficiency() {
		return ((T (*)(PhotometryAreaLight*))(Il2CppBase() + 0x47EA994))(this);
	}
	template <typename T = uintptr_t> T get_FinalLightColor() {
		return ((T (*)(PhotometryAreaLight*))(Il2CppBase() + 0x47EA9A8))(this);
	}
	template <typename T = uintptr_t> T get_LightMaterial() {
		return ((T (*)(PhotometryAreaLight*))(Il2CppBase() + 0x47EA9B8))(this);
	}
	template <typename T = void> T set_LightMaterial(uintptr_t value) {
		return ((T (*)(PhotometryAreaLight*, uintptr_t))(Il2CppBase() + 0x47EA9C0))(this, value);
	}
	template <typename T = bool> T get_IsLightDataDirty() {
		return ((T (*)(PhotometryAreaLight*))(Il2CppBase() + 0x47EA9D0))(this);
	}
	template <typename T = uintptr_t> T CreateLightMaterial() {
		return ((T (*)(PhotometryAreaLight*))(Il2CppBase() + 0x47EA9D8))(this);
	}
	template <typename T = void> T InitLight() {
		return ((T (*)(PhotometryAreaLight*))(Il2CppBase() + 0x47EAB90))(this);
	}
	template <typename T = void> T ResizeFromObjectScale() {
		return ((T (*)(PhotometryAreaLight*))(Il2CppBase() + 0x47EAFDC))(this);
	}
	template <typename T = void> T ApplyParamToMaterial() {
		return ((T (*)(PhotometryAreaLight*))(Il2CppBase() + 0x47EB2CC))(this);
	}
	template <typename T = float> T ConvertLuxIntensityToShaderValue(float intensityInLux) {
		return ((T (*)(PhotometryAreaLight*, float))(Il2CppBase() + 0x47EB7AC))(this, intensityInLux);
	}
	template <typename T = float> T SetTotalLummen(float lummen) {
		return ((T (*)(PhotometryAreaLight*, float))(Il2CppBase() + 0x47EB878))(this, lummen);
	}
	template <typename T = void> T CalculateLight() {
		return ((T (*)(PhotometryAreaLight*))(Il2CppBase() + 0x47EB108))(this);
	}
	template <typename T = float> static T CalculateFilterImageCompensation(uintptr_t _filterImage) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x47EBAB4))(0, _filterImage);
	}
	template <typename T = float> T UpdateImageFilterCompensation() {
		return ((T (*)(PhotometryAreaLight*))(Il2CppBase() + 0x47EBC70))(this);
	}
	template <typename T = float> T UpdateColorFilterCompensation() {
		return ((T (*)(PhotometryAreaLight*))(Il2CppBase() + 0x47EB954))(this);
	}
	template <typename T = void> T SetImageFillter(uintptr_t value, bool recalculateLightEffeiciency) {
		return ((T (*)(PhotometryAreaLight*, uintptr_t, bool))(Il2CppBase() + 0x47EBD18))(this, value, recalculateLightEffeiciency);
	}

};

}
