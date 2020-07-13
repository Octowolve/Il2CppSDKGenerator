#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine.UI {

class IMeshModifier
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.UI.dll", "UnityEngine.UI", "IMeshModifier"));
	}


	template <typename T = void> T ModifyMesh(uintptr_t mesh) {
		return ((T (*)(IMeshModifier*, uintptr_t))(Il2CppBase() + 0x0))(this, mesh);
	}
	template <typename T = void> T ModifyMesh_1(uintptr_t verts) {
		return ((T (*)(IMeshModifier*, uintptr_t))(Il2CppBase() + 0x0))(this, verts);
	}

};

}
