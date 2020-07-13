#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine.EventSystems {

class IInitializePotentialDragHandler
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.UI.dll", "UnityEngine.EventSystems", "IInitializePotentialDragHandler"));
	}


	template <typename T = void> T OnInitializePotentialDrag(uintptr_t eventData) {
		return ((T (*)(IInitializePotentialDragHandler*, uintptr_t))(Il2CppBase() + 0x0))(this, eventData);
	}

};

}
