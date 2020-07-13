#pragma once
#include <Il2Cpp/Il2Cpp.h>

class MeshExtension
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MeshExtension"));
	}

	template <typename T = uintptr_t> static T& __Hotfix0_ExtractSubmesh() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = uintptr_t> static T ExtractSubmesh(uintptr_t aMesh, int32_t aSubMeshIndex) {
		return ((T (*)(void *, uintptr_t, int32_t))(Il2CppBase() + 0x41CDDB4))(0, aMesh, aSubMeshIndex);
	}

};

}
