#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace JadeSnakeRenderer {

class JadeSnakeLightBase
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "JadeSnakeRenderer", "JadeSnakeLightBase"));
	}

	template <typename T = float> static T& minAnalyticLightRadius() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& minAnalyticLightRange() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& defaultAmbientLightColor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& minColorTemperature() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& maxColorTemperature() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& neutralColorTemperature() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& minIndirectLightIntensity() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& maxIndirectLightIntensity() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& defaultIntensityMode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& defaultColorMode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& defualtPhotometryMultiplier() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& gizmosWireColor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& gizmosWireHiddenTransparentColor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = float> static T& gizmosPointSize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> static T& gizmosCenterPointSize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = float> T& intensity() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& colorFilter() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& temperature() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& bakeMode() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& unitMode() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& colorMode() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = float> T& indirectIntensity() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& associateUnityLight() {
		return *(T*)((uintptr_t)this + 0x34);
	}

	template <typename T = void> T CheckNumericalConstrain() {
		return ((T (*)(JadeSnakeLightBase*))(Il2CppBase() + 0x31C9994))(this);
	}
	template <typename T = float> T GetRuntimeIntensityFromPhotometry(float photometryMultiplier) {
		return ((T (*)(JadeSnakeLightBase*, float))(Il2CppBase() + 0x31C9A90))(this, photometryMultiplier);
	}
	template <typename T = float> T GetRuntimeIntensity(float photometryMultiplier) {
		return ((T (*)(JadeSnakeLightBase*, float))(Il2CppBase() + 0x31C9A98))(this, photometryMultiplier);
	}
	template <typename T = float> static T ColorCompensation(uintptr_t col) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x31C9AB8))(0, col);
	}
	template <typename T = uintptr_t> T GetFinalLightColor() {
		return ((T (*)(JadeSnakeLightBase*))(Il2CppBase() + 0x31C9AE4))(this);
	}
	template <typename T = void> T SetAssociateUnityLight() {
		return ((T (*)(JadeSnakeLightBase*))(Il2CppBase() + 0x31C9CB0))(this);
	}
	template <typename T = uintptr_t> T GetUnityMapBakingType(uintptr_t jsBakeMode) {
		return ((T (*)(JadeSnakeLightBase*, uintptr_t))(Il2CppBase() + 0x31C9CB4))(this, jsBakeMode);
	}
	template <typename T = uintptr_t> static T TemperatureToCorrelatedColor(float temperature) {
		return ((T (*)(void *, float))(Il2CppBase() + 0x31C9C00))(0, temperature);
	}
	template <typename T = uintptr_t> static T TemperatureToRGBfixed(float kelvin) {
		return ((T (*)(void *, float))(Il2CppBase() + 0x31C9CE0))(0, kelvin);
	}
	template <typename T = float> T GetIndirectLightingIntensity() {
		return ((T (*)(JadeSnakeLightBase*))(Il2CppBase() + 0x31C9D14))(this);
	}
	template <typename T = void> T SetIndirectLightingIntensity(float intensity) {
		return ((T (*)(JadeSnakeLightBase*, float))(Il2CppBase() + 0x31C9D2C))(this, intensity);
	}

};

}
