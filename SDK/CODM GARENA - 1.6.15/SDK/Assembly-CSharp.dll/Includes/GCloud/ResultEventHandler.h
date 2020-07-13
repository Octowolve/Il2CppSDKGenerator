#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GCloud {

class ResultEventHandler
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GCloud", "ResultEventHandler"));
	}


	template <typename T = void> T Invoke(uintptr_t result) {
		return ((T (*)(ResultEventHandler*, uintptr_t))(Il2CppBase() + 0x44391C4))(this, result);
	}
	template <typename T = uintptr_t> T BeginInvoke(uintptr_t result, uintptr_t callback, uintptr_t object) {
		return ((T (*)(ResultEventHandler*, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x443925C))(this, result, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(ResultEventHandler*, uintptr_t))(Il2CppBase() + 0x4439288))(this, result);
	}

};

}
