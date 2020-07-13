#pragma once
#include <Il2Cpp/Il2Cpp.h>

class LogCallback
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("UnityEngine.dll", "", "LogCallback"));
	}


	template <typename T = void> T Invoke(Il2CppString* condition, Il2CppString* stackTrace, uintptr_t type) {
		return ((T (*)(LogCallback*, Il2CppString*, Il2CppString*, uintptr_t))(Il2CppBase() + 0x469A1EC))(this, condition, stackTrace, type);
	}
	template <typename T = uintptr_t> T BeginInvoke(Il2CppString* condition, Il2CppString* stackTrace, uintptr_t type, uintptr_t callback, uintptr_t object) {
		return ((T (*)(LogCallback*, Il2CppString*, Il2CppString*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x469AC48))(this, condition, stackTrace, type, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(LogCallback*, uintptr_t))(Il2CppBase() + 0x469AD10))(this, result);
	}

};

}
