#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace JadeSnakeRenderer {

class JsSphericalLight
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "JadeSnakeRenderer", "JsSphericalLight"));
	}

	template <typename T = float> T& radius() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = float> T& photometryIntensity() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = float> T& range() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& iesFile() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> T& m_iesConfig() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = bool> T& useIesPhotometryIntensity() {
		return *(T*)((uintptr_t)this + 0x4C);
	}

	template <typename T = float> T GetIesEfficiency() {
		return ((T (*)(JsSphericalLight*))(Il2CppBase() + 0x31CAB08))(this);
	}
	template <typename T = void> T SetIesFile(uintptr_t iesFileObject) {
		return ((T (*)(JsSphericalLight*, uintptr_t))(Il2CppBase() + 0x31CABBC))(this, iesFileObject);
	}
	template <typename T = uintptr_t> static T CreateIesConfig(uintptr_t iesFileObject) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x31CAC7C))(0, iesFileObject);
	}
	template <typename T = float> T ApplyPhotometryIntensityFromIesFile() {
		return ((T (*)(JsSphericalLight*))(Il2CppBase() + 0x31CAC84))(this);
	}
	template <typename T = float> T GetColorCompensationCoef() {
		return ((T (*)(JsSphericalLight*))(Il2CppBase() + 0x31CAD88))(this);
	}
	template <typename T = float> T GetTotalPhotometryPower(bool applyColorCompensation) {
		return ((T (*)(JsSphericalLight*, bool))(Il2CppBase() + 0x31CAEC4))(this, applyColorCompensation);
	}
	template <typename T = float> T LumenToPhotometryIntensity(float lumen, bool applyColorCompensation) {
		return ((T (*)(JsSphericalLight*, float, bool))(Il2CppBase() + 0x31CAF18))(this, lumen, applyColorCompensation);
	}
	template <typename T = float> T GetRuntimeIntensityFromPhotometry(float photometryMultiplier) {
		return ((T (*)(JsSphericalLight*, float))(Il2CppBase() + 0x31CAF5C))(this, photometryMultiplier);
	}
	template <typename T = void> T CheckNumericalConstrain() {
		return ((T (*)(JsSphericalLight*))(Il2CppBase() + 0x31CAF70))(this);
	}

};

}
