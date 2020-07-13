#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSChapterStartGameRes
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSChapterStartGameRes"));
	}

	template <typename T = int32_t> T& _result() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& _lock_reason() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& _player_data_change() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uint32_t> T& _random_value() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _expert_numers() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x1C);
	}

	template <typename T = int32_t> T get_result() {
		return ((T (*)(CSChapterStartGameRes*))(Il2CppBase() + 0x51CFA58))(this);
	}
	template <typename T = void> T set_result(int32_t value) {
		return ((T (*)(CSChapterStartGameRes*, int32_t))(Il2CppBase() + 0x51CFA60))(this, value);
	}
	template <typename T = int32_t> T get_lock_reason() {
		return ((T (*)(CSChapterStartGameRes*))(Il2CppBase() + 0x51CFA68))(this);
	}
	template <typename T = void> T set_lock_reason(int32_t value) {
		return ((T (*)(CSChapterStartGameRes*, int32_t))(Il2CppBase() + 0x51CFA70))(this, value);
	}
	template <typename T = uintptr_t> T get_player_data_change() {
		return ((T (*)(CSChapterStartGameRes*))(Il2CppBase() + 0x51CFA78))(this);
	}
	template <typename T = void> T set_player_data_change(uintptr_t value) {
		return ((T (*)(CSChapterStartGameRes*, uintptr_t))(Il2CppBase() + 0x51CFA80))(this, value);
	}
	template <typename T = uint32_t> T get_random_value() {
		return ((T (*)(CSChapterStartGameRes*))(Il2CppBase() + 0x51CFA88))(this);
	}
	template <typename T = void> T set_random_value(uint32_t value) {
		return ((T (*)(CSChapterStartGameRes*, uint32_t))(Il2CppBase() + 0x51CFA90))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_expert_numers() {
		return ((T (*)(CSChapterStartGameRes*))(Il2CppBase() + 0x51CFA98))(this);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSChapterStartGameRes*, bool))(Il2CppBase() + 0x51CFAA0))(this, createIfMissing);
	}

};

}
