#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GCloud.LockStep {

class ReadyEventHandler
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GCloud.LockStep", "ReadyEventHandler"));
	}


	template <typename T = void> T Invoke(uintptr_t result) {
		return ((T (*)(ReadyEventHandler*, uintptr_t))(Il2CppBase() + 0x46B0270))(this, result);
	}
	template <typename T = uintptr_t> T BeginInvoke(uintptr_t result, uintptr_t callback, uintptr_t object) {
		return ((T (*)(ReadyEventHandler*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x46B1EB0))(this, result, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(ReadyEventHandler*, uintptr_t))(Il2CppBase() + 0x46B1EDC))(this, result);
	}

};

}
