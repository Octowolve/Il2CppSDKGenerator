#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine.EventSystems {

class IPointerEnterHandler
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.UI.dll", "UnityEngine.EventSystems", "IPointerEnterHandler"));
	}


	template <typename T = void> T OnPointerEnter(uintptr_t eventData) {
		return ((T (*)(IPointerEnterHandler*, uintptr_t))(Il2CppBase() + 0x0))(this, eventData);
	}

};

}
