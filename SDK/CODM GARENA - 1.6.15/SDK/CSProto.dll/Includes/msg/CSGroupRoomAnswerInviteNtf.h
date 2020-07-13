#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSGroupRoomAnswerInviteNtf
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSGroupRoomAnswerInviteNtf"));
	}

	template <typename T = int32_t> T& _answer_flag() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint64_t> T& _answer_player_id() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _nick_name() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& _pic_info() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& _exp() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& _exp_lvl() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> T& _gender() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x2C);
	}

	template <typename T = int32_t> T get_answer_flag() {
		return ((T (*)(CSGroupRoomAnswerInviteNtf*))(Il2CppBase() + 0x51DD5A8))(this);
	}
	template <typename T = void> T set_answer_flag(int32_t value) {
		return ((T (*)(CSGroupRoomAnswerInviteNtf*, int32_t))(Il2CppBase() + 0x51DD5B0))(this, value);
	}
	template <typename T = uint64_t> T get_answer_player_id() {
		return ((T (*)(CSGroupRoomAnswerInviteNtf*))(Il2CppBase() + 0x51DD5B8))(this);
	}
	template <typename T = void> T set_answer_player_id(uint64_t value) {
		return ((T (*)(CSGroupRoomAnswerInviteNtf*, uint64_t))(Il2CppBase() + 0x51DD5C0))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_nick_name() {
		return ((T (*)(CSGroupRoomAnswerInviteNtf*))(Il2CppBase() + 0x51DD5D0))(this);
	}
	template <typename T = void> T set_nick_name(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(CSGroupRoomAnswerInviteNtf*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x51DD5D8))(this, value);
	}
	template <typename T = uintptr_t> T get_pic_info() {
		return ((T (*)(CSGroupRoomAnswerInviteNtf*))(Il2CppBase() + 0x51DD5E0))(this);
	}
	template <typename T = void> T set_pic_info(uintptr_t value) {
		return ((T (*)(CSGroupRoomAnswerInviteNtf*, uintptr_t))(Il2CppBase() + 0x51DD5E8))(this, value);
	}
	template <typename T = int32_t> T get_exp() {
		return ((T (*)(CSGroupRoomAnswerInviteNtf*))(Il2CppBase() + 0x51DD5F0))(this);
	}
	template <typename T = void> T set_exp(int32_t value) {
		return ((T (*)(CSGroupRoomAnswerInviteNtf*, int32_t))(Il2CppBase() + 0x51DD5F8))(this, value);
	}
	template <typename T = int32_t> T get_exp_lvl() {
		return ((T (*)(CSGroupRoomAnswerInviteNtf*))(Il2CppBase() + 0x51DD600))(this);
	}
	template <typename T = void> T set_exp_lvl(int32_t value) {
		return ((T (*)(CSGroupRoomAnswerInviteNtf*, int32_t))(Il2CppBase() + 0x51DD608))(this, value);
	}
	template <typename T = int32_t> T get_gender() {
		return ((T (*)(CSGroupRoomAnswerInviteNtf*))(Il2CppBase() + 0x51DD610))(this);
	}
	template <typename T = void> T set_gender(int32_t value) {
		return ((T (*)(CSGroupRoomAnswerInviteNtf*, int32_t))(Il2CppBase() + 0x51DD618))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSGroupRoomAnswerInviteNtf*, bool))(Il2CppBase() + 0x51DD620))(this, createIfMissing);
	}

};

}
