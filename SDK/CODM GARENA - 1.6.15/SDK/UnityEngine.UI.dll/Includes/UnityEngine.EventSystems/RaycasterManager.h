#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine.EventSystems {

class RaycasterManager
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.UI.dll", "UnityEngine.EventSystems", "RaycasterManager"));
	}

	template <typename T = Il2CppList<uintptr_t>*> static T& s_Raycasters() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = void> static T AddRaycaster(uintptr_t baseRaycaster) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3CFC640))(0, baseRaycaster);
	}
	template <typename T = Il2CppList<uintptr_t>*> static T GetRaycasters() {
		return ((T (*)(void *))(Il2CppBase() + 0x3CFD56C))(0);
	}
	template <typename T = void> static T RemoveRaycasters(uintptr_t baseRaycaster) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x3CFC84C))(0, baseRaycaster);
	}

};

}
