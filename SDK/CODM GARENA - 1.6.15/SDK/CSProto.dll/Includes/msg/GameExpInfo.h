#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class GameExpInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "GameExpInfo"));
	}

	template <typename T = int32_t> T& _game_type() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint32_t> T& _exp() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uint32_t> T& _level() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uint32_t> T& _upgrade_deadline() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = int32_t> T get_game_type() {
		return ((T (*)(GameExpInfo*))(Il2CppBase() + 0x52277E8))(this);
	}
	template <typename T = void> T set_game_type(int32_t value) {
		return ((T (*)(GameExpInfo*, int32_t))(Il2CppBase() + 0x52277F0))(this, value);
	}
	template <typename T = uint32_t> T get_exp() {
		return ((T (*)(GameExpInfo*))(Il2CppBase() + 0x52277F8))(this);
	}
	template <typename T = void> T set_exp(uint32_t value) {
		return ((T (*)(GameExpInfo*, uint32_t))(Il2CppBase() + 0x5227800))(this, value);
	}
	template <typename T = uint32_t> T get_level() {
		return ((T (*)(GameExpInfo*))(Il2CppBase() + 0x5227808))(this);
	}
	template <typename T = void> T set_level(uint32_t value) {
		return ((T (*)(GameExpInfo*, uint32_t))(Il2CppBase() + 0x5227810))(this, value);
	}
	template <typename T = uint32_t> T get_upgrade_deadline() {
		return ((T (*)(GameExpInfo*))(Il2CppBase() + 0x5227818))(this);
	}
	template <typename T = void> T set_upgrade_deadline(uint32_t value) {
		return ((T (*)(GameExpInfo*, uint32_t))(Il2CppBase() + 0x5227820))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(GameExpInfo*, bool))(Il2CppBase() + 0x5227828))(this, createIfMissing);
	}

};

}
