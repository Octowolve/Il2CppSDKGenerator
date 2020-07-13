#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class ModuleTaskDownloadingCallbackFunc
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "ModuleTaskDownloadingCallbackFunc"));
	}


	template <typename T = void> T Invoke(uint64_t taskId, uint64_t nowSize, uint64_t totalSize) {
		return ((T (*)(ModuleTaskDownloadingCallbackFunc*, uint64_t, uint64_t, uint64_t))(Il2CppBase() + 0x19D2950))(this, taskId, nowSize, totalSize);
	}
	template <typename T = uintptr_t> T BeginInvoke(uint64_t taskId, uint64_t nowSize, uint64_t totalSize, uintptr_t callback, uintptr_t object) {
		return ((T (*)(ModuleTaskDownloadingCallbackFunc*, uint64_t, uint64_t, uint64_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x19D2A18))(this, taskId, nowSize, totalSize, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(ModuleTaskDownloadingCallbackFunc*, uintptr_t))(Il2CppBase() + 0x19D2B08))(this, result);
	}

};

}
