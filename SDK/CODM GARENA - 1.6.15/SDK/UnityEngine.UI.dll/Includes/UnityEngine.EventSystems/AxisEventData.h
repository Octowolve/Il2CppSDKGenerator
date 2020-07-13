#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine.EventSystems {

class AxisEventData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.UI.dll", "UnityEngine.EventSystems", "AxisEventData"));
	}

	template <typename T = Il2CppVector2> T& moveVector() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& moveDir() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T set_moveVector(Il2CppVector2 value) {
		return ((T (*)(AxisEventData*, Il2CppVector2))(Il2CppBase() + 0x3CF9B20))(this, value);
	}
	template <typename T = uintptr_t> T get_moveDir() {
		return ((T (*)(AxisEventData*))(Il2CppBase() + 0x3CF9B34))(this);
	}
	template <typename T = void> T set_moveDir(uintptr_t value) {
		return ((T (*)(AxisEventData*, uintptr_t))(Il2CppBase() + 0x3CF9B2C))(this, value);
	}

};

}
