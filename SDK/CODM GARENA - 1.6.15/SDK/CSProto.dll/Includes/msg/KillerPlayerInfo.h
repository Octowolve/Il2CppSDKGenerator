#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class KillerPlayerInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "KillerPlayerInfo"));
	}

	template <typename T = uint64_t> T& _player_id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _nick_name() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = uint64_t> T get_player_id() {
		return ((T (*)(KillerPlayerInfo*))(Il2CppBase() + 0x50D0D54))(this);
	}
	template <typename T = void> T set_player_id(uint64_t value) {
		return ((T (*)(KillerPlayerInfo*, uint64_t))(Il2CppBase() + 0x50D0D5C))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_nick_name() {
		return ((T (*)(KillerPlayerInfo*))(Il2CppBase() + 0x50D0D6C))(this);
	}
	template <typename T = void> T set_nick_name(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(KillerPlayerInfo*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x50D0D74))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(KillerPlayerInfo*, bool))(Il2CppBase() + 0x50D0D7C))(this, createIfMissing);
	}

};

}
