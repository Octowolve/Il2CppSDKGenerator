#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine.EventSystems {

class ISubmitHandler
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.UI.dll", "UnityEngine.EventSystems", "ISubmitHandler"));
	}


	template <typename T = void> T OnSubmit(uintptr_t eventData) {
		return ((T (*)(ISubmitHandler*, uintptr_t))(Il2CppBase() + 0x0))(this, eventData);
	}

};

}
