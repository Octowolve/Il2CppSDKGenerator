#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class GspBpExpDetail
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "GspBpExpDetail"));
	}

	template <typename T = int32_t> T& _bp_base_exp() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& _bp_suit_amend_exp() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& _bp_buff_amend_exp() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& _bp_game_mode_amend_exp() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& _bp_actv_amend_exp() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& _bp_card_amend_exp() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = int32_t> T get_bp_base_exp() {
		return ((T (*)(GspBpExpDetail*))(Il2CppBase() + 0x50CEBEC))(this);
	}
	template <typename T = void> T set_bp_base_exp(int32_t value) {
		return ((T (*)(GspBpExpDetail*, int32_t))(Il2CppBase() + 0x50CEBF4))(this, value);
	}
	template <typename T = int32_t> T get_bp_suit_amend_exp() {
		return ((T (*)(GspBpExpDetail*))(Il2CppBase() + 0x50CEBFC))(this);
	}
	template <typename T = void> T set_bp_suit_amend_exp(int32_t value) {
		return ((T (*)(GspBpExpDetail*, int32_t))(Il2CppBase() + 0x50CEC04))(this, value);
	}
	template <typename T = int32_t> T get_bp_buff_amend_exp() {
		return ((T (*)(GspBpExpDetail*))(Il2CppBase() + 0x50CEC0C))(this);
	}
	template <typename T = void> T set_bp_buff_amend_exp(int32_t value) {
		return ((T (*)(GspBpExpDetail*, int32_t))(Il2CppBase() + 0x50CEC14))(this, value);
	}
	template <typename T = int32_t> T get_bp_game_mode_amend_exp() {
		return ((T (*)(GspBpExpDetail*))(Il2CppBase() + 0x50CEC1C))(this);
	}
	template <typename T = void> T set_bp_game_mode_amend_exp(int32_t value) {
		return ((T (*)(GspBpExpDetail*, int32_t))(Il2CppBase() + 0x50CEC24))(this, value);
	}
	template <typename T = int32_t> T get_bp_actv_amend_exp() {
		return ((T (*)(GspBpExpDetail*))(Il2CppBase() + 0x50CEC2C))(this);
	}
	template <typename T = void> T set_bp_actv_amend_exp(int32_t value) {
		return ((T (*)(GspBpExpDetail*, int32_t))(Il2CppBase() + 0x50CEC34))(this, value);
	}
	template <typename T = int32_t> T get_bp_card_amend_exp() {
		return ((T (*)(GspBpExpDetail*))(Il2CppBase() + 0x50CEC3C))(this);
	}
	template <typename T = void> T set_bp_card_amend_exp(int32_t value) {
		return ((T (*)(GspBpExpDetail*, int32_t))(Il2CppBase() + 0x50CEC44))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(GspBpExpDetail*, bool))(Il2CppBase() + 0x50CEC4C))(this, createIfMissing);
	}

};

}
