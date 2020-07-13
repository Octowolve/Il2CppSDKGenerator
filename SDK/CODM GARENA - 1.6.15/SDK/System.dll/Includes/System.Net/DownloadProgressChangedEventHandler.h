#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Net {

class DownloadProgressChangedEventHandler
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.dll", "System.Net", "DownloadProgressChangedEventHandler"));
	}


	template <typename T = void> T Invoke(uintptr_t sender, uintptr_t e) {
		return ((T (*)(DownloadProgressChangedEventHandler*, uintptr_t, uintptr_t))(Il2CppBase() + 0x42C2E08))(this, sender, e);
	}
	template <typename T = uintptr_t> T BeginInvoke(uintptr_t sender, uintptr_t e, uintptr_t callback, uintptr_t object) {
		return ((T (*)(DownloadProgressChangedEventHandler*, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x42C2ECC))(this, sender, e, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(DownloadProgressChangedEventHandler*, uintptr_t))(Il2CppBase() + 0x42C2F04))(this, result);
	}

};

}
