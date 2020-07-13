#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSActvGetBackConfRes
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSActvGetBackConfRes"));
	}

	template <typename T = int32_t> T& _result() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& _misc_conf() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& _login_reward_conf() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _recommend_conf() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& _active_reward_conf() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _bp_reward_conf() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uint64_t> T& _activity_id() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = int32_t> T get_result() {
		return ((T (*)(CSActvGetBackConfRes*))(Il2CppBase() + 0x51E35E0))(this);
	}
	template <typename T = void> T set_result(int32_t value) {
		return ((T (*)(CSActvGetBackConfRes*, int32_t))(Il2CppBase() + 0x51E35E8))(this, value);
	}
	template <typename T = uintptr_t> T get_misc_conf() {
		return ((T (*)(CSActvGetBackConfRes*))(Il2CppBase() + 0x51E35F0))(this);
	}
	template <typename T = void> T set_misc_conf(uintptr_t value) {
		return ((T (*)(CSActvGetBackConfRes*, uintptr_t))(Il2CppBase() + 0x51E35F8))(this, value);
	}
	template <typename T = uintptr_t> T get_login_reward_conf() {
		return ((T (*)(CSActvGetBackConfRes*))(Il2CppBase() + 0x51E3600))(this);
	}
	template <typename T = void> T set_login_reward_conf(uintptr_t value) {
		return ((T (*)(CSActvGetBackConfRes*, uintptr_t))(Il2CppBase() + 0x51E3608))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_recommend_conf() {
		return ((T (*)(CSActvGetBackConfRes*))(Il2CppBase() + 0x51E3610))(this);
	}
	template <typename T = uintptr_t> T get_active_reward_conf() {
		return ((T (*)(CSActvGetBackConfRes*))(Il2CppBase() + 0x51E3618))(this);
	}
	template <typename T = void> T set_active_reward_conf(uintptr_t value) {
		return ((T (*)(CSActvGetBackConfRes*, uintptr_t))(Il2CppBase() + 0x51E3620))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_bp_reward_conf() {
		return ((T (*)(CSActvGetBackConfRes*))(Il2CppBase() + 0x51E3628))(this);
	}
	template <typename T = uint64_t> T get_activity_id() {
		return ((T (*)(CSActvGetBackConfRes*))(Il2CppBase() + 0x51E3630))(this);
	}
	template <typename T = void> T set_activity_id(uint64_t value) {
		return ((T (*)(CSActvGetBackConfRes*, uint64_t))(Il2CppBase() + 0x51E3638))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSActvGetBackConfRes*, bool))(Il2CppBase() + 0x51E3648))(this, createIfMissing);
	}

};

}
