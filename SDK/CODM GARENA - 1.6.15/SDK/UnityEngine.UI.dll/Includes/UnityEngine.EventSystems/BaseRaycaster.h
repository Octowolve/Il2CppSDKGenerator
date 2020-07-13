#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine.EventSystems {

class BaseRaycaster
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.UI.dll", "UnityEngine.EventSystems", "BaseRaycaster"));
	}


	template <typename T = void> T Raycast(uintptr_t eventData, Il2CppList<uintptr_t>* resultAppendList) {
		return ((T (*)(BaseRaycaster*, uintptr_t, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x0))(this, eventData, resultAppendList);
	}
	template <typename T = uintptr_t> T get_eventCamera() {
		return ((T (*)(BaseRaycaster*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = int32_t> T get_priority() {
		return ((T (*)(BaseRaycaster*))(Il2CppBase() + 0x3CFC140))(this);
	}
	template <typename T = int32_t> T get_sortOrderPriority() {
		return ((T (*)(BaseRaycaster*))(Il2CppBase() + 0x3CFC148))(this);
	}
	template <typename T = int32_t> T get_renderOrderPriority() {
		return ((T (*)(BaseRaycaster*))(Il2CppBase() + 0x3CFC150))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(BaseRaycaster*))(Il2CppBase() + 0x3CFC158))(this);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(BaseRaycaster*))(Il2CppBase() + 0x3CFC5A0))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(BaseRaycaster*))(Il2CppBase() + 0x3CFC7AC))(this);
	}

};

}
