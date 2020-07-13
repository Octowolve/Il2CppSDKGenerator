#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class GrenadeStatis
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "GrenadeStatis"));
	}

	template <typename T = uint32_t> T& _grenade_id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint32_t> T& _grenade_total_kills() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uint32_t> T& _grenade_use_times() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uint32_t> T& _grenade_total_damage_times() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = uint32_t> T get_grenade_id() {
		return ((T (*)(GrenadeStatis*))(Il2CppBase() + 0x50CDCC8))(this);
	}
	template <typename T = void> T set_grenade_id(uint32_t value) {
		return ((T (*)(GrenadeStatis*, uint32_t))(Il2CppBase() + 0x50CDCD0))(this, value);
	}
	template <typename T = uint32_t> T get_grenade_total_kills() {
		return ((T (*)(GrenadeStatis*))(Il2CppBase() + 0x50CDCD8))(this);
	}
	template <typename T = void> T set_grenade_total_kills(uint32_t value) {
		return ((T (*)(GrenadeStatis*, uint32_t))(Il2CppBase() + 0x50CDCE0))(this, value);
	}
	template <typename T = uint32_t> T get_grenade_use_times() {
		return ((T (*)(GrenadeStatis*))(Il2CppBase() + 0x50CDCE8))(this);
	}
	template <typename T = void> T set_grenade_use_times(uint32_t value) {
		return ((T (*)(GrenadeStatis*, uint32_t))(Il2CppBase() + 0x50CDCF0))(this, value);
	}
	template <typename T = uint32_t> T get_grenade_total_damage_times() {
		return ((T (*)(GrenadeStatis*))(Il2CppBase() + 0x50CDCF8))(this);
	}
	template <typename T = void> T set_grenade_total_damage_times(uint32_t value) {
		return ((T (*)(GrenadeStatis*, uint32_t))(Il2CppBase() + 0x50CDD00))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(GrenadeStatis*, bool))(Il2CppBase() + 0x50CDD08))(this, createIfMissing);
	}

};

}
