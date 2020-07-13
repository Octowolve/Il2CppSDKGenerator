#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSDeleteGiftRes
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSDeleteGiftRes"));
	}

	template <typename T = int32_t> T& _result() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint64_t> T& _gift_id() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& _delete_all() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uint32_t> T& _list_type() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = int32_t> T get_result() {
		return ((T (*)(CSDeleteGiftRes*))(Il2CppBase() + 0x51D046C))(this);
	}
	template <typename T = void> T set_result(int32_t value) {
		return ((T (*)(CSDeleteGiftRes*, int32_t))(Il2CppBase() + 0x51D0474))(this, value);
	}
	template <typename T = uint64_t> T get_gift_id() {
		return ((T (*)(CSDeleteGiftRes*))(Il2CppBase() + 0x51D047C))(this);
	}
	template <typename T = void> T set_gift_id(uint64_t value) {
		return ((T (*)(CSDeleteGiftRes*, uint64_t))(Il2CppBase() + 0x51D0484))(this, value);
	}
	template <typename T = int32_t> T get_delete_all() {
		return ((T (*)(CSDeleteGiftRes*))(Il2CppBase() + 0x51D0494))(this);
	}
	template <typename T = void> T set_delete_all(int32_t value) {
		return ((T (*)(CSDeleteGiftRes*, int32_t))(Il2CppBase() + 0x51D049C))(this, value);
	}
	template <typename T = uint32_t> T get_list_type() {
		return ((T (*)(CSDeleteGiftRes*))(Il2CppBase() + 0x51D04A4))(this);
	}
	template <typename T = void> T set_list_type(uint32_t value) {
		return ((T (*)(CSDeleteGiftRes*, uint32_t))(Il2CppBase() + 0x51D04AC))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSDeleteGiftRes*, bool))(Il2CppBase() + 0x51D04B4))(this, createIfMissing);
	}

};

}
