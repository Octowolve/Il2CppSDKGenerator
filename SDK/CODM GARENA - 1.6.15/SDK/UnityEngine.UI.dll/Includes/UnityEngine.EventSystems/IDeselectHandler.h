#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine.EventSystems {

class IDeselectHandler
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.UI.dll", "UnityEngine.EventSystems", "IDeselectHandler"));
	}


	template <typename T = void> T OnDeselect(uintptr_t eventData) {
		return ((T (*)(IDeselectHandler*, uintptr_t))(Il2CppBase() + 0x0))(this, eventData);
	}

};

}
