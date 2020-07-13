#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine.EventSystems {

class IDragHandler
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.UI.dll", "UnityEngine.EventSystems", "IDragHandler"));
	}


	template <typename T = void> T OnDrag(uintptr_t eventData) {
		return ((T (*)(IDragHandler*, uintptr_t))(Il2CppBase() + 0x0))(this, eventData);
	}

};

}
