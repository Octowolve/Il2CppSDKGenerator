#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GCloud {

class QueueFinishedHandler
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GCloud", "QueueFinishedHandler"));
	}


	template <typename T = void> T Invoke(uintptr_t result, uintptr_t info) {
		return ((T (*)(QueueFinishedHandler*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4434C38))(this, result, info);
	}
	template <typename T = uintptr_t> T BeginInvoke(uintptr_t result, uintptr_t info, uintptr_t callback, uintptr_t object) {
		return ((T (*)(QueueFinishedHandler*, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x4434CFC))(this, result, info, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(QueueFinishedHandler*, uintptr_t))(Il2CppBase() + 0x4434D34))(this, result);
	}

};

}
