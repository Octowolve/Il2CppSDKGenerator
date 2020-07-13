#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSGspGetRewardLimitationRes
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSGsp_GetRewardLimitationRes"));
	}

	template <typename T = uint32_t> T& _result() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _rewrd_limitation() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uint32_t> T& _daily_single_difficulty_level() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uint32_t> T& _daily_single_difficulty_level_reset_time() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = uint32_t> T get_result() {
		return ((T (*)(CSGspGetRewardLimitationRes*))(Il2CppBase() + 0x51DFC50))(this);
	}
	template <typename T = void> T set_result(uint32_t value) {
		return ((T (*)(CSGspGetRewardLimitationRes*, uint32_t))(Il2CppBase() + 0x51DFC58))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_rewrd_limitation() {
		return ((T (*)(CSGspGetRewardLimitationRes*))(Il2CppBase() + 0x51DFC60))(this);
	}
	template <typename T = uint32_t> T get_daily_single_difficulty_level() {
		return ((T (*)(CSGspGetRewardLimitationRes*))(Il2CppBase() + 0x51DFC68))(this);
	}
	template <typename T = void> T set_daily_single_difficulty_level(uint32_t value) {
		return ((T (*)(CSGspGetRewardLimitationRes*, uint32_t))(Il2CppBase() + 0x51DFC70))(this, value);
	}
	template <typename T = uint32_t> T get_daily_single_difficulty_level_reset_time() {
		return ((T (*)(CSGspGetRewardLimitationRes*))(Il2CppBase() + 0x51DFC78))(this);
	}
	template <typename T = void> T set_daily_single_difficulty_level_reset_time(uint32_t value) {
		return ((T (*)(CSGspGetRewardLimitationRes*, uint32_t))(Il2CppBase() + 0x51DFC80))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSGspGetRewardLimitationRes*, bool))(Il2CppBase() + 0x51DFC88))(this, createIfMissing);
	}

};

}
