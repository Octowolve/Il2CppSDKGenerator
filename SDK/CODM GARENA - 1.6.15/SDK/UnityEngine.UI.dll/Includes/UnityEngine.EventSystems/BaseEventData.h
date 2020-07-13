#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine.EventSystems {

class BaseEventData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.UI.dll", "UnityEngine.EventSystems", "BaseEventData"));
	}

	template <typename T = uintptr_t> T& m_EventSystem() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = void> T set_selectedObject(uintptr_t value) {
		return ((T (*)(BaseEventData*, uintptr_t))(Il2CppBase() + 0x3CF9B3C))(this, value);
	}

};

}
