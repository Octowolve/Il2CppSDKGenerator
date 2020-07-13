#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine.EventSystems {

class Physics2DRaycaster
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.UI.dll", "UnityEngine.EventSystems", "Physics2DRaycaster"));
	}


	template <typename T = void> T Raycast(uintptr_t eventData, Il2CppList<uintptr_t>* resultAppendList) {
		return ((T (*)(Physics2DRaycaster*, uintptr_t, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x3D01454))(this, eventData, resultAppendList);
	}

};

}
