#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Config {

class FirstRechargeConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Config", "FirstRechargeConfig"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& awards() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& Order() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& RechargeId() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& SubRechargeId() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& PlatId() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& ZoneId() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppString*> T& GetTip() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppString*> T& RewardDesc1() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppString*> T& RewardDesc2() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uint32_t> T& RewardId_1() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> T& RewardNum_1() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uint32_t> T& RewardId_2() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = int32_t> T& RewardNum_2() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uint32_t> T& RewardId_3() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = int32_t> T& RewardNum_3() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uint32_t> T& RewardId_4() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = int32_t> T& RewardNum_4() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uint32_t> T& RewardId_5() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = int32_t> T& RewardNum_5() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = uint32_t> T& RewardId_6() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = int32_t> T& RewardNum_6() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = int32_t> T& BeginDate() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = int32_t> T& EndDate() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = int32_t> T& StartTime() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = int32_t> T& EndTime() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = bool> T& IsShowLocalTime() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = Il2CppString*> T& BgName() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetRewards() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPrimaryKeyValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Deserialize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = Il2CppList<uintptr_t>*> T GetRewards() {
		return ((T (*)(FirstRechargeConfig*))(Il2CppBase() + 0x4643ED0))(this);
	}
	template <typename T = int32_t> T GetPrimaryKeyValue() {
		return ((T (*)(FirstRechargeConfig*))(Il2CppBase() + 0x4644338))(this);
	}
	template <typename T = int32_t> T get_Order() {
		return ((T (*)(FirstRechargeConfig*))(Il2CppBase() + 0x46443D8))(this);
	}
	template <typename T = void> T set_Order(int32_t value) {
		return ((T (*)(FirstRechargeConfig*, int32_t))(Il2CppBase() + 0x46443E0))(this, value);
	}
	template <typename T = int32_t> T get_RechargeId() {
		return ((T (*)(FirstRechargeConfig*))(Il2CppBase() + 0x46443E8))(this);
	}
	template <typename T = void> T set_RechargeId(int32_t value) {
		return ((T (*)(FirstRechargeConfig*, int32_t))(Il2CppBase() + 0x46443F0))(this, value);
	}
	template <typename T = int32_t> T get_SubRechargeId() {
		return ((T (*)(FirstRechargeConfig*))(Il2CppBase() + 0x46443F8))(this);
	}
	template <typename T = void> T set_SubRechargeId(int32_t value) {
		return ((T (*)(FirstRechargeConfig*, int32_t))(Il2CppBase() + 0x4644400))(this, value);
	}
	template <typename T = int32_t> T get_PlatId() {
		return ((T (*)(FirstRechargeConfig*))(Il2CppBase() + 0x4644408))(this);
	}
	template <typename T = void> T set_PlatId(int32_t value) {
		return ((T (*)(FirstRechargeConfig*, int32_t))(Il2CppBase() + 0x4644410))(this, value);
	}
	template <typename T = int32_t> T get_ZoneId() {
		return ((T (*)(FirstRechargeConfig*))(Il2CppBase() + 0x4644418))(this);
	}
	template <typename T = void> T set_ZoneId(int32_t value) {
		return ((T (*)(FirstRechargeConfig*, int32_t))(Il2CppBase() + 0x4644420))(this, value);
	}
	template <typename T = Il2CppString*> T get_GetTip() {
		return ((T (*)(FirstRechargeConfig*))(Il2CppBase() + 0x4644428))(this);
	}
	template <typename T = void> T set_GetTip(Il2CppString* value) {
		return ((T (*)(FirstRechargeConfig*, Il2CppString*))(Il2CppBase() + 0x4644430))(this, value);
	}
	template <typename T = Il2CppString*> T get_RewardDesc1() {
		return ((T (*)(FirstRechargeConfig*))(Il2CppBase() + 0x4644438))(this);
	}
	template <typename T = void> T set_RewardDesc1(Il2CppString* value) {
		return ((T (*)(FirstRechargeConfig*, Il2CppString*))(Il2CppBase() + 0x4644440))(this, value);
	}
	template <typename T = Il2CppString*> T get_RewardDesc2() {
		return ((T (*)(FirstRechargeConfig*))(Il2CppBase() + 0x4644448))(this);
	}
	template <typename T = void> T set_RewardDesc2(Il2CppString* value) {
		return ((T (*)(FirstRechargeConfig*, Il2CppString*))(Il2CppBase() + 0x4644450))(this, value);
	}
	template <typename T = uint32_t> T get_RewardId_1() {
		return ((T (*)(FirstRechargeConfig*))(Il2CppBase() + 0x46442D8))(this);
	}
	template <typename T = void> T set_RewardId_1(uint32_t value) {
		return ((T (*)(FirstRechargeConfig*, uint32_t))(Il2CppBase() + 0x4644458))(this, value);
	}
	template <typename T = int32_t> T get_RewardNum_1() {
		return ((T (*)(FirstRechargeConfig*))(Il2CppBase() + 0x46442E0))(this);
	}
	template <typename T = void> T set_RewardNum_1(int32_t value) {
		return ((T (*)(FirstRechargeConfig*, int32_t))(Il2CppBase() + 0x4644460))(this, value);
	}
	template <typename T = uint32_t> T get_RewardId_2() {
		return ((T (*)(FirstRechargeConfig*))(Il2CppBase() + 0x46442E8))(this);
	}
	template <typename T = void> T set_RewardId_2(uint32_t value) {
		return ((T (*)(FirstRechargeConfig*, uint32_t))(Il2CppBase() + 0x4644468))(this, value);
	}
	template <typename T = int32_t> T get_RewardNum_2() {
		return ((T (*)(FirstRechargeConfig*))(Il2CppBase() + 0x46442F0))(this);
	}
	template <typename T = void> T set_RewardNum_2(int32_t value) {
		return ((T (*)(FirstRechargeConfig*, int32_t))(Il2CppBase() + 0x4644470))(this, value);
	}
	template <typename T = uint32_t> T get_RewardId_3() {
		return ((T (*)(FirstRechargeConfig*))(Il2CppBase() + 0x46442F8))(this);
	}
	template <typename T = void> T set_RewardId_3(uint32_t value) {
		return ((T (*)(FirstRechargeConfig*, uint32_t))(Il2CppBase() + 0x4644478))(this, value);
	}
	template <typename T = int32_t> T get_RewardNum_3() {
		return ((T (*)(FirstRechargeConfig*))(Il2CppBase() + 0x4644300))(this);
	}
	template <typename T = void> T set_RewardNum_3(int32_t value) {
		return ((T (*)(FirstRechargeConfig*, int32_t))(Il2CppBase() + 0x4644480))(this, value);
	}
	template <typename T = uint32_t> T get_RewardId_4() {
		return ((T (*)(FirstRechargeConfig*))(Il2CppBase() + 0x4644308))(this);
	}
	template <typename T = void> T set_RewardId_4(uint32_t value) {
		return ((T (*)(FirstRechargeConfig*, uint32_t))(Il2CppBase() + 0x4644488))(this, value);
	}
	template <typename T = int32_t> T get_RewardNum_4() {
		return ((T (*)(FirstRechargeConfig*))(Il2CppBase() + 0x4644310))(this);
	}
	template <typename T = void> T set_RewardNum_4(int32_t value) {
		return ((T (*)(FirstRechargeConfig*, int32_t))(Il2CppBase() + 0x4644490))(this, value);
	}
	template <typename T = uint32_t> T get_RewardId_5() {
		return ((T (*)(FirstRechargeConfig*))(Il2CppBase() + 0x4644318))(this);
	}
	template <typename T = void> T set_RewardId_5(uint32_t value) {
		return ((T (*)(FirstRechargeConfig*, uint32_t))(Il2CppBase() + 0x4644498))(this, value);
	}
	template <typename T = int32_t> T get_RewardNum_5() {
		return ((T (*)(FirstRechargeConfig*))(Il2CppBase() + 0x4644320))(this);
	}
	template <typename T = void> T set_RewardNum_5(int32_t value) {
		return ((T (*)(FirstRechargeConfig*, int32_t))(Il2CppBase() + 0x46444A0))(this, value);
	}
	template <typename T = uint32_t> T get_RewardId_6() {
		return ((T (*)(FirstRechargeConfig*))(Il2CppBase() + 0x4644328))(this);
	}
	template <typename T = void> T set_RewardId_6(uint32_t value) {
		return ((T (*)(FirstRechargeConfig*, uint32_t))(Il2CppBase() + 0x46444A8))(this, value);
	}
	template <typename T = int32_t> T get_RewardNum_6() {
		return ((T (*)(FirstRechargeConfig*))(Il2CppBase() + 0x4644330))(this);
	}
	template <typename T = void> T set_RewardNum_6(int32_t value) {
		return ((T (*)(FirstRechargeConfig*, int32_t))(Il2CppBase() + 0x46444B0))(this, value);
	}
	template <typename T = int32_t> T get_BeginDate() {
		return ((T (*)(FirstRechargeConfig*))(Il2CppBase() + 0x46444B8))(this);
	}
	template <typename T = void> T set_BeginDate(int32_t value) {
		return ((T (*)(FirstRechargeConfig*, int32_t))(Il2CppBase() + 0x46444C0))(this, value);
	}
	template <typename T = int32_t> T get_EndDate() {
		return ((T (*)(FirstRechargeConfig*))(Il2CppBase() + 0x46444C8))(this);
	}
	template <typename T = void> T set_EndDate(int32_t value) {
		return ((T (*)(FirstRechargeConfig*, int32_t))(Il2CppBase() + 0x46444D0))(this, value);
	}
	template <typename T = int32_t> T get_StartTime() {
		return ((T (*)(FirstRechargeConfig*))(Il2CppBase() + 0x46444D8))(this);
	}
	template <typename T = void> T set_StartTime(int32_t value) {
		return ((T (*)(FirstRechargeConfig*, int32_t))(Il2CppBase() + 0x46444E0))(this, value);
	}
	template <typename T = int32_t> T get_EndTime() {
		return ((T (*)(FirstRechargeConfig*))(Il2CppBase() + 0x46444E8))(this);
	}
	template <typename T = void> T set_EndTime(int32_t value) {
		return ((T (*)(FirstRechargeConfig*, int32_t))(Il2CppBase() + 0x46444F0))(this, value);
	}
	template <typename T = bool> T get_IsShowLocalTime() {
		return ((T (*)(FirstRechargeConfig*))(Il2CppBase() + 0x46444F8))(this);
	}
	template <typename T = void> T set_IsShowLocalTime(bool value) {
		return ((T (*)(FirstRechargeConfig*, bool))(Il2CppBase() + 0x4644500))(this, value);
	}
	template <typename T = Il2CppString*> T get_BgName() {
		return ((T (*)(FirstRechargeConfig*))(Il2CppBase() + 0x4644508))(this);
	}
	template <typename T = void> T set_BgName(Il2CppString* value) {
		return ((T (*)(FirstRechargeConfig*, Il2CppString*))(Il2CppBase() + 0x4644510))(this, value);
	}
	template <typename T = int32_t> T Deserialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(FirstRechargeConfig*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x4644518))(this, bytes, position);
	}

};

}
