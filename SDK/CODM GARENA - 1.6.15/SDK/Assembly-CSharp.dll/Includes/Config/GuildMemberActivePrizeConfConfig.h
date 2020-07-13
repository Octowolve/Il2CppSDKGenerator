#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Config {

class GuildMemberActivePrizeConfConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Config", "GuildMemberActivePrizeConfConfig"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& PrizeInfoList() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& Guild_level() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& Prize1_need_active() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& Prize1_award_1_item_id() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& Prize1_award_1_item_num() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& Prize1_award_1_item_durable() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& Prize2_need_active() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> T& Prize2_award_1_item_id() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& Prize2_award_1_item_num() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = int32_t> T& Prize2_award_1_item_durable() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> T& Prize3_need_active() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = int32_t> T& Prize3_award_1_item_id() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = int32_t> T& Prize3_award_1_item_num() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = int32_t> T& Prize3_award_1_item_durable() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_PostInit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_GetPrimaryKeyValue() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Deserialize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0xC);
	}

	template <typename T = void> T PostInit() {
		return ((T (*)(GuildMemberActivePrizeConfConfig*))(Il2CppBase() + 0x3762A8C))(this);
	}
	template <typename T = int32_t> T GetPrimaryKeyValue() {
		return ((T (*)(GuildMemberActivePrizeConfConfig*))(Il2CppBase() + 0x3762D74))(this);
	}
	template <typename T = int32_t> T get_Guild_level() {
		return ((T (*)(GuildMemberActivePrizeConfConfig*))(Il2CppBase() + 0x3762E14))(this);
	}
	template <typename T = void> T set_Guild_level(int32_t value) {
		return ((T (*)(GuildMemberActivePrizeConfConfig*, int32_t))(Il2CppBase() + 0x3762E1C))(this, value);
	}
	template <typename T = int32_t> T get_Prize1_need_active() {
		return ((T (*)(GuildMemberActivePrizeConfConfig*))(Il2CppBase() + 0x3762D2C))(this);
	}
	template <typename T = void> T set_Prize1_need_active(int32_t value) {
		return ((T (*)(GuildMemberActivePrizeConfConfig*, int32_t))(Il2CppBase() + 0x3762E24))(this, value);
	}
	template <typename T = int32_t> T get_Prize1_award_1_item_id() {
		return ((T (*)(GuildMemberActivePrizeConfConfig*))(Il2CppBase() + 0x3762D34))(this);
	}
	template <typename T = void> T set_Prize1_award_1_item_id(int32_t value) {
		return ((T (*)(GuildMemberActivePrizeConfConfig*, int32_t))(Il2CppBase() + 0x3762E2C))(this, value);
	}
	template <typename T = int32_t> T get_Prize1_award_1_item_num() {
		return ((T (*)(GuildMemberActivePrizeConfConfig*))(Il2CppBase() + 0x3762D3C))(this);
	}
	template <typename T = void> T set_Prize1_award_1_item_num(int32_t value) {
		return ((T (*)(GuildMemberActivePrizeConfConfig*, int32_t))(Il2CppBase() + 0x3762E34))(this, value);
	}
	template <typename T = int32_t> T get_Prize1_award_1_item_durable() {
		return ((T (*)(GuildMemberActivePrizeConfConfig*))(Il2CppBase() + 0x3762E3C))(this);
	}
	template <typename T = void> T set_Prize1_award_1_item_durable(int32_t value) {
		return ((T (*)(GuildMemberActivePrizeConfConfig*, int32_t))(Il2CppBase() + 0x3762E44))(this, value);
	}
	template <typename T = int32_t> T get_Prize2_need_active() {
		return ((T (*)(GuildMemberActivePrizeConfConfig*))(Il2CppBase() + 0x3762D44))(this);
	}
	template <typename T = void> T set_Prize2_need_active(int32_t value) {
		return ((T (*)(GuildMemberActivePrizeConfConfig*, int32_t))(Il2CppBase() + 0x3762E4C))(this, value);
	}
	template <typename T = int32_t> T get_Prize2_award_1_item_id() {
		return ((T (*)(GuildMemberActivePrizeConfConfig*))(Il2CppBase() + 0x3762D4C))(this);
	}
	template <typename T = void> T set_Prize2_award_1_item_id(int32_t value) {
		return ((T (*)(GuildMemberActivePrizeConfConfig*, int32_t))(Il2CppBase() + 0x3762E54))(this, value);
	}
	template <typename T = int32_t> T get_Prize2_award_1_item_num() {
		return ((T (*)(GuildMemberActivePrizeConfConfig*))(Il2CppBase() + 0x3762D54))(this);
	}
	template <typename T = void> T set_Prize2_award_1_item_num(int32_t value) {
		return ((T (*)(GuildMemberActivePrizeConfConfig*, int32_t))(Il2CppBase() + 0x3762E5C))(this, value);
	}
	template <typename T = int32_t> T get_Prize2_award_1_item_durable() {
		return ((T (*)(GuildMemberActivePrizeConfConfig*))(Il2CppBase() + 0x3762E64))(this);
	}
	template <typename T = void> T set_Prize2_award_1_item_durable(int32_t value) {
		return ((T (*)(GuildMemberActivePrizeConfConfig*, int32_t))(Il2CppBase() + 0x3762E6C))(this, value);
	}
	template <typename T = int32_t> T get_Prize3_need_active() {
		return ((T (*)(GuildMemberActivePrizeConfConfig*))(Il2CppBase() + 0x3762D5C))(this);
	}
	template <typename T = void> T set_Prize3_need_active(int32_t value) {
		return ((T (*)(GuildMemberActivePrizeConfConfig*, int32_t))(Il2CppBase() + 0x3762E74))(this, value);
	}
	template <typename T = int32_t> T get_Prize3_award_1_item_id() {
		return ((T (*)(GuildMemberActivePrizeConfConfig*))(Il2CppBase() + 0x3762D64))(this);
	}
	template <typename T = void> T set_Prize3_award_1_item_id(int32_t value) {
		return ((T (*)(GuildMemberActivePrizeConfConfig*, int32_t))(Il2CppBase() + 0x3762E7C))(this, value);
	}
	template <typename T = int32_t> T get_Prize3_award_1_item_num() {
		return ((T (*)(GuildMemberActivePrizeConfConfig*))(Il2CppBase() + 0x3762D6C))(this);
	}
	template <typename T = void> T set_Prize3_award_1_item_num(int32_t value) {
		return ((T (*)(GuildMemberActivePrizeConfConfig*, int32_t))(Il2CppBase() + 0x3762E84))(this, value);
	}
	template <typename T = int32_t> T get_Prize3_award_1_item_durable() {
		return ((T (*)(GuildMemberActivePrizeConfConfig*))(Il2CppBase() + 0x3762E8C))(this);
	}
	template <typename T = void> T set_Prize3_award_1_item_durable(int32_t value) {
		return ((T (*)(GuildMemberActivePrizeConfConfig*, int32_t))(Il2CppBase() + 0x3762E94))(this, value);
	}
	template <typename T = int32_t> T Deserialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(GuildMemberActivePrizeConfConfig*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x3762E9C))(this, bytes, position);
	}
	template <typename T = void> T xLuaBaseProxy_PostInit() {
		return ((T (*)(GuildMemberActivePrizeConfConfig*))(Il2CppBase() + 0x37630CC))(this);
	}

};

}
