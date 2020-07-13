#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Config {

class DeviceCapacityWhitelistAndroidConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Config", "DeviceCapacityWhitelist_AndroidConfig"));
	}

	template <typename T = Il2CppString*> T& ModelName() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppString*> T& Vendor() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& DefaultSettingLevel() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& CapacitySettingLevel() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& DefaultFrameRateLevel() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& MaxFrameRateLevel() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& MaxFrameRateUnderLowQuality() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> T& MSAA() {
		return *(T*)((uintptr_t)this + 0x28);
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

	template <typename T = Il2CppString*> T GetPrimaryKeyValue() {
		return ((T (*)(DeviceCapacityWhitelistAndroidConfig*))(Il2CppBase() + 0x4640B78))(this);
	}
	template <typename T = Il2CppString*> T GetSecondaryKeyValue() {
		return ((T (*)(DeviceCapacityWhitelistAndroidConfig*))(Il2CppBase() + 0x4640C20))(this);
	}
	template <typename T = Il2CppString*> T get_ModelName() {
		return ((T (*)(DeviceCapacityWhitelistAndroidConfig*))(Il2CppBase() + 0x4640C18))(this);
	}
	template <typename T = void> T set_ModelName(Il2CppString* value) {
		return ((T (*)(DeviceCapacityWhitelistAndroidConfig*, Il2CppString*))(Il2CppBase() + 0x4640CC8))(this, value);
	}
	template <typename T = Il2CppString*> T get_Vendor() {
		return ((T (*)(DeviceCapacityWhitelistAndroidConfig*))(Il2CppBase() + 0x4640CC0))(this);
	}
	template <typename T = void> T set_Vendor(Il2CppString* value) {
		return ((T (*)(DeviceCapacityWhitelistAndroidConfig*, Il2CppString*))(Il2CppBase() + 0x4640CD0))(this, value);
	}
	template <typename T = int32_t> T get_DefaultSettingLevel() {
		return ((T (*)(DeviceCapacityWhitelistAndroidConfig*))(Il2CppBase() + 0x4640CD8))(this);
	}
	template <typename T = void> T set_DefaultSettingLevel(int32_t value) {
		return ((T (*)(DeviceCapacityWhitelistAndroidConfig*, int32_t))(Il2CppBase() + 0x4640CE0))(this, value);
	}
	template <typename T = int32_t> T get_CapacitySettingLevel() {
		return ((T (*)(DeviceCapacityWhitelistAndroidConfig*))(Il2CppBase() + 0x4640CE8))(this);
	}
	template <typename T = void> T set_CapacitySettingLevel(int32_t value) {
		return ((T (*)(DeviceCapacityWhitelistAndroidConfig*, int32_t))(Il2CppBase() + 0x4640CF0))(this, value);
	}
	template <typename T = int32_t> T get_DefaultFrameRateLevel() {
		return ((T (*)(DeviceCapacityWhitelistAndroidConfig*))(Il2CppBase() + 0x4640CF8))(this);
	}
	template <typename T = void> T set_DefaultFrameRateLevel(int32_t value) {
		return ((T (*)(DeviceCapacityWhitelistAndroidConfig*, int32_t))(Il2CppBase() + 0x4640D00))(this, value);
	}
	template <typename T = int32_t> T get_MaxFrameRateLevel() {
		return ((T (*)(DeviceCapacityWhitelistAndroidConfig*))(Il2CppBase() + 0x4640D08))(this);
	}
	template <typename T = void> T set_MaxFrameRateLevel(int32_t value) {
		return ((T (*)(DeviceCapacityWhitelistAndroidConfig*, int32_t))(Il2CppBase() + 0x4640D10))(this, value);
	}
	template <typename T = int32_t> T get_MaxFrameRateUnderLowQuality() {
		return ((T (*)(DeviceCapacityWhitelistAndroidConfig*))(Il2CppBase() + 0x4640D18))(this);
	}
	template <typename T = void> T set_MaxFrameRateUnderLowQuality(int32_t value) {
		return ((T (*)(DeviceCapacityWhitelistAndroidConfig*, int32_t))(Il2CppBase() + 0x4640D20))(this, value);
	}
	template <typename T = int32_t> T get_MSAA() {
		return ((T (*)(DeviceCapacityWhitelistAndroidConfig*))(Il2CppBase() + 0x4640D28))(this);
	}
	template <typename T = void> T set_MSAA(int32_t value) {
		return ((T (*)(DeviceCapacityWhitelistAndroidConfig*, int32_t))(Il2CppBase() + 0x4640D30))(this, value);
	}
	template <typename T = int32_t> T Deserialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(DeviceCapacityWhitelistAndroidConfig*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x4640D38))(this, bytes, position);
	}

};

}
