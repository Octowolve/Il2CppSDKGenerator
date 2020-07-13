#pragma once
#include <Il2Cpp/Il2Cpp.h>

class OnGetNewVersionInfoFunc
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "OnGetNewVersionInfoFunc"));
	}


	template <typename T = unsigned char> T Invoke(uintptr_t callback, uintptr_t newVersionInfo) {
		return ((T (*)(OnGetNewVersionInfoFunc*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4990ADC))(this, callback, newVersionInfo);
	}
	template <typename T = uintptr_t> T BeginInvoke(uintptr_t callback, uintptr_t newVersionInfo, uintptr_t _callback, uintptr_t object) {
		return ((T (*)(OnGetNewVersionInfoFunc*, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x4990B68))(this, callback, newVersionInfo, _callback, object);
	}
	template <typename T = unsigned char> T EndInvoke(uintptr_t result) {
		return ((T (*)(OnGetNewVersionInfoFunc*, uintptr_t))(Il2CppBase() + 0x4990C3C))(this, result);
	}

};

}
