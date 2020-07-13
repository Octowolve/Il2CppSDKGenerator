#pragma once
#include <Il2Cpp/Il2Cpp.h>

class LocalizationLoginHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LocalizationLoginHelper"));
	}

	template <typename T = uintptr_t> static T& __Hotfix0_GetLoginResultIMSDKErrorMessage() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetLoginResultMessage() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetLoginQueueInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetUpdateMessage() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetDeviceDiskLimitationText() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = Il2CppString*> static T GetLoginResultIMSDKErrorMessage(uintptr_t loginResult) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x434D86C))(0, loginResult);
	}
	template <typename T = Il2CppString*> static T GetLoginResultMessage(uintptr_t ret, int32_t apolloErrorCode) {
		return ((T (*)(void *, uintptr_t, int32_t))(Il2CppBase() + 0x434DDB8))(0, ret, apolloErrorCode);
	}
	template <typename T = Il2CppString*> static T GetLoginQueueInfo(uint32_t pos, uint32_t queueLen, uint32_t waitSeconds) {
		return ((T (*)(void *, uint32_t, uint32_t, uint32_t))(Il2CppBase() + 0x434E368))(0, pos, queueLen, waitSeconds);
	}
	template <typename T = Il2CppString*> static T GetUpdateMessage(bool isAppUpdate, bool isForceUpdate, Il2CppString* newVersion, uintptr_t customData) {
		return ((T (*)(void *, bool, bool, Il2CppString*, uintptr_t))(Il2CppBase() + 0x434E528))(0, isAppUpdate, isForceUpdate, newVersion, customData);
	}
	template <typename T = Il2CppString*> static T GetDeviceDiskLimitationText(int32_t MBytes) {
		return ((T (*)(void *, int32_t))(Il2CppBase() + 0x434E8D0))(0, MBytes);
	}

};

}
