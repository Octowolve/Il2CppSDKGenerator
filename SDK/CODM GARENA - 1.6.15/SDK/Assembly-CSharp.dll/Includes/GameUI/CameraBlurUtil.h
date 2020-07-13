#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameUI {

class CameraBlurUtil
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameUI", "CameraBlurUtil"));
	}

	template <typename T = float> T& Radius() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = float> T& Factor() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppVector2> T& ScreenSize() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& BlurMaterial() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Start() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetBlurMaterial() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OnRenderImage() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T Start() {
		return ((T (*)(CameraBlurUtil*))(Il2CppBase() + 0x3DDA90C))(this);
	}
	template <typename T = uintptr_t> T GetBlurMaterial() {
		return ((T (*)(CameraBlurUtil*))(Il2CppBase() + 0x3DDAA18))(this);
	}
	template <typename T = void> T OnRenderImage(uintptr_t sourceTexture, uintptr_t destTexture) {
		return ((T (*)(CameraBlurUtil*, uintptr_t, uintptr_t))(Il2CppBase() + 0x3DDAB14))(this, sourceTexture, destTexture);
	}

};

}
