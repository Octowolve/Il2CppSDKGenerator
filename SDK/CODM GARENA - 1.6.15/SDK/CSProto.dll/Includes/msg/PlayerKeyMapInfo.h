#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class PlayerKeyMapInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "PlayerKeyMapInfo"));
	}

	template <typename T = uint32_t> T& _setting_game_mode() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _setting() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uint32_t> T& _fire_mode() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uint32_t> T& _ui_type() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = uint32_t> T get_setting_game_mode() {
		return ((T (*)(PlayerKeyMapInfo*))(Il2CppBase() + 0x4EA8998))(this);
	}
	template <typename T = void> T set_setting_game_mode(uint32_t value) {
		return ((T (*)(PlayerKeyMapInfo*, uint32_t))(Il2CppBase() + 0x4EA89A0))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_setting() {
		return ((T (*)(PlayerKeyMapInfo*))(Il2CppBase() + 0x4EA89A8))(this);
	}
	template <typename T = void> T set_setting(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(PlayerKeyMapInfo*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x4EA89B0))(this, value);
	}
	template <typename T = uint32_t> T get_fire_mode() {
		return ((T (*)(PlayerKeyMapInfo*))(Il2CppBase() + 0x4EA89B8))(this);
	}
	template <typename T = void> T set_fire_mode(uint32_t value) {
		return ((T (*)(PlayerKeyMapInfo*, uint32_t))(Il2CppBase() + 0x4EA89C0))(this, value);
	}
	template <typename T = uint32_t> T get_ui_type() {
		return ((T (*)(PlayerKeyMapInfo*))(Il2CppBase() + 0x4EA89C8))(this);
	}
	template <typename T = void> T set_ui_type(uint32_t value) {
		return ((T (*)(PlayerKeyMapInfo*, uint32_t))(Il2CppBase() + 0x4EA89D0))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(PlayerKeyMapInfo*, bool))(Il2CppBase() + 0x4EA89D8))(this, createIfMissing);
	}

};

}
