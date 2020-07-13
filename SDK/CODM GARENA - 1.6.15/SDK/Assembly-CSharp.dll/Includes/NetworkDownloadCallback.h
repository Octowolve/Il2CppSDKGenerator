#pragma once
#include <Il2Cpp/Il2Cpp.h>

class NetworkDownloadCallback
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "NetworkDownloadCallback"));
	}


	template <typename T = void> T Invoke(Il2CppString* url, bool isSuccess, uintptr_t delivery) {
		return ((T (*)(NetworkDownloadCallback*, Il2CppString*, bool, uintptr_t))(Il2CppBase() + 0x48DB148))(this, url, isSuccess, delivery);
	}
	template <typename T = uintptr_t> T BeginInvoke(Il2CppString* url, bool isSuccess, uintptr_t delivery, uintptr_t callback, uintptr_t object) {
		return ((T (*)(NetworkDownloadCallback*, Il2CppString*, bool, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x48DB224))(this, url, isSuccess, delivery, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(NetworkDownloadCallback*, uintptr_t))(Il2CppBase() + 0x48DB2EC))(this, result);
	}

};

}
