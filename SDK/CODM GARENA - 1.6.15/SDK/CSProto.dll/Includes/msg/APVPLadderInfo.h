#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class APVPLadderInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "APVPLadderInfo"));
	}

	template <typename T = uint32_t> T& _season_no() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint32_t> T& _season_level() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uint32_t> T& _task_daily_prize_time() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = uint32_t> T get_season_no() {
		return ((T (*)(APVPLadderInfo*))(Il2CppBase() + 0x510C674))(this);
	}
	template <typename T = void> T set_season_no(uint32_t value) {
		return ((T (*)(APVPLadderInfo*, uint32_t))(Il2CppBase() + 0x510C67C))(this, value);
	}
	template <typename T = uint32_t> T get_season_level() {
		return ((T (*)(APVPLadderInfo*))(Il2CppBase() + 0x510C684))(this);
	}
	template <typename T = void> T set_season_level(uint32_t value) {
		return ((T (*)(APVPLadderInfo*, uint32_t))(Il2CppBase() + 0x510C68C))(this, value);
	}
	template <typename T = uint32_t> T get_task_daily_prize_time() {
		return ((T (*)(APVPLadderInfo*))(Il2CppBase() + 0x510C694))(this);
	}
	template <typename T = void> T set_task_daily_prize_time(uint32_t value) {
		return ((T (*)(APVPLadderInfo*, uint32_t))(Il2CppBase() + 0x510C69C))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(APVPLadderInfo*, bool))(Il2CppBase() + 0x510C6A4))(this, createIfMissing);
	}

};

}
