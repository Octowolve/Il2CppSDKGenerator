#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace IIPSMobile {

class IIPSMobileDownloadCallbackInterface
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "IIPSMobile", "IIPSMobileDownloadCallbackInterface"));
	}


	template <typename T = void> T OnDownloadError(uint32_t taskId, uint32_t errorCode) {
		return ((T (*)(IIPSMobileDownloadCallbackInterface*, uint32_t, uint32_t))(Il2CppBase() + 0x0))(this, taskId, errorCode);
	}
	template <typename T = void> T OnDownloadSuccess(uint32_t taskId) {
		return ((T (*)(IIPSMobileDownloadCallbackInterface*, uint32_t))(Il2CppBase() + 0x0))(this, taskId);
	}
	template <typename T = void> T OnDownloadProgress(uint32_t taskId, uintptr_t info) {
		return ((T (*)(IIPSMobileDownloadCallbackInterface*, uint32_t, uintptr_t))(Il2CppBase() + 0x0))(this, taskId, info);
	}

};

}
