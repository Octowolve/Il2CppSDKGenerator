#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class ModuleTaskCompletionCallbackFunc
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "ModuleTaskCompletionCallbackFunc"));
	}


	template <typename T = void> T Invoke(uint64_t taskId, uint32_t fileid, bool isSuccess, uint32_t errorCode) {
		return ((T (*)(ModuleTaskCompletionCallbackFunc*, uint64_t, uint32_t, bool, uint32_t))(Il2CppBase() + 0x19D26F0))(this, taskId, fileid, isSuccess, errorCode);
	}
	template <typename T = uintptr_t> T BeginInvoke(uint64_t taskId, uint32_t fileid, bool isSuccess, uint32_t errorCode, uintptr_t callback, uintptr_t object) {
		return ((T (*)(ModuleTaskCompletionCallbackFunc*, uint64_t, uint32_t, bool, uint32_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x19D27C0))(this, taskId, fileid, isSuccess, errorCode, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(ModuleTaskCompletionCallbackFunc*, uintptr_t))(Il2CppBase() + 0x19D28E8))(this, result);
	}

};

}
