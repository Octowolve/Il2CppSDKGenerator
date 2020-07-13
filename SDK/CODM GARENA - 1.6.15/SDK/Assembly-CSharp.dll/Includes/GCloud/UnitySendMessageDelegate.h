#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GCloud {

class UnitySendMessageDelegate
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GCloud", "UnitySendMessageDelegate"));
	}


	template <typename T = void> T Invoke(uintptr_t obj, uintptr_t method, uintptr_t msg) {
		return ((T (*)(UnitySendMessageDelegate*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x4444340))(this, obj, method, msg);
	}
	template <typename T = uintptr_t> T BeginInvoke(uintptr_t obj, uintptr_t method, uintptr_t msg, uintptr_t callback, uintptr_t object) {
		return ((T (*)(UnitySendMessageDelegate*, uintptr_t, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x44443E8))(this, obj, method, msg, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(UnitySendMessageDelegate*, uintptr_t))(Il2CppBase() + 0x44444CC))(this, result);
	}

};

}
