#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace UnityEngine {

class AsyncOperation
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "UnityEngine", "AsyncOperation"));
	}

	template <typename T = uintptr_t> T& m_Ptr() {
		return *(T*)((uintptr_t)this + 0x8);
	}

	template <typename T = void> T InternalDestroy() {
		return ((T (*)(AsyncOperation*))(Il2CppBase() + 0x469B99C))(this);
	}
	template <typename T = void> T Finalize() {
		return ((T (*)(AsyncOperation*))(Il2CppBase() + 0x469BA34))(this);
	}
	template <typename T = bool> T get_isDone() {
		return ((T (*)(AsyncOperation*))(Il2CppBase() + 0x469BA98))(this);
	}
	template <typename T = float> T get_progress() {
		return ((T (*)(AsyncOperation*))(Il2CppBase() + 0x469BB30))(this);
	}
	template <typename T = int32_t> T get_priority() {
		return ((T (*)(AsyncOperation*))(Il2CppBase() + 0x469BBC8))(this);
	}
	template <typename T = void> T set_priority(int32_t value) {
		return ((T (*)(AsyncOperation*, int32_t))(Il2CppBase() + 0x469BC60))(this, value);
	}
	template <typename T = bool> T get_allowSceneActivation() {
		return ((T (*)(AsyncOperation*))(Il2CppBase() + 0x469BD00))(this);
	}
	template <typename T = void> T set_allowSceneActivation(bool value) {
		return ((T (*)(AsyncOperation*, bool))(Il2CppBase() + 0x469BD98))(this, value);
	}

};

}
