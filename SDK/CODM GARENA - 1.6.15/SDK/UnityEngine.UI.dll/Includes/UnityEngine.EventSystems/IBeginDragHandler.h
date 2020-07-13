#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine.EventSystems {

class IBeginDragHandler
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.UI.dll", "UnityEngine.EventSystems", "IBeginDragHandler"));
	}


	template <typename T = void> T OnBeginDrag(uintptr_t eventData) {
		return ((T (*)(IBeginDragHandler*, uintptr_t))(Il2CppBase() + 0x0))(this, eventData);
	}

};

}
