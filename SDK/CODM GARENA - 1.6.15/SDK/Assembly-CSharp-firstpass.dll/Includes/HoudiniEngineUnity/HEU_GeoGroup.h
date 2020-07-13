#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HoudiniEngineUnity {

class HEUGeoGroup
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp-firstpass.dll", "HoudiniEngineUnity", "HEU_GeoGroup"));
	}

	template <typename T = Il2CppString*> T& _groupName() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppDictionary<int32_t, uintptr_t>*> T& _subMeshesMap() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _sharedNormalIndices() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = int32_t> T CompareTo(uintptr_t other) {
		return ((T (*)(HEUGeoGroup*, uintptr_t))(Il2CppBase() + 0x2BA1B80))(this, other);
	}
	template <typename T = void> T SetupNormalIndices(int32_t indicesCount) {
		return ((T (*)(HEUGeoGroup*, int32_t))(Il2CppBase() + 0x2BA1BBC))(this, indicesCount);
	}

};

}
