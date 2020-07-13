#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class BossStatData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "BossStatData"));
	}

	template <typename T = int32_t> T& _boss_id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint32_t> T& _boss_born_time() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uint32_t> T& _boss_death_time() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = double> T& _boss_born_hp() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = double> T& _boss_left_hp() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& _player_revive_times() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& _squad_ai_death_times() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = int32_t> T& _player_death_times() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uint64_t> T& _role_id() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x40);
	}

	template <typename T = int32_t> T get_boss_id() {
		return ((T (*)(BossStatData*))(Il2CppBase() + 0x510D61C))(this);
	}
	template <typename T = void> T set_boss_id(int32_t value) {
		return ((T (*)(BossStatData*, int32_t))(Il2CppBase() + 0x510D624))(this, value);
	}
	template <typename T = uint32_t> T get_boss_born_time() {
		return ((T (*)(BossStatData*))(Il2CppBase() + 0x510D62C))(this);
	}
	template <typename T = void> T set_boss_born_time(uint32_t value) {
		return ((T (*)(BossStatData*, uint32_t))(Il2CppBase() + 0x510D634))(this, value);
	}
	template <typename T = uint32_t> T get_boss_death_time() {
		return ((T (*)(BossStatData*))(Il2CppBase() + 0x510D63C))(this);
	}
	template <typename T = void> T set_boss_death_time(uint32_t value) {
		return ((T (*)(BossStatData*, uint32_t))(Il2CppBase() + 0x510D644))(this, value);
	}
	template <typename T = double> T get_boss_born_hp() {
		return ((T (*)(BossStatData*))(Il2CppBase() + 0x510D64C))(this);
	}
	template <typename T = void> T set_boss_born_hp(double value) {
		return ((T (*)(BossStatData*, double))(Il2CppBase() + 0x510D658))(this, value);
	}
	template <typename T = double> T get_boss_left_hp() {
		return ((T (*)(BossStatData*))(Il2CppBase() + 0x510D668))(this);
	}
	template <typename T = void> T set_boss_left_hp(double value) {
		return ((T (*)(BossStatData*, double))(Il2CppBase() + 0x510D674))(this, value);
	}
	template <typename T = int32_t> T get_player_revive_times() {
		return ((T (*)(BossStatData*))(Il2CppBase() + 0x510D684))(this);
	}
	template <typename T = void> T set_player_revive_times(int32_t value) {
		return ((T (*)(BossStatData*, int32_t))(Il2CppBase() + 0x510D68C))(this, value);
	}
	template <typename T = int32_t> T get_squad_ai_death_times() {
		return ((T (*)(BossStatData*))(Il2CppBase() + 0x510D694))(this);
	}
	template <typename T = void> T set_squad_ai_death_times(int32_t value) {
		return ((T (*)(BossStatData*, int32_t))(Il2CppBase() + 0x510D69C))(this, value);
	}
	template <typename T = int32_t> T get_player_death_times() {
		return ((T (*)(BossStatData*))(Il2CppBase() + 0x510D6A4))(this);
	}
	template <typename T = void> T set_player_death_times(int32_t value) {
		return ((T (*)(BossStatData*, int32_t))(Il2CppBase() + 0x510D6AC))(this, value);
	}
	template <typename T = uint64_t> T get_role_id() {
		return ((T (*)(BossStatData*))(Il2CppBase() + 0x510D6B4))(this);
	}
	template <typename T = void> T set_role_id(uint64_t value) {
		return ((T (*)(BossStatData*, uint64_t))(Il2CppBase() + 0x510D6BC))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(BossStatData*, bool))(Il2CppBase() + 0x510D6CC))(this, createIfMissing);
	}

};

}
