#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace IIPSMobile {

class IIPSMobileVersionCallBackInterface
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "IIPSMobile", "IIPSMobileVersionCallBackInterface"));
	}


	template <typename T = unsigned char> T OnGetNewVersionInfo(uintptr_t newVersionInfo) {
		return ((T (*)(IIPSMobileVersionCallBackInterface*, uintptr_t))(Il2CppBase() + 0x0))(this, newVersionInfo);
	}
	template <typename T = void> T OnProgress(uintptr_t curVersionStage, uint64_t totalSize, uint64_t nowSize) {
		return ((T (*)(IIPSMobileVersionCallBackInterface*, uintptr_t, uint64_t, uint64_t))(Il2CppBase() + 0x0))(this, curVersionStage, totalSize, nowSize);
	}
	template <typename T = void> T OnError(uintptr_t curVersionStage, uint32_t errorCode) {
		return ((T (*)(IIPSMobileVersionCallBackInterface*, uintptr_t, uint32_t))(Il2CppBase() + 0x0))(this, curVersionStage, errorCode);
	}
	template <typename T = void> T OnSuccess() {
		return ((T (*)(IIPSMobileVersionCallBackInterface*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T SaveConfig(uint32_t bufferSize, uintptr_t configBuffer) {
		return ((T (*)(IIPSMobileVersionCallBackInterface*, uint32_t, uintptr_t))(Il2CppBase() + 0x0))(this, bufferSize, configBuffer);
	}
	template <typename T = unsigned char> T OnNoticeInstallApk(Il2CppString* path) {
		return ((T (*)(IIPSMobileVersionCallBackInterface*, Il2CppString*))(Il2CppBase() + 0x0))(this, path);
	}
	template <typename T = unsigned char> T OnActionMsg(Il2CppString* msg) {
		return ((T (*)(IIPSMobileVersionCallBackInterface*, Il2CppString*))(Il2CppBase() + 0x0))(this, msg);
	}

};

}
