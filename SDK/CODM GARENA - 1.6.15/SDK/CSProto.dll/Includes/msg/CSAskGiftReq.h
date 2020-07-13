#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSAskGiftReq
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSAskGiftReq"));
	}

	template <typename T = uint64_t> T& _asked_player_id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& _shop_id() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _message() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uint32_t> T& _theme_type() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uint32_t> T& _item_num() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& _pkg_index() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x24);
	}

	template <typename T = uint64_t> T get_asked_player_id() {
		return ((T (*)(CSAskGiftReq*))(Il2CppBase() + 0x51E476C))(this);
	}
	template <typename T = void> T set_asked_player_id(uint64_t value) {
		return ((T (*)(CSAskGiftReq*, uint64_t))(Il2CppBase() + 0x51E4774))(this, value);
	}
	template <typename T = int32_t> T get_shop_id() {
		return ((T (*)(CSAskGiftReq*))(Il2CppBase() + 0x51E4784))(this);
	}
	template <typename T = void> T set_shop_id(int32_t value) {
		return ((T (*)(CSAskGiftReq*, int32_t))(Il2CppBase() + 0x51E478C))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_message() {
		return ((T (*)(CSAskGiftReq*))(Il2CppBase() + 0x51E4794))(this);
	}
	template <typename T = void> T set_message(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(CSAskGiftReq*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x51E479C))(this, value);
	}
	template <typename T = uint32_t> T get_theme_type() {
		return ((T (*)(CSAskGiftReq*))(Il2CppBase() + 0x51E47A4))(this);
	}
	template <typename T = void> T set_theme_type(uint32_t value) {
		return ((T (*)(CSAskGiftReq*, uint32_t))(Il2CppBase() + 0x51E47AC))(this, value);
	}
	template <typename T = uint32_t> T get_item_num() {
		return ((T (*)(CSAskGiftReq*))(Il2CppBase() + 0x51E47B4))(this);
	}
	template <typename T = void> T set_item_num(uint32_t value) {
		return ((T (*)(CSAskGiftReq*, uint32_t))(Il2CppBase() + 0x51E47BC))(this, value);
	}
	template <typename T = int32_t> T get_pkg_index() {
		return ((T (*)(CSAskGiftReq*))(Il2CppBase() + 0x51E47C4))(this);
	}
	template <typename T = void> T set_pkg_index(int32_t value) {
		return ((T (*)(CSAskGiftReq*, int32_t))(Il2CppBase() + 0x51E47CC))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSAskGiftReq*, bool))(Il2CppBase() + 0x51E47D4))(this, createIfMissing);
	}

};

}
