#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class DefendSquadRecord
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "DefendSquadRecord"));
	}

	template <typename T = int32_t> T& _game_mode() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& _record_squad_idx() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = int32_t> T get_game_mode() {
		return ((T (*)(DefendSquadRecord*))(Il2CppBase() + 0x5226478))(this);
	}
	template <typename T = void> T set_game_mode(int32_t value) {
		return ((T (*)(DefendSquadRecord*, int32_t))(Il2CppBase() + 0x5226480))(this, value);
	}
	template <typename T = int32_t> T get_record_squad_idx() {
		return ((T (*)(DefendSquadRecord*))(Il2CppBase() + 0x5226488))(this);
	}
	template <typename T = void> T set_record_squad_idx(int32_t value) {
		return ((T (*)(DefendSquadRecord*, int32_t))(Il2CppBase() + 0x5226490))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(DefendSquadRecord*, bool))(Il2CppBase() + 0x5226498))(this, createIfMissing);
	}

};

}
