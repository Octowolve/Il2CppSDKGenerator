#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GCloud.Dolphin {

class DolphinCallBackInterface
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GCloud.Dolphin", "DolphinCallBackInterface"));
	}


	template <typename T = void> T OnNoticeNewVersionInfo(uintptr_t newVersionInfo) {
		return ((T (*)(DolphinCallBackInterface*, uintptr_t))(Il2CppBase() + 0x0))(this, newVersionInfo);
	}
	template <typename T = void> T OnUpdateProgressInfo(uintptr_t curVersionStage, Il2CppString* msg, uint32_t nowSize, uint32_t totalSize, bool isDownloading) {
		return ((T (*)(DolphinCallBackInterface*, uintptr_t, Il2CppString*, uint32_t, uint32_t, bool))(Il2CppBase() + 0x0))(this, curVersionStage, msg, nowSize, totalSize, isDownloading);
	}
	template <typename T = void> T OnUpdateMessageBoxInfo(Il2CppString* msg, uintptr_t msgBoxType, bool isError, uint32_t errorCode) {
		return ((T (*)(DolphinCallBackInterface*, Il2CppString*, uintptr_t, bool, uint32_t))(Il2CppBase() + 0x0))(this, msg, msgBoxType, isError, errorCode);
	}
	template <typename T = void> T OnNoticeInstallApk(Il2CppString* apkPath) {
		return ((T (*)(DolphinCallBackInterface*, Il2CppString*))(Il2CppBase() + 0x0))(this, apkPath);
	}
	template <typename T = void> T OnNoticeUpdateSuccess() {
		return ((T (*)(DolphinCallBackInterface*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T OnNoticeChangeSourceVersion(Il2CppString* newVersionStr) {
		return ((T (*)(DolphinCallBackInterface*, Il2CppString*))(Il2CppBase() + 0x0))(this, newVersionStr);
	}
	template <typename T = void> T OnNoticeFirstExtractSuccess() {
		return ((T (*)(DolphinCallBackInterface*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = unsigned char> T OnActionMsg(Il2CppString* msg) {
		return ((T (*)(DolphinCallBackInterface*, Il2CppString*))(Il2CppBase() + 0x0))(this, msg);
	}
	template <typename T = void> T OnNoticeServerCfgInfo(Il2CppString* config) {
		return ((T (*)(DolphinCallBackInterface*, Il2CppString*))(Il2CppBase() + 0x0))(this, config);
	}

};

}
