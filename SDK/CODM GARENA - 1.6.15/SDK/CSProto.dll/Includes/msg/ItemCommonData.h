#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class ItemCommonData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "ItemCommonData"));
	}

	template <typename T = uint64_t> T& _GUID() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint32_t> T& _ID() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& _GainType() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& _UnlockLevel() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& _duration_type() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uint32_t> T& _expire_time() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& _loadout_idx() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> T& _Num() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uint32_t> T& _last_add_duration_time() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uint32_t> T& _total_sold_price() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uint32_t> T& _ce_point() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = uint32_t> T& _sold_currency_id() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uint32_t> T& _is_demolition() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uint32_t> T& _level() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uint32_t> T& _epic_idx() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uint32_t> T& _delete_reason() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = bool> T& _full_grade() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x50);
	}

	template <typename T = uint64_t> T get_GUID() {
		return ((T (*)(ItemCommonData*))(Il2CppBase() + 0x50D0AD0))(this);
	}
	template <typename T = void> T set_GUID(uint64_t value) {
		return ((T (*)(ItemCommonData*, uint64_t))(Il2CppBase() + 0x50D0AD8))(this, value);
	}
	template <typename T = uint32_t> T get_ID() {
		return ((T (*)(ItemCommonData*))(Il2CppBase() + 0x50D0AE8))(this);
	}
	template <typename T = void> T set_ID(uint32_t value) {
		return ((T (*)(ItemCommonData*, uint32_t))(Il2CppBase() + 0x50D0AF0))(this, value);
	}
	template <typename T = int32_t> T get_GainType() {
		return ((T (*)(ItemCommonData*))(Il2CppBase() + 0x50D0AF8))(this);
	}
	template <typename T = void> T set_GainType(int32_t value) {
		return ((T (*)(ItemCommonData*, int32_t))(Il2CppBase() + 0x50D0B00))(this, value);
	}
	template <typename T = int32_t> T get_UnlockLevel() {
		return ((T (*)(ItemCommonData*))(Il2CppBase() + 0x50D0B08))(this);
	}
	template <typename T = void> T set_UnlockLevel(int32_t value) {
		return ((T (*)(ItemCommonData*, int32_t))(Il2CppBase() + 0x50D0B10))(this, value);
	}
	template <typename T = int32_t> T get_duration_type() {
		return ((T (*)(ItemCommonData*))(Il2CppBase() + 0x50D0B18))(this);
	}
	template <typename T = void> T set_duration_type(int32_t value) {
		return ((T (*)(ItemCommonData*, int32_t))(Il2CppBase() + 0x50D0B20))(this, value);
	}
	template <typename T = uint32_t> T get_expire_time() {
		return ((T (*)(ItemCommonData*))(Il2CppBase() + 0x50D0B28))(this);
	}
	template <typename T = void> T set_expire_time(uint32_t value) {
		return ((T (*)(ItemCommonData*, uint32_t))(Il2CppBase() + 0x50D0B30))(this, value);
	}
	template <typename T = int32_t> T get_loadout_idx() {
		return ((T (*)(ItemCommonData*))(Il2CppBase() + 0x50D0B38))(this);
	}
	template <typename T = void> T set_loadout_idx(int32_t value) {
		return ((T (*)(ItemCommonData*, int32_t))(Il2CppBase() + 0x50D0B40))(this, value);
	}
	template <typename T = int32_t> T get_Num() {
		return ((T (*)(ItemCommonData*))(Il2CppBase() + 0x50D0B48))(this);
	}
	template <typename T = void> T set_Num(int32_t value) {
		return ((T (*)(ItemCommonData*, int32_t))(Il2CppBase() + 0x50D0B50))(this, value);
	}
	template <typename T = uint32_t> T get_last_add_duration_time() {
		return ((T (*)(ItemCommonData*))(Il2CppBase() + 0x50D0B58))(this);
	}
	template <typename T = void> T set_last_add_duration_time(uint32_t value) {
		return ((T (*)(ItemCommonData*, uint32_t))(Il2CppBase() + 0x50D0B60))(this, value);
	}
	template <typename T = uint32_t> T get_total_sold_price() {
		return ((T (*)(ItemCommonData*))(Il2CppBase() + 0x50D0B68))(this);
	}
	template <typename T = void> T set_total_sold_price(uint32_t value) {
		return ((T (*)(ItemCommonData*, uint32_t))(Il2CppBase() + 0x50D0B70))(this, value);
	}
	template <typename T = uint32_t> T get_ce_point() {
		return ((T (*)(ItemCommonData*))(Il2CppBase() + 0x50D0B78))(this);
	}
	template <typename T = void> T set_ce_point(uint32_t value) {
		return ((T (*)(ItemCommonData*, uint32_t))(Il2CppBase() + 0x50D0B80))(this, value);
	}
	template <typename T = uint32_t> T get_sold_currency_id() {
		return ((T (*)(ItemCommonData*))(Il2CppBase() + 0x50D0B88))(this);
	}
	template <typename T = void> T set_sold_currency_id(uint32_t value) {
		return ((T (*)(ItemCommonData*, uint32_t))(Il2CppBase() + 0x50D0B90))(this, value);
	}
	template <typename T = uint32_t> T get_is_demolition() {
		return ((T (*)(ItemCommonData*))(Il2CppBase() + 0x50D0B98))(this);
	}
	template <typename T = void> T set_is_demolition(uint32_t value) {
		return ((T (*)(ItemCommonData*, uint32_t))(Il2CppBase() + 0x50D0BA0))(this, value);
	}
	template <typename T = uint32_t> T get_level() {
		return ((T (*)(ItemCommonData*))(Il2CppBase() + 0x50D0BA8))(this);
	}
	template <typename T = void> T set_level(uint32_t value) {
		return ((T (*)(ItemCommonData*, uint32_t))(Il2CppBase() + 0x50D0BB0))(this, value);
	}
	template <typename T = uint32_t> T get_epic_idx() {
		return ((T (*)(ItemCommonData*))(Il2CppBase() + 0x50D0BB8))(this);
	}
	template <typename T = void> T set_epic_idx(uint32_t value) {
		return ((T (*)(ItemCommonData*, uint32_t))(Il2CppBase() + 0x50D0BC0))(this, value);
	}
	template <typename T = uint32_t> T get_delete_reason() {
		return ((T (*)(ItemCommonData*))(Il2CppBase() + 0x50D0BC8))(this);
	}
	template <typename T = void> T set_delete_reason(uint32_t value) {
		return ((T (*)(ItemCommonData*, uint32_t))(Il2CppBase() + 0x50D0BD0))(this, value);
	}
	template <typename T = bool> T get_full_grade() {
		return ((T (*)(ItemCommonData*))(Il2CppBase() + 0x50D0BD8))(this);
	}
	template <typename T = void> T set_full_grade(bool value) {
		return ((T (*)(ItemCommonData*, bool))(Il2CppBase() + 0x50D0BE0))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(ItemCommonData*, bool))(Il2CppBase() + 0x50D0BE8))(this, createIfMissing);
	}

};

}
