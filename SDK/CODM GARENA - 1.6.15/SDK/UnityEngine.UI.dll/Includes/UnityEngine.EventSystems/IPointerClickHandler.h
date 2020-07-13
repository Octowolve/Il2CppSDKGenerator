#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine.EventSystems {

class IPointerClickHandler
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.UI.dll", "UnityEngine.EventSystems", "IPointerClickHandler"));
	}


	template <typename T = void> T OnPointerClick(uintptr_t eventData) {
		return ((T (*)(IPointerClickHandler*, uintptr_t))(Il2CppBase() + 0x0))(this, eventData);
	}

};

}
