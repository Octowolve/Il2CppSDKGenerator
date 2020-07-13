#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine.EventSystems {

class IPointerExitHandler
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.UI.dll", "UnityEngine.EventSystems", "IPointerExitHandler"));
	}


	template <typename T = void> T OnPointerExit(uintptr_t eventData) {
		return ((T (*)(IPointerExitHandler*, uintptr_t))(Il2CppBase() + 0x0))(this, eventData);
	}

};

}
