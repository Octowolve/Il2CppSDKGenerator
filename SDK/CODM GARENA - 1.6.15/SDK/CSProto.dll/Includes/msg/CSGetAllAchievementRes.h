#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSGetAllAchievementRes
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSGetAllAchievementRes"));
	}

	template <typename T = int32_t> T& _result() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& _achievement_db() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = int32_t> T get_result() {
		return ((T (*)(CSGetAllAchievementRes*))(Il2CppBase() + 0x51D25FC))(this);
	}
	template <typename T = void> T set_result(int32_t value) {
		return ((T (*)(CSGetAllAchievementRes*, int32_t))(Il2CppBase() + 0x51D2604))(this, value);
	}
	template <typename T = uintptr_t> T get_achievement_db() {
		return ((T (*)(CSGetAllAchievementRes*))(Il2CppBase() + 0x51D260C))(this);
	}
	template <typename T = void> T set_achievement_db(uintptr_t value) {
		return ((T (*)(CSGetAllAchievementRes*, uintptr_t))(Il2CppBase() + 0x51D2614))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSGetAllAchievementRes*, bool))(Il2CppBase() + 0x51D261C))(this, createIfMissing);
	}

};

}
