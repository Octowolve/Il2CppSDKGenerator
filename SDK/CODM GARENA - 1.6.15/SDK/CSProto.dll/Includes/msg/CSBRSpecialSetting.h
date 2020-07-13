#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSBRSpecialSetting
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSBRSpecialSetting"));
	}

	template <typename T = bool> T& _auto_open_door() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = bool> T& _voice_visual() {
		return *(T*)((uintptr_t)this + 0x9);
	}
	template <typename T = bool> T& _auto_pick() {
		return *(T*)((uintptr_t)this + 0xA);
	}
	template <typename T = bool> T& _auto_reload() {
		return *(T*)((uintptr_t)this + 0xB);
	}
	template <typename T = bool> T& _aim_assist() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uint32_t> T& _posiongas_shrink_rate() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uint32_t> T& _posiongas_shrink_duration() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uint32_t> T& _open_pve() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uint32_t> T& _air_drop_rate() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = bool> T get_auto_open_door() {
		return ((T (*)(CSBRSpecialSetting*))(Il2CppBase() + 0x51E5668))(this);
	}
	template <typename T = void> T set_auto_open_door(bool value) {
		return ((T (*)(CSBRSpecialSetting*, bool))(Il2CppBase() + 0x51E5670))(this, value);
	}
	template <typename T = bool> T get_voice_visual() {
		return ((T (*)(CSBRSpecialSetting*))(Il2CppBase() + 0x51E5678))(this);
	}
	template <typename T = void> T set_voice_visual(bool value) {
		return ((T (*)(CSBRSpecialSetting*, bool))(Il2CppBase() + 0x51E5680))(this, value);
	}
	template <typename T = bool> T get_auto_pick() {
		return ((T (*)(CSBRSpecialSetting*))(Il2CppBase() + 0x51E5688))(this);
	}
	template <typename T = void> T set_auto_pick(bool value) {
		return ((T (*)(CSBRSpecialSetting*, bool))(Il2CppBase() + 0x51E5690))(this, value);
	}
	template <typename T = bool> T get_auto_reload() {
		return ((T (*)(CSBRSpecialSetting*))(Il2CppBase() + 0x51E5698))(this);
	}
	template <typename T = void> T set_auto_reload(bool value) {
		return ((T (*)(CSBRSpecialSetting*, bool))(Il2CppBase() + 0x51E56A0))(this, value);
	}
	template <typename T = bool> T get_aim_assist() {
		return ((T (*)(CSBRSpecialSetting*))(Il2CppBase() + 0x51E56A8))(this);
	}
	template <typename T = void> T set_aim_assist(bool value) {
		return ((T (*)(CSBRSpecialSetting*, bool))(Il2CppBase() + 0x51E56B0))(this, value);
	}
	template <typename T = uint32_t> T get_posiongas_shrink_rate() {
		return ((T (*)(CSBRSpecialSetting*))(Il2CppBase() + 0x51E56B8))(this);
	}
	template <typename T = void> T set_posiongas_shrink_rate(uint32_t value) {
		return ((T (*)(CSBRSpecialSetting*, uint32_t))(Il2CppBase() + 0x51E56C0))(this, value);
	}
	template <typename T = uint32_t> T get_posiongas_shrink_duration() {
		return ((T (*)(CSBRSpecialSetting*))(Il2CppBase() + 0x51E56C8))(this);
	}
	template <typename T = void> T set_posiongas_shrink_duration(uint32_t value) {
		return ((T (*)(CSBRSpecialSetting*, uint32_t))(Il2CppBase() + 0x51E56D0))(this, value);
	}
	template <typename T = uint32_t> T get_open_pve() {
		return ((T (*)(CSBRSpecialSetting*))(Il2CppBase() + 0x51E56D8))(this);
	}
	template <typename T = void> T set_open_pve(uint32_t value) {
		return ((T (*)(CSBRSpecialSetting*, uint32_t))(Il2CppBase() + 0x51E56E0))(this, value);
	}
	template <typename T = uint32_t> T get_air_drop_rate() {
		return ((T (*)(CSBRSpecialSetting*))(Il2CppBase() + 0x51E56E8))(this);
	}
	template <typename T = void> T set_air_drop_rate(uint32_t value) {
		return ((T (*)(CSBRSpecialSetting*, uint32_t))(Il2CppBase() + 0x51E56F0))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSBRSpecialSetting*, bool))(Il2CppBase() + 0x51E56F8))(this, createIfMissing);
	}

};

}
