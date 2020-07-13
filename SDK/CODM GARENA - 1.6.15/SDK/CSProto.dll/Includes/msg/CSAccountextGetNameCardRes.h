#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSAccountextGetNameCardRes
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSAccountextGetNameCardRes"));
	}

	template <typename T = int32_t> T& _result() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppList<uint64_t>*> T& _player_id_list() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppList<int64_t>*> T& _name_card_id_list() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppList<int64_t>*> T& _name_card_gid_list() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = int32_t> T get_result() {
		return ((T (*)(CSAccountextGetNameCardRes*))(Il2CppBase() + 0x516FEE0))(this);
	}
	template <typename T = void> T set_result(int32_t value) {
		return ((T (*)(CSAccountextGetNameCardRes*, int32_t))(Il2CppBase() + 0x516FEE8))(this, value);
	}
	template <typename T = Il2CppList<uint64_t>*> T get_player_id_list() {
		return ((T (*)(CSAccountextGetNameCardRes*))(Il2CppBase() + 0x516FEF0))(this);
	}
	template <typename T = Il2CppList<int64_t>*> T get_name_card_id_list() {
		return ((T (*)(CSAccountextGetNameCardRes*))(Il2CppBase() + 0x516FEF8))(this);
	}
	template <typename T = Il2CppList<int64_t>*> T get_name_card_gid_list() {
		return ((T (*)(CSAccountextGetNameCardRes*))(Il2CppBase() + 0x516FF00))(this);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSAccountextGetNameCardRes*, bool))(Il2CppBase() + 0x516FF08))(this, createIfMissing);
	}

};

}
