#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase.Loading {

class LoadingFlowHotUpdateCheckController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase.Loading", "LoadingFlowHotUpdateCheckController"));
	}

	template <typename T = Il2CppString*> static T& kPatchFileKey() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& kPatchFileName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& currentFixMD5() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& kTestHotFixPath() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = Il2CppString*> T GetLoadingTips() {
		return ((T (*)(LoadingFlowHotUpdateCheckController*))(Il2CppBase() + 0x2E47F9C))(this);
	}
	template <typename T = bool> T IsMainFlow() {
		return ((T (*)(LoadingFlowHotUpdateCheckController*))(Il2CppBase() + 0x2E4804C))(this);
	}
	template <typename T = float> T RunTimeLimitation() {
		return ((T (*)(LoadingFlowHotUpdateCheckController*))(Il2CppBase() + 0x2E48054))(this);
	}
	template <typename T = void> T OnOverTime() {
		return ((T (*)(LoadingFlowHotUpdateCheckController*))(Il2CppBase() + 0x2E480E8))(this);
	}
	template <typename T = void> T DoneFail() {
		return ((T (*)(LoadingFlowHotUpdateCheckController*))(Il2CppBase() + 0x2E480EC))(this);
	}
	template <typename T = void> T OnTDirFailedMsgBoxCallback(uintptr_t result, int32_t context) {
		return ((T (*)(LoadingFlowHotUpdateCheckController*, uintptr_t, int32_t))(Il2CppBase() + 0x2E48454))(this, result, context);
	}
	template <typename T = Il2CppString*> static T GetMD5(Il2CppString* text) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x2E4846C))(0, text);
	}
	template <typename T = bool> T CheckHotFix() {
		return ((T (*)(LoadingFlowHotUpdateCheckController*))(Il2CppBase() + 0x2E48780))(this);
	}
	template <typename T = bool> T FirstCheckHotfix() {
		return ((T (*)(LoadingFlowHotUpdateCheckController*))(Il2CppBase() + 0x2E4926C))(this);
	}
	template <typename T = void> T StartFlow() {
		return ((T (*)(LoadingFlowHotUpdateCheckController*))(Il2CppBase() + 0x2E49274))(this);
	}
	template <typename T = void> T ReadLocalHotFix(uintptr_t* decryptedContent, uintptr_t* md5) {
		return ((T (*)(LoadingFlowHotUpdateCheckController*, uintptr_t*, uintptr_t*))(Il2CppBase() + 0x2E493F8))(this, decryptedContent, md5);
	}
	template <typename T = void> T WriteLocalHotfix(Il2CppArray<uintptr_t>* content) {
		return ((T (*)(LoadingFlowHotUpdateCheckController*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x2E49704))(this, content);
	}
	template <typename T = void> T OnHotFixDownloaded(Il2CppString* url, bool isSuccess, Il2CppArray<uintptr_t>* delivery) {
		return ((T (*)(LoadingFlowHotUpdateCheckController*, Il2CppString*, bool, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x2E498C8))(this, url, isSuccess, delivery);
	}
	template <typename T = bool> T TryApplyHotFix(Il2CppString* remoteMD5, Il2CppString* remoteURL) {
		return ((T (*)(LoadingFlowHotUpdateCheckController*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x2E48BC0))(this, remoteMD5, remoteURL);
	}
	template <typename T = void> static T ApplyHotFix(Il2CppString* content, Il2CppString* md5) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x2E49F24))(0, content, md5);
	}
	template <typename T = void> static T UnloadCurrentHotFix() {
		return ((T (*)(void *))(Il2CppBase() + 0x2E49020))(0);
	}
	template <typename T = bool> T CheckApplyLocalTestHotfix() {
		return ((T (*)(LoadingFlowHotUpdateCheckController*))(Il2CppBase() + 0x2E4A084))(this);
	}
	template <typename T = bool> T DevCheckHotFix() {
		return ((T (*)(LoadingFlowHotUpdateCheckController*))(Il2CppBase() + 0x2E4A244))(this);
	}
	template <typename T = void> T DevCheckRemoteHotFix() {
		return ((T (*)(LoadingFlowHotUpdateCheckController*))(Il2CppBase() + 0x2E4A274))(this);
	}
	template <typename T = void> T OnDevHotFixDownloaded(Il2CppString* url, bool isSuccess, Il2CppArray<uintptr_t>* delivery) {
		return ((T (*)(LoadingFlowHotUpdateCheckController*, Il2CppString*, bool, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x2E4A640))(this, url, isSuccess, delivery);
	}

};

}
