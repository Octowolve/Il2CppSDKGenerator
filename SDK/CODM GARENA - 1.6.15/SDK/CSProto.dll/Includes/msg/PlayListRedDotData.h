#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class PlayListRedDotData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "PlayListRedDotData"));
	}

	template <typename T = uint32_t> T& _tag() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint32_t> T& _timestamp() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uint32_t> T& _match_type() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uint32_t> T& _game_type() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = uint32_t> T get_tag() {
		return ((T (*)(PlayListRedDotData*))(Il2CppBase() + 0x506DDE0))(this);
	}
	template <typename T = void> T set_tag(uint32_t value) {
		return ((T (*)(PlayListRedDotData*, uint32_t))(Il2CppBase() + 0x506DDE8))(this, value);
	}
	template <typename T = uint32_t> T get_timestamp() {
		return ((T (*)(PlayListRedDotData*))(Il2CppBase() + 0x506DDF0))(this);
	}
	template <typename T = void> T set_timestamp(uint32_t value) {
		return ((T (*)(PlayListRedDotData*, uint32_t))(Il2CppBase() + 0x506DDF8))(this, value);
	}
	template <typename T = uint32_t> T get_match_type() {
		return ((T (*)(PlayListRedDotData*))(Il2CppBase() + 0x506DE00))(this);
	}
	template <typename T = void> T set_match_type(uint32_t value) {
		return ((T (*)(PlayListRedDotData*, uint32_t))(Il2CppBase() + 0x506DE08))(this, value);
	}
	template <typename T = uint32_t> T get_game_type() {
		return ((T (*)(PlayListRedDotData*))(Il2CppBase() + 0x506DE10))(this);
	}
	template <typename T = void> T set_game_type(uint32_t value) {
		return ((T (*)(PlayListRedDotData*, uint32_t))(Il2CppBase() + 0x506DE18))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(PlayListRedDotData*, bool))(Il2CppBase() + 0x506DE20))(this, createIfMissing);
	}

};

}
