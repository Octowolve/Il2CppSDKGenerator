#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System {

class AsyncCallback
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System", "AsyncCallback"));
	}


	template <typename T = void> T Invoke(uintptr_t ar) {
		return ((T (*)(AsyncCallback*, uintptr_t))(Il2CppBase() + 0x3626A94))(this, ar);
	}
	template <typename T = uintptr_t> T BeginInvoke(uintptr_t ar, uintptr_t callback, uintptr_t object) {
		return ((T (*)(AsyncCallback*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x3626B2C))(this, ar, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(AsyncCallback*, uintptr_t))(Il2CppBase() + 0x3626B58))(this, result);
	}

};

}
