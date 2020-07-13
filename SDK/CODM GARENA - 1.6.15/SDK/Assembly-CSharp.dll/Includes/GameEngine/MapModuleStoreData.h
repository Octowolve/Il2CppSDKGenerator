#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class MapModuleStoreData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "MapModuleStoreData"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& MapModules() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = void> T Serialize(uintptr_t bw) {
		return ((T (*)(MapModuleStoreData*, uintptr_t))(Il2CppBase() + 0x4AA5CA8))(this, bw);
	}
	template <typename T = void> T Deserialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(MapModuleStoreData*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x4AA5D44))(this, bytes, position);
	}

};

}
