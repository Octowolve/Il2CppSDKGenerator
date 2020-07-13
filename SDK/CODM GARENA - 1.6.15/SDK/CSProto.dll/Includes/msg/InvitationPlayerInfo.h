#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class InvitationPlayerInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "InvitationPlayerInfo"));
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
	template <typename T = Il2CppArray<uintptr_t>*> T& _relation_name() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uint32_t> T& _bind_time() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& _award_num() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> T& _gender() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x2C);
	}

	template <typename T = uint64_t> T get_player_id() {
		return ((T (*)(InvitationPlayerInfo*))(Il2CppBase() + 0x50D08D4))(this);
	}
	template <typename T = void> T set_player_id(uint64_t value) {
		return ((T (*)(InvitationPlayerInfo*, uint64_t))(Il2CppBase() + 0x50D08DC))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_name() {
		return ((T (*)(InvitationPlayerInfo*))(Il2CppBase() + 0x50D08EC))(this);
	}
	template <typename T = void> T set_name(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(InvitationPlayerInfo*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x50D08F4))(this, value);
	}
	template <typename T = uintptr_t> T get_pic_info() {
		return ((T (*)(InvitationPlayerInfo*))(Il2CppBase() + 0x50D08FC))(this);
	}
	template <typename T = void> T set_pic_info(uintptr_t value) {
		return ((T (*)(InvitationPlayerInfo*, uintptr_t))(Il2CppBase() + 0x50D0904))(this, value);
	}
	template <typename T = uint32_t> T get_level() {
		return ((T (*)(InvitationPlayerInfo*))(Il2CppBase() + 0x50D090C))(this);
	}
	template <typename T = void> T set_level(uint32_t value) {
		return ((T (*)(InvitationPlayerInfo*, uint32_t))(Il2CppBase() + 0x50D0914))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_relation_name() {
		return ((T (*)(InvitationPlayerInfo*))(Il2CppBase() + 0x50D091C))(this);
	}
	template <typename T = void> T set_relation_name(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(InvitationPlayerInfo*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x50D0924))(this, value);
	}
	template <typename T = uint32_t> T get_bind_time() {
		return ((T (*)(InvitationPlayerInfo*))(Il2CppBase() + 0x50D092C))(this);
	}
	template <typename T = void> T set_bind_time(uint32_t value) {
		return ((T (*)(InvitationPlayerInfo*, uint32_t))(Il2CppBase() + 0x50D0934))(this, value);
	}
	template <typename T = int32_t> T get_award_num() {
		return ((T (*)(InvitationPlayerInfo*))(Il2CppBase() + 0x50D093C))(this);
	}
	template <typename T = void> T set_award_num(int32_t value) {
		return ((T (*)(InvitationPlayerInfo*, int32_t))(Il2CppBase() + 0x50D0944))(this, value);
	}
	template <typename T = int32_t> T get_gender() {
		return ((T (*)(InvitationPlayerInfo*))(Il2CppBase() + 0x50D094C))(this);
	}
	template <typename T = void> T set_gender(int32_t value) {
		return ((T (*)(InvitationPlayerInfo*, int32_t))(Il2CppBase() + 0x50D0954))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(InvitationPlayerInfo*, bool))(Il2CppBase() + 0x50D095C))(this, createIfMissing);
	}

};

}
