#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace HoudiniEngineUnity {

class HEUMeshData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp-firstpass.dll", "HoudiniEngineUnity", "HEU_MeshData"));
	}

	template <typename T = Il2CppList<int32_t>*> T& _indices() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppList<Il2CppVector3>*> T& _vertices() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _colors() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppList<Il2CppVector3>*> T& _normals() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _tangents() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppList<Il2CppVector2>*> T& _UVs() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppList<Il2CppVector2>*> T& _UV2s() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppList<Il2CppVector2>*> T& _UV3s() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppList<Il2CppVector3>*> T& _triangleNormals() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppDictionary<int32_t, int32_t>*> T& _pointIndexToMeshIndexMap() {
		return *(T*)((uintptr_t)this + 0x2C);
	}


};

}
