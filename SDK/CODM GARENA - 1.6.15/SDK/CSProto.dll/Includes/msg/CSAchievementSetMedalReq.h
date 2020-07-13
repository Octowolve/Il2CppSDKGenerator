#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSAchievementSetMedalReq
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSAchievementSetMedalReq"));
	}

	template <typename T = int32_t> T& _medal_key() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& _medel_index() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = int32_t> T get_medal_key() {
		return ((T (*)(CSAchievementSetMedalReq*))(Il2CppBase() + 0x5170A54))(this);
	}
	template <typename T = void> T set_medal_key(int32_t value) {
		return ((T (*)(CSAchievementSetMedalReq*, int32_t))(Il2CppBase() + 0x5170A5C))(this, value);
	}
	template <typename T = int32_t> T get_medel_index() {
		return ((T (*)(CSAchievementSetMedalReq*))(Il2CppBase() + 0x5170A64))(this);
	}
	template <typename T = void> T set_medel_index(int32_t value) {
		return ((T (*)(CSAchievementSetMedalReq*, int32_t))(Il2CppBase() + 0x5170A6C))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSAchievementSetMedalReq*, bool))(Il2CppBase() + 0x5170A74))(this, createIfMissing);
	}

};

}
