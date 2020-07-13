#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSGuildGetGuildMissionRes
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSGuild_GetGuildMissionRes"));
	}

	template <typename T = uint32_t> T& _result() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint32_t> T& _mission_id() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uint64_t> T& _guild_value() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& _member_data() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& _mission_conf() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = uint32_t> T get_result() {
		return ((T (*)(CSGuildGetGuildMissionRes*))(Il2CppBase() + 0x51DB308))(this);
	}
	template <typename T = void> T set_result(uint32_t value) {
		return ((T (*)(CSGuildGetGuildMissionRes*, uint32_t))(Il2CppBase() + 0x51DB310))(this, value);
	}
	template <typename T = uint32_t> T get_mission_id() {
		return ((T (*)(CSGuildGetGuildMissionRes*))(Il2CppBase() + 0x51DB318))(this);
	}
	template <typename T = void> T set_mission_id(uint32_t value) {
		return ((T (*)(CSGuildGetGuildMissionRes*, uint32_t))(Il2CppBase() + 0x51DB320))(this, value);
	}
	template <typename T = uint64_t> T get_guild_value() {
		return ((T (*)(CSGuildGetGuildMissionRes*))(Il2CppBase() + 0x51DB328))(this);
	}
	template <typename T = void> T set_guild_value(uint64_t value) {
		return ((T (*)(CSGuildGetGuildMissionRes*, uint64_t))(Il2CppBase() + 0x51DB330))(this, value);
	}
	template <typename T = uintptr_t> T get_member_data() {
		return ((T (*)(CSGuildGetGuildMissionRes*))(Il2CppBase() + 0x51DB340))(this);
	}
	template <typename T = void> T set_member_data(uintptr_t value) {
		return ((T (*)(CSGuildGetGuildMissionRes*, uintptr_t))(Il2CppBase() + 0x51DB348))(this, value);
	}
	template <typename T = uintptr_t> T get_mission_conf() {
		return ((T (*)(CSGuildGetGuildMissionRes*))(Il2CppBase() + 0x51DB350))(this);
	}
	template <typename T = void> T set_mission_conf(uintptr_t value) {
		return ((T (*)(CSGuildGetGuildMissionRes*, uintptr_t))(Il2CppBase() + 0x51DB358))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSGuildGetGuildMissionRes*, bool))(Il2CppBase() + 0x51DB360))(this, createIfMissing);
	}

};

}
