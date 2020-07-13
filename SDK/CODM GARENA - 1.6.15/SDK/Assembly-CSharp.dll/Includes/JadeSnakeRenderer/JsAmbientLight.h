#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace JadeSnakeRenderer {

class JsAmbientLight
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "JadeSnakeRenderer", "JsAmbientLight"));
	}

	template <typename T = uintptr_t> T& mode() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& cubemap() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = int32_t> T& cubemapModifiedTimeHash() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& cubemapShSerialzied() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> T& topColor() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& equaterColor() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& groundColor() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = float> T& photometryIntensity() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = float> T& topColorPhotometryMultiplier() {
		return *(T*)((uintptr_t)this + 0x7C);
	}
	template <typename T = float> T& equaterColorPhotometryMultiplier() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = float> T& groundColorPhotometryMultiplier() {
		return *(T*)((uintptr_t)this + 0x84);
	}
	template <typename T = bool> T& onlyUseUpperSky() {
		return *(T*)((uintptr_t)this + 0x88);
	}

	template <typename T = float> T GetRuntimeIntensityFromPhotometry(float photometryMultiplier) {
		return ((T (*)(JsAmbientLight*, float))(Il2CppBase() + 0x31CA060))(this, photometryMultiplier);
	}
	template <typename T = void> T CheckNumericalConstrain() {
		return ((T (*)(JsAmbientLight*))(Il2CppBase() + 0x31CA074))(this);
	}

};

}
