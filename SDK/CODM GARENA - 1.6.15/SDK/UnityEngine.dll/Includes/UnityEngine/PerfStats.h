#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine {

class PerfStats
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngine", "PerfStats"));
	}

	template <typename T = uintptr_t> static T& jc() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = bool> static T get_forceEnable() {
		return ((T (*)(void *))(Il2CppBase() + 0x4AC175C))(0);
	}
	template <typename T = int32_t> static T get_batches() {
		return ((T (*)(void *))(Il2CppBase() + 0x4AC17EC))(0);
	}
	template <typename T = int32_t> static T get_drawCalls() {
		return ((T (*)(void *))(Il2CppBase() + 0x4AC187C))(0);
	}
	template <typename T = int32_t> static T get_dynamicBatchedDrawCalls() {
		return ((T (*)(void *))(Il2CppBase() + 0x4AC190C))(0);
	}
	template <typename T = int32_t> static T get_staticBatchedDrawCalls() {
		return ((T (*)(void *))(Il2CppBase() + 0x4AC199C))(0);
	}
	template <typename T = int32_t> static T get_instancedBatchedDrawCalls() {
		return ((T (*)(void *))(Il2CppBase() + 0x4AC1A2C))(0);
	}
	template <typename T = int32_t> static T get_dynamicBatches() {
		return ((T (*)(void *))(Il2CppBase() + 0x4AC1ABC))(0);
	}
	template <typename T = int32_t> static T get_staticBatches() {
		return ((T (*)(void *))(Il2CppBase() + 0x4AC1B4C))(0);
	}
	template <typename T = int32_t> static T get_instancedBatches() {
		return ((T (*)(void *))(Il2CppBase() + 0x4AC1BDC))(0);
	}
	template <typename T = int32_t> static T get_triangles() {
		return ((T (*)(void *))(Il2CppBase() + 0x4AC1C6C))(0);
	}
	template <typename T = int32_t> static T get_vertices() {
		return ((T (*)(void *))(Il2CppBase() + 0x4AC1CFC))(0);
	}
	template <typename T = float> static T get_frameTime() {
		return ((T (*)(void *))(Il2CppBase() + 0x4AC1D8C))(0);
	}
	template <typename T = float> static T get_renderTime() {
		return ((T (*)(void *))(Il2CppBase() + 0x4AC1E1C))(0);
	}
	template <typename T = int32_t> static T get_usedTextureMemorySize() {
		return ((T (*)(void *))(Il2CppBase() + 0x4AC1EAC))(0);
	}
	template <typename T = int32_t> static T get_usedTextureCount() {
		return ((T (*)(void *))(Il2CppBase() + 0x4AC1F3C))(0);
	}
	template <typename T = int32_t> static T get_visibleSkinnedMeshes() {
		return ((T (*)(void *))(Il2CppBase() + 0x4AC1FCC))(0);
	}
	template <typename T = int32_t> static T get_visibleAnimations() {
		return ((T (*)(void *))(Il2CppBase() + 0x4AC205C))(0);
	}

};

}
