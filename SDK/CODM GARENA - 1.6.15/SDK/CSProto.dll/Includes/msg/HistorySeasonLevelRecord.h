#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class HistorySeasonLevelRecord
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "HistorySeasonLevelRecord"));
	}

	template <typename T = int32_t> T& _season_no() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& _season_highest_level() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& _season_end_level() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = int32_t> T get_season_no() {
		return ((T (*)(HistorySeasonLevelRecord*))(Il2CppBase() + 0x50D0364))(this);
	}
	template <typename T = void> T set_season_no(int32_t value) {
		return ((T (*)(HistorySeasonLevelRecord*, int32_t))(Il2CppBase() + 0x50D036C))(this, value);
	}
	template <typename T = int32_t> T get_season_highest_level() {
		return ((T (*)(HistorySeasonLevelRecord*))(Il2CppBase() + 0x50D0374))(this);
	}
	template <typename T = void> T set_season_highest_level(int32_t value) {
		return ((T (*)(HistorySeasonLevelRecord*, int32_t))(Il2CppBase() + 0x50D037C))(this, value);
	}
	template <typename T = int32_t> T get_season_end_level() {
		return ((T (*)(HistorySeasonLevelRecord*))(Il2CppBase() + 0x50D0384))(this);
	}
	template <typename T = void> T set_season_end_level(int32_t value) {
		return ((T (*)(HistorySeasonLevelRecord*, int32_t))(Il2CppBase() + 0x50D038C))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(HistorySeasonLevelRecord*, bool))(Il2CppBase() + 0x50D0394))(this, createIfMissing);
	}

};

}
