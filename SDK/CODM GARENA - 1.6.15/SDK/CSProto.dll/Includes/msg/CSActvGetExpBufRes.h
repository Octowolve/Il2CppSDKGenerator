#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSActvGetExpBufRes
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSActvGetExpBufRes"));
	}

	template <typename T = int32_t> T& _result() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _player_exp_buf_list() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _weapon_exp_buf_list() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = int32_t> T get_result() {
		return ((T (*)(CSActvGetExpBufRes*))(Il2CppBase() + 0x51E398C))(this);
	}
	template <typename T = void> T set_result(int32_t value) {
		return ((T (*)(CSActvGetExpBufRes*, int32_t))(Il2CppBase() + 0x51E3994))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_player_exp_buf_list() {
		return ((T (*)(CSActvGetExpBufRes*))(Il2CppBase() + 0x51E399C))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_weapon_exp_buf_list() {
		return ((T (*)(CSActvGetExpBufRes*))(Il2CppBase() + 0x51E39A4))(this);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSActvGetExpBufRes*, bool))(Il2CppBase() + 0x51E39AC))(this, createIfMissing);
	}

};

}
