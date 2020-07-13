#pragma once
#include <Il2Cpp/Il2Cpp.h>

class UpdateUIDelegate
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp-firstpass.dll", "", "UpdateUIDelegate"));
	}


	template <typename T = void> T Invoke() {
		return ((T (*)(UpdateUIDelegate*))(Il2CppBase() + 0x2BB7DC0))(this);
	}
	template <typename T = uintptr_t> T BeginInvoke(uintptr_t callback, uintptr_t object) {
		return ((T (*)(UpdateUIDelegate*, uintptr_t, uintptr_t))(Il2CppBase() + 0x2BD08EC))(this, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(UpdateUIDelegate*, uintptr_t))(Il2CppBase() + 0x2BD0918))(this, result);
	}

};

}
