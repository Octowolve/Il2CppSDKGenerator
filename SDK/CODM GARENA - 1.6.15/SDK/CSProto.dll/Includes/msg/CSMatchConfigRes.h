#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSMatchConfigRes
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSMatchConfigRes"));
	}

	template <typename T = int32_t> T& _result() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _game_mode_info() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppList<uint32_t>*> T& _spvp_mapid() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _spvp_play_list_child() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _spvp_play_list() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uint32_t> T& _ladder_select_type() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uint32_t> T& _spvp_playlist_select_num() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x24);
	}

	template <typename T = int32_t> T get_result() {
		return ((T (*)(CSMatchConfigRes*))(Il2CppBase() + 0x51F0644))(this);
	}
	template <typename T = void> T set_result(int32_t value) {
		return ((T (*)(CSMatchConfigRes*, int32_t))(Il2CppBase() + 0x51F064C))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_game_mode_info() {
		return ((T (*)(CSMatchConfigRes*))(Il2CppBase() + 0x51F0654))(this);
	}
	template <typename T = Il2CppList<uint32_t>*> T get_spvp_mapid() {
		return ((T (*)(CSMatchConfigRes*))(Il2CppBase() + 0x51F065C))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_spvp_play_list_child() {
		return ((T (*)(CSMatchConfigRes*))(Il2CppBase() + 0x51F0664))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_spvp_play_list() {
		return ((T (*)(CSMatchConfigRes*))(Il2CppBase() + 0x51F066C))(this);
	}
	template <typename T = uint32_t> T get_ladder_select_type() {
		return ((T (*)(CSMatchConfigRes*))(Il2CppBase() + 0x51F0674))(this);
	}
	template <typename T = void> T set_ladder_select_type(uint32_t value) {
		return ((T (*)(CSMatchConfigRes*, uint32_t))(Il2CppBase() + 0x51F067C))(this, value);
	}
	template <typename T = uint32_t> T get_spvp_playlist_select_num() {
		return ((T (*)(CSMatchConfigRes*))(Il2CppBase() + 0x51F0684))(this);
	}
	template <typename T = void> T set_spvp_playlist_select_num(uint32_t value) {
		return ((T (*)(CSMatchConfigRes*, uint32_t))(Il2CppBase() + 0x51F068C))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSMatchConfigRes*, bool))(Il2CppBase() + 0x51F0694))(this, createIfMissing);
	}

};

}
