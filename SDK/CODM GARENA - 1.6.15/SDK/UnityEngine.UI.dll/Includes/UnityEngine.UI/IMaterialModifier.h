#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine.UI {

class IMaterialModifier
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.UI.dll", "UnityEngine.UI", "IMaterialModifier"));
	}


	template <typename T = uintptr_t> T GetModifiedMaterial(uintptr_t baseMaterial) {
		return ((T (*)(IMaterialModifier*, uintptr_t))(Il2CppBase() + 0x0))(this, baseMaterial);
	}

};

}
