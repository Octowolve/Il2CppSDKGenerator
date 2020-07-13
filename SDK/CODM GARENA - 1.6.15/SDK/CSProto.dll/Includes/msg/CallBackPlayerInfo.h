#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CallBackPlayerInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CallBackPlayerInfo"));
	}

	template <typename T = uint64_t> T& _player_id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _name() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& _pic_info() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uint32_t> T& _level() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _relative_name() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uint64_t> T& _logout_time() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = bool> T& _is_invitee() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& _ladder_level() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = int32_t> T& _br_ladder_level() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x34);
	}

	template <typename T = uint64_t> T get_player_id() {
		return ((T (*)(CallBackPlayerInfo*))(Il2CppBase() + 0x516DB84))(this);
	}
	template <typename T = void> T set_player_id(uint64_t value) {
		return ((T (*)(CallBackPlayerInfo*, uint64_t))(Il2CppBase() + 0x516DB8C))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_name() {
		return ((T (*)(CallBackPlayerInfo*))(Il2CppBase() + 0x516DB9C))(this);
	}
	template <typename T = void> T set_name(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(CallBackPlayerInfo*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x516DBA4))(this, value);
	}
	template <typename T = uintptr_t> T get_pic_info() {
		return ((T (*)(CallBackPlayerInfo*))(Il2CppBase() + 0x516DBAC))(this);
	}
	template <typename T = void> T set_pic_info(uintptr_t value) {
		return ((T (*)(CallBackPlayerInfo*, uintptr_t))(Il2CppBase() + 0x516DBB4))(this, value);
	}
	template <typename T = uint32_t> T get_level() {
		return ((T (*)(CallBackPlayerInfo*))(Il2CppBase() + 0x516DBBC))(this);
	}
	template <typename T = void> T set_level(uint32_t value) {
		return ((T (*)(CallBackPlayerInfo*, uint32_t))(Il2CppBase() + 0x516DBC4))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_relative_name() {
		return ((T (*)(CallBackPlayerInfo*))(Il2CppBase() + 0x516DBCC))(this);
	}
	template <typename T = void> T set_relative_name(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(CallBackPlayerInfo*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x516DBD4))(this, value);
	}
	template <typename T = uint64_t> T get_logout_time() {
		return ((T (*)(CallBackPlayerInfo*))(Il2CppBase() + 0x516DBDC))(this);
	}
	template <typename T = void> T set_logout_time(uint64_t value) {
		return ((T (*)(CallBackPlayerInfo*, uint64_t))(Il2CppBase() + 0x516DBE4))(this, value);
	}
	template <typename T = bool> T get_is_invitee() {
		return ((T (*)(CallBackPlayerInfo*))(Il2CppBase() + 0x516DBF4))(this);
	}
	template <typename T = void> T set_is_invitee(bool value) {
		return ((T (*)(CallBackPlayerInfo*, bool))(Il2CppBase() + 0x516DBFC))(this, value);
	}
	template <typename T = int32_t> T get_ladder_level() {
		return ((T (*)(CallBackPlayerInfo*))(Il2CppBase() + 0x516DC04))(this);
	}
	template <typename T = void> T set_ladder_level(int32_t value) {
		return ((T (*)(CallBackPlayerInfo*, int32_t))(Il2CppBase() + 0x516DC0C))(this, value);
	}
	template <typename T = int32_t> T get_br_ladder_level() {
		return ((T (*)(CallBackPlayerInfo*))(Il2CppBase() + 0x516DC14))(this);
	}
	template <typename T = void> T set_br_ladder_level(int32_t value) {
		return ((T (*)(CallBackPlayerInfo*, int32_t))(Il2CppBase() + 0x516DC1C))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CallBackPlayerInfo*, bool))(Il2CppBase() + 0x516DC24))(this, createIfMissing);
	}

};

}
