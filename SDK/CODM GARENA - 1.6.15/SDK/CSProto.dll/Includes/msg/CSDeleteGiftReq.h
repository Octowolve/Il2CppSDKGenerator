#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSDeleteGiftReq
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSDeleteGiftReq"));
	}

	template <typename T = uint64_t> T& _gift_id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint32_t> T& _list_type() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& _delete_all() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = uint64_t> T get_gift_id() {
		return ((T (*)(CSDeleteGiftReq*))(Il2CppBase() + 0x51D0418))(this);
	}
	template <typename T = void> T set_gift_id(uint64_t value) {
		return ((T (*)(CSDeleteGiftReq*, uint64_t))(Il2CppBase() + 0x51D0420))(this, value);
	}
	template <typename T = uint32_t> T get_list_type() {
		return ((T (*)(CSDeleteGiftReq*))(Il2CppBase() + 0x51D0430))(this);
	}
	template <typename T = void> T set_list_type(uint32_t value) {
		return ((T (*)(CSDeleteGiftReq*, uint32_t))(Il2CppBase() + 0x51D0438))(this, value);
	}
	template <typename T = int32_t> T get_delete_all() {
		return ((T (*)(CSDeleteGiftReq*))(Il2CppBase() + 0x51D0440))(this);
	}
	template <typename T = void> T set_delete_all(int32_t value) {
		return ((T (*)(CSDeleteGiftReq*, int32_t))(Il2CppBase() + 0x51D0448))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSDeleteGiftReq*, bool))(Il2CppBase() + 0x51D0450))(this, createIfMissing);
	}

};

}
