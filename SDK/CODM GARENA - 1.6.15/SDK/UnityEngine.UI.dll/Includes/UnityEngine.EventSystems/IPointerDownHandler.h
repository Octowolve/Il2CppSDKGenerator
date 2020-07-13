#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine.EventSystems {

class IPointerDownHandler
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.UI.dll", "UnityEngine.EventSystems", "IPointerDownHandler"));
	}


	template <typename T = void> T OnPointerDown(uintptr_t eventData) {
		return ((T (*)(IPointerDownHandler*, uintptr_t))(Il2CppBase() + 0x0))(this, eventData);
	}

};

}
