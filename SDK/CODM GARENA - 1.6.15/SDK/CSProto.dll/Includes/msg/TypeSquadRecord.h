#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class TypeSquadRecord
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "TypeSquadRecord"));
	}

	template <typename T = int32_t> T& _game_type() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& _record_squad_idx() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& _time_stamp() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = int32_t> T get_game_type() {
		return ((T (*)(TypeSquadRecord*))(Il2CppBase() + 0x51AA870))(this);
	}
	template <typename T = void> T set_game_type(int32_t value) {
		return ((T (*)(TypeSquadRecord*, int32_t))(Il2CppBase() + 0x51AA878))(this, value);
	}
	template <typename T = int32_t> T get_record_squad_idx() {
		return ((T (*)(TypeSquadRecord*))(Il2CppBase() + 0x51AA880))(this);
	}
	template <typename T = void> T set_record_squad_idx(int32_t value) {
		return ((T (*)(TypeSquadRecord*, int32_t))(Il2CppBase() + 0x51AA888))(this, value);
	}
	template <typename T = int32_t> T get_time_stamp() {
		return ((T (*)(TypeSquadRecord*))(Il2CppBase() + 0x51AA890))(this);
	}
	template <typename T = void> T set_time_stamp(int32_t value) {
		return ((T (*)(TypeSquadRecord*, int32_t))(Il2CppBase() + 0x51AA898))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(TypeSquadRecord*, bool))(Il2CppBase() + 0x51AA8A0))(this, createIfMissing);
	}

};

}
