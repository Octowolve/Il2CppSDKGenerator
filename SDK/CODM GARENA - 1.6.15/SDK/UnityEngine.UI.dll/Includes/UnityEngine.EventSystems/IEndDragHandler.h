#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine.EventSystems {

class IEndDragHandler
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.UI.dll", "UnityEngine.EventSystems", "IEndDragHandler"));
	}


	template <typename T = void> T OnEndDrag(uintptr_t eventData) {
		return ((T (*)(IEndDragHandler*, uintptr_t))(Il2CppBase() + 0x0))(this, eventData);
	}

};

}
