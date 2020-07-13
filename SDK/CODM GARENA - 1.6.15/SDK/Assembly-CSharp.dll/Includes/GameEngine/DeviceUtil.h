#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameEngine {

class DeviceUtil
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameEngine", "DeviceUtil"));
	}

	template <typename T = Il2CppString*> static T& OPPO_NAME() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& ms_sysMemSizeMB() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = bool> static T& ForceDisableVOIP() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = float> static T& DPI_MIN() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& BRAND_NAME() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& m_EditorDeviceModelName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& m_DeviceUIAdaptConfig() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetDeviceId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetDeviceScreenSleep() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCPUCoreCount() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InVideoBlock() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsOppoLowQualityDevice() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetCPUFrequency() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetMemorySize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ForceVeryLowSystemSetting() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DoNotPreloadFrontEndAsset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DoNotEnableVoiceVoip() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPlatformId() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetScreenOrientation() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetDPI() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsXiaoMi() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetDeviceModelNameInEditor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetDeviceUIAdaptConfig() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClearDeviceConfigCache() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetAnochorOffsetX() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetAnochorOffsetY() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetAnchorOffsetX_InUnity() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetAnchorOffsetY_InUnity() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}

	template <typename T = Il2CppString*> static T GetDeviceId() {
		return ((T (*)(void *))(Il2CppBase() + 0x41BB134))(0);
	}
	template <typename T = void> static T SetDeviceScreenSleep(bool neverSleep) {
		return ((T (*)(void *, bool))(Il2CppBase() + 0x41BB24C))(0, neverSleep);
	}
	template <typename T = int32_t> static T GetCPUCoreCount() {
		return ((T (*)(void *))(Il2CppBase() + 0x41BB330))(0);
	}
	template <typename T = bool> static T InVideoBlock() {
		return ((T (*)(void *))(Il2CppBase() + 0x41BB400))(0);
	}
	template <typename T = bool> static T IsOppoLowQualityDevice() {
		return ((T (*)(void *))(Il2CppBase() + 0x41BB930))(0);
	}
	template <typename T = int32_t> static T GetCPUFrequency() {
		return ((T (*)(void *))(Il2CppBase() + 0x41BBABC))(0);
	}
	template <typename T = int32_t> static T GetMemorySize() {
		return ((T (*)(void *))(Il2CppBase() + 0x41BBD98))(0);
	}
	template <typename T = bool> static T ForceVeryLowSystemSetting() {
		return ((T (*)(void *))(Il2CppBase() + 0x41BBF48))(0);
	}
	template <typename T = bool> static T DoNotPreloadFrontEndAsset() {
		return ((T (*)(void *))(Il2CppBase() + 0x41BC170))(0);
	}
	template <typename T = bool> static T DoNotEnableVoiceVoip() {
		return ((T (*)(void *))(Il2CppBase() + 0x41BC2BC))(0);
	}
	template <typename T = int32_t> static T GetPlatformId(bool forServer) {
		return ((T (*)(void *, bool))(Il2CppBase() + 0x41BC454))(0, forServer);
	}
	template <typename T = void> static T SetScreenOrientation() {
		return ((T (*)(void *))(Il2CppBase() + 0x41BC524))(0);
	}
	template <typename T = float> static T GetDPI() {
		return ((T (*)(void *))(Il2CppBase() + 0x41BC638))(0);
	}
	template <typename T = bool> static T IsXiaoMi() {
		return ((T (*)(void *))(Il2CppBase() + 0x41BC724))(0);
	}
	template <typename T = Il2CppString*> static T GetDeviceModelNameInEditor() {
		return ((T (*)(void *))(Il2CppBase() + 0x41BC8A4))(0);
	}
	template <typename T = uintptr_t> static T GetDeviceUIAdaptConfig() {
		return ((T (*)(void *))(Il2CppBase() + 0x41BCA18))(0);
	}
	template <typename T = void> static T ClearDeviceConfigCache() {
		return ((T (*)(void *))(Il2CppBase() + 0x41BCC24))(0);
	}
	template <typename T = int32_t> static T GetAnochorOffsetX(uintptr_t side) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x41BCDA8))(0, side);
	}
	template <typename T = int32_t> static T GetAnochorOffsetY(uintptr_t side) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x41BCF78))(0, side);
	}
	template <typename T = float> static T GetAnchorOffsetX_InUnity(uintptr_t side) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x41BD158))(0, side);
	}
	template <typename T = float> static T GetAnchorOffsetY_InUnity(uintptr_t side) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x41BD364))(0, side);
	}

};

}
