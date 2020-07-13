#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine.UI {

class Misc
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.UI.dll", "UnityEngine.UI", "Misc"));
	}


	template <typename T = void> static T DestroyImmediate(uintptr_t obj) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3D392A8))(0, obj);
	}

};

}
