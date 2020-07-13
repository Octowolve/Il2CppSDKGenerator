#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSChapterGameResult
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSChapterGameResult"));
	}

	template <typename T = int32_t> T& _score() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& _player_data_change() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _reward_prop_list() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& _history_max_score() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = int32_t> T get_score() {
		return ((T (*)(CSChapterGameResult*))(Il2CppBase() + 0x51CF914))(this);
	}
	template <typename T = void> T set_score(int32_t value) {
		return ((T (*)(CSChapterGameResult*, int32_t))(Il2CppBase() + 0x51CF91C))(this, value);
	}
	template <typename T = uintptr_t> T get_player_data_change() {
		return ((T (*)(CSChapterGameResult*))(Il2CppBase() + 0x51CF924))(this);
	}
	template <typename T = void> T set_player_data_change(uintptr_t value) {
		return ((T (*)(CSChapterGameResult*, uintptr_t))(Il2CppBase() + 0x51CF92C))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_reward_prop_list() {
		return ((T (*)(CSChapterGameResult*))(Il2CppBase() + 0x51CF934))(this);
	}
	template <typename T = int32_t> T get_history_max_score() {
		return ((T (*)(CSChapterGameResult*))(Il2CppBase() + 0x51CF93C))(this);
	}
	template <typename T = void> T set_history_max_score(int32_t value) {
		return ((T (*)(CSChapterGameResult*, int32_t))(Il2CppBase() + 0x51CF944))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSChapterGameResult*, bool))(Il2CppBase() + 0x51CF94C))(this, createIfMissing);
	}

};

}
