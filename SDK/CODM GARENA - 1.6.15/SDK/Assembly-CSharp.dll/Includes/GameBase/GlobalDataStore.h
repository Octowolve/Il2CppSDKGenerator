#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class GlobalDataStore
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "GlobalDataStore"));
	}

	template <typename T = int32_t> T& PVE_SHOW() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& PVE_ALL_HIDDEN() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& PVE_PART_HIDDEN() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uint32_t> T& PVEHideValue() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = double> T& serverClientDeltaTime() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> static T& TIMESPAN_EDGE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& m_ClientIPAddress() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppString*> T& m_CommunityUrl() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& m_ConfList() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> static T& CONF_VALUE_BOOL_TRUE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateServerTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdateServerSecondsTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetServerTime() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_IsCurrentPVEContentHide() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_ReqConfFromServer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x14);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_SaveConf() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetConfBoolValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x1C);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetConfIntValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetConf() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x24);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_InitPVEHideTable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x28);
	}

	template <typename T = void> T UpdateServerTime(uint64_t serverMillionSecondsTime) {
		return ((T (*)(GlobalDataStore*, uint64_t))(Il2CppBase() + 0x1ECAEA0))(this, serverMillionSecondsTime);
	}
	template <typename T = void> T UpdateServerSecondsTime(double serverSecondsTime) {
		return ((T (*)(GlobalDataStore*, double))(Il2CppBase() + 0x1ECB0BC))(this, serverSecondsTime);
	}
	template <typename T = double> T GetServerTime() {
		return ((T (*)(GlobalDataStore*))(Il2CppBase() + 0x1ECB2BC))(this);
	}
	template <typename T = Il2CppString*> T get_ClientIPAddress() {
		return ((T (*)(GlobalDataStore*))(Il2CppBase() + 0x1ECB390))(this);
	}
	template <typename T = void> T set_ClientIPAddress(Il2CppString* value) {
		return ((T (*)(GlobalDataStore*, Il2CppString*))(Il2CppBase() + 0x1ECB398))(this, value);
	}
	template <typename T = Il2CppString*> T get_CommunityUrl() {
		return ((T (*)(GlobalDataStore*))(Il2CppBase() + 0x1ECB3A0))(this);
	}
	template <typename T = void> T set_CommunityUrl(Il2CppString* value) {
		return ((T (*)(GlobalDataStore*, Il2CppString*))(Il2CppBase() + 0x1ECB3A8))(this, value);
	}
	template <typename T = bool> T get_EnableMidasShortOpenId() {
		return ((T (*)(GlobalDataStore*))(Il2CppBase() + 0x1ECB3B0))(this);
	}
	template <typename T = bool> T get_Enable18ProhibitedLogo() {
		return ((T (*)(GlobalDataStore*))(Il2CppBase() + 0x1ECB470))(this);
	}
	template <typename T = bool> T IsCurrentPVEContentHide(uintptr_t PVEContent) {
		return ((T (*)(GlobalDataStore*, uintptr_t))(Il2CppBase() + 0x1ECB478))(this, PVEContent);
	}
	template <typename T = void> T ReqConfFromServer(uintptr_t confId) {
		return ((T (*)(GlobalDataStore*, uintptr_t))(Il2CppBase() + 0x1ECB528))(this, confId);
	}
	template <typename T = void> T SaveConf(uintptr_t data) {
		return ((T (*)(GlobalDataStore*, uintptr_t))(Il2CppBase() + 0x1ECB654))(this, data);
	}
	template <typename T = bool> T GetConfBoolValue(uintptr_t confId) {
		return ((T (*)(GlobalDataStore*, uintptr_t))(Il2CppBase() + 0x1ECB3B8))(this, confId);
	}
	template <typename T = int32_t> T GetConfIntValue(uintptr_t confId) {
		return ((T (*)(GlobalDataStore*, uintptr_t))(Il2CppBase() + 0x1ECB9A0))(this, confId);
	}
	template <typename T = uintptr_t> T GetConf(uintptr_t confId) {
		return ((T (*)(GlobalDataStore*, uintptr_t))(Il2CppBase() + 0x1ECBA68))(this, confId);
	}
	template <typename T = void> T InitPVEHideTable(int32_t PVEHideLevel) {
		return ((T (*)(GlobalDataStore*, int32_t))(Il2CppBase() + 0x1ECB8C8))(this, PVEHideLevel);
	}

};

}
