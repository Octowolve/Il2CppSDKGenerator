#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace JadeSnakeRenderer {

class GPUBakeInspectorData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "JadeSnakeRenderer", "GPUBakeInspectorData"));
	}

	template <typename T = float> static T& defaultPhotometryToRuntimeScale() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& currentScene() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> T& shouldBakeGlobalBakingGroup() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& globalBakingGroupSettings() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& bakingGroups() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = bool> T& UseIrradianceCaching() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& RecalculateUV() {
		return *(T*)((uintptr_t)this + 0x19);
	}
	template <typename T = bool> T& FastBake() {
		return *(T*)((uintptr_t)this + 0x1A);
	}
	template <typename T = bool> T& OnlyBlurShadowmask() {
		return *(T*)((uintptr_t)this + 0x1B);
	}
	template <typename T = float> T& ShadowmaskSoftAngle() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = float> T& photometryToRuntimeScale() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& BlurSize() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> T& DilateSize() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& BackgroundColor() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = float> T& AlbedoBoost() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = bool> T& mergeIrradianceAndShadowmask() {
		return *(T*)((uintptr_t)this + 0x40);
	}


};

}
