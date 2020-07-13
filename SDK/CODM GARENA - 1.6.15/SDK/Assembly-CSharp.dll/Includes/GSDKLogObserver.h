#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GSDKLogObserver
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GSDKLogObserver"));
	}


	template <typename T = void> T Invoke(int32_t errCode, Il2CppString* errMsg, Il2CppString* extMsg) {
		return ((T (*)(GSDKLogObserver*, int32_t, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x2D2EEA8))(this, errCode, errMsg, extMsg);
	}
	template <typename T = uintptr_t> T BeginInvoke(int32_t errCode, Il2CppString* errMsg, Il2CppString* extMsg, uintptr_t callback, uintptr_t object) {
		return ((T (*)(GSDKLogObserver*, int32_t, Il2CppString*, Il2CppString*, uintptr_t, uintptr_t))(Il2CppBase() + 0x2D324A4))(this, errCode, errMsg, extMsg, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(GSDKLogObserver*, uintptr_t))(Il2CppBase() + 0x2D32568))(this, result);
	}

};

}
