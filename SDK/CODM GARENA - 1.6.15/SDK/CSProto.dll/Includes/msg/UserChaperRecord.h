#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class UserChaperRecord
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "UserChaperRecord"));
	}

	template <typename T = uint64_t> T& _player_id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = bool> T& _is_test_uin() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _chapter_list() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uint32_t> T& _random_value() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x1C);
	}

	template <typename T = uint64_t> T get_player_id() {
		return ((T (*)(UserChaperRecord*))(Il2CppBase() + 0x51AAB6C))(this);
	}
	template <typename T = void> T set_player_id(uint64_t value) {
		return ((T (*)(UserChaperRecord*, uint64_t))(Il2CppBase() + 0x51AAB74))(this, value);
	}
	template <typename T = bool> T get_is_test_uin() {
		return ((T (*)(UserChaperRecord*))(Il2CppBase() + 0x51AAB84))(this);
	}
	template <typename T = void> T set_is_test_uin(bool value) {
		return ((T (*)(UserChaperRecord*, bool))(Il2CppBase() + 0x51AAB8C))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_chapter_list() {
		return ((T (*)(UserChaperRecord*))(Il2CppBase() + 0x51AAB94))(this);
	}
	template <typename T = uint32_t> T get_random_value() {
		return ((T (*)(UserChaperRecord*))(Il2CppBase() + 0x51AAB9C))(this);
	}
	template <typename T = void> T set_random_value(uint32_t value) {
		return ((T (*)(UserChaperRecord*, uint32_t))(Il2CppBase() + 0x51AABA4))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(UserChaperRecord*, bool))(Il2CppBase() + 0x51AABAC))(this, createIfMissing);
	}

};

}
