#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSInviteNewbieGetInvivationInfoRes
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSInviteNewbie_GetInvivationInfoRes"));
	}

	template <typename T = int32_t> T& _result() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _invitee_list() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _level_award() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _total_award() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& _total_value() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& _total_award_num() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& _max_level() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uint64_t> T& _inviter_id() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& _max_invitee_num() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> T& _activity_id() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = bool> T& _show_tips() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uint64_t> T& _start_timestamp() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uint64_t> T& _end_timestamp() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = Il2CppString*> T& _left_pic() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x54);
	}

	template <typename T = int32_t> T get_result() {
		return ((T (*)(CSInviteNewbieGetInvivationInfoRes*))(Il2CppBase() + 0x51395F8))(this);
	}
	template <typename T = void> T set_result(int32_t value) {
		return ((T (*)(CSInviteNewbieGetInvivationInfoRes*, int32_t))(Il2CppBase() + 0x5139600))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_invitee_list() {
		return ((T (*)(CSInviteNewbieGetInvivationInfoRes*))(Il2CppBase() + 0x5139608))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_level_award() {
		return ((T (*)(CSInviteNewbieGetInvivationInfoRes*))(Il2CppBase() + 0x5139610))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_total_award() {
		return ((T (*)(CSInviteNewbieGetInvivationInfoRes*))(Il2CppBase() + 0x5139618))(this);
	}
	template <typename T = int32_t> T get_total_value() {
		return ((T (*)(CSInviteNewbieGetInvivationInfoRes*))(Il2CppBase() + 0x5139620))(this);
	}
	template <typename T = void> T set_total_value(int32_t value) {
		return ((T (*)(CSInviteNewbieGetInvivationInfoRes*, int32_t))(Il2CppBase() + 0x5139628))(this, value);
	}
	template <typename T = int32_t> T get_total_award_num() {
		return ((T (*)(CSInviteNewbieGetInvivationInfoRes*))(Il2CppBase() + 0x5139630))(this);
	}
	template <typename T = void> T set_total_award_num(int32_t value) {
		return ((T (*)(CSInviteNewbieGetInvivationInfoRes*, int32_t))(Il2CppBase() + 0x5139638))(this, value);
	}
	template <typename T = int32_t> T get_max_level() {
		return ((T (*)(CSInviteNewbieGetInvivationInfoRes*))(Il2CppBase() + 0x5139640))(this);
	}
	template <typename T = void> T set_max_level(int32_t value) {
		return ((T (*)(CSInviteNewbieGetInvivationInfoRes*, int32_t))(Il2CppBase() + 0x5139648))(this, value);
	}
	template <typename T = uint64_t> T get_inviter_id() {
		return ((T (*)(CSInviteNewbieGetInvivationInfoRes*))(Il2CppBase() + 0x5139650))(this);
	}
	template <typename T = void> T set_inviter_id(uint64_t value) {
		return ((T (*)(CSInviteNewbieGetInvivationInfoRes*, uint64_t))(Il2CppBase() + 0x5139658))(this, value);
	}
	template <typename T = int32_t> T get_max_invitee_num() {
		return ((T (*)(CSInviteNewbieGetInvivationInfoRes*))(Il2CppBase() + 0x5139668))(this);
	}
	template <typename T = void> T set_max_invitee_num(int32_t value) {
		return ((T (*)(CSInviteNewbieGetInvivationInfoRes*, int32_t))(Il2CppBase() + 0x5139670))(this, value);
	}
	template <typename T = int32_t> T get_activity_id() {
		return ((T (*)(CSInviteNewbieGetInvivationInfoRes*))(Il2CppBase() + 0x5139678))(this);
	}
	template <typename T = void> T set_activity_id(int32_t value) {
		return ((T (*)(CSInviteNewbieGetInvivationInfoRes*, int32_t))(Il2CppBase() + 0x5139680))(this, value);
	}
	template <typename T = bool> T get_show_tips() {
		return ((T (*)(CSInviteNewbieGetInvivationInfoRes*))(Il2CppBase() + 0x5139688))(this);
	}
	template <typename T = void> T set_show_tips(bool value) {
		return ((T (*)(CSInviteNewbieGetInvivationInfoRes*, bool))(Il2CppBase() + 0x5139690))(this, value);
	}
	template <typename T = uint64_t> T get_start_timestamp() {
		return ((T (*)(CSInviteNewbieGetInvivationInfoRes*))(Il2CppBase() + 0x5139698))(this);
	}
	template <typename T = void> T set_start_timestamp(uint64_t value) {
		return ((T (*)(CSInviteNewbieGetInvivationInfoRes*, uint64_t))(Il2CppBase() + 0x51396A0))(this, value);
	}
	template <typename T = uint64_t> T get_end_timestamp() {
		return ((T (*)(CSInviteNewbieGetInvivationInfoRes*))(Il2CppBase() + 0x51396B0))(this);
	}
	template <typename T = void> T set_end_timestamp(uint64_t value) {
		return ((T (*)(CSInviteNewbieGetInvivationInfoRes*, uint64_t))(Il2CppBase() + 0x51396B8))(this, value);
	}
	template <typename T = Il2CppString*> T get_left_pic() {
		return ((T (*)(CSInviteNewbieGetInvivationInfoRes*))(Il2CppBase() + 0x51396C8))(this);
	}
	template <typename T = void> T set_left_pic(Il2CppString* value) {
		return ((T (*)(CSInviteNewbieGetInvivationInfoRes*, Il2CppString*))(Il2CppBase() + 0x51396D0))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSInviteNewbieGetInvivationInfoRes*, bool))(Il2CppBase() + 0x51396D8))(this, createIfMissing);
	}

};

}
