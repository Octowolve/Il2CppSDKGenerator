#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Config {

class SingleRechargeConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Config", "SingleRechargeConfig"));
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
	template <typename T = int32_t> T& ZoneId() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& PlatId() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppString*> T& Title() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = Il2CppString*> T& SubTitle() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppString*> T& Content() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = int32_t> T& RechargeNum() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uint32_t> T& RewardId_1() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = int32_t> T& RewardNum_1() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uint32_t> T& RewardId_2() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = int32_t> T& RewardNum_2() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uint32_t> T& RewardId_3() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = int32_t> T& RewardNum_3() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uint32_t> T& RewardId_4() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = int32_t> T& RewardNum_4() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uint32_t> T& RewardId_5() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = int32_t> T& RewardNum_5() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uint32_t> T& RewardId_6() {
		return *(T*)((uintptr_t)this + 0x5C);
	}
	template <typename T = int32_t> T& RewardNum_6() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = int32_t> T& BeginDate() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = int32_t> T& EndDate() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = int32_t> T& StartTime() {
		return *(T*)((uintptr_t)this + 0x6C);
	}
	template <typename T = int32_t> T& EndTime() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = bool> T& IsShowLocalTime() {
		return *(T*)((uintptr_t)this + 0x74);
	}
	template <typename T = Il2CppString*> T& BgName() {
		return *(T*)((uintptr_t)this + 0x78);
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
		return ((T (*)(SingleRechargeConfig*))(Il2CppBase() + 0x30E0424))(this);
	}
	template <typename T = int32_t> T GetPrimaryKeyValue() {
		return ((T (*)(SingleRechargeConfig*))(Il2CppBase() + 0x30E0844))(this);
	}
	template <typename T = int32_t> T get_Order() {
		return ((T (*)(SingleRechargeConfig*))(Il2CppBase() + 0x30E08E4))(this);
	}
	template <typename T = void> T set_Order(int32_t value) {
		return ((T (*)(SingleRechargeConfig*, int32_t))(Il2CppBase() + 0x30E08EC))(this, value);
	}
	template <typename T = int32_t> T get_RechargeId() {
		return ((T (*)(SingleRechargeConfig*))(Il2CppBase() + 0x30E08F4))(this);
	}
	template <typename T = void> T set_RechargeId(int32_t value) {
		return ((T (*)(SingleRechargeConfig*, int32_t))(Il2CppBase() + 0x30E08FC))(this, value);
	}
	template <typename T = int32_t> T get_SubRechargeId() {
		return ((T (*)(SingleRechargeConfig*))(Il2CppBase() + 0x30E0904))(this);
	}
	template <typename T = void> T set_SubRechargeId(int32_t value) {
		return ((T (*)(SingleRechargeConfig*, int32_t))(Il2CppBase() + 0x30E090C))(this, value);
	}
	template <typename T = int32_t> T get_ZoneId() {
		return ((T (*)(SingleRechargeConfig*))(Il2CppBase() + 0x30E0914))(this);
	}
	template <typename T = void> T set_ZoneId(int32_t value) {
		return ((T (*)(SingleRechargeConfig*, int32_t))(Il2CppBase() + 0x30E091C))(this, value);
	}
	template <typename T = int32_t> T get_PlatId() {
		return ((T (*)(SingleRechargeConfig*))(Il2CppBase() + 0x30E0924))(this);
	}
	template <typename T = void> T set_PlatId(int32_t value) {
		return ((T (*)(SingleRechargeConfig*, int32_t))(Il2CppBase() + 0x30E092C))(this, value);
	}
	template <typename T = Il2CppString*> T get_Title() {
		return ((T (*)(SingleRechargeConfig*))(Il2CppBase() + 0x30E0934))(this);
	}
	template <typename T = void> T set_Title(Il2CppString* value) {
		return ((T (*)(SingleRechargeConfig*, Il2CppString*))(Il2CppBase() + 0x30E093C))(this, value);
	}
	template <typename T = Il2CppString*> T get_SubTitle() {
		return ((T (*)(SingleRechargeConfig*))(Il2CppBase() + 0x30E0944))(this);
	}
	template <typename T = void> T set_SubTitle(Il2CppString* value) {
		return ((T (*)(SingleRechargeConfig*, Il2CppString*))(Il2CppBase() + 0x30E094C))(this, value);
	}
	template <typename T = Il2CppString*> T get_Content() {
		return ((T (*)(SingleRechargeConfig*))(Il2CppBase() + 0x30E0954))(this);
	}
	template <typename T = void> T set_Content(Il2CppString* value) {
		return ((T (*)(SingleRechargeConfig*, Il2CppString*))(Il2CppBase() + 0x30E095C))(this, value);
	}
	template <typename T = int32_t> T get_RechargeNum() {
		return ((T (*)(SingleRechargeConfig*))(Il2CppBase() + 0x30E0964))(this);
	}
	template <typename T = void> T set_RechargeNum(int32_t value) {
		return ((T (*)(SingleRechargeConfig*, int32_t))(Il2CppBase() + 0x30E096C))(this, value);
	}
	template <typename T = uint32_t> T get_RewardId_1() {
		return ((T (*)(SingleRechargeConfig*))(Il2CppBase() + 0x30E07E4))(this);
	}
	template <typename T = void> T set_RewardId_1(uint32_t value) {
		return ((T (*)(SingleRechargeConfig*, uint32_t))(Il2CppBase() + 0x30E0974))(this, value);
	}
	template <typename T = int32_t> T get_RewardNum_1() {
		return ((T (*)(SingleRechargeConfig*))(Il2CppBase() + 0x30E07EC))(this);
	}
	template <typename T = void> T set_RewardNum_1(int32_t value) {
		return ((T (*)(SingleRechargeConfig*, int32_t))(Il2CppBase() + 0x30E097C))(this, value);
	}
	template <typename T = uint32_t> T get_RewardId_2() {
		return ((T (*)(SingleRechargeConfig*))(Il2CppBase() + 0x30E07F4))(this);
	}
	template <typename T = void> T set_RewardId_2(uint32_t value) {
		return ((T (*)(SingleRechargeConfig*, uint32_t))(Il2CppBase() + 0x30E0984))(this, value);
	}
	template <typename T = int32_t> T get_RewardNum_2() {
		return ((T (*)(SingleRechargeConfig*))(Il2CppBase() + 0x30E07FC))(this);
	}
	template <typename T = void> T set_RewardNum_2(int32_t value) {
		return ((T (*)(SingleRechargeConfig*, int32_t))(Il2CppBase() + 0x30E098C))(this, value);
	}
	template <typename T = uint32_t> T get_RewardId_3() {
		return ((T (*)(SingleRechargeConfig*))(Il2CppBase() + 0x30E0804))(this);
	}
	template <typename T = void> T set_RewardId_3(uint32_t value) {
		return ((T (*)(SingleRechargeConfig*, uint32_t))(Il2CppBase() + 0x30E0994))(this, value);
	}
	template <typename T = int32_t> T get_RewardNum_3() {
		return ((T (*)(SingleRechargeConfig*))(Il2CppBase() + 0x30E080C))(this);
	}
	template <typename T = void> T set_RewardNum_3(int32_t value) {
		return ((T (*)(SingleRechargeConfig*, int32_t))(Il2CppBase() + 0x30E099C))(this, value);
	}
	template <typename T = uint32_t> T get_RewardId_4() {
		return ((T (*)(SingleRechargeConfig*))(Il2CppBase() + 0x30E0814))(this);
	}
	template <typename T = void> T set_RewardId_4(uint32_t value) {
		return ((T (*)(SingleRechargeConfig*, uint32_t))(Il2CppBase() + 0x30E09A4))(this, value);
	}
	template <typename T = int32_t> T get_RewardNum_4() {
		return ((T (*)(SingleRechargeConfig*))(Il2CppBase() + 0x30E081C))(this);
	}
	template <typename T = void> T set_RewardNum_4(int32_t value) {
		return ((T (*)(SingleRechargeConfig*, int32_t))(Il2CppBase() + 0x30E09AC))(this, value);
	}
	template <typename T = uint32_t> T get_RewardId_5() {
		return ((T (*)(SingleRechargeConfig*))(Il2CppBase() + 0x30E0824))(this);
	}
	template <typename T = void> T set_RewardId_5(uint32_t value) {
		return ((T (*)(SingleRechargeConfig*, uint32_t))(Il2CppBase() + 0x30E09B4))(this, value);
	}
	template <typename T = int32_t> T get_RewardNum_5() {
		return ((T (*)(SingleRechargeConfig*))(Il2CppBase() + 0x30E082C))(this);
	}
	template <typename T = void> T set_RewardNum_5(int32_t value) {
		return ((T (*)(SingleRechargeConfig*, int32_t))(Il2CppBase() + 0x30E09BC))(this, value);
	}
	template <typename T = uint32_t> T get_RewardId_6() {
		return ((T (*)(SingleRechargeConfig*))(Il2CppBase() + 0x30E0834))(this);
	}
	template <typename T = void> T set_RewardId_6(uint32_t value) {
		return ((T (*)(SingleRechargeConfig*, uint32_t))(Il2CppBase() + 0x30E09C4))(this, value);
	}
	template <typename T = int32_t> T get_RewardNum_6() {
		return ((T (*)(SingleRechargeConfig*))(Il2CppBase() + 0x30E083C))(this);
	}
	template <typename T = void> T set_RewardNum_6(int32_t value) {
		return ((T (*)(SingleRechargeConfig*, int32_t))(Il2CppBase() + 0x30E09CC))(this, value);
	}
	template <typename T = int32_t> T get_BeginDate() {
		return ((T (*)(SingleRechargeConfig*))(Il2CppBase() + 0x30E09D4))(this);
	}
	template <typename T = void> T set_BeginDate(int32_t value) {
		return ((T (*)(SingleRechargeConfig*, int32_t))(Il2CppBase() + 0x30E09DC))(this, value);
	}
	template <typename T = int32_t> T get_EndDate() {
		return ((T (*)(SingleRechargeConfig*))(Il2CppBase() + 0x30E09E4))(this);
	}
	template <typename T = void> T set_EndDate(int32_t value) {
		return ((T (*)(SingleRechargeConfig*, int32_t))(Il2CppBase() + 0x30E09EC))(this, value);
	}
	template <typename T = int32_t> T get_StartTime() {
		return ((T (*)(SingleRechargeConfig*))(Il2CppBase() + 0x30E09F4))(this);
	}
	template <typename T = void> T set_StartTime(int32_t value) {
		return ((T (*)(SingleRechargeConfig*, int32_t))(Il2CppBase() + 0x30E09FC))(this, value);
	}
	template <typename T = int32_t> T get_EndTime() {
		return ((T (*)(SingleRechargeConfig*))(Il2CppBase() + 0x30E0A04))(this);
	}
	template <typename T = void> T set_EndTime(int32_t value) {
		return ((T (*)(SingleRechargeConfig*, int32_t))(Il2CppBase() + 0x30E0A0C))(this, value);
	}
	template <typename T = bool> T get_IsShowLocalTime() {
		return ((T (*)(SingleRechargeConfig*))(Il2CppBase() + 0x30E0A14))(this);
	}
	template <typename T = void> T set_IsShowLocalTime(bool value) {
		return ((T (*)(SingleRechargeConfig*, bool))(Il2CppBase() + 0x30E0A1C))(this, value);
	}
	template <typename T = Il2CppString*> T get_BgName() {
		return ((T (*)(SingleRechargeConfig*))(Il2CppBase() + 0x30E0A24))(this);
	}
	template <typename T = void> T set_BgName(Il2CppString* value) {
		return ((T (*)(SingleRechargeConfig*, Il2CppString*))(Il2CppBase() + 0x30E0A2C))(this, value);
	}
	template <typename T = int32_t> T Deserialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(SingleRechargeConfig*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x30E0A34))(this, bytes, position);
	}

};

}
