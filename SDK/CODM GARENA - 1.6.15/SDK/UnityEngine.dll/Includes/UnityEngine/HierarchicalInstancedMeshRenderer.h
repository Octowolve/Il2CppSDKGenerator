#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine {

class HierarchicalInstancedMeshRenderer
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngine", "HierarchicalInstancedMeshRenderer"));
	}


	template <typename T = void> T set_preferVertexAttributeInstancing(bool value) {
		return ((T (*)(HierarchicalInstancedMeshRenderer*, bool))(Il2CppBase() + 0x47A1700))(this, value);
	}
	template <typename T = void> T set_forceLODLevel(int32_t value) {
		return ((T (*)(HierarchicalInstancedMeshRenderer*, int32_t))(Il2CppBase() + 0x47A17A0))(this, value);
	}
	template <typename T = void> static T set_instanceDataValueRange(int32_t value) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x47A1840))(0, value);
	}
	template <typename T = void> static T set_enableLowQualitySettings(bool value) {
		return ((T (*)(void *, bool))(Il2CppBase() + 0x47A18D8))(0, value);
	}
	template <typename T = void> static T SetLayerSpecifiedLODBias(int32_t layer, float lodBias) {
		return ((T (*)(void *, int32_t, float))(Il2CppBase() + 0x47A1970))(0, layer, lodBias);
	}

};

}
