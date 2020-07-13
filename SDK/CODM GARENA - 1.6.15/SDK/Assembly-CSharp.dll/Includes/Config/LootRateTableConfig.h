#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Config {

class LootRateTableConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Config", "LootRateTableConfig"));
	}

	template <typename T = uintptr_t> T& EMode() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& Id() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& Spi() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& Normal() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& Uncommon() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& Rare() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& Epic() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> T& Legendary() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& Gold() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = int32_t> T& Box_prob() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> T& Num_prob_1() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = int32_t> T& Num_prob_2() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = int32_t> T& Num_prob_3() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = int32_t> T& Num_prob_4() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = int32_t> T& Num_prob_5() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = int32_t> T& Num_prob_6() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = Il2CppString*> T& Mode() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PostInit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_FindLootRate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Deserialize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T PostInit() {
		return ((T (*)(LootRateTableConfig*))(Il2CppBase() + 0x3776E58))(this);
	}
	template <typename T = uintptr_t> static T FindLootRate(int32_t spi, int32_t ratecolor) {
		return ((T (*)(void *, int32_t, int32_t))(Il2CppBase() + 0x3776F64))(0, spi, ratecolor);
	}
	template <typename T = int32_t> T get_Id() {
		return ((T (*)(LootRateTableConfig*))(Il2CppBase() + 0x377711C))(this);
	}
	template <typename T = void> T set_Id(int32_t value) {
		return ((T (*)(LootRateTableConfig*, int32_t))(Il2CppBase() + 0x3777124))(this, value);
	}
	template <typename T = int32_t> T get_Spi() {
		return ((T (*)(LootRateTableConfig*))(Il2CppBase() + 0x377712C))(this);
	}
	template <typename T = void> T set_Spi(int32_t value) {
		return ((T (*)(LootRateTableConfig*, int32_t))(Il2CppBase() + 0x3777134))(this, value);
	}
	template <typename T = int32_t> T get_Normal() {
		return ((T (*)(LootRateTableConfig*))(Il2CppBase() + 0x377713C))(this);
	}
	template <typename T = void> T set_Normal(int32_t value) {
		return ((T (*)(LootRateTableConfig*, int32_t))(Il2CppBase() + 0x3777144))(this, value);
	}
	template <typename T = int32_t> T get_Uncommon() {
		return ((T (*)(LootRateTableConfig*))(Il2CppBase() + 0x377714C))(this);
	}
	template <typename T = void> T set_Uncommon(int32_t value) {
		return ((T (*)(LootRateTableConfig*, int32_t))(Il2CppBase() + 0x3777154))(this, value);
	}
	template <typename T = int32_t> T get_Rare() {
		return ((T (*)(LootRateTableConfig*))(Il2CppBase() + 0x377715C))(this);
	}
	template <typename T = void> T set_Rare(int32_t value) {
		return ((T (*)(LootRateTableConfig*, int32_t))(Il2CppBase() + 0x3777164))(this, value);
	}
	template <typename T = int32_t> T get_Epic() {
		return ((T (*)(LootRateTableConfig*))(Il2CppBase() + 0x377716C))(this);
	}
	template <typename T = void> T set_Epic(int32_t value) {
		return ((T (*)(LootRateTableConfig*, int32_t))(Il2CppBase() + 0x3777174))(this, value);
	}
	template <typename T = int32_t> T get_Legendary() {
		return ((T (*)(LootRateTableConfig*))(Il2CppBase() + 0x377717C))(this);
	}
	template <typename T = void> T set_Legendary(int32_t value) {
		return ((T (*)(LootRateTableConfig*, int32_t))(Il2CppBase() + 0x3777184))(this, value);
	}
	template <typename T = int32_t> T get_Gold() {
		return ((T (*)(LootRateTableConfig*))(Il2CppBase() + 0x377718C))(this);
	}
	template <typename T = void> T set_Gold(int32_t value) {
		return ((T (*)(LootRateTableConfig*, int32_t))(Il2CppBase() + 0x3777194))(this, value);
	}
	template <typename T = int32_t> T get_Box_prob() {
		return ((T (*)(LootRateTableConfig*))(Il2CppBase() + 0x377719C))(this);
	}
	template <typename T = void> T set_Box_prob(int32_t value) {
		return ((T (*)(LootRateTableConfig*, int32_t))(Il2CppBase() + 0x37771A4))(this, value);
	}
	template <typename T = int32_t> T get_Num_prob_1() {
		return ((T (*)(LootRateTableConfig*))(Il2CppBase() + 0x37771AC))(this);
	}
	template <typename T = void> T set_Num_prob_1(int32_t value) {
		return ((T (*)(LootRateTableConfig*, int32_t))(Il2CppBase() + 0x37771B4))(this, value);
	}
	template <typename T = int32_t> T get_Num_prob_2() {
		return ((T (*)(LootRateTableConfig*))(Il2CppBase() + 0x37771BC))(this);
	}
	template <typename T = void> T set_Num_prob_2(int32_t value) {
		return ((T (*)(LootRateTableConfig*, int32_t))(Il2CppBase() + 0x37771C4))(this, value);
	}
	template <typename T = int32_t> T get_Num_prob_3() {
		return ((T (*)(LootRateTableConfig*))(Il2CppBase() + 0x37771CC))(this);
	}
	template <typename T = void> T set_Num_prob_3(int32_t value) {
		return ((T (*)(LootRateTableConfig*, int32_t))(Il2CppBase() + 0x37771D4))(this, value);
	}
	template <typename T = int32_t> T get_Num_prob_4() {
		return ((T (*)(LootRateTableConfig*))(Il2CppBase() + 0x37771DC))(this);
	}
	template <typename T = void> T set_Num_prob_4(int32_t value) {
		return ((T (*)(LootRateTableConfig*, int32_t))(Il2CppBase() + 0x37771E4))(this, value);
	}
	template <typename T = int32_t> T get_Num_prob_5() {
		return ((T (*)(LootRateTableConfig*))(Il2CppBase() + 0x37771EC))(this);
	}
	template <typename T = void> T set_Num_prob_5(int32_t value) {
		return ((T (*)(LootRateTableConfig*, int32_t))(Il2CppBase() + 0x37771F4))(this, value);
	}
	template <typename T = int32_t> T get_Num_prob_6() {
		return ((T (*)(LootRateTableConfig*))(Il2CppBase() + 0x37771FC))(this);
	}
	template <typename T = void> T set_Num_prob_6(int32_t value) {
		return ((T (*)(LootRateTableConfig*, int32_t))(Il2CppBase() + 0x3777204))(this, value);
	}
	template <typename T = Il2CppString*> T get_Mode() {
		return ((T (*)(LootRateTableConfig*))(Il2CppBase() + 0x3776F5C))(this);
	}
	template <typename T = void> T set_Mode(Il2CppString* value) {
		return ((T (*)(LootRateTableConfig*, Il2CppString*))(Il2CppBase() + 0x377720C))(this, value);
	}
	template <typename T = int32_t> T Deserialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(LootRateTableConfig*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x3777214))(this, bytes, position);
	}
	template <typename T = void> T xLuaBaseProxy_PostInit() {
		return ((T (*)(LootRateTableConfig*))(Il2CppBase() + 0x377748C))(this);
	}

};

}
