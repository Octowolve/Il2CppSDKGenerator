#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GCloud {

class ActionDelegate
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GCloud", "ActionDelegate"));
	}


	template <typename T = void> T Invoke(uintptr_t result, uintptr_t action) {
		return ((T (*)(ActionDelegate*, uintptr_t, uintptr_t))(Il2CppBase() + 0x2A6CDBC))(this, result, action);
	}
	template <typename T = uintptr_t> T BeginInvoke(uintptr_t result, uintptr_t action, uintptr_t callback, uintptr_t object) {
		return ((T (*)(ActionDelegate*, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x2A6CE80))(this, result, action, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(ActionDelegate*, uintptr_t))(Il2CppBase() + 0x2A6CEB8))(this, result);
	}

};

}
