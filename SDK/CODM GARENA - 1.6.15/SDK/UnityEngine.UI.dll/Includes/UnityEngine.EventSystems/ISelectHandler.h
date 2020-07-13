#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine.EventSystems {

class ISelectHandler
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.UI.dll", "UnityEngine.EventSystems", "ISelectHandler"));
	}


	template <typename T = void> T OnSelect(uintptr_t eventData) {
		return ((T (*)(ISelectHandler*, uintptr_t))(Il2CppBase() + 0x0))(this, eventData);
	}

};

}
