#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine.EventSystems {

class IDropHandler
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.UI.dll", "UnityEngine.EventSystems", "IDropHandler"));
	}


	template <typename T = void> T OnDrop(uintptr_t eventData) {
		return ((T (*)(IDropHandler*, uintptr_t))(Il2CppBase() + 0x0))(this, eventData);
	}

};

}
