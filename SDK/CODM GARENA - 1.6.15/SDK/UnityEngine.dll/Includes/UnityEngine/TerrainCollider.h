#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine {

class TerrainCollider
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngine", "TerrainCollider"));
	}


	template <typename T = uintptr_t> T get_terrainData() {
		return ((T (*)(TerrainCollider*))(Il2CppBase() + 0x4D26B10))(this);
	}
	template <typename T = void> T set_terrainData(uintptr_t value) {
		return ((T (*)(TerrainCollider*, uintptr_t))(Il2CppBase() + 0x4D26BA8))(this, value);
	}

};

}
