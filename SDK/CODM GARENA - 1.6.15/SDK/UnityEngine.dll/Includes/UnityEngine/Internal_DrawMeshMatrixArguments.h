#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine {

class InternalDrawMeshMatrixArguments
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngine", "Internal_DrawMeshMatrixArguments"));
	}

	template <typename T = int32_t> T& layer() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = int32_t> T& submeshIndex() {
		return *(T*)((uintptr_t)this + 0x4);
	}
	template <typename T = int32_t> T& passTypeMask() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& matrix() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& castShadows() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = int32_t> T& receiveShadows() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = int32_t> T& reflectionProbeAnchorInstanceID() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = bool> T& useLightProbes() {
		return *(T*)((uintptr_t)this + 0x58);
	}


};

}
