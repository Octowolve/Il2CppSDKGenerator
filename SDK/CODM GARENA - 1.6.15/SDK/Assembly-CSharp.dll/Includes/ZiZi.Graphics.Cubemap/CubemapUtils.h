#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ZiZi.Graphics.Cubemap {

class CubemapUtils
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ZiZi.Graphics.Cubemap", "CubemapUtils"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Capture6SideCubemapToRenderTexture() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CubemapUv2Dir() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = void> static T Capture6SideCubemapToRenderTexture(uintptr_t cam, uintptr_t renderTexture) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x4DD6CF0))(0, cam, renderTexture);
	}
	template <typename T = void> static T CubemapUv2Dir(Il2CppVector2 _uv, uintptr_t _face, uintptr_t* result) {
		return ((T (*)(void *, Il2CppVector2, uintptr_t, uintptr_t*))(Il2CppBase() + 0x4DD7338))(0, _uv, _face, result);
	}

};

}
