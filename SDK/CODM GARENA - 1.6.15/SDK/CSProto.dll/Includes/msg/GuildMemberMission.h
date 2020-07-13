#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class GuildMemberMission
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "GuildMemberMission"));
	}

	template <typename T = uint64_t> T& _player_id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint64_t> T& _player_value() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppList<uint32_t>*> T& _award_list() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x1C);
	}

	template <typename T = uint64_t> T get_player_id() {
		return ((T (*)(GuildMemberMission*))(Il2CppBase() + 0x50CFF78))(this);
	}
	template <typename T = void> T set_player_id(uint64_t value) {
		return ((T (*)(GuildMemberMission*, uint64_t))(Il2CppBase() + 0x50CFF80))(this, value);
	}
	template <typename T = uint64_t> T get_player_value() {
		return ((T (*)(GuildMemberMission*))(Il2CppBase() + 0x50CFF90))(this);
	}
	template <typename T = void> T set_player_value(uint64_t value) {
		return ((T (*)(GuildMemberMission*, uint64_t))(Il2CppBase() + 0x50CFF98))(this, value);
	}
	template <typename T = Il2CppList<uint32_t>*> T get_award_list() {
		return ((T (*)(GuildMemberMission*))(Il2CppBase() + 0x50CFFA8))(this);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(GuildMemberMission*, bool))(Il2CppBase() + 0x50CFFB0))(this, createIfMissing);
	}

};

}
