#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class PlayerStaminaInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "PlayerStaminaInfo"));
	}

	template <typename T = uint32_t> T& _player_stamina() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint64_t> T& _player_stamina_last_update_time() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uint32_t> T& _daily_stamina_bought_times() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x1C);
	}

	template <typename T = uint32_t> T get_player_stamina() {
		return ((T (*)(PlayerStaminaInfo*))(Il2CppBase() + 0x4EA98E8))(this);
	}
	template <typename T = void> T set_player_stamina(uint32_t value) {
		return ((T (*)(PlayerStaminaInfo*, uint32_t))(Il2CppBase() + 0x4EA98F0))(this, value);
	}
	template <typename T = uint64_t> T get_player_stamina_last_update_time() {
		return ((T (*)(PlayerStaminaInfo*))(Il2CppBase() + 0x4EA98F8))(this);
	}
	template <typename T = void> T set_player_stamina_last_update_time(uint64_t value) {
		return ((T (*)(PlayerStaminaInfo*, uint64_t))(Il2CppBase() + 0x4EA9900))(this, value);
	}
	template <typename T = uint32_t> T get_daily_stamina_bought_times() {
		return ((T (*)(PlayerStaminaInfo*))(Il2CppBase() + 0x4EA9910))(this);
	}
	template <typename T = void> T set_daily_stamina_bought_times(uint32_t value) {
		return ((T (*)(PlayerStaminaInfo*, uint32_t))(Il2CppBase() + 0x4EA9918))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(PlayerStaminaInfo*, bool))(Il2CppBase() + 0x4EA9920))(this, createIfMissing);
	}

};

}
