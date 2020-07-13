#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace JadeSnakeRenderer {

class JsDirectionalLight
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "JadeSnakeRenderer", "JsDirectionalLight"));
	}

	template <typename T = float> T& photometryIntensity() {
		return *(T*)((uintptr_t)this + 0x38);
	}

	template <typename T = float> T GetRuntimeIntensityFromPhotometry(float photometryMultiplier) {
		return ((T (*)(JsDirectionalLight*, float))(Il2CppBase() + 0x31CA5A8))(this, photometryMultiplier);
	}
	template <typename T = float> T GetRuntimeIntensity(float photometryMultiplier) {
		return ((T (*)(JsDirectionalLight*, float))(Il2CppBase() + 0x31CA5BC))(this, photometryMultiplier);
	}
	template <typename T = void> T SetAssociateUnityLight() {
		return ((T (*)(JsDirectionalLight*))(Il2CppBase() + 0x31CA5F4))(this);
	}

};

}
