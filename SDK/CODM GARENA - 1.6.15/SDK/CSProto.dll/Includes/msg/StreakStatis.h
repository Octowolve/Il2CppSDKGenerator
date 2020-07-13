#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class StreakStatis
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "StreakStatis"));
	}

	template <typename T = uint32_t> T& _streak_id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint32_t> T& _streak_total_kills() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uint32_t> T& _streak_use_times() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uint32_t> T& _streak_score() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = uint32_t> T get_streak_id() {
		return ((T (*)(StreakStatis*))(Il2CppBase() + 0x51A99C4))(this);
	}
	template <typename T = void> T set_streak_id(uint32_t value) {
		return ((T (*)(StreakStatis*, uint32_t))(Il2CppBase() + 0x51A99CC))(this, value);
	}
	template <typename T = uint32_t> T get_streak_total_kills() {
		return ((T (*)(StreakStatis*))(Il2CppBase() + 0x51A99D4))(this);
	}
	template <typename T = void> T set_streak_total_kills(uint32_t value) {
		return ((T (*)(StreakStatis*, uint32_t))(Il2CppBase() + 0x51A99DC))(this, value);
	}
	template <typename T = uint32_t> T get_streak_use_times() {
		return ((T (*)(StreakStatis*))(Il2CppBase() + 0x51A99E4))(this);
	}
	template <typename T = void> T set_streak_use_times(uint32_t value) {
		return ((T (*)(StreakStatis*, uint32_t))(Il2CppBase() + 0x51A99EC))(this, value);
	}
	template <typename T = uint32_t> T get_streak_score() {
		return ((T (*)(StreakStatis*))(Il2CppBase() + 0x51A99F4))(this);
	}
	template <typename T = void> T set_streak_score(uint32_t value) {
		return ((T (*)(StreakStatis*, uint32_t))(Il2CppBase() + 0x51A99FC))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(StreakStatis*, bool))(Il2CppBase() + 0x51A9A04))(this, createIfMissing);
	}

};

}
