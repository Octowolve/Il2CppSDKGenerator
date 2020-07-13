#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSGetAllAchievementReq
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSGetAllAchievementReq"));
	}

	template <typename T = uint64_t> T& _player_id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = uint64_t> T get_player_id() {
		return ((T (*)(CSGetAllAchievementReq*))(Il2CppBase() + 0x51D25C8))(this);
	}
	template <typename T = void> T set_player_id(uint64_t value) {
		return ((T (*)(CSGetAllAchievementReq*, uint64_t))(Il2CppBase() + 0x51D25D0))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSGetAllAchievementReq*, bool))(Il2CppBase() + 0x51D25E0))(this, createIfMissing);
	}

};

}
