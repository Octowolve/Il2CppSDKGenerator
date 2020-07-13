#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSAccountLadderLevelUpNtf
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSAccount_LadderLevelUpNtf"));
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
	template <typename T = bool> T& _has_ladder_level_prize() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _props() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& _ladder_type() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x24);
	}

	template <typename T = uint64_t> T get_player_id() {
		return ((T (*)(CSAccountLadderLevelUpNtf*))(Il2CppBase() + 0x516F5B8))(this);
	}
	template <typename T = void> T set_player_id(uint64_t value) {
		return ((T (*)(CSAccountLadderLevelUpNtf*, uint64_t))(Il2CppBase() + 0x516F5C0))(this, value);
	}
	template <typename T = uint32_t> T get_old_level() {
		return ((T (*)(CSAccountLadderLevelUpNtf*))(Il2CppBase() + 0x516F5D0))(this);
	}
	template <typename T = void> T set_old_level(uint32_t value) {
		return ((T (*)(CSAccountLadderLevelUpNtf*, uint32_t))(Il2CppBase() + 0x516F5D8))(this, value);
	}
	template <typename T = uint32_t> T get_new_level() {
		return ((T (*)(CSAccountLadderLevelUpNtf*))(Il2CppBase() + 0x516F5E0))(this);
	}
	template <typename T = void> T set_new_level(uint32_t value) {
		return ((T (*)(CSAccountLadderLevelUpNtf*, uint32_t))(Il2CppBase() + 0x516F5E8))(this, value);
	}
	template <typename T = bool> T get_has_ladder_level_prize() {
		return ((T (*)(CSAccountLadderLevelUpNtf*))(Il2CppBase() + 0x516F5F0))(this);
	}
	template <typename T = void> T set_has_ladder_level_prize(bool value) {
		return ((T (*)(CSAccountLadderLevelUpNtf*, bool))(Il2CppBase() + 0x516F5F8))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_props() {
		return ((T (*)(CSAccountLadderLevelUpNtf*))(Il2CppBase() + 0x516F600))(this);
	}
	template <typename T = uintptr_t> T get_ladder_type() {
		return ((T (*)(CSAccountLadderLevelUpNtf*))(Il2CppBase() + 0x516F608))(this);
	}
	template <typename T = void> T set_ladder_type(uintptr_t value) {
		return ((T (*)(CSAccountLadderLevelUpNtf*, uintptr_t))(Il2CppBase() + 0x516F610))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSAccountLadderLevelUpNtf*, bool))(Il2CppBase() + 0x516F618))(this, createIfMissing);
	}

};

}
