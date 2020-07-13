#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSGspEndMatchNtf
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSGspEndMatchNtf"));
	}

	template <typename T = uint64_t> T& _user_id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& _game_statis_report() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uint32_t> T& _match_type() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = uint64_t> T get_user_id() {
		return ((T (*)(CSGspEndMatchNtf*))(Il2CppBase() + 0x51D9F6C))(this);
	}
	template <typename T = void> T set_user_id(uint64_t value) {
		return ((T (*)(CSGspEndMatchNtf*, uint64_t))(Il2CppBase() + 0x51D9F74))(this, value);
	}
	template <typename T = uintptr_t> T get_game_statis_report() {
		return ((T (*)(CSGspEndMatchNtf*))(Il2CppBase() + 0x51D9F84))(this);
	}
	template <typename T = void> T set_game_statis_report(uintptr_t value) {
		return ((T (*)(CSGspEndMatchNtf*, uintptr_t))(Il2CppBase() + 0x51D9F8C))(this, value);
	}
	template <typename T = uint32_t> T get_match_type() {
		return ((T (*)(CSGspEndMatchNtf*))(Il2CppBase() + 0x51D9F94))(this);
	}
	template <typename T = void> T set_match_type(uint32_t value) {
		return ((T (*)(CSGspEndMatchNtf*, uint32_t))(Il2CppBase() + 0x51D9F9C))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSGspEndMatchNtf*, bool))(Il2CppBase() + 0x51D9FA4))(this, createIfMissing);
	}

};

}
