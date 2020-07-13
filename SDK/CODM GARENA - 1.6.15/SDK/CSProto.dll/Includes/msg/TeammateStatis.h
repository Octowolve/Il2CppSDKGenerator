#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class TeammateStatis
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "TeammateStatis"));
	}

	template <typename T = uint64_t> T& _player_id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _nick_name() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uint32_t> T& _times_kill() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uint32_t> T& _survival_time() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x1C);
	}

	template <typename T = uint64_t> T get_player_id() {
		return ((T (*)(TeammateStatis*))(Il2CppBase() + 0x51AA08C))(this);
	}
	template <typename T = void> T set_player_id(uint64_t value) {
		return ((T (*)(TeammateStatis*, uint64_t))(Il2CppBase() + 0x51AA094))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_nick_name() {
		return ((T (*)(TeammateStatis*))(Il2CppBase() + 0x51AA0A4))(this);
	}
	template <typename T = void> T set_nick_name(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(TeammateStatis*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x51AA0AC))(this, value);
	}
	template <typename T = uint32_t> T get_times_kill() {
		return ((T (*)(TeammateStatis*))(Il2CppBase() + 0x51AA0B4))(this);
	}
	template <typename T = void> T set_times_kill(uint32_t value) {
		return ((T (*)(TeammateStatis*, uint32_t))(Il2CppBase() + 0x51AA0BC))(this, value);
	}
	template <typename T = uint32_t> T get_survival_time() {
		return ((T (*)(TeammateStatis*))(Il2CppBase() + 0x51AA0C4))(this);
	}
	template <typename T = void> T set_survival_time(uint32_t value) {
		return ((T (*)(TeammateStatis*, uint32_t))(Il2CppBase() + 0x51AA0CC))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(TeammateStatis*, bool))(Il2CppBase() + 0x51AA0D4))(this, createIfMissing);
	}

};

}
