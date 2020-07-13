#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSCardGetCardsRes
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSCardGetCardsRes"));
	}

	template <typename T = int32_t> T& _result() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint32_t> T& _pve_level_id() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uint32_t> T& _add_exp() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _cards() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppList<uint32_t>*> T& _add_exp_ary() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x1C);
	}

	template <typename T = int32_t> T get_result() {
		return ((T (*)(CSCardGetCardsRes*))(Il2CppBase() + 0x51E5A2C))(this);
	}
	template <typename T = void> T set_result(int32_t value) {
		return ((T (*)(CSCardGetCardsRes*, int32_t))(Il2CppBase() + 0x51E5A34))(this, value);
	}
	template <typename T = uint32_t> T get_pve_level_id() {
		return ((T (*)(CSCardGetCardsRes*))(Il2CppBase() + 0x51E5A3C))(this);
	}
	template <typename T = void> T set_pve_level_id(uint32_t value) {
		return ((T (*)(CSCardGetCardsRes*, uint32_t))(Il2CppBase() + 0x51E5A44))(this, value);
	}
	template <typename T = uint32_t> T get_add_exp() {
		return ((T (*)(CSCardGetCardsRes*))(Il2CppBase() + 0x51E5A4C))(this);
	}
	template <typename T = void> T set_add_exp(uint32_t value) {
		return ((T (*)(CSCardGetCardsRes*, uint32_t))(Il2CppBase() + 0x51E5A54))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_cards() {
		return ((T (*)(CSCardGetCardsRes*))(Il2CppBase() + 0x51E5A5C))(this);
	}
	template <typename T = Il2CppList<uint32_t>*> T get_add_exp_ary() {
		return ((T (*)(CSCardGetCardsRes*))(Il2CppBase() + 0x51E5A64))(this);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSCardGetCardsRes*, bool))(Il2CppBase() + 0x51E5A6C))(this, createIfMissing);
	}

};

}
