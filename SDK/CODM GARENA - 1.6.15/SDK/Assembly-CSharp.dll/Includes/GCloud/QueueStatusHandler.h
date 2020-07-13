#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GCloud {

class QueueStatusHandler
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GCloud", "QueueStatusHandler"));
	}


	template <typename T = void> T Invoke(uintptr_t result, uintptr_t info) {
		return ((T (*)(QueueStatusHandler*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4436758))(this, result, info);
	}
	template <typename T = uintptr_t> T BeginInvoke(uintptr_t result, uintptr_t info, uintptr_t callback, uintptr_t object) {
		return ((T (*)(QueueStatusHandler*, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x4436AC8))(this, result, info, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(QueueStatusHandler*, uintptr_t))(Il2CppBase() + 0x4436B00))(this, result);
	}

};

}
