#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace JadeSnakeRenderer {

class JsAreaLight
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "JadeSnakeRenderer", "JsAreaLight"));
	}

	template <typename T = float> T& width() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = float> T& height() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = float> T& range() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = float> T& photometryIntensity() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> T& filterTexture() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = bool> T& doubleSideEmit() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uintptr_t> T& mat() {
		return *(T*)((uintptr_t)this + 0x50);
	}

	template <typename T = float> T GetColorCompensationCoef() {
		return ((T (*)(JsAreaLight*))(Il2CppBase() + 0x31CA138))(this);
	}
	template <typename T = float> T Area() {
		return ((T (*)(JsAreaLight*))(Il2CppBase() + 0x31CA274))(this);
	}
	template <typename T = float> T GetTotalPhotometryPower(bool appluColorCompensation) {
		return ((T (*)(JsAreaLight*, bool))(Il2CppBase() + 0x31CA288))(this, appluColorCompensation);
	}
	template <typename T = float> T LumenToPhotometryIntensity(float lumen, bool applyColorCompensation) {
		return ((T (*)(JsAreaLight*, float, bool))(Il2CppBase() + 0x31CA2DC))(this, lumen, applyColorCompensation);
	}
	template <typename T = float> T GetRuntimeIntensityFromPhotometry(float photometryMultiplier) {
		return ((T (*)(JsAreaLight*, float))(Il2CppBase() + 0x31CA3DC))(this, photometryMultiplier);
	}
	template <typename T = void> T CheckNumericalConstrain() {
		return ((T (*)(JsAreaLight*))(Il2CppBase() + 0x31CA3F0))(this);
	}

};

}
