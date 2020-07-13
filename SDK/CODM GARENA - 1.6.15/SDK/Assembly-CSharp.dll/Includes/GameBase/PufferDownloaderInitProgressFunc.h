#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class PufferDownloaderInitProgressFunc
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "PufferDownloaderInitProgressFunc"));
	}


	template <typename T = void> T Invoke(uintptr_t stage, uint32_t nowSize, uint32_t totalSize) {
		return ((T (*)(PufferDownloaderInitProgressFunc*, uintptr_t, uint32_t, uint32_t))(Il2CppBase() + 0x2DC3A38))(this, stage, nowSize, totalSize);
	}
	template <typename T = uintptr_t> T BeginInvoke(uintptr_t stage, uint32_t nowSize, uint32_t totalSize, uintptr_t callback, uintptr_t object) {
		return ((T (*)(PufferDownloaderInitProgressFunc*, uintptr_t, uint32_t, uint32_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x2DC67DC))(this, stage, nowSize, totalSize, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(PufferDownloaderInitProgressFunc*, uintptr_t))(Il2CppBase() + 0x2DC68CC))(this, result);
	}

};

}
