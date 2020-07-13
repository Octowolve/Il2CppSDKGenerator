#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace CatlikeCoding.SDFToolkit {

class SDFTextureGenerator
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "CatlikeCoding.SDFToolkit", "SDFTextureGenerator"));
	}

	template <typename T = int32_t> static T& width() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& height() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& pixels() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Generate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ComputeEdgeGradients() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ApproximateEdgeDelta() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateDistance() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GenerateDistanceTransform() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PostProcess() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}

	template <typename T = void> static T Generate(uintptr_t source, uintptr_t destination, float maxInside, float maxOutside, float postProcessDistance, uintptr_t rgbMode) {
		return ((T (*)(void *, uintptr_t, uintptr_t, float, float, float, uintptr_t))(Il2CppBase() + 0x1D19A18))(0, source, destination, maxInside, maxOutside, postProcessDistance, rgbMode);
	}
	template <typename T = void> static T ComputeEdgeGradients() {
		return ((T (*)(void *))(Il2CppBase() + 0x1D1A62C))(0);
	}
	template <typename T = float> static T ApproximateEdgeDelta(float gx, float gy, float a) {
		return ((T (*)(void *, float, float, float))(Il2CppBase() + 0x1D1B8E4))(0, gx, gy, a);
	}
	template <typename T = void> static T UpdateDistance(uintptr_t p, int32_t x, int32_t y, int32_t oX, int32_t oY) {
		return ((T (*)(void *, uintptr_t, int32_t, int32_t, int32_t, int32_t))(Il2CppBase() + 0x1D1BB64))(0, p, x, y, oX, oY);
	}
	template <typename T = void> static T GenerateDistanceTransform() {
		return ((T (*)(void *))(Il2CppBase() + 0x1D1AC50))(0);
	}
	template <typename T = void> static T PostProcess(float maxDistance) {
		return ((T (*)(void *, float))(Il2CppBase() + 0x1D1B544))(0, maxDistance);
	}

};

}
