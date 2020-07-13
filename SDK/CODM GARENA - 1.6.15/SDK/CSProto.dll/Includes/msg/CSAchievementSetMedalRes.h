#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSAchievementSetMedalRes
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSAchievementSetMedalRes"));
	}

	template <typename T = int32_t> T& _result() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = int32_t> T get_result() {
		return ((T (*)(CSAchievementSetMedalRes*))(Il2CppBase() + 0x5170A90))(this);
	}
	template <typename T = void> T set_result(int32_t value) {
		return ((T (*)(CSAchievementSetMedalRes*, int32_t))(Il2CppBase() + 0x5170A98))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSAchievementSetMedalRes*, bool))(Il2CppBase() + 0x5170AA0))(this, createIfMissing);
	}

};

}
