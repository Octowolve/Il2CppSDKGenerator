#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine.EventSystems {

class ICancelHandler
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.UI.dll", "UnityEngine.EventSystems", "ICancelHandler"));
	}


	template <typename T = void> T OnCancel(uintptr_t eventData) {
		return ((T (*)(ICancelHandler*, uintptr_t))(Il2CppBase() + 0x0))(this, eventData);
	}

};

}
