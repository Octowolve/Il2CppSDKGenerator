#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Config {

class GPUCapacityWhitelistAndroidConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Config", "GPUCapacityWhitelist_AndroidConfig"));
	}

	template <typename T = Il2CppString*> T& Gpu() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppString*> T& Vendor() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& Model() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& DefaultFrameRateLevel() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& MaxFrameRateLevel() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& MaxFrameRateUnderLowQuality() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& MSAA() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> T& Extreme_height() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& Veryhigh_height() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = int32_t> T& High_height() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> T& Mid_height() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = int32_t> T& Low_height() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = int32_t> T& Verylow_height() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = int32_t> T& Impatient_height() {
		return *(T*)((uintptr_t)this + 0x40);
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
	template <typename T = uintptr_t> static T& __Hotfix0_GetTertiaryKeyValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Deserialize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = Il2CppString*> T GetPrimaryKeyValue() {
		return ((T (*)(GPUCapacityWhitelistAndroidConfig*))(Il2CppBase() + 0x37619A8))(this);
	}
	template <typename T = Il2CppString*> T GetSecondaryKeyValue() {
		return ((T (*)(GPUCapacityWhitelistAndroidConfig*))(Il2CppBase() + 0x3761A50))(this);
	}
	template <typename T = Il2CppString*> T GetTertiaryKeyValue() {
		return ((T (*)(GPUCapacityWhitelistAndroidConfig*))(Il2CppBase() + 0x3761AF8))(this);
	}
	template <typename T = Il2CppString*> T get_Gpu() {
		return ((T (*)(GPUCapacityWhitelistAndroidConfig*))(Il2CppBase() + 0x3761A48))(this);
	}
	template <typename T = void> T set_Gpu(Il2CppString* value) {
		return ((T (*)(GPUCapacityWhitelistAndroidConfig*, Il2CppString*))(Il2CppBase() + 0x3761BA0))(this, value);
	}
	template <typename T = Il2CppString*> T get_Vendor() {
		return ((T (*)(GPUCapacityWhitelistAndroidConfig*))(Il2CppBase() + 0x3761AF0))(this);
	}
	template <typename T = void> T set_Vendor(Il2CppString* value) {
		return ((T (*)(GPUCapacityWhitelistAndroidConfig*, Il2CppString*))(Il2CppBase() + 0x3761BA8))(this, value);
	}
	template <typename T = Il2CppString*> T get_Model() {
		return ((T (*)(GPUCapacityWhitelistAndroidConfig*))(Il2CppBase() + 0x3761B98))(this);
	}
	template <typename T = void> T set_Model(Il2CppString* value) {
		return ((T (*)(GPUCapacityWhitelistAndroidConfig*, Il2CppString*))(Il2CppBase() + 0x3761BB0))(this, value);
	}
	template <typename T = int32_t> T get_DefaultFrameRateLevel() {
		return ((T (*)(GPUCapacityWhitelistAndroidConfig*))(Il2CppBase() + 0x3761BB8))(this);
	}
	template <typename T = void> T set_DefaultFrameRateLevel(int32_t value) {
		return ((T (*)(GPUCapacityWhitelistAndroidConfig*, int32_t))(Il2CppBase() + 0x3761BC0))(this, value);
	}
	template <typename T = int32_t> T get_MaxFrameRateLevel() {
		return ((T (*)(GPUCapacityWhitelistAndroidConfig*))(Il2CppBase() + 0x3761BC8))(this);
	}
	template <typename T = void> T set_MaxFrameRateLevel(int32_t value) {
		return ((T (*)(GPUCapacityWhitelistAndroidConfig*, int32_t))(Il2CppBase() + 0x3761BD0))(this, value);
	}
	template <typename T = int32_t> T get_MaxFrameRateUnderLowQuality() {
		return ((T (*)(GPUCapacityWhitelistAndroidConfig*))(Il2CppBase() + 0x3761BD8))(this);
	}
	template <typename T = void> T set_MaxFrameRateUnderLowQuality(int32_t value) {
		return ((T (*)(GPUCapacityWhitelistAndroidConfig*, int32_t))(Il2CppBase() + 0x3761BE0))(this, value);
	}
	template <typename T = int32_t> T get_MSAA() {
		return ((T (*)(GPUCapacityWhitelistAndroidConfig*))(Il2CppBase() + 0x3761BE8))(this);
	}
	template <typename T = void> T set_MSAA(int32_t value) {
		return ((T (*)(GPUCapacityWhitelistAndroidConfig*, int32_t))(Il2CppBase() + 0x3761BF0))(this, value);
	}
	template <typename T = int32_t> T get_Extreme_height() {
		return ((T (*)(GPUCapacityWhitelistAndroidConfig*))(Il2CppBase() + 0x3761BF8))(this);
	}
	template <typename T = void> T set_Extreme_height(int32_t value) {
		return ((T (*)(GPUCapacityWhitelistAndroidConfig*, int32_t))(Il2CppBase() + 0x3761C00))(this, value);
	}
	template <typename T = int32_t> T get_Veryhigh_height() {
		return ((T (*)(GPUCapacityWhitelistAndroidConfig*))(Il2CppBase() + 0x3761C08))(this);
	}
	template <typename T = void> T set_Veryhigh_height(int32_t value) {
		return ((T (*)(GPUCapacityWhitelistAndroidConfig*, int32_t))(Il2CppBase() + 0x3761C10))(this, value);
	}
	template <typename T = int32_t> T get_High_height() {
		return ((T (*)(GPUCapacityWhitelistAndroidConfig*))(Il2CppBase() + 0x3761C18))(this);
	}
	template <typename T = void> T set_High_height(int32_t value) {
		return ((T (*)(GPUCapacityWhitelistAndroidConfig*, int32_t))(Il2CppBase() + 0x3761C20))(this, value);
	}
	template <typename T = int32_t> T get_Mid_height() {
		return ((T (*)(GPUCapacityWhitelistAndroidConfig*))(Il2CppBase() + 0x3761C28))(this);
	}
	template <typename T = void> T set_Mid_height(int32_t value) {
		return ((T (*)(GPUCapacityWhitelistAndroidConfig*, int32_t))(Il2CppBase() + 0x3761C30))(this, value);
	}
	template <typename T = int32_t> T get_Low_height() {
		return ((T (*)(GPUCapacityWhitelistAndroidConfig*))(Il2CppBase() + 0x3761C38))(this);
	}
	template <typename T = void> T set_Low_height(int32_t value) {
		return ((T (*)(GPUCapacityWhitelistAndroidConfig*, int32_t))(Il2CppBase() + 0x3761C40))(this, value);
	}
	template <typename T = int32_t> T get_Verylow_height() {
		return ((T (*)(GPUCapacityWhitelistAndroidConfig*))(Il2CppBase() + 0x3761C48))(this);
	}
	template <typename T = void> T set_Verylow_height(int32_t value) {
		return ((T (*)(GPUCapacityWhitelistAndroidConfig*, int32_t))(Il2CppBase() + 0x3761C50))(this, value);
	}
	template <typename T = int32_t> T get_Impatient_height() {
		return ((T (*)(GPUCapacityWhitelistAndroidConfig*))(Il2CppBase() + 0x3761C58))(this);
	}
	template <typename T = void> T set_Impatient_height(int32_t value) {
		return ((T (*)(GPUCapacityWhitelistAndroidConfig*, int32_t))(Il2CppBase() + 0x3761C60))(this, value);
	}
	template <typename T = int32_t> T Deserialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(GPUCapacityWhitelistAndroidConfig*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x3761C68))(this, bytes, position);
	}

};

}
