#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace JadeSnakeRenderer {

class JsSpotLight
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "JadeSnakeRenderer", "JsSpotLight"));
	}

	template <typename T = float> T& radius() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = float> T& range() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = float> T& photometryIntensity() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = float> T& spotAngle() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = float> T& falloffAngle() {
		return *(T*)((uintptr_t)this + 0x48);
	}

	template <typename T = float> T GetColorCompensationCoef() {
		return ((T (*)(JsSpotLight*))(Il2CppBase() + 0x31CB0B0))(this);
	}
	template <typename T = float> T LumenToPhotometryIntensity(float lumen) {
		return ((T (*)(JsSpotLight*, float))(Il2CppBase() + 0x31CB1EC))(this, lumen);
	}
	template <typename T = float> T SpotLightEffeciency() {
		return ((T (*)(JsSpotLight*))(Il2CppBase() + 0x31CB248))(this);
	}
	template <typename T = float> T SpotLightSolidAngleIntegral() {
		return ((T (*)(JsSpotLight*))(Il2CppBase() + 0x31CB264))(this);
	}
	template <typename T = float> T GetTotalPhotometryPower() {
		return ((T (*)(JsSpotLight*))(Il2CppBase() + 0x31CB340))(this);
	}
	template <typename T = float> T GetRuntimeIntensityFromPhotometry(float photometryMultiplier) {
		return ((T (*)(JsSpotLight*, float))(Il2CppBase() + 0x31CB390))(this, photometryMultiplier);
	}
	template <typename T = void> T CheckNumericalConstrain() {
		return ((T (*)(JsSpotLight*))(Il2CppBase() + 0x31CB3A4))(this);
	}

};

}
