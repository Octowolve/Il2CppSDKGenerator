#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PlatformWrapper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PlatformWrapper"));
	}

	template <typename T = Il2CppString*> static T& DL_TYPE_KEY() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RequestDynamicPermissions() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetDeepLinkParams() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReadAllBytes() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsUsingWifi() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Vibrate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetEmulatorQualityLevel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetEmulatorFrameRateLevel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetEmulatorResolutionHeight() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetBatteryLevelPercentage() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetBatteryChargingState() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetNetworkSignalPercentage() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetNetworkReachability() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetAppStoreAttributions() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FormatNetworkTypeToName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FormatNetworkType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetENetworkType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPushDeviceToken() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetClipboard() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PrintMemoryStatus() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}

	template <typename T = void> T ThrowJavaException(Il2CppString* reason, Il2CppString* stack) {
		return ((T (*)(PlatformWrapper*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x0))(this, reason, stack);
	}
	template <typename T = int32_t> T GetMaxCPUFrequency() {
		return ((T (*)(PlatformWrapper*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = Il2CppString*> T GetTelecomInfo() {
		return ((T (*)(PlatformWrapper*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T ConnectToGamePad() {
		return ((T (*)(PlatformWrapper*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T VibrateGamePad() {
		return ((T (*)(PlatformWrapper*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T DisconnectToGamePad() {
		return ((T (*)(PlatformWrapper*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = Il2CppString*> T GetNetworkTypeName() {
		return ((T (*)(PlatformWrapper*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = int32_t> T GetNetworkType() {
		return ((T (*)(PlatformWrapper*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T Req3DSupportedInfo() {
		return ((T (*)(PlatformWrapper*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T SetOpenIdToXG(Il2CppString* openId) {
		return ((T (*)(PlatformWrapper*, Il2CppString*))(Il2CppBase() + 0x0))(this, openId);
	}
	template <typename T = void> T SetBrightness(int32_t nBrightness) {
		return ((T (*)(PlatformWrapper*, int32_t))(Il2CppBase() + 0x0))(this, nBrightness);
	}
	template <typename T = int32_t> T GetBrightness() {
		return ((T (*)(PlatformWrapper*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T SaveImageIntoAlbum(Il2CppArray<uintptr_t>* data) {
		return ((T (*)(PlatformWrapper*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x0))(this, data);
	}
	template <typename T = void> T InitUnityInput() {
		return ((T (*)(PlatformWrapper*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T OpenAppStorePage(Il2CppString* url) {
		return ((T (*)(PlatformWrapper*, Il2CppString*))(Il2CppBase() + 0x0))(this, url);
	}
	template <typename T = bool> T IsUdpAbnormalTest() {
		return ((T (*)(PlatformWrapper*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T IsUdpAbnormal() {
		return ((T (*)(PlatformWrapper*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = Il2CppString*> T GetUdpInfo() {
		return ((T (*)(PlatformWrapper*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = int32_t> T SendNotification(Il2CppString* msg, int32_t delaySeconds) {
		return ((T (*)(PlatformWrapper*, Il2CppString*, int32_t))(Il2CppBase() + 0x0))(this, msg, delaySeconds);
	}
	template <typename T = void> T CancelNotification(int32_t id) {
		return ((T (*)(PlatformWrapper*, int32_t))(Il2CppBase() + 0x0))(this, id);
	}
	template <typename T = void> T CancelAllNotifications() {
		return ((T (*)(PlatformWrapper*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T ClearNotificationNumber() {
		return ((T (*)(PlatformWrapper*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = Il2CppString*> T GetIDFA() {
		return ((T (*)(PlatformWrapper*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T WGCheckNeedUpdate_YYB() {
		return ((T (*)(PlatformWrapper*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T WGStartSaveUpdate_YYB(bool inYYB) {
		return ((T (*)(PlatformWrapper*, bool))(Il2CppBase() + 0x0))(this, inYYB);
	}
	template <typename T = uint64_t> T GetAvailableDiskSpaceInBytes() {
		return ((T (*)(PlatformWrapper*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = uint64_t> T GetAvailableDiskSpaceInBytesAtPath(Il2CppString* path) {
		return ((T (*)(PlatformWrapper*, Il2CppString*))(Il2CppBase() + 0x0))(this, path);
	}
	template <typename T = bool> T CopyToClipboard(Il2CppString* content) {
		return ((T (*)(PlatformWrapper*, Il2CppString*))(Il2CppBase() + 0x0))(this, content);
	}
	template <typename T = void> T RequestDynamicPermissions(Il2CppString* Permissions) {
		return ((T (*)(PlatformWrapper*, Il2CppString*))(Il2CppBase() + 0x47EEE48))(this, Permissions);
	}
	template <typename T = void> T CrashTest(int32_t crashType) {
		return ((T (*)(PlatformWrapper*, int32_t))(Il2CppBase() + 0x0))(this, crashType);
	}
	template <typename T = bool> T CheckCompass() {
		return ((T (*)(PlatformWrapper*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = Il2CppString*> T GetAppsflyerUID() {
		return ((T (*)(PlatformWrapper*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = Il2CppString*> T GetDeepLinkParamString() {
		return ((T (*)(PlatformWrapper*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = Il2CppString*> T GetInstallParamString() {
		return ((T (*)(PlatformWrapper*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T ClearDeepLinkParamString() {
		return ((T (*)(PlatformWrapper*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, Il2CppString*>*> T GetDeepLinkParams(uintptr_t DLType) {
		return ((T (*)(PlatformWrapper*, uintptr_t))(Il2CppBase() + 0x47EEEE8))(this, DLType);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T ReadAllBytes(Il2CppString* filePath) {
		return ((T (*)(PlatformWrapper*, Il2CppString*))(Il2CppBase() + 0x47EF3D4))(this, filePath);
	}
	template <typename T = bool> T IsUsingWifi() {
		return ((T (*)(PlatformWrapper*))(Il2CppBase() + 0x47EF4C4))(this);
	}
	template <typename T = bool> T Vibrate(Il2CppString* milliseconds) {
		return ((T (*)(PlatformWrapper*, Il2CppString*))(Il2CppBase() + 0x47EF624))(this, milliseconds);
	}
	template <typename T = int32_t> T GetEmulatorQualityLevel() {
		return ((T (*)(PlatformWrapper*))(Il2CppBase() + 0x47EF6CC))(this);
	}
	template <typename T = int32_t> T GetEmulatorFrameRateLevel() {
		return ((T (*)(PlatformWrapper*))(Il2CppBase() + 0x47EF76C))(this);
	}
	template <typename T = int32_t> T GetEmulatorResolutionHeight() {
		return ((T (*)(PlatformWrapper*))(Il2CppBase() + 0x47EF80C))(this);
	}
	template <typename T = int32_t> T GetBatteryLevelPercentage() {
		return ((T (*)(PlatformWrapper*))(Il2CppBase() + 0x47EF8AC))(this);
	}
	template <typename T = bool> T GetBatteryChargingState() {
		return ((T (*)(PlatformWrapper*))(Il2CppBase() + 0x47EF9BC))(this);
	}
	template <typename T = int32_t> T GetNetworkSignalPercentage() {
		return ((T (*)(PlatformWrapper*))(Il2CppBase() + 0x47EFA90))(this);
	}
	template <typename T = uintptr_t> T GetNetworkReachability() {
		return ((T (*)(PlatformWrapper*))(Il2CppBase() + 0x47EFC74))(this);
	}
	template <typename T = Il2CppString*> T GetAppStoreAttributions() {
		return ((T (*)(PlatformWrapper*))(Il2CppBase() + 0x47EFD38))(this);
	}
	template <typename T = Il2CppString*> T FormatNetworkTypeToName(int32_t level) {
		return ((T (*)(PlatformWrapper*, int32_t))(Il2CppBase() + 0x47EFDD8))(this, level);
	}
	template <typename T = uintptr_t> T FormatNetworkType(int32_t level) {
		return ((T (*)(PlatformWrapper*, int32_t))(Il2CppBase() + 0x47EFEC0))(this, level);
	}
	template <typename T = uintptr_t> T GetENetworkType() {
		return ((T (*)(PlatformWrapper*))(Il2CppBase() + 0x47EFF70))(this);
	}
	template <typename T = Il2CppString*> T GetPushDeviceToken() {
		return ((T (*)(PlatformWrapper*))(Il2CppBase() + 0x47F002C))(this);
	}
	template <typename T = Il2CppString*> T GetClipboard() {
		return ((T (*)(PlatformWrapper*))(Il2CppBase() + 0x47F00E4))(this);
	}
	template <typename T = void> T PrintMemoryStatus() {
		return ((T (*)(PlatformWrapper*))(Il2CppBase() + 0x47F01C4))(this);
	}

};

}
