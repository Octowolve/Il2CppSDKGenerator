#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class ResActvMatchJump
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "ResActvMatchJump"));
	}

	template <typename T = int64_t> T& _seq_id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int64_t> T& _task_id() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int64_t> T& _begin_date() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int64_t> T& _end_date() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int64_t> T& _show_location() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppString*> T& _match_name() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppString*> T& _match_sprite() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = Il2CppString*> T& _match_sprite_url() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppString*> T& _match_icon_sprite() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = Il2CppList<int64_t>*> T& _go_pos() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppList<int64_t>*> T& _award_id() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = Il2CppList<int64_t>*> T& _award_num() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = Il2CppList<int64_t>*> T& _award_durable() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = Il2CppList<int64_t>*> T& _show_award_id() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x54);
	}

	template <typename T = int64_t> T get_seq_id() {
		return ((T (*)(ResActvMatchJump*))(Il2CppBase() + 0x5071300))(this);
	}
	template <typename T = void> T set_seq_id(int64_t value) {
		return ((T (*)(ResActvMatchJump*, int64_t))(Il2CppBase() + 0x5071308))(this, value);
	}
	template <typename T = int64_t> T get_task_id() {
		return ((T (*)(ResActvMatchJump*))(Il2CppBase() + 0x5071318))(this);
	}
	template <typename T = void> T set_task_id(int64_t value) {
		return ((T (*)(ResActvMatchJump*, int64_t))(Il2CppBase() + 0x5071320))(this, value);
	}
	template <typename T = int64_t> T get_begin_date() {
		return ((T (*)(ResActvMatchJump*))(Il2CppBase() + 0x5071330))(this);
	}
	template <typename T = void> T set_begin_date(int64_t value) {
		return ((T (*)(ResActvMatchJump*, int64_t))(Il2CppBase() + 0x5071338))(this, value);
	}
	template <typename T = int64_t> T get_end_date() {
		return ((T (*)(ResActvMatchJump*))(Il2CppBase() + 0x5071348))(this);
	}
	template <typename T = void> T set_end_date(int64_t value) {
		return ((T (*)(ResActvMatchJump*, int64_t))(Il2CppBase() + 0x5071350))(this, value);
	}
	template <typename T = int64_t> T get_show_location() {
		return ((T (*)(ResActvMatchJump*))(Il2CppBase() + 0x5071360))(this);
	}
	template <typename T = void> T set_show_location(int64_t value) {
		return ((T (*)(ResActvMatchJump*, int64_t))(Il2CppBase() + 0x5071368))(this, value);
	}
	template <typename T = Il2CppString*> T get_match_name() {
		return ((T (*)(ResActvMatchJump*))(Il2CppBase() + 0x5071378))(this);
	}
	template <typename T = void> T set_match_name(Il2CppString* value) {
		return ((T (*)(ResActvMatchJump*, Il2CppString*))(Il2CppBase() + 0x5071380))(this, value);
	}
	template <typename T = Il2CppString*> T get_match_sprite() {
		return ((T (*)(ResActvMatchJump*))(Il2CppBase() + 0x5071388))(this);
	}
	template <typename T = void> T set_match_sprite(Il2CppString* value) {
		return ((T (*)(ResActvMatchJump*, Il2CppString*))(Il2CppBase() + 0x5071390))(this, value);
	}
	template <typename T = Il2CppString*> T get_match_sprite_url() {
		return ((T (*)(ResActvMatchJump*))(Il2CppBase() + 0x5071398))(this);
	}
	template <typename T = void> T set_match_sprite_url(Il2CppString* value) {
		return ((T (*)(ResActvMatchJump*, Il2CppString*))(Il2CppBase() + 0x50713A0))(this, value);
	}
	template <typename T = Il2CppString*> T get_match_icon_sprite() {
		return ((T (*)(ResActvMatchJump*))(Il2CppBase() + 0x50713A8))(this);
	}
	template <typename T = void> T set_match_icon_sprite(Il2CppString* value) {
		return ((T (*)(ResActvMatchJump*, Il2CppString*))(Il2CppBase() + 0x50713B0))(this, value);
	}
	template <typename T = Il2CppList<int64_t>*> T get_go_pos() {
		return ((T (*)(ResActvMatchJump*))(Il2CppBase() + 0x50713B8))(this);
	}
	template <typename T = Il2CppList<int64_t>*> T get_award_id() {
		return ((T (*)(ResActvMatchJump*))(Il2CppBase() + 0x50713C0))(this);
	}
	template <typename T = Il2CppList<int64_t>*> T get_award_num() {
		return ((T (*)(ResActvMatchJump*))(Il2CppBase() + 0x50713C8))(this);
	}
	template <typename T = Il2CppList<int64_t>*> T get_award_durable() {
		return ((T (*)(ResActvMatchJump*))(Il2CppBase() + 0x50713D0))(this);
	}
	template <typename T = Il2CppList<int64_t>*> T get_show_award_id() {
		return ((T (*)(ResActvMatchJump*))(Il2CppBase() + 0x50713D8))(this);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(ResActvMatchJump*, bool))(Il2CppBase() + 0x50713E0))(this, createIfMissing);
	}

};

}
