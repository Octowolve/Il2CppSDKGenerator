#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSCardLotteryRes
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSCardLotteryRes"));
	}

	template <typename T = int32_t> T& _result() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint32_t> T& _pve_level_id() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _cards() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uint32_t> T& _add_exp() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = int32_t> T get_result() {
		return ((T (*)(CSCardLotteryRes*))(Il2CppBase() + 0x51E5C38))(this);
	}
	template <typename T = void> T set_result(int32_t value) {
		return ((T (*)(CSCardLotteryRes*, int32_t))(Il2CppBase() + 0x51E5C40))(this, value);
	}
	template <typename T = uint32_t> T get_pve_level_id() {
		return ((T (*)(CSCardLotteryRes*))(Il2CppBase() + 0x51E5C48))(this);
	}
	template <typename T = void> T set_pve_level_id(uint32_t value) {
		return ((T (*)(CSCardLotteryRes*, uint32_t))(Il2CppBase() + 0x51E5C50))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_cards() {
		return ((T (*)(CSCardLotteryRes*))(Il2CppBase() + 0x51E5C58))(this);
	}
	template <typename T = uint32_t> T get_add_exp() {
		return ((T (*)(CSCardLotteryRes*))(Il2CppBase() + 0x51E5C60))(this);
	}
	template <typename T = void> T set_add_exp(uint32_t value) {
		return ((T (*)(CSCardLotteryRes*, uint32_t))(Il2CppBase() + 0x51E5C68))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSCardLotteryRes*, bool))(Il2CppBase() + 0x51E5C70))(this, createIfMissing);
	}

};

}
