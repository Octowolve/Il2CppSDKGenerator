#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine {

class GUILayer
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngine", "GUILayer"));
	}


	template <typename T = uintptr_t> T HitTest(Il2CppVector3 screenPosition) {
		return ((T (*)(GUILayer*, Il2CppVector3))(Il2CppBase() + 0x478CC78))(this, screenPosition);
	}
	template <typename T = uintptr_t> static T INTERNAL_CALL_HitTest(uintptr_t self, uintptr_t screenPosition) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x478CC9C))(0, self, screenPosition);
	}

};

}
