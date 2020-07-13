#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine.EventSystems {

class IUpdateSelectedHandler
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.UI.dll", "UnityEngine.EventSystems", "IUpdateSelectedHandler"));
	}


	template <typename T = void> T OnUpdateSelected(uintptr_t eventData) {
		return ((T (*)(IUpdateSelectedHandler*, uintptr_t))(Il2CppBase() + 0x0))(this, eventData);
	}

};

}
