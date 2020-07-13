#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSAccountAddExpBufNtf
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSAccountAddExpBufNtf"));
	}

	template <typename T = uintptr_t> T& _weapon_buf() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& _player_buf() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _weapon_buf_list() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _player_buf_list() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = uintptr_t> T get_weapon_buf() {
		return ((T (*)(CSAccountAddExpBufNtf*))(Il2CppBase() + 0x516FAE8))(this);
	}
	template <typename T = void> T set_weapon_buf(uintptr_t value) {
		return ((T (*)(CSAccountAddExpBufNtf*, uintptr_t))(Il2CppBase() + 0x516FAF0))(this, value);
	}
	template <typename T = uintptr_t> T get_player_buf() {
		return ((T (*)(CSAccountAddExpBufNtf*))(Il2CppBase() + 0x516FAF8))(this);
	}
	template <typename T = void> T set_player_buf(uintptr_t value) {
		return ((T (*)(CSAccountAddExpBufNtf*, uintptr_t))(Il2CppBase() + 0x516FB00))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_weapon_buf_list() {
		return ((T (*)(CSAccountAddExpBufNtf*))(Il2CppBase() + 0x516FB08))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_player_buf_list() {
		return ((T (*)(CSAccountAddExpBufNtf*))(Il2CppBase() + 0x516FB10))(this);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSAccountAddExpBufNtf*, bool))(Il2CppBase() + 0x516FB18))(this, createIfMissing);
	}

};

}
