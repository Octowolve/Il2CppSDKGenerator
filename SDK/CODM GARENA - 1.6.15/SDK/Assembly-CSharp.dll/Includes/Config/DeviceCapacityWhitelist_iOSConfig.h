#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Config {

class DeviceCapacityWhitelistiOSConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Config", "DeviceCapacityWhitelist_iOSConfig"));
	}

	template <typename T = int32_t> T& DeviceGeneration() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppString*> T& Desc() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& ModelName() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& DefaultSettingLevel() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& CapacitySettingLevel() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& DefaultFrameRateLevel() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& MaxFrameRateLevel() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> T& MaxFrameRateUnderLowQuality() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& MSAA() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = int32_t> T& ExtremeHeight() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> T& VeryHighHeight() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = int32_t> T& HighHeight() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = int32_t> T& MidHeight() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = int32_t> T& LowHeight() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = int32_t> T& VeryLowHeight() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = int32_t> T& ImpatientHeight() {
		return *(T*)((uintptr_t)this + 0x48);
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

	template <typename T = int32_t> T GetPrimaryKeyValue() {
		return ((T (*)(DeviceCapacityWhitelistiOSConfig*))(Il2CppBase() + 0x4640F98))(this);
	}
	template <typename T = Il2CppString*> T GetSecondaryKeyValue() {
		return ((T (*)(DeviceCapacityWhitelistiOSConfig*))(Il2CppBase() + 0x4641040))(this);
	}
	template <typename T = int32_t> T get_DeviceGeneration() {
		return ((T (*)(DeviceCapacityWhitelistiOSConfig*))(Il2CppBase() + 0x4641038))(this);
	}
	template <typename T = void> T set_DeviceGeneration(int32_t value) {
		return ((T (*)(DeviceCapacityWhitelistiOSConfig*, int32_t))(Il2CppBase() + 0x46410E8))(this, value);
	}
	template <typename T = Il2CppString*> T get_Desc() {
		return ((T (*)(DeviceCapacityWhitelistiOSConfig*))(Il2CppBase() + 0x46410F0))(this);
	}
	template <typename T = void> T set_Desc(Il2CppString* value) {
		return ((T (*)(DeviceCapacityWhitelistiOSConfig*, Il2CppString*))(Il2CppBase() + 0x46410F8))(this, value);
	}
	template <typename T = Il2CppString*> T get_ModelName() {
		return ((T (*)(DeviceCapacityWhitelistiOSConfig*))(Il2CppBase() + 0x46410E0))(this);
	}
	template <typename T = void> T set_ModelName(Il2CppString* value) {
		return ((T (*)(DeviceCapacityWhitelistiOSConfig*, Il2CppString*))(Il2CppBase() + 0x4641100))(this, value);
	}
	template <typename T = int32_t> T get_DefaultSettingLevel() {
		return ((T (*)(DeviceCapacityWhitelistiOSConfig*))(Il2CppBase() + 0x4641108))(this);
	}
	template <typename T = void> T set_DefaultSettingLevel(int32_t value) {
		return ((T (*)(DeviceCapacityWhitelistiOSConfig*, int32_t))(Il2CppBase() + 0x4641110))(this, value);
	}
	template <typename T = int32_t> T get_CapacitySettingLevel() {
		return ((T (*)(DeviceCapacityWhitelistiOSConfig*))(Il2CppBase() + 0x4641118))(this);
	}
	template <typename T = void> T set_CapacitySettingLevel(int32_t value) {
		return ((T (*)(DeviceCapacityWhitelistiOSConfig*, int32_t))(Il2CppBase() + 0x4641120))(this, value);
	}
	template <typename T = int32_t> T get_DefaultFrameRateLevel() {
		return ((T (*)(DeviceCapacityWhitelistiOSConfig*))(Il2CppBase() + 0x4641128))(this);
	}
	template <typename T = void> T set_DefaultFrameRateLevel(int32_t value) {
		return ((T (*)(DeviceCapacityWhitelistiOSConfig*, int32_t))(Il2CppBase() + 0x4641130))(this, value);
	}
	template <typename T = int32_t> T get_MaxFrameRateLevel() {
		return ((T (*)(DeviceCapacityWhitelistiOSConfig*))(Il2CppBase() + 0x4641138))(this);
	}
	template <typename T = void> T set_MaxFrameRateLevel(int32_t value) {
		return ((T (*)(DeviceCapacityWhitelistiOSConfig*, int32_t))(Il2CppBase() + 0x4641140))(this, value);
	}
	template <typename T = int32_t> T get_MaxFrameRateUnderLowQuality() {
		return ((T (*)(DeviceCapacityWhitelistiOSConfig*))(Il2CppBase() + 0x4641148))(this);
	}
	template <typename T = void> T set_MaxFrameRateUnderLowQuality(int32_t value) {
		return ((T (*)(DeviceCapacityWhitelistiOSConfig*, int32_t))(Il2CppBase() + 0x4641150))(this, value);
	}
	template <typename T = int32_t> T get_MSAA() {
		return ((T (*)(DeviceCapacityWhitelistiOSConfig*))(Il2CppBase() + 0x4641158))(this);
	}
	template <typename T = void> T set_MSAA(int32_t value) {
		return ((T (*)(DeviceCapacityWhitelistiOSConfig*, int32_t))(Il2CppBase() + 0x4641160))(this, value);
	}
	template <typename T = int32_t> T get_ExtremeHeight() {
		return ((T (*)(DeviceCapacityWhitelistiOSConfig*))(Il2CppBase() + 0x4641168))(this);
	}
	template <typename T = void> T set_ExtremeHeight(int32_t value) {
		return ((T (*)(DeviceCapacityWhitelistiOSConfig*, int32_t))(Il2CppBase() + 0x4641170))(this, value);
	}
	template <typename T = int32_t> T get_VeryHighHeight() {
		return ((T (*)(DeviceCapacityWhitelistiOSConfig*))(Il2CppBase() + 0x4641178))(this);
	}
	template <typename T = void> T set_VeryHighHeight(int32_t value) {
		return ((T (*)(DeviceCapacityWhitelistiOSConfig*, int32_t))(Il2CppBase() + 0x4641180))(this, value);
	}
	template <typename T = int32_t> T get_HighHeight() {
		return ((T (*)(DeviceCapacityWhitelistiOSConfig*))(Il2CppBase() + 0x4641188))(this);
	}
	template <typename T = void> T set_HighHeight(int32_t value) {
		return ((T (*)(DeviceCapacityWhitelistiOSConfig*, int32_t))(Il2CppBase() + 0x4641190))(this, value);
	}
	template <typename T = int32_t> T get_MidHeight() {
		return ((T (*)(DeviceCapacityWhitelistiOSConfig*))(Il2CppBase() + 0x4641198))(this);
	}
	template <typename T = void> T set_MidHeight(int32_t value) {
		return ((T (*)(DeviceCapacityWhitelistiOSConfig*, int32_t))(Il2CppBase() + 0x46411A0))(this, value);
	}
	template <typename T = int32_t> T get_LowHeight() {
		return ((T (*)(DeviceCapacityWhitelistiOSConfig*))(Il2CppBase() + 0x46411A8))(this);
	}
	template <typename T = void> T set_LowHeight(int32_t value) {
		return ((T (*)(DeviceCapacityWhitelistiOSConfig*, int32_t))(Il2CppBase() + 0x46411B0))(this, value);
	}
	template <typename T = int32_t> T get_VeryLowHeight() {
		return ((T (*)(DeviceCapacityWhitelistiOSConfig*))(Il2CppBase() + 0x46411B8))(this);
	}
	template <typename T = void> T set_VeryLowHeight(int32_t value) {
		return ((T (*)(DeviceCapacityWhitelistiOSConfig*, int32_t))(Il2CppBase() + 0x46411C0))(this, value);
	}
	template <typename T = int32_t> T get_ImpatientHeight() {
		return ((T (*)(DeviceCapacityWhitelistiOSConfig*))(Il2CppBase() + 0x46411C8))(this);
	}
	template <typename T = void> T set_ImpatientHeight(int32_t value) {
		return ((T (*)(DeviceCapacityWhitelistiOSConfig*, int32_t))(Il2CppBase() + 0x46411D0))(this, value);
	}
	template <typename T = int32_t> T Deserialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(DeviceCapacityWhitelistiOSConfig*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x46411D8))(this, bytes, position);
	}

};

}
