#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ReportPlayerHandler
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ReportPlayerHandler"));
	}


	template <typename T = void> T Invoke(uintptr_t nCode, Il2CppString* strInfo) {
		return ((T (*)(ReportPlayerHandler*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x454303C))(this, nCode, strInfo);
	}
	template <typename T = uintptr_t> T BeginInvoke(uintptr_t nCode, Il2CppString* strInfo, uintptr_t callback, uintptr_t object) {
		return ((T (*)(ReportPlayerHandler*, uintptr_t, Il2CppString*, uintptr_t, uintptr_t))(Il2CppBase() + 0x454C17C))(this, nCode, strInfo, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(ReportPlayerHandler*, uintptr_t))(Il2CppBase() + 0x454C240))(this, result);
	}

};

}
