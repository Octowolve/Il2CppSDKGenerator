#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class ItemPrizeConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "ItemPrizeConfig"));
	}

	template <typename T = int32_t> T& _item_id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& _item_num() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& _prize_num() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& _duration() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = int32_t> T get_item_id() {
		return ((T (*)(ItemPrizeConfig*))(Il2CppBase() + 0x50D0C68))(this);
	}
	template <typename T = void> T set_item_id(int32_t value) {
		return ((T (*)(ItemPrizeConfig*, int32_t))(Il2CppBase() + 0x50D0C70))(this, value);
	}
	template <typename T = int32_t> T get_item_num() {
		return ((T (*)(ItemPrizeConfig*))(Il2CppBase() + 0x50D0C78))(this);
	}
	template <typename T = void> T set_item_num(int32_t value) {
		return ((T (*)(ItemPrizeConfig*, int32_t))(Il2CppBase() + 0x50D0C80))(this, value);
	}
	template <typename T = int32_t> T get_prize_num() {
		return ((T (*)(ItemPrizeConfig*))(Il2CppBase() + 0x50D0C88))(this);
	}
	template <typename T = void> T set_prize_num(int32_t value) {
		return ((T (*)(ItemPrizeConfig*, int32_t))(Il2CppBase() + 0x50D0C90))(this, value);
	}
	template <typename T = int32_t> T get_duration() {
		return ((T (*)(ItemPrizeConfig*))(Il2CppBase() + 0x50D0C98))(this);
	}
	template <typename T = void> T set_duration(int32_t value) {
		return ((T (*)(ItemPrizeConfig*, int32_t))(Il2CppBase() + 0x50D0CA0))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(ItemPrizeConfig*, bool))(Il2CppBase() + 0x50D0CA8))(this, createIfMissing);
	}

};

}
