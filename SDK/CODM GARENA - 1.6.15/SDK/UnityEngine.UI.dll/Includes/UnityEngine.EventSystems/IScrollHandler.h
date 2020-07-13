#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine.EventSystems {

class IScrollHandler
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.UI.dll", "UnityEngine.EventSystems", "IScrollHandler"));
	}


	template <typename T = void> T OnScroll(uintptr_t eventData) {
		return ((T (*)(IScrollHandler*, uintptr_t))(Il2CppBase() + 0x0))(this, eventData);
	}

};

}
