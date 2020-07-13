#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Config {

class HomeRechargeEntranceConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Config", "HomeRechargeEntranceConfig"));
	}

	template <typename T = int32_t> T& ID() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& Type() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& LOC_Tip() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppString*> T& CdnUrl() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& SpirteName() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& Sort() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPrimaryKeyValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Deserialize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}

	template <typename T = int32_t> T GetPrimaryKeyValue() {
		return ((T (*)(HomeRechargeEntranceConfig*))(Il2CppBase() + 0x3763D9C))(this);
	}
	template <typename T = int32_t> T get_ID() {
		return ((T (*)(HomeRechargeEntranceConfig*))(Il2CppBase() + 0x3763E3C))(this);
	}
	template <typename T = void> T set_ID(int32_t value) {
		return ((T (*)(HomeRechargeEntranceConfig*, int32_t))(Il2CppBase() + 0x3763E44))(this, value);
	}
	template <typename T = int32_t> T get_Type() {
		return ((T (*)(HomeRechargeEntranceConfig*))(Il2CppBase() + 0x3763E4C))(this);
	}
	template <typename T = void> T set_Type(int32_t value) {
		return ((T (*)(HomeRechargeEntranceConfig*, int32_t))(Il2CppBase() + 0x3763E54))(this, value);
	}
	template <typename T = Il2CppString*> T get_LOC_Tip() {
		return ((T (*)(HomeRechargeEntranceConfig*))(Il2CppBase() + 0x3763E5C))(this);
	}
	template <typename T = void> T set_LOC_Tip(Il2CppString* value) {
		return ((T (*)(HomeRechargeEntranceConfig*, Il2CppString*))(Il2CppBase() + 0x3763E64))(this, value);
	}
	template <typename T = Il2CppString*> T get_CdnUrl() {
		return ((T (*)(HomeRechargeEntranceConfig*))(Il2CppBase() + 0x3763E6C))(this);
	}
	template <typename T = void> T set_CdnUrl(Il2CppString* value) {
		return ((T (*)(HomeRechargeEntranceConfig*, Il2CppString*))(Il2CppBase() + 0x3763E74))(this, value);
	}
	template <typename T = Il2CppString*> T get_SpirteName() {
		return ((T (*)(HomeRechargeEntranceConfig*))(Il2CppBase() + 0x3763E7C))(this);
	}
	template <typename T = void> T set_SpirteName(Il2CppString* value) {
		return ((T (*)(HomeRechargeEntranceConfig*, Il2CppString*))(Il2CppBase() + 0x3763E84))(this, value);
	}
	template <typename T = int32_t> T get_Sort() {
		return ((T (*)(HomeRechargeEntranceConfig*))(Il2CppBase() + 0x3763E8C))(this);
	}
	template <typename T = void> T set_Sort(int32_t value) {
		return ((T (*)(HomeRechargeEntranceConfig*, int32_t))(Il2CppBase() + 0x3763E94))(this, value);
	}
	template <typename T = int32_t> T Deserialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(HomeRechargeEntranceConfig*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x3763E9C))(this, bytes, position);
	}

};

}
