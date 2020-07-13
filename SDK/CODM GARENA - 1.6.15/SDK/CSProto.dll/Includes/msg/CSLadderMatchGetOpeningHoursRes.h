#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSLadderMatchGetOpeningHoursRes
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSLadderMatchGetOpeningHoursRes"));
	}

	template <typename T = int32_t> T& _result() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _game_opening_hours() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& _match_module() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& _req_interval() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uint64_t> T& _season_start_time() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uint64_t> T& _season_end_time() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _prop_list() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _season_tips() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = int32_t> T get_result() {
		return ((T (*)(CSLadderMatchGetOpeningHoursRes*))(Il2CppBase() + 0x5139940))(this);
	}
	template <typename T = void> T set_result(int32_t value) {
		return ((T (*)(CSLadderMatchGetOpeningHoursRes*, int32_t))(Il2CppBase() + 0x5139948))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_game_opening_hours() {
		return ((T (*)(CSLadderMatchGetOpeningHoursRes*))(Il2CppBase() + 0x5139950))(this);
	}
	template <typename T = int32_t> T get_match_module() {
		return ((T (*)(CSLadderMatchGetOpeningHoursRes*))(Il2CppBase() + 0x5139958))(this);
	}
	template <typename T = void> T set_match_module(int32_t value) {
		return ((T (*)(CSLadderMatchGetOpeningHoursRes*, int32_t))(Il2CppBase() + 0x5139960))(this, value);
	}
	template <typename T = int32_t> T get_req_interval() {
		return ((T (*)(CSLadderMatchGetOpeningHoursRes*))(Il2CppBase() + 0x5139968))(this);
	}
	template <typename T = void> T set_req_interval(int32_t value) {
		return ((T (*)(CSLadderMatchGetOpeningHoursRes*, int32_t))(Il2CppBase() + 0x5139970))(this, value);
	}
	template <typename T = uint64_t> T get_season_start_time() {
		return ((T (*)(CSLadderMatchGetOpeningHoursRes*))(Il2CppBase() + 0x5139978))(this);
	}
	template <typename T = void> T set_season_start_time(uint64_t value) {
		return ((T (*)(CSLadderMatchGetOpeningHoursRes*, uint64_t))(Il2CppBase() + 0x5139980))(this, value);
	}
	template <typename T = uint64_t> T get_season_end_time() {
		return ((T (*)(CSLadderMatchGetOpeningHoursRes*))(Il2CppBase() + 0x5139990))(this);
	}
	template <typename T = void> T set_season_end_time(uint64_t value) {
		return ((T (*)(CSLadderMatchGetOpeningHoursRes*, uint64_t))(Il2CppBase() + 0x5139998))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_prop_list() {
		return ((T (*)(CSLadderMatchGetOpeningHoursRes*))(Il2CppBase() + 0x51399A8))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_season_tips() {
		return ((T (*)(CSLadderMatchGetOpeningHoursRes*))(Il2CppBase() + 0x51399B0))(this);
	}
	template <typename T = void> T set_season_tips(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(CSLadderMatchGetOpeningHoursRes*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x51399B8))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSLadderMatchGetOpeningHoursRes*, bool))(Il2CppBase() + 0x51399C0))(this, createIfMissing);
	}

};

}
