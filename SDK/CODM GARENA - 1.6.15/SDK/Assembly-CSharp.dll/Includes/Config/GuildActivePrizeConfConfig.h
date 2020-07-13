#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Config {

class GuildActivePrizeConfConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Config", "GuildActivePrizeConfConfig"));
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
		return ((T (*)(GuildActivePrizeConfConfig*))(Il2CppBase() + 0x3761FC0))(this);
	}
	template <typename T = int32_t> T GetPrimaryKeyValue() {
		return ((T (*)(GuildActivePrizeConfConfig*))(Il2CppBase() + 0x37622A8))(this);
	}
	template <typename T = int32_t> T get_Guild_level() {
		return ((T (*)(GuildActivePrizeConfConfig*))(Il2CppBase() + 0x3762348))(this);
	}
	template <typename T = void> T set_Guild_level(int32_t value) {
		return ((T (*)(GuildActivePrizeConfConfig*, int32_t))(Il2CppBase() + 0x3762350))(this, value);
	}
	template <typename T = int32_t> T get_Prize1_need_active() {
		return ((T (*)(GuildActivePrizeConfConfig*))(Il2CppBase() + 0x3762260))(this);
	}
	template <typename T = void> T set_Prize1_need_active(int32_t value) {
		return ((T (*)(GuildActivePrizeConfConfig*, int32_t))(Il2CppBase() + 0x3762358))(this, value);
	}
	template <typename T = int32_t> T get_Prize1_award_1_item_id() {
		return ((T (*)(GuildActivePrizeConfConfig*))(Il2CppBase() + 0x3762268))(this);
	}
	template <typename T = void> T set_Prize1_award_1_item_id(int32_t value) {
		return ((T (*)(GuildActivePrizeConfConfig*, int32_t))(Il2CppBase() + 0x3762360))(this, value);
	}
	template <typename T = int32_t> T get_Prize1_award_1_item_num() {
		return ((T (*)(GuildActivePrizeConfConfig*))(Il2CppBase() + 0x3762270))(this);
	}
	template <typename T = void> T set_Prize1_award_1_item_num(int32_t value) {
		return ((T (*)(GuildActivePrizeConfConfig*, int32_t))(Il2CppBase() + 0x3762368))(this, value);
	}
	template <typename T = int32_t> T get_Prize1_award_1_item_durable() {
		return ((T (*)(GuildActivePrizeConfConfig*))(Il2CppBase() + 0x3762370))(this);
	}
	template <typename T = void> T set_Prize1_award_1_item_durable(int32_t value) {
		return ((T (*)(GuildActivePrizeConfConfig*, int32_t))(Il2CppBase() + 0x3762378))(this, value);
	}
	template <typename T = int32_t> T get_Prize2_need_active() {
		return ((T (*)(GuildActivePrizeConfConfig*))(Il2CppBase() + 0x3762278))(this);
	}
	template <typename T = void> T set_Prize2_need_active(int32_t value) {
		return ((T (*)(GuildActivePrizeConfConfig*, int32_t))(Il2CppBase() + 0x3762380))(this, value);
	}
	template <typename T = int32_t> T get_Prize2_award_1_item_id() {
		return ((T (*)(GuildActivePrizeConfConfig*))(Il2CppBase() + 0x3762280))(this);
	}
	template <typename T = void> T set_Prize2_award_1_item_id(int32_t value) {
		return ((T (*)(GuildActivePrizeConfConfig*, int32_t))(Il2CppBase() + 0x3762388))(this, value);
	}
	template <typename T = int32_t> T get_Prize2_award_1_item_num() {
		return ((T (*)(GuildActivePrizeConfConfig*))(Il2CppBase() + 0x3762288))(this);
	}
	template <typename T = void> T set_Prize2_award_1_item_num(int32_t value) {
		return ((T (*)(GuildActivePrizeConfConfig*, int32_t))(Il2CppBase() + 0x3762390))(this, value);
	}
	template <typename T = int32_t> T get_Prize2_award_1_item_durable() {
		return ((T (*)(GuildActivePrizeConfConfig*))(Il2CppBase() + 0x3762398))(this);
	}
	template <typename T = void> T set_Prize2_award_1_item_durable(int32_t value) {
		return ((T (*)(GuildActivePrizeConfConfig*, int32_t))(Il2CppBase() + 0x37623A0))(this, value);
	}
	template <typename T = int32_t> T get_Prize3_need_active() {
		return ((T (*)(GuildActivePrizeConfConfig*))(Il2CppBase() + 0x3762290))(this);
	}
	template <typename T = void> T set_Prize3_need_active(int32_t value) {
		return ((T (*)(GuildActivePrizeConfConfig*, int32_t))(Il2CppBase() + 0x37623A8))(this, value);
	}
	template <typename T = int32_t> T get_Prize3_award_1_item_id() {
		return ((T (*)(GuildActivePrizeConfConfig*))(Il2CppBase() + 0x3762298))(this);
	}
	template <typename T = void> T set_Prize3_award_1_item_id(int32_t value) {
		return ((T (*)(GuildActivePrizeConfConfig*, int32_t))(Il2CppBase() + 0x37623B0))(this, value);
	}
	template <typename T = int32_t> T get_Prize3_award_1_item_num() {
		return ((T (*)(GuildActivePrizeConfConfig*))(Il2CppBase() + 0x37622A0))(this);
	}
	template <typename T = void> T set_Prize3_award_1_item_num(int32_t value) {
		return ((T (*)(GuildActivePrizeConfConfig*, int32_t))(Il2CppBase() + 0x37623B8))(this, value);
	}
	template <typename T = int32_t> T get_Prize3_award_1_item_durable() {
		return ((T (*)(GuildActivePrizeConfConfig*))(Il2CppBase() + 0x37623C0))(this);
	}
	template <typename T = void> T set_Prize3_award_1_item_durable(int32_t value) {
		return ((T (*)(GuildActivePrizeConfConfig*, int32_t))(Il2CppBase() + 0x37623C8))(this, value);
	}
	template <typename T = int32_t> T Deserialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(GuildActivePrizeConfConfig*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x37623D0))(this, bytes, position);
	}
	template <typename T = void> T xLuaBaseProxy_PostInit() {
		return ((T (*)(GuildActivePrizeConfConfig*))(Il2CppBase() + 0x3762600))(this);
	}

};

}
