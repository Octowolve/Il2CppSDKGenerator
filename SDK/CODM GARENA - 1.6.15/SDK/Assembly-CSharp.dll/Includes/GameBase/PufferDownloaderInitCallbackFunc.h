#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class PufferDownloaderInitCallbackFunc
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "PufferDownloaderInitCallbackFunc"));
	}


	template <typename T = void> T Invoke(bool success, uint32_t errorCode) {
		return ((T (*)(PufferDownloaderInitCallbackFunc*, bool, uint32_t))(Il2CppBase() + 0x2DC3890))(this, success, errorCode);
	}
	template <typename T = uintptr_t> T BeginInvoke(bool success, uint32_t errorCode, uintptr_t callback, uintptr_t object) {
		return ((T (*)(PufferDownloaderInitCallbackFunc*, bool, uint32_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x2DC66C4))(this, success, errorCode, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(PufferDownloaderInitCallbackFunc*, uintptr_t))(Il2CppBase() + 0x2DC67A4))(this, result);
	}

};

}
