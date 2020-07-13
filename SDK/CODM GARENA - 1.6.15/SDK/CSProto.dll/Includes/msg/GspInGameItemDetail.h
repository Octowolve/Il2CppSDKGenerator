#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class GspInGameItemDetail
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "GspInGameItemDetail"));
	}

	template <typename T = uint32_t> T& _item_id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint32_t> T& _base_add_num() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uint32_t> T& _bonus_add_num() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uint32_t> T& _before_num() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = bool> T& _is_not_shown() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x1C);
	}

	template <typename T = uint32_t> T get_item_id() {
		return ((T (*)(GspInGameItemDetail*))(Il2CppBase() + 0x50CECD4))(this);
	}
	template <typename T = void> T set_item_id(uint32_t value) {
		return ((T (*)(GspInGameItemDetail*, uint32_t))(Il2CppBase() + 0x50CECDC))(this, value);
	}
	template <typename T = uint32_t> T get_base_add_num() {
		return ((T (*)(GspInGameItemDetail*))(Il2CppBase() + 0x50CECE4))(this);
	}
	template <typename T = void> T set_base_add_num(uint32_t value) {
		return ((T (*)(GspInGameItemDetail*, uint32_t))(Il2CppBase() + 0x50CECEC))(this, value);
	}
	template <typename T = uint32_t> T get_bonus_add_num() {
		return ((T (*)(GspInGameItemDetail*))(Il2CppBase() + 0x50CECF4))(this);
	}
	template <typename T = void> T set_bonus_add_num(uint32_t value) {
		return ((T (*)(GspInGameItemDetail*, uint32_t))(Il2CppBase() + 0x50CECFC))(this, value);
	}
	template <typename T = uint32_t> T get_before_num() {
		return ((T (*)(GspInGameItemDetail*))(Il2CppBase() + 0x50CED04))(this);
	}
	template <typename T = void> T set_before_num(uint32_t value) {
		return ((T (*)(GspInGameItemDetail*, uint32_t))(Il2CppBase() + 0x50CED0C))(this, value);
	}
	template <typename T = bool> T get_is_not_shown() {
		return ((T (*)(GspInGameItemDetail*))(Il2CppBase() + 0x50CED14))(this);
	}
	template <typename T = void> T set_is_not_shown(bool value) {
		return ((T (*)(GspInGameItemDetail*, bool))(Il2CppBase() + 0x50CED1C))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(GspInGameItemDetail*, bool))(Il2CppBase() + 0x50CED24))(this, createIfMissing);
	}

};

}
