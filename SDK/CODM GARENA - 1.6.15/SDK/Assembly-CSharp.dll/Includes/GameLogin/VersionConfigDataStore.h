#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameLogin {

class VersionConfigDataStore
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameLogin", "VersionConfigDataStore"));
	}

	template <typename T = Il2CppString*> T& SharedConfigUrl() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = bool> T& IsCDNLimited() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& LastPlatformConfigUrl() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& SharedConfig() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& PlatformConfig() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& GrayUserAdditionalInfo() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = bool> T& PreviewStatus() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppString*> static T& BeginReceiptTag() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& EndReceiptTag() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitializeDataStore() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetDefaultShareConfigUrl() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetDefaultPlatformConfigUrl() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FormatPlatformUrl() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ParseSharedConfig() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ParsePlatformConfig() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetUrlForCurrentPlatform() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetRedirectUrl() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetGrayUserInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x2C);
	}
	template <typename T = uintptr_t> static T& __Hotfix1_GetGrayUserInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x30);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_HasReceipt() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x34);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetVersionCustomDataDolphinCfgForCurrentPlatform() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x38);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetVersionCustomDataPufferCfgForCurrentPlatform() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x3C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetOverrideServerListURL() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x40);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetGrayServerListURL() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x44);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetFTUEFlags() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x48);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_TryGetxLuaPatch() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SaveData() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x50);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetMgrNode() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x54);
	}

	template <typename T = Il2CppString*> T get_SharedConfigUrl() {
		return ((T (*)(VersionConfigDataStore*))(Il2CppBase() + 0x253FB44))(this);
	}
	template <typename T = void> T set_SharedConfigUrl(Il2CppString* value) {
		return ((T (*)(VersionConfigDataStore*, Il2CppString*))(Il2CppBase() + 0x253FB4C))(this, value);
	}
	template <typename T = bool> T get_IsCDNLimited() {
		return ((T (*)(VersionConfigDataStore*))(Il2CppBase() + 0x253FB54))(this);
	}
	template <typename T = void> T set_IsCDNLimited(bool value) {
		return ((T (*)(VersionConfigDataStore*, bool))(Il2CppBase() + 0x253FB5C))(this, value);
	}
	template <typename T = Il2CppString*> T get_LastPlatformConfigUrl() {
		return ((T (*)(VersionConfigDataStore*))(Il2CppBase() + 0x253FB64))(this);
	}
	template <typename T = void> T set_LastPlatformConfigUrl(Il2CppString* value) {
		return ((T (*)(VersionConfigDataStore*, Il2CppString*))(Il2CppBase() + 0x253FB6C))(this, value);
	}
	template <typename T = void> T InitializeDataStore() {
		return ((T (*)(VersionConfigDataStore*))(Il2CppBase() + 0x253FB74))(this);
	}
	template <typename T = Il2CppString*> T GetDefaultShareConfigUrl() {
		return ((T (*)(VersionConfigDataStore*))(Il2CppBase() + 0x253FC4C))(this);
	}
	template <typename T = Il2CppString*> T GetDefaultPlatformConfigUrl() {
		return ((T (*)(VersionConfigDataStore*))(Il2CppBase() + 0x25400A0))(this);
	}
	template <typename T = Il2CppString*> T FormatPlatformUrl(Il2CppString* rawUrl) {
		return ((T (*)(VersionConfigDataStore*, Il2CppString*))(Il2CppBase() + 0x25403C8))(this, rawUrl);
	}
	template <typename T = void> T ParseSharedConfig(Il2CppString* content) {
		return ((T (*)(VersionConfigDataStore*, Il2CppString*))(Il2CppBase() + 0x25405B0))(this, content);
	}
	template <typename T = void> T ParsePlatformConfig(Il2CppString* content) {
		return ((T (*)(VersionConfigDataStore*, Il2CppString*))(Il2CppBase() + 0x2540704))(this, content);
	}
	template <typename T = Il2CppString*> T GetUrlForCurrentPlatform() {
		return ((T (*)(VersionConfigDataStore*))(Il2CppBase() + 0x25408C4))(this);
	}
	template <typename T = Il2CppString*> T GetRedirectUrl() {
		return ((T (*)(VersionConfigDataStore*))(Il2CppBase() + 0x2540AAC))(this);
	}
	template <typename T = uintptr_t> T GetGrayUserInfo() {
		return ((T (*)(VersionConfigDataStore*))(Il2CppBase() + 0x2540C68))(this);
	}
	template <typename T = uintptr_t> T GetGrayUserInfo_1(Il2CppString* programVersion, Il2CppString* resourceVersion, Il2CppString* version) {
		return ((T (*)(VersionConfigDataStore*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x2540DC4))(this, programVersion, resourceVersion, version);
	}
	template <typename T = bool> static T HasReceipt() {
		return ((T (*)(void *))(Il2CppBase() + 0x2541B74))(0);
	}
	template <typename T = uintptr_t> T GetVersionCustomDataDolphinCfgForCurrentPlatform() {
		return ((T (*)(VersionConfigDataStore*))(Il2CppBase() + 0x2541DE4))(this);
	}
	template <typename T = uintptr_t> T GetVersionCustomDataPufferCfgForCurrentPlatform() {
		return ((T (*)(VersionConfigDataStore*))(Il2CppBase() + 0x2541ED4))(this);
	}
	template <typename T = Il2CppString*> T GetOverrideServerListURL() {
		return ((T (*)(VersionConfigDataStore*))(Il2CppBase() + 0x2523AC8))(this);
	}
	template <typename T = Il2CppString*> T GetGrayServerListURL() {
		return ((T (*)(VersionConfigDataStore*))(Il2CppBase() + 0x2523BA4))(this);
	}
	template <typename T = uint64_t> T GetFTUEFlags() {
		return ((T (*)(VersionConfigDataStore*))(Il2CppBase() + 0x2541FC4))(this);
	}
	template <typename T = bool> T TryGetxLuaPatch(uintptr_t* url, uintptr_t* md5, Il2CppArray<uintptr_t>** requireVersion) {
		return ((T (*)(VersionConfigDataStore*, uintptr_t*, uintptr_t*, Il2CppArray<uintptr_t>**))(Il2CppBase() + 0x25420EC))(this, url, md5, requireVersion);
	}
	template <typename T = bool> T SaveData(Il2CppList<uintptr_t>* nodeList) {
		return ((T (*)(VersionConfigDataStore*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x254221C))(this, nodeList);
	}
	template <typename T = int32_t> static T GetMgrNode() {
		return ((T (*)(void *))(Il2CppBase() + 0x2542A54))(0);
	}
	template <typename T = void> T xLuaBaseProxy_InitializeDataStore() {
		return ((T (*)(VersionConfigDataStore*))(Il2CppBase() + 0x2542DE8))(this);
	}

};

}
