#pragma once
#include <Il2Cpp/Il2Cpp.h>

class HEUUploadMeshData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp-firstpass.dll", "", "HEU_UploadMeshData"));
	}

	template <typename T = uintptr_t> T& _mesh() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _materials() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppString*> T& _meshPath() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& _meshName() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& _numVertices() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& _numSubMeshes() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _indexStart() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _indexCount() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = float> T& _LODScreenTransition() {
		return *(T*)((uintptr_t)this + 0x28);
	}


};

}
