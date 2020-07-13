#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSAccountTrophyLevelUpNtf
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSAccount_TrophyLevelUpNtf"));
	}

	template <typename T = uint64_t> T& _player_id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint32_t> T& _old_level() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uint32_t> T& _new_level() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = bool> T& _has_trophy_level_prize() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x1C);
	}

	template <typename T = uint64_t> T get_player_id() {
		return ((T (*)(CSAccountTrophyLevelUpNtf*))(Il2CppBase() + 0x516F8E0))(this);
	}
	template <typename T = void> T set_player_id(uint64_t value) {
		return ((T (*)(CSAccountTrophyLevelUpNtf*, uint64_t))(Il2CppBase() + 0x516F8E8))(this, value);
	}
	template <typename T = uint32_t> T get_old_level() {
		return ((T (*)(CSAccountTrophyLevelUpNtf*))(Il2CppBase() + 0x516F8F8))(this);
	}
	template <typename T = void> T set_old_level(uint32_t value) {
		return ((T (*)(CSAccountTrophyLevelUpNtf*, uint32_t))(Il2CppBase() + 0x516F900))(this, value);
	}
	template <typename T = uint32_t> T get_new_level() {
		return ((T (*)(CSAccountTrophyLevelUpNtf*))(Il2CppBase() + 0x516F908))(this);
	}
	template <typename T = void> T set_new_level(uint32_t value) {
		return ((T (*)(CSAccountTrophyLevelUpNtf*, uint32_t))(Il2CppBase() + 0x516F910))(this, value);
	}
	template <typename T = bool> T get_has_trophy_level_prize() {
		return ((T (*)(CSAccountTrophyLevelUpNtf*))(Il2CppBase() + 0x516F918))(this);
	}
	template <typename T = void> T set_has_trophy_level_prize(bool value) {
		return ((T (*)(CSAccountTrophyLevelUpNtf*, bool))(Il2CppBase() + 0x516F920))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSAccountTrophyLevelUpNtf*, bool))(Il2CppBase() + 0x516F928))(this, createIfMissing);
	}

};

}
