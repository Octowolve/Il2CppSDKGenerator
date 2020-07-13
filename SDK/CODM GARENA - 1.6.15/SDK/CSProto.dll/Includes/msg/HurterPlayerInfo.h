#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class HurterPlayerInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "HurterPlayerInfo"));
	}

	template <typename T = uint64_t> T& _player_id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _nick_name() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uint64_t> T& _player_guid() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& _camp() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x24);
	}

	template <typename T = uint64_t> T get_player_id() {
		return ((T (*)(HurterPlayerInfo*))(Il2CppBase() + 0x50D03B0))(this);
	}
	template <typename T = void> T set_player_id(uint64_t value) {
		return ((T (*)(HurterPlayerInfo*, uint64_t))(Il2CppBase() + 0x50D03B8))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_nick_name() {
		return ((T (*)(HurterPlayerInfo*))(Il2CppBase() + 0x50D03C8))(this);
	}
	template <typename T = void> T set_nick_name(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(HurterPlayerInfo*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x50D03D0))(this, value);
	}
	template <typename T = uint64_t> T get_player_guid() {
		return ((T (*)(HurterPlayerInfo*))(Il2CppBase() + 0x50D03D8))(this);
	}
	template <typename T = void> T set_player_guid(uint64_t value) {
		return ((T (*)(HurterPlayerInfo*, uint64_t))(Il2CppBase() + 0x50D03E0))(this, value);
	}
	template <typename T = int32_t> T get_camp() {
		return ((T (*)(HurterPlayerInfo*))(Il2CppBase() + 0x50D03F0))(this);
	}
	template <typename T = void> T set_camp(int32_t value) {
		return ((T (*)(HurterPlayerInfo*, int32_t))(Il2CppBase() + 0x50D03F8))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(HurterPlayerInfo*, bool))(Il2CppBase() + 0x50D0400))(this, createIfMissing);
	}

};

}
