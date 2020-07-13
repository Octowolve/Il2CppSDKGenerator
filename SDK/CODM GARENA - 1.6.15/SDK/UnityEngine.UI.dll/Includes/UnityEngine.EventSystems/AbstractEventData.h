#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine.EventSystems {

class AbstractEventData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.UI.dll", "UnityEngine.EventSystems", "AbstractEventData"));
	}

	template <typename T = bool> T& m_Used() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = void> T Reset() {
		return ((T (*)(AbstractEventData*))(Il2CppBase() + 0x3CF9A98))(this);
	}
	template <typename T = void> T Use() {
		return ((T (*)(AbstractEventData*))(Il2CppBase() + 0x3CF9AA4))(this);
	}
	template <typename T = bool> T get_used() {
		return ((T (*)(AbstractEventData*))(Il2CppBase() + 0x3CF9AB0))(this);
	}

};

}
