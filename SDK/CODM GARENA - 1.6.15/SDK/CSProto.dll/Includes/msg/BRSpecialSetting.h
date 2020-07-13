#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class BRSpecialSetting
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "BRSpecialSetting"));
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
		return ((T (*)(BRSpecialSetting*))(Il2CppBase() + 0x516DA6C))(this);
	}
	template <typename T = void> T set_auto_open_door(bool value) {
		return ((T (*)(BRSpecialSetting*, bool))(Il2CppBase() + 0x516DA74))(this, value);
	}
	template <typename T = bool> T get_voice_visual() {
		return ((T (*)(BRSpecialSetting*))(Il2CppBase() + 0x516DA7C))(this);
	}
	template <typename T = void> T set_voice_visual(bool value) {
		return ((T (*)(BRSpecialSetting*, bool))(Il2CppBase() + 0x516DA84))(this, value);
	}
	template <typename T = bool> T get_auto_pick() {
		return ((T (*)(BRSpecialSetting*))(Il2CppBase() + 0x516DA8C))(this);
	}
	template <typename T = void> T set_auto_pick(bool value) {
		return ((T (*)(BRSpecialSetting*, bool))(Il2CppBase() + 0x516DA94))(this, value);
	}
	template <typename T = bool> T get_auto_reload() {
		return ((T (*)(BRSpecialSetting*))(Il2CppBase() + 0x516DA9C))(this);
	}
	template <typename T = void> T set_auto_reload(bool value) {
		return ((T (*)(BRSpecialSetting*, bool))(Il2CppBase() + 0x516DAA4))(this, value);
	}
	template <typename T = bool> T get_aim_assist() {
		return ((T (*)(BRSpecialSetting*))(Il2CppBase() + 0x516DAAC))(this);
	}
	template <typename T = void> T set_aim_assist(bool value) {
		return ((T (*)(BRSpecialSetting*, bool))(Il2CppBase() + 0x516DAB4))(this, value);
	}
	template <typename T = uint32_t> T get_posiongas_shrink_rate() {
		return ((T (*)(BRSpecialSetting*))(Il2CppBase() + 0x516DABC))(this);
	}
	template <typename T = void> T set_posiongas_shrink_rate(uint32_t value) {
		return ((T (*)(BRSpecialSetting*, uint32_t))(Il2CppBase() + 0x516DAC4))(this, value);
	}
	template <typename T = uint32_t> T get_posiongas_shrink_duration() {
		return ((T (*)(BRSpecialSetting*))(Il2CppBase() + 0x516DACC))(this);
	}
	template <typename T = void> T set_posiongas_shrink_duration(uint32_t value) {
		return ((T (*)(BRSpecialSetting*, uint32_t))(Il2CppBase() + 0x516DAD4))(this, value);
	}
	template <typename T = uint32_t> T get_open_pve() {
		return ((T (*)(BRSpecialSetting*))(Il2CppBase() + 0x516DADC))(this);
	}
	template <typename T = void> T set_open_pve(uint32_t value) {
		return ((T (*)(BRSpecialSetting*, uint32_t))(Il2CppBase() + 0x516DAE4))(this, value);
	}
	template <typename T = uint32_t> T get_air_drop_rate() {
		return ((T (*)(BRSpecialSetting*))(Il2CppBase() + 0x516DAEC))(this);
	}
	template <typename T = void> T set_air_drop_rate(uint32_t value) {
		return ((T (*)(BRSpecialSetting*, uint32_t))(Il2CppBase() + 0x516DAF4))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(BRSpecialSetting*, bool))(Il2CppBase() + 0x516DAFC))(this, createIfMissing);
	}

};

}
