#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Config {

class PlayerinfoPrizeConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Config", "PlayerinfoPrizeConfig"));
	}

	template <typename T = int32_t> T& Id() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& Account_type() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& Award_1_item_id() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& Award_1_item_num() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& Award_1_item_durable() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& Award_2_item_id() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& Award_2_item_num() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> T& Award_2_item_durable() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& Award_3_item_id() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = int32_t> T& Award_3_item_num() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> T& Award_3_item_durable() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_Deserialize() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = int32_t> T get_Id() {
		return ((T (*)(PlayerinfoPrizeConfig*))(Il2CppBase() + 0x37838D4))(this);
	}
	template <typename T = void> T set_Id(int32_t value) {
		return ((T (*)(PlayerinfoPrizeConfig*, int32_t))(Il2CppBase() + 0x37838DC))(this, value);
	}
	template <typename T = int32_t> T get_Account_type() {
		return ((T (*)(PlayerinfoPrizeConfig*))(Il2CppBase() + 0x37838E4))(this);
	}
	template <typename T = void> T set_Account_type(int32_t value) {
		return ((T (*)(PlayerinfoPrizeConfig*, int32_t))(Il2CppBase() + 0x37838EC))(this, value);
	}
	template <typename T = int32_t> T get_Award_1_item_id() {
		return ((T (*)(PlayerinfoPrizeConfig*))(Il2CppBase() + 0x37838F4))(this);
	}
	template <typename T = void> T set_Award_1_item_id(int32_t value) {
		return ((T (*)(PlayerinfoPrizeConfig*, int32_t))(Il2CppBase() + 0x37838FC))(this, value);
	}
	template <typename T = int32_t> T get_Award_1_item_num() {
		return ((T (*)(PlayerinfoPrizeConfig*))(Il2CppBase() + 0x3783904))(this);
	}
	template <typename T = void> T set_Award_1_item_num(int32_t value) {
		return ((T (*)(PlayerinfoPrizeConfig*, int32_t))(Il2CppBase() + 0x378390C))(this, value);
	}
	template <typename T = int32_t> T get_Award_1_item_durable() {
		return ((T (*)(PlayerinfoPrizeConfig*))(Il2CppBase() + 0x3783914))(this);
	}
	template <typename T = void> T set_Award_1_item_durable(int32_t value) {
		return ((T (*)(PlayerinfoPrizeConfig*, int32_t))(Il2CppBase() + 0x378391C))(this, value);
	}
	template <typename T = int32_t> T get_Award_2_item_id() {
		return ((T (*)(PlayerinfoPrizeConfig*))(Il2CppBase() + 0x3783924))(this);
	}
	template <typename T = void> T set_Award_2_item_id(int32_t value) {
		return ((T (*)(PlayerinfoPrizeConfig*, int32_t))(Il2CppBase() + 0x378392C))(this, value);
	}
	template <typename T = int32_t> T get_Award_2_item_num() {
		return ((T (*)(PlayerinfoPrizeConfig*))(Il2CppBase() + 0x3783934))(this);
	}
	template <typename T = void> T set_Award_2_item_num(int32_t value) {
		return ((T (*)(PlayerinfoPrizeConfig*, int32_t))(Il2CppBase() + 0x378393C))(this, value);
	}
	template <typename T = int32_t> T get_Award_2_item_durable() {
		return ((T (*)(PlayerinfoPrizeConfig*))(Il2CppBase() + 0x3783944))(this);
	}
	template <typename T = void> T set_Award_2_item_durable(int32_t value) {
		return ((T (*)(PlayerinfoPrizeConfig*, int32_t))(Il2CppBase() + 0x378394C))(this, value);
	}
	template <typename T = int32_t> T get_Award_3_item_id() {
		return ((T (*)(PlayerinfoPrizeConfig*))(Il2CppBase() + 0x3783954))(this);
	}
	template <typename T = void> T set_Award_3_item_id(int32_t value) {
		return ((T (*)(PlayerinfoPrizeConfig*, int32_t))(Il2CppBase() + 0x378395C))(this, value);
	}
	template <typename T = int32_t> T get_Award_3_item_num() {
		return ((T (*)(PlayerinfoPrizeConfig*))(Il2CppBase() + 0x3783964))(this);
	}
	template <typename T = void> T set_Award_3_item_num(int32_t value) {
		return ((T (*)(PlayerinfoPrizeConfig*, int32_t))(Il2CppBase() + 0x378396C))(this, value);
	}
	template <typename T = int32_t> T get_Award_3_item_durable() {
		return ((T (*)(PlayerinfoPrizeConfig*))(Il2CppBase() + 0x3783974))(this);
	}
	template <typename T = void> T set_Award_3_item_durable(int32_t value) {
		return ((T (*)(PlayerinfoPrizeConfig*, int32_t))(Il2CppBase() + 0x378397C))(this, value);
	}
	template <typename T = int32_t> T Deserialize(Il2CppArray<uintptr_t>* bytes, uintptr_t position) {
		return ((T (*)(PlayerinfoPrizeConfig*, Il2CppArray<uintptr_t>*, uintptr_t))(Il2CppBase() + 0x3783984))(this, bytes, position);
	}

};

}
