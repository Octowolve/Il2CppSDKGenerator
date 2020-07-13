#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSGetAchievementRewardRes
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSGetAchievementRewardRes"));
	}

	template <typename T = int32_t> T& _result() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppList<int32_t>*> T& _already_reward_id() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& _data_change() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = int32_t> T get_result() {
		return ((T (*)(CSGetAchievementRewardRes*))(Il2CppBase() + 0x51D2470))(this);
	}
	template <typename T = void> T set_result(int32_t value) {
		return ((T (*)(CSGetAchievementRewardRes*, int32_t))(Il2CppBase() + 0x51D2478))(this, value);
	}
	template <typename T = Il2CppList<int32_t>*> T get_already_reward_id() {
		return ((T (*)(CSGetAchievementRewardRes*))(Il2CppBase() + 0x51D2480))(this);
	}
	template <typename T = uintptr_t> T get_data_change() {
		return ((T (*)(CSGetAchievementRewardRes*))(Il2CppBase() + 0x51D2488))(this);
	}
	template <typename T = void> T set_data_change(uintptr_t value) {
		return ((T (*)(CSGetAchievementRewardRes*, uintptr_t))(Il2CppBase() + 0x51D2490))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSGetAchievementRewardRes*, bool))(Il2CppBase() + 0x51D2498))(this, createIfMissing);
	}

};

}
