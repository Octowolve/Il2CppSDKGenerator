#pragma once
#include <Il2Cpp/Il2Cpp.h>

class EventCallBackFun
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "EventCallBackFun"));
	}


	template <typename T = void> T Invoke() {
		return ((T (*)(EventCallBackFun*))(Il2CppBase() + 0x2E95A58))(this);
	}
	template <typename T = uintptr_t> T BeginInvoke(uintptr_t callback, uintptr_t object) {
		return ((T (*)(EventCallBackFun*, uintptr_t, uintptr_t))(Il2CppBase() + 0x2E973A8))(this, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(EventCallBackFun*, uintptr_t))(Il2CppBase() + 0x2E973D4))(this, result);
	}

};

}
