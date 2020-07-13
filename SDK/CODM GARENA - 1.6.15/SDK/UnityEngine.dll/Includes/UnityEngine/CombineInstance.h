#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine {

class CombineInstance
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngine", "CombineInstance"));
	}

	template <typename T = int32_t> T& m_MeshInstanceID() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = int32_t> T& m_SubMeshIndex() {
		return *(T*)((uintptr_t)this + 0x4);
	}
	template <typename T = uintptr_t> T& m_Transform() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& m_LightmapScaleOffset() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& m_RealtimeLightmapScaleOffset() {
		return *(T*)((uintptr_t)this + 0x58);
	}

	template <typename T = uintptr_t> T get_mesh() {
		return ((T (*)(CombineInstance*))(Il2CppBase() + 0x4DA0CA0))(this);
	}
	template <typename T = void> T set_mesh(uintptr_t value) {
		return ((T (*)(CombineInstance*, uintptr_t))(Il2CppBase() + 0x4DA0D8C))(this, value);
	}
	template <typename T = void> T set_subMeshIndex(int32_t value) {
		return ((T (*)(CombineInstance*, int32_t))(Il2CppBase() + 0x4DA0D9C))(this, value);
	}
	template <typename T = void> T set_transform(uintptr_t value) {
		return ((T (*)(CombineInstance*, uintptr_t))(Il2CppBase() + 0x4DA0E10))(this, value);
	}

};

}
