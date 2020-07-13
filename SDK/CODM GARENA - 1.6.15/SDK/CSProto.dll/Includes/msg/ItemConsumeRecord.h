#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class ItemConsumeRecord
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "ItemConsumeRecord"));
	}

	template <typename T = uint32_t> T& _item_id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint64_t> T& _consume_timestamp() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uint32_t> T& _daily_consume_num() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uint32_t> T& _weekly_consume_num() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = uint32_t> T get_item_id() {
		return ((T (*)(ItemConsumeRecord*))(Il2CppBase() + 0x50D0C04))(this);
	}
	template <typename T = void> T set_item_id(uint32_t value) {
		return ((T (*)(ItemConsumeRecord*, uint32_t))(Il2CppBase() + 0x50D0C0C))(this, value);
	}
	template <typename T = uint64_t> T get_consume_timestamp() {
		return ((T (*)(ItemConsumeRecord*))(Il2CppBase() + 0x50D0C14))(this);
	}
	template <typename T = void> T set_consume_timestamp(uint64_t value) {
		return ((T (*)(ItemConsumeRecord*, uint64_t))(Il2CppBase() + 0x50D0C1C))(this, value);
	}
	template <typename T = uint32_t> T get_daily_consume_num() {
		return ((T (*)(ItemConsumeRecord*))(Il2CppBase() + 0x50D0C2C))(this);
	}
	template <typename T = void> T set_daily_consume_num(uint32_t value) {
		return ((T (*)(ItemConsumeRecord*, uint32_t))(Il2CppBase() + 0x50D0C34))(this, value);
	}
	template <typename T = uint32_t> T get_weekly_consume_num() {
		return ((T (*)(ItemConsumeRecord*))(Il2CppBase() + 0x50D0C3C))(this);
	}
	template <typename T = void> T set_weekly_consume_num(uint32_t value) {
		return ((T (*)(ItemConsumeRecord*, uint32_t))(Il2CppBase() + 0x50D0C44))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(ItemConsumeRecord*, bool))(Il2CppBase() + 0x50D0C4C))(this, createIfMissing);
	}

};

}
