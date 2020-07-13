#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class AdvertisingCfgInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "AdvertisingCfgInfo"));
	}

	template <typename T = uint32_t> T& _plantform_type() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint32_t> T& _ad_num() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uint32_t> T& _ad_interval() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uint32_t> T& _min_memory() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _ad_placement_name() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _reward_info() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& _ad_cfg_id() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uint32_t> T& _ad_num_left() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uint32_t> T& _send_method() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& _shop_id() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = uint32_t> T get_plantform_type() {
		return ((T (*)(AdvertisingCfgInfo*))(Il2CppBase() + 0x510B4B8))(this);
	}
	template <typename T = void> T set_plantform_type(uint32_t value) {
		return ((T (*)(AdvertisingCfgInfo*, uint32_t))(Il2CppBase() + 0x510B4C0))(this, value);
	}
	template <typename T = uint32_t> T get_ad_num() {
		return ((T (*)(AdvertisingCfgInfo*))(Il2CppBase() + 0x510B4C8))(this);
	}
	template <typename T = void> T set_ad_num(uint32_t value) {
		return ((T (*)(AdvertisingCfgInfo*, uint32_t))(Il2CppBase() + 0x510B4D0))(this, value);
	}
	template <typename T = uint32_t> T get_ad_interval() {
		return ((T (*)(AdvertisingCfgInfo*))(Il2CppBase() + 0x510B4D8))(this);
	}
	template <typename T = void> T set_ad_interval(uint32_t value) {
		return ((T (*)(AdvertisingCfgInfo*, uint32_t))(Il2CppBase() + 0x510B4E0))(this, value);
	}
	template <typename T = uint32_t> T get_min_memory() {
		return ((T (*)(AdvertisingCfgInfo*))(Il2CppBase() + 0x510B4E8))(this);
	}
	template <typename T = void> T set_min_memory(uint32_t value) {
		return ((T (*)(AdvertisingCfgInfo*, uint32_t))(Il2CppBase() + 0x510B4F0))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_ad_placement_name() {
		return ((T (*)(AdvertisingCfgInfo*))(Il2CppBase() + 0x510B4F8))(this);
	}
	template <typename T = void> T set_ad_placement_name(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(AdvertisingCfgInfo*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x510B500))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_reward_info() {
		return ((T (*)(AdvertisingCfgInfo*))(Il2CppBase() + 0x510B508))(this);
	}
	template <typename T = int32_t> T get_ad_cfg_id() {
		return ((T (*)(AdvertisingCfgInfo*))(Il2CppBase() + 0x510B510))(this);
	}
	template <typename T = void> T set_ad_cfg_id(int32_t value) {
		return ((T (*)(AdvertisingCfgInfo*, int32_t))(Il2CppBase() + 0x510B518))(this, value);
	}
	template <typename T = uint32_t> T get_ad_num_left() {
		return ((T (*)(AdvertisingCfgInfo*))(Il2CppBase() + 0x510B520))(this);
	}
	template <typename T = void> T set_ad_num_left(uint32_t value) {
		return ((T (*)(AdvertisingCfgInfo*, uint32_t))(Il2CppBase() + 0x510B528))(this, value);
	}
	template <typename T = uint32_t> T get_send_method() {
		return ((T (*)(AdvertisingCfgInfo*))(Il2CppBase() + 0x510B530))(this);
	}
	template <typename T = void> T set_send_method(uint32_t value) {
		return ((T (*)(AdvertisingCfgInfo*, uint32_t))(Il2CppBase() + 0x510B538))(this, value);
	}
	template <typename T = int32_t> T get_shop_id() {
		return ((T (*)(AdvertisingCfgInfo*))(Il2CppBase() + 0x510B540))(this);
	}
	template <typename T = void> T set_shop_id(int32_t value) {
		return ((T (*)(AdvertisingCfgInfo*, int32_t))(Il2CppBase() + 0x510B548))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(AdvertisingCfgInfo*, bool))(Il2CppBase() + 0x510B550))(this, createIfMissing);
	}

};

}
