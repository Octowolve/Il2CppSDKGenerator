#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class CircleGrayscale
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "CircleGrayscale"));
	}

	template <typename T = uintptr_t> T& m_Material() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRenderImage() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnDestroy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = uintptr_t> T get_material() {
		return ((T (*)(CircleGrayscale*))(Il2CppBase() + 0x3DDE784))(this);
	}
	template <typename T = void> T OnRenderImage(uintptr_t sourceTexture, uintptr_t destTexture) {
		return ((T (*)(CircleGrayscale*, uintptr_t, uintptr_t))(Il2CppBase() + 0x3DDE87C))(this, sourceTexture, destTexture);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(CircleGrayscale*))(Il2CppBase() + 0x3DDE998))(this);
	}

};

}
