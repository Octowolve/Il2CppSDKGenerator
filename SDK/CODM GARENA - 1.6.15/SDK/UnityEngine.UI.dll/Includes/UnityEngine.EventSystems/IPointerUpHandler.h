#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine.EventSystems {

class IPointerUpHandler
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.UI.dll", "UnityEngine.EventSystems", "IPointerUpHandler"));
	}


	template <typename T = void> T OnPointerUp(uintptr_t eventData) {
		return ((T (*)(IPointerUpHandler*, uintptr_t))(Il2CppBase() + 0x0))(this, eventData);
	}

};

}
