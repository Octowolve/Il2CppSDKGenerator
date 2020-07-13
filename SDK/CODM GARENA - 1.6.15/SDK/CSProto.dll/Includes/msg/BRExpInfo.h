#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class BRExpInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "BRExpInfo"));
	}

	template <typename T = uint32_t> T& _rank_add_exp() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint32_t> T& _kill_add_exp() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uint32_t> T& _buf_add_exp() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uint32_t> T& _survival_add_exp() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uint32_t> T& _guild_add_exp() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uint32_t> T& _friend_add_exp() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uint32_t> T& _win_add_exp() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uint32_t> T& _actv_add_exp() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = uint32_t> T get_rank_add_exp() {
		return ((T (*)(BRExpInfo*))(Il2CppBase() + 0x510DEBC))(this);
	}
	template <typename T = void> T set_rank_add_exp(uint32_t value) {
		return ((T (*)(BRExpInfo*, uint32_t))(Il2CppBase() + 0x510DEC4))(this, value);
	}
	template <typename T = uint32_t> T get_kill_add_exp() {
		return ((T (*)(BRExpInfo*))(Il2CppBase() + 0x510DECC))(this);
	}
	template <typename T = void> T set_kill_add_exp(uint32_t value) {
		return ((T (*)(BRExpInfo*, uint32_t))(Il2CppBase() + 0x510DED4))(this, value);
	}
	template <typename T = uint32_t> T get_buf_add_exp() {
		return ((T (*)(BRExpInfo*))(Il2CppBase() + 0x510DEDC))(this);
	}
	template <typename T = void> T set_buf_add_exp(uint32_t value) {
		return ((T (*)(BRExpInfo*, uint32_t))(Il2CppBase() + 0x510DEE4))(this, value);
	}
	template <typename T = uint32_t> T get_survival_add_exp() {
		return ((T (*)(BRExpInfo*))(Il2CppBase() + 0x510DEEC))(this);
	}
	template <typename T = void> T set_survival_add_exp(uint32_t value) {
		return ((T (*)(BRExpInfo*, uint32_t))(Il2CppBase() + 0x510DEF4))(this, value);
	}
	template <typename T = uint32_t> T get_guild_add_exp() {
		return ((T (*)(BRExpInfo*))(Il2CppBase() + 0x510DEFC))(this);
	}
	template <typename T = void> T set_guild_add_exp(uint32_t value) {
		return ((T (*)(BRExpInfo*, uint32_t))(Il2CppBase() + 0x510DF04))(this, value);
	}
	template <typename T = uint32_t> T get_friend_add_exp() {
		return ((T (*)(BRExpInfo*))(Il2CppBase() + 0x510DF0C))(this);
	}
	template <typename T = void> T set_friend_add_exp(uint32_t value) {
		return ((T (*)(BRExpInfo*, uint32_t))(Il2CppBase() + 0x510DF14))(this, value);
	}
	template <typename T = uint32_t> T get_win_add_exp() {
		return ((T (*)(BRExpInfo*))(Il2CppBase() + 0x510DF1C))(this);
	}
	template <typename T = void> T set_win_add_exp(uint32_t value) {
		return ((T (*)(BRExpInfo*, uint32_t))(Il2CppBase() + 0x510DF24))(this, value);
	}
	template <typename T = uint32_t> T get_actv_add_exp() {
		return ((T (*)(BRExpInfo*))(Il2CppBase() + 0x510DF2C))(this);
	}
	template <typename T = void> T set_actv_add_exp(uint32_t value) {
		return ((T (*)(BRExpInfo*, uint32_t))(Il2CppBase() + 0x510DF34))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(BRExpInfo*, bool))(Il2CppBase() + 0x510DF3C))(this, createIfMissing);
	}

};

}
