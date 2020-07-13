#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSAccountReportUserReq
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSAccountReportUserReq"));
	}

	template <typename T = uint64_t> T& _reported_player_id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _reported_nick_name() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _reported_pic_url() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uint32_t> T& _report_scenario() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppList<uint32_t>*> T& _report_type() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _report_desc() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _reported_chat_content() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uint64_t> T& _room_guid() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = uint64_t> T get_reported_player_id() {
		return ((T (*)(CSAccountReportUserReq*))(Il2CppBase() + 0x51705AC))(this);
	}
	template <typename T = void> T set_reported_player_id(uint64_t value) {
		return ((T (*)(CSAccountReportUserReq*, uint64_t))(Il2CppBase() + 0x51705B4))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_reported_nick_name() {
		return ((T (*)(CSAccountReportUserReq*))(Il2CppBase() + 0x51705C4))(this);
	}
	template <typename T = void> T set_reported_nick_name(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(CSAccountReportUserReq*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x51705CC))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_reported_pic_url() {
		return ((T (*)(CSAccountReportUserReq*))(Il2CppBase() + 0x51705D4))(this);
	}
	template <typename T = void> T set_reported_pic_url(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(CSAccountReportUserReq*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x51705DC))(this, value);
	}
	template <typename T = uint32_t> T get_report_scenario() {
		return ((T (*)(CSAccountReportUserReq*))(Il2CppBase() + 0x51705E4))(this);
	}
	template <typename T = void> T set_report_scenario(uint32_t value) {
		return ((T (*)(CSAccountReportUserReq*, uint32_t))(Il2CppBase() + 0x51705EC))(this, value);
	}
	template <typename T = Il2CppList<uint32_t>*> T get_report_type() {
		return ((T (*)(CSAccountReportUserReq*))(Il2CppBase() + 0x51705F4))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_report_desc() {
		return ((T (*)(CSAccountReportUserReq*))(Il2CppBase() + 0x51705FC))(this);
	}
	template <typename T = void> T set_report_desc(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(CSAccountReportUserReq*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x5170604))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_reported_chat_content() {
		return ((T (*)(CSAccountReportUserReq*))(Il2CppBase() + 0x517060C))(this);
	}
	template <typename T = void> T set_reported_chat_content(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(CSAccountReportUserReq*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x5170614))(this, value);
	}
	template <typename T = uint64_t> T get_room_guid() {
		return ((T (*)(CSAccountReportUserReq*))(Il2CppBase() + 0x517061C))(this);
	}
	template <typename T = void> T set_room_guid(uint64_t value) {
		return ((T (*)(CSAccountReportUserReq*, uint64_t))(Il2CppBase() + 0x5170624))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSAccountReportUserReq*, bool))(Il2CppBase() + 0x5170634))(this, createIfMissing);
	}

};

}
