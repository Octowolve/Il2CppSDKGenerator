#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GCloud {

class RecvedDataEventHandler
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GCloud", "RecvedDataEventHandler"));
	}


	template <typename T = void> T Invoke() {
		return ((T (*)(RecvedDataEventHandler*))(Il2CppBase() + 0x4436DE4))(this);
	}
	template <typename T = uintptr_t> T BeginInvoke(uintptr_t callback, uintptr_t object) {
		return ((T (*)(RecvedDataEventHandler*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4436E74))(this, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(RecvedDataEventHandler*, uintptr_t))(Il2CppBase() + 0x4436EA0))(this, result);
	}

};

}
