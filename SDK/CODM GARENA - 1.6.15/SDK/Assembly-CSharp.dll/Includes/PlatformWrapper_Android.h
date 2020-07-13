#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PlatformWrapperAndroid
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PlatformWrapper_Android"));
	}

	template <typename T = Il2CppString*> static T& CLASSNAME_NATIVEMESSAGEHUB() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& CLASSNAME_MAINACTIVITY() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ThrowJavaException() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetMaxCPUFrequency() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetTelecomInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ConnectToGamePad() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_DisconnectToGamePad() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_VibrateGamePad() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetNetworkType() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetNetworkTypeName() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Req3DSupportedInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetOpenIdToXG() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SetBrightness() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetBrightness() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SaveImageIntoAlbum() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitUnityInput() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_OpenAppStorePage() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsUdpAbnormalTest() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsUdpAbnormal() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetUdpInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SendNotification() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CancelNotification() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CancelAllNotifications() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClearNotificationNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x58);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetIDFA() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x5C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_WGCheckNeedUpdate_YYB() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x60);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_WGStartSaveUpdate_YYB() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x64);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetAvailableDiskSpaceInBytes() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x68);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetAvailableDiskSpaceInBytesAtPath() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x6C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CopyToClipboard() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x70);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_RequestDynamicPermissions() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x74);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetClipboard() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x78);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Vibrate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x7C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetEmulatorQualityLevel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x80);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetEmulatorFrameRateLevel() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x84);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetEmulatorResolutionHeight() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x88);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CheckCompass() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetAppsflyerUID() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x90);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetDeepLinkParamString() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x94);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetInstallParamString() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x98);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClearDeepLinkParamString() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x9C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReadAllBytes() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CrashTest() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ClearJNIException() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xA8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CallStaticVoidMethod() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xAC);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_CallStaticVoidMethod() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CallStaticIntMethod() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB4);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_CallStaticIntMethod() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xB8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CallStaticLongMethod() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xBC);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_CallStaticLongMethod() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CallStaticStringMethod() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC4);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_CallStaticStringMethod() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_CallStaticBooleanMethod() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xCC);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_CallStaticBooleanMethod() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xD0);
	}

	template <typename T = void> T ThrowJavaException(Il2CppString* reason, Il2CppString* stack) {
		return ((T (*)(PlatformWrapperAndroid*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x47F025C))(this, reason, stack);
	}
	template <typename T = int32_t> T GetMaxCPUFrequency() {
		return ((T (*)(PlatformWrapperAndroid*))(Il2CppBase() + 0x47F0510))(this);
	}
	template <typename T = Il2CppString*> T GetTelecomInfo() {
		return ((T (*)(PlatformWrapperAndroid*))(Il2CppBase() + 0x47F0784))(this);
	}
	template <typename T = void> T ConnectToGamePad() {
		return ((T (*)(PlatformWrapperAndroid*))(Il2CppBase() + 0x47F0940))(this);
	}
	template <typename T = void> T DisconnectToGamePad() {
		return ((T (*)(PlatformWrapperAndroid*))(Il2CppBase() + 0x47F0AFC))(this);
	}
	template <typename T = void> T VibrateGamePad() {
		return ((T (*)(PlatformWrapperAndroid*))(Il2CppBase() + 0x47F0BC8))(this);
	}
	template <typename T = int32_t> T GetNetworkType() {
		return ((T (*)(PlatformWrapperAndroid*))(Il2CppBase() + 0x47F0C94))(this);
	}
	template <typename T = Il2CppString*> T GetNetworkTypeName() {
		return ((T (*)(PlatformWrapperAndroid*))(Il2CppBase() + 0x47F0D60))(this);
	}
	template <typename T = void> T Req3DSupportedInfo() {
		return ((T (*)(PlatformWrapperAndroid*))(Il2CppBase() + 0x47F0E58))(this);
	}
	template <typename T = void> T SetOpenIdToXG(Il2CppString* openId) {
		return ((T (*)(PlatformWrapperAndroid*, Il2CppString*))(Il2CppBase() + 0x47F1014))(this, openId);
	}
	template <typename T = void> T SetBrightness(int32_t nBrightness) {
		return ((T (*)(PlatformWrapperAndroid*, int32_t))(Il2CppBase() + 0x47F10B4))(this, nBrightness);
	}
	template <typename T = int32_t> T GetBrightness() {
		return ((T (*)(PlatformWrapperAndroid*))(Il2CppBase() + 0x47F1324))(this);
	}
	template <typename T = void> T SaveImageIntoAlbum(Il2CppArray<uintptr_t>* data) {
		return ((T (*)(PlatformWrapperAndroid*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x47F13F0))(this, data);
	}
	template <typename T = void> T InitUnityInput() {
		return ((T (*)(PlatformWrapperAndroid*))(Il2CppBase() + 0x47F1548))(this);
	}
	template <typename T = void> T OpenAppStorePage(Il2CppString* url) {
		return ((T (*)(PlatformWrapperAndroid*, Il2CppString*))(Il2CppBase() + 0x47F1778))(this, url);
	}
	template <typename T = bool> T IsUdpAbnormalTest() {
		return ((T (*)(PlatformWrapperAndroid*))(Il2CppBase() + 0x47F1BDC))(this);
	}
	template <typename T = bool> T IsUdpAbnormal() {
		return ((T (*)(PlatformWrapperAndroid*))(Il2CppBase() + 0x47F22D4))(this);
	}
	template <typename T = Il2CppString*> T GetUdpInfo() {
		return ((T (*)(PlatformWrapperAndroid*))(Il2CppBase() + 0x47F24A0))(this);
	}
	template <typename T = int32_t> T SendNotification(Il2CppString* msg, int32_t delaySeconds) {
		return ((T (*)(PlatformWrapperAndroid*, Il2CppString*, int32_t))(Il2CppBase() + 0x47F256C))(this, msg, delaySeconds);
	}
	template <typename T = void> T CancelNotification(int32_t id) {
		return ((T (*)(PlatformWrapperAndroid*, int32_t))(Il2CppBase() + 0x47F29EC))(this, id);
	}
	template <typename T = void> T CancelAllNotifications() {
		return ((T (*)(PlatformWrapperAndroid*))(Il2CppBase() + 0x47F2C38))(this);
	}
	template <typename T = void> T ClearNotificationNumber() {
		return ((T (*)(PlatformWrapperAndroid*))(Il2CppBase() + 0x47F2E04))(this);
	}
	template <typename T = Il2CppString*> T GetIDFA() {
		return ((T (*)(PlatformWrapperAndroid*))(Il2CppBase() + 0x47F2E9C))(this);
	}
	template <typename T = void> T WGCheckNeedUpdate_YYB() {
		return ((T (*)(PlatformWrapperAndroid*))(Il2CppBase() + 0x47F2F3C))(this);
	}
	template <typename T = void> T WGStartSaveUpdate_YYB(bool inYYB) {
		return ((T (*)(PlatformWrapperAndroid*, bool))(Il2CppBase() + 0x47F3008))(this, inYYB);
	}
	template <typename T = uint64_t> T GetAvailableDiskSpaceInBytes() {
		return ((T (*)(PlatformWrapperAndroid*))(Il2CppBase() + 0x47F314C))(this);
	}
	template <typename T = uint64_t> T GetAvailableDiskSpaceInBytesAtPath(Il2CppString* path) {
		return ((T (*)(PlatformWrapperAndroid*, Il2CppString*))(Il2CppBase() + 0x47F320C))(this, path);
	}
	template <typename T = bool> T CopyToClipboard(Il2CppString* content) {
		return ((T (*)(PlatformWrapperAndroid*, Il2CppString*))(Il2CppBase() + 0x47F34C0))(this, content);
	}
	template <typename T = void> T RequestDynamicPermissions(Il2CppString* Permissions) {
		return ((T (*)(PlatformWrapperAndroid*, Il2CppString*))(Il2CppBase() + 0x47F3614))(this, Permissions);
	}
	template <typename T = Il2CppString*> T GetClipboard() {
		return ((T (*)(PlatformWrapperAndroid*))(Il2CppBase() + 0x47F37B8))(this);
	}
	template <typename T = bool> T Vibrate(Il2CppString* millseconds) {
		return ((T (*)(PlatformWrapperAndroid*, Il2CppString*))(Il2CppBase() + 0x47F3884))(this, millseconds);
	}
	template <typename T = int32_t> T GetEmulatorQualityLevel() {
		return ((T (*)(PlatformWrapperAndroid*))(Il2CppBase() + 0x47F3A30))(this);
	}
	template <typename T = int32_t> T GetEmulatorFrameRateLevel() {
		return ((T (*)(PlatformWrapperAndroid*))(Il2CppBase() + 0x47F3AFC))(this);
	}
	template <typename T = int32_t> T GetEmulatorResolutionHeight() {
		return ((T (*)(PlatformWrapperAndroid*))(Il2CppBase() + 0x47F3BC8))(this);
	}
	template <typename T = bool> T CheckCompass() {
		return ((T (*)(PlatformWrapperAndroid*))(Il2CppBase() + 0x47F3C94))(this);
	}
	template <typename T = Il2CppString*> T GetAppsflyerUID() {
		return ((T (*)(PlatformWrapperAndroid*))(Il2CppBase() + 0x47F3E4C))(this);
	}
	template <typename T = Il2CppString*> T GetDeepLinkParamString() {
		return ((T (*)(PlatformWrapperAndroid*))(Il2CppBase() + 0x47F3F74))(this);
	}
	template <typename T = Il2CppString*> T GetInstallParamString() {
		return ((T (*)(PlatformWrapperAndroid*))(Il2CppBase() + 0x47F4040))(this);
	}
	template <typename T = void> T ClearDeepLinkParamString() {
		return ((T (*)(PlatformWrapperAndroid*))(Il2CppBase() + 0x47F410C))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T ReadAllBytes(Il2CppString* filePath) {
		return ((T (*)(PlatformWrapperAndroid*, Il2CppString*))(Il2CppBase() + 0x47F41D8))(this, filePath);
	}
	template <typename T = void> T CrashTest(int32_t crashType) {
		return ((T (*)(PlatformWrapperAndroid*, int32_t))(Il2CppBase() + 0x47F4688))(this, crashType);
	}
	template <typename T = void> static T ClearJNIException(Il2CppString* jniName) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x47F4794))(0, jniName);
	}
	template <typename T = void> static T CallStaticVoidMethod(Il2CppString* method, Il2CppString* methodSig) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x47F0F24))(0, method, methodSig);
	}
	template <typename T = void> static T CallStaticVoidMethod_1(Il2CppString* method, Il2CppString* methodSig, Il2CppArray<uintptr_t>* args) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x47F03EC))(0, method, methodSig, args);
	}
	template <typename T = int32_t> static T CallStaticIntMethod(Il2CppString* method, Il2CppString* methodSig) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x47F0A0C))(0, method, methodSig);
	}
	template <typename T = int32_t> static T CallStaticIntMethod_1(Il2CppString* method, Il2CppString* methodSig, Il2CppArray<uintptr_t>* args) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x47F28C0))(0, method, methodSig, args);
	}
	template <typename T = int64_t> static T CallStaticLongMethod(Il2CppString* method, Il2CppString* methodSig) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x47F48F8))(0, method, methodSig);
	}
	template <typename T = int64_t> static T CallStaticLongMethod_1(Il2CppString* method, Il2CppString* methodSig, Il2CppArray<uintptr_t>* args) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x47F338C))(0, method, methodSig, args);
	}
	template <typename T = Il2CppString*> static T CallStaticStringMethod(Il2CppString* method, Il2CppString* methodSig) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x47F0850))(0, method, methodSig);
	}
	template <typename T = Il2CppString*> static T CallStaticStringMethod_1(Il2CppString* method, Il2CppString* methodSig, Il2CppArray<uintptr_t>* args) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x47F49E8))(0, method, methodSig, args);
	}
	template <typename T = bool> static T CallStaticBooleanMethod(Il2CppString* method, Il2CppString* methodSig) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x47F3D60))(0, method, methodSig);
	}
	template <typename T = bool> static T CallStaticBooleanMethod_1(Il2CppString* method, Il2CppString* methodSig, Il2CppArray<uintptr_t>* args) {
		return ((T (*)(void *, Il2CppString*, Il2CppString*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x47F11F8))(0, method, methodSig, args);
	}
	template <typename T = void> T xLuaBaseProxy_RequestDynamicPermissions(Il2CppString* P0) {
		return ((T (*)(PlatformWrapperAndroid*, Il2CppString*))(Il2CppBase() + 0x47F4B14))(this, P0);
	}
	template <typename T = Il2CppString*> T xLuaBaseProxy_GetClipboard() {
		return ((T (*)(PlatformWrapperAndroid*))(Il2CppBase() + 0x47F4B18))(this);
	}
	template <typename T = int32_t> T xLuaBaseProxy_GetEmulatorQualityLevel() {
		return ((T (*)(PlatformWrapperAndroid*))(Il2CppBase() + 0x47F4B1C))(this);
	}
	template <typename T = int32_t> T xLuaBaseProxy_GetEmulatorFrameRateLevel() {
		return ((T (*)(PlatformWrapperAndroid*))(Il2CppBase() + 0x47F4B20))(this);
	}
	template <typename T = int32_t> T xLuaBaseProxy_GetEmulatorResolutionHeight() {
		return ((T (*)(PlatformWrapperAndroid*))(Il2CppBase() + 0x47F4B24))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T xLuaBaseProxy_ReadAllBytes(Il2CppString* P0) {
		return ((T (*)(PlatformWrapperAndroid*, Il2CppString*))(Il2CppBase() + 0x47F4B28))(this, P0);
	}

};

}
