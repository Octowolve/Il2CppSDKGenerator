#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine.UI {

class Outline
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.UI.dll", "UnityEngine.UI", "Outline"));
	}


	template <typename T = void> T ModifyMesh(uintptr_t vh) {
		return ((T (*)(Outline*, uintptr_t))(Il2CppBase() + 0x3D397B0))(this, vh);
	}

};

}
