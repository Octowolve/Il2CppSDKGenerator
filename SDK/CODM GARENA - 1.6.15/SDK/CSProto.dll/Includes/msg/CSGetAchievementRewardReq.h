#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSGetAchievementRewardReq
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSGetAchievementRewardReq"));
	}

	template <typename T = int32_t> T& _get_reward_id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = int32_t> T get_get_reward_id() {
		return ((T (*)(CSGetAchievementRewardReq*))(Il2CppBase() + 0x51D23A0))(this);
	}
	template <typename T = void> T set_get_reward_id(int32_t value) {
		return ((T (*)(CSGetAchievementRewardReq*, int32_t))(Il2CppBase() + 0x51D23A8))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSGetAchievementRewardReq*, bool))(Il2CppBase() + 0x51D23B0))(this, createIfMissing);
	}

};

}
