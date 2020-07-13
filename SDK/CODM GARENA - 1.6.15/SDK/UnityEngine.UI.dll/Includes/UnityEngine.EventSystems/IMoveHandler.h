#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine.EventSystems {

class IMoveHandler
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.UI.dll", "UnityEngine.EventSystems", "IMoveHandler"));
	}


	template <typename T = void> T OnMove(uintptr_t eventData) {
		return ((T (*)(IMoveHandler*, uintptr_t))(Il2CppBase() + 0x0))(this, eventData);
	}

};

}
