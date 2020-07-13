#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Config {

class GCloudConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Config", "GCloudConfig"));
	}

	template <typename T = int32_t> T& Channel() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppString*> T& Mode() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& GameID() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppString*> T& GameSecret() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& MapleServerURL() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppString*> T& DolphinServerURL() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppString*> T& PufferServerURL() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> T& MapleID() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& DolphinAndroidNodeID() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = int32_t> T& DolphiniOSNodeID() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> T& DolphinPCNodeID() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = int32_t> T& PufferAndroidID() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = int32_t> T& PufferiOSID() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = Il2CppString*> T& GVoiceAppID() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppString*> T& GVoiceAppKey() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = Il2CppString*> T& GVoiceURL() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = int32_t> T& LitePackPufferAndroidID() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = int32_t> T& LitePackPufferiOSID() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = Il2CppString*> T& LitePackPufferServerURL() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = int32_t> T& DailyDolphinIDForPufferAndroid() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = int32_t> T& DailyDolphinIDForPufferIOS() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPrimaryKeyValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetSecondaryKeyValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Deserialize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = uintptr_t> static T get_Current() {
		return ((T (*)(void *))(Il2CppBase() + 0x46491DC))(0);
	}
	template <typename T = int32_t> T GetPrimaryKeyValue() {
		return ((T (*)(GCloudConfig*))(Il2CppBase() + 0x4649390))(this);
	}
	template <typename T = Il2CppString*> T GetSecondaryKeyValue() {
		return ((T (*)(GCloudConfig*))(Il2CppBase() + 0x4649438))(this);
	}
	template <typename T = int32_t> T get_Channel() {
		return ((T (*)(GCloudConfig*))(Il2CppBase() + 0x4649430))(this);
	}
	template <typename T = void> T set_Channel(int32_t value) {
		return ((T (*)(GCloudConfig*, int32_t))(Il2CppBase() + 0x46494E0))(this, value);
	}
	template <typename T = Il2CppString*> T get_Mode() {
		return ((T (*)(GCloudConfig*))(Il2CppBase() + 0x46494D8))(this);
	}
	template <typename T = void> T set_Mode(Il2CppString* value) {
		return ((T (*)(GCloudConfig*, Il2CppString*))(Il2CppBase() + 0x46494E8))(this, value);
	}
	template <typename T = int32_t> T get_GameID() {
		return ((T (*)(GCloudConfig*))(Il2CppBase() + 0x46494F0))(this);
	}
	template <typename T = void> T set_GameID(int32_t value) {
		return ((T (*)(GCloudConfig*, int32_t))(Il2CppBase() + 0x46494F8))(this, value);
	}
	template <typename T = Il2CppString*> T get_GameSecret() {
		return ((T (*)(GCloudConfig*))(Il2CppBase() + 0x4649500))(this);
	}
	template <typename T = void> T set_GameSecret(Il2CppString* value) {
		return ((T (*)(GCloudConfig*, Il2CppString*))(Il2CppBase() + 0x4649508))(this, value);
	}
	template <typename T = Il2CppString*> T get_MapleServerURL() {
		return ((T (*)(GCloudConfig*))(Il2CppBase() + 0x4649510))(this);
	}
	template <typename T = void> T set_MapleServerURL(Il2CppString* value) {
		return ((T (*)(GCloudConfig*, Il2CppString*))(Il2CppBase() + 0x4649518))(this, value);
	}
	template <typename T = Il2CppString*> T get_DolphinServerURL() {
		return ((T (*)(GCloudConfig*))(Il2CppBase() + 0x4649520))(this);
	}
	template <typename T = void> T set_DolphinServerURL(Il2CppString* value) {
		return ((T (*)(GCloudConfig*, Il2CppString*))(Il2CppBase() + 0x4649528))(this, value);
	}
	template <typename T = Il2CppString*> T get_PufferServerURL() {
		return ((T (*)(GCloudConfig*))(Il2CppBase() + 0x4649530))(this);
	}
	template <typename T = void> T set_PufferServerURL(Il2CppString* value) {
		return ((T (*)(GCloudConfig*, Il2CppString*))(Il2CppBase() + 0x4649538))(this, value);
	}
	template <typename T = int32_t> T get_MapleID() {
		return ((T (*)(GCloudConfig*))(Il2CppBase() + 0x4649540))(this);
	}
	template <typename T = void> T set_MapleID(int32_t value) {
		return ((T (*)(GCloudConfig*, int32_t))(Il2CppBase() + 0x4649548))(this, value);
	}
	template <typename T = int32_t> T get_DolphinAndroidNodeID() {
		return ((T (*)(GCloudConfig*))(Il2CppBase() + 0x4649550))(this);
	}
	template <typename T = void> T set_DolphinAndroidNodeID(int32_t value) {
		return ((T (*)(GCloudConfig*, int32_t))(Il2CppBase() + 0x4649558))(this, value);
	}
	template <typename T = int32_t> T get_DolphiniOSNodeID() {
		return ((T (*)(GCloudConfig*))(Il2CppBase() + 0x4649560))(this);
	}
	template <typename T = void> T set_DolphiniOSNodeID(int32_t value) {
		return ((T (*)(GCloudConfig*, int32_t))(Il2CppBase() + 0x4649568))(this, value);
	}
	template <typename T = int32_t> T get_DolphinPCNodeID() {
		return ((T (*)(GCloudConfig*))(Il2CppBase() + 0x4649570))(this);
	}
	template <typename T = void> T set_DolphinPCNodeID(int32_t value) {
		return ((T (*)(GCloudConfig*, int32_t))(Il2CppBase() + 0x4649578))(this, value);
	}
	template <typename T = int32_t> T get_PufferAndroidID() {
		return ((T (*)(GCloudConfig*))(Il2CppBase() + 0x4649580))(this);
	}
	template <typename T = void> T set_PufferAndroidID(int32_t value) {
		return ((T (*)(GCloudConfig*, int32_t))(Il2CppBase() + 0x4649588))(this, value);
	}
	template <typename T = int32_t> T get_PufferiOSID() {
		return ((T (*)(GCloudConfig*))(Il2CppBase() + 0x4649590))(this);
	}
	template <typename T = void> T set_PufferiOSID(int32_t value) {
		return ((T (*)(GCloudConfig*, int32_t))(Il2CppBase() + 0x4649598))(this, value);
	}
	template <typename T = Il2CppString*> T get_GVoiceAppID() {
		return ((T (*)(GCloudConfig*))(Il2CppBase() + 0x46495A0))(this);
	}
	template <typename T = void> T set_GVoiceAppID(Il2CppString* value) {
		return ((T (*)(GCloudConfig*, Il2CppString*))(Il2CppBase() + 0x46495A8))(this, value);
	}
	template <typename T = Il2CppString*> T get_GVoiceAppKey() {
		return ((T (*)(GCloudConfig*))(Il2CppBase() + 0x46495B0))(this);
	}
	template <typename T = void> T set_GVoiceAppKey(Il2CppString* value) {
		return ((T (*)(GCloudConfig*, Il2CppString*))(Il2CppBase() + 0x46495B8))(this, value);
	}
	template <typename T = Il2CppString*> T get_GVoiceURL() {
		return ((T (*)(GCloudConfig*))(Il2CppBase() + 0x46495C0))(this);
	}
	template <typename T = void> T set_GVoiceURL(Il2CppString* value) {
		return ((T (*)(GCloudConfig*, Il2CppString*))(Il2CppBase() + 0x46495C8))(this, value);
	}
	template <typename T = int32_t> T get_LitePackPufferAndroidID() {
		return ((T (*)(GCloudConfig*))(Il2CppBase() + 0x46495D0))(this);
	}
	template <typename T = void> T set_LitePackPufferAndroidID(int32_t value) {
		return ((T (*)(GCloudConfig*, int32_t))(Il2CppBase() + 0x46495D8))(this, value);
	}
	template <typename T = int32_t> T get_LitePackPufferiOSID() {
		return ((T (*)(GCloudConfig*))(Il2CppBase() + 0x46495E0))(this);
	}
	template <typename T = void> T set_LitePackPufferiOSID(int32_t value) {
		return ((T (*)(GCloudConfig*, int32_t))(Il2CppBase() + 0x46495E8))(this, value);
	}
	template <typename T = Il2CppString*> T get_LitePackPufferServerURL() {
		return ((T (*)(GCloudConfig*))(Il2CppBase() + 0x46495F0))(this);
	}
	template <typename T = void> T set_LitePackPufferServerURL(Il2CppString* value) {
		return ((T (*)(GCloudConfig*, Il2CppString*))(Il2CppBase() + 0x46495F8))(this, value);
	}
	template <typename T = int32_t> T get_DailyDolphinIDForPufferAndroid() {
		return ((T (*)(GCloudConfig*))(Il2CppBase() + 0x4649600))(this);
	}
	template <typename T = void> T set_DailyDolphinIDForPufferAndroid(int32_t value) {
		return ((T (*)(GCloudConfig*, int32_t))(Il2CppBase() + 0x4649608))(this, value);
	}
	template <typename T = int32_t> T get_DailyDolphinIDForPufferIOS() {
		return ((T (*)(GCloudConfig*))(Il2CppBase() + 0x4649610))(this);
	}
	template <typename T = void> T set_DailyDolphinIDForPufferIOS(int32_t value) {
		return ((T (*)(GCloudConfig*, int32_t))(Il2CppBase() + 0x4649618))(this, value);
	}
	template <typename T = int32_t> T Deserialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(GCloudConfig*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x4649620))(this, bytes, position);
	}

};

}
