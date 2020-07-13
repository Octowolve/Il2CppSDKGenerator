#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System {

class Action4
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.Core.dll", "System", "Action`4"));
	}


	template <typename T = void> T Invoke(uintptr_t arg1, uintptr_t arg2, uintptr_t arg3, uintptr_t arg4) {
		return ((T (*)(Action4*, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x50BC614))(this, arg1, arg2, arg3, arg4);
	}
	template <typename T = uintptr_t> T BeginInvoke(uintptr_t arg1, uintptr_t arg2, uintptr_t arg3, uintptr_t arg4, uintptr_t callback, uintptr_t object) {
		return ((T (*)(Action4*, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x50BC6FC))(this, arg1, arg2, arg3, arg4, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(Action4*, uintptr_t))(Il2CppBase() + 0x50BC740))(this, result);
	}

};

}
