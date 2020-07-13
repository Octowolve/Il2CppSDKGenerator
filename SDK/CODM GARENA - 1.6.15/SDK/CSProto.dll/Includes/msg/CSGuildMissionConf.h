#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSGuildMissionConf
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSGuildMissionConf"));
	}

	template <typename T = uint32_t> T& _mission_id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint32_t> T& _guild_level() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppString*> T& _locid_mission_title() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& _locid_mission_desc() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uint64_t> T& _personal_value() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _award() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uint32_t> T& _mission_type() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = uint32_t> T get_mission_id() {
		return ((T (*)(CSGuildMissionConf*))(Il2CppBase() + 0x51DC550))(this);
	}
	template <typename T = void> T set_mission_id(uint32_t value) {
		return ((T (*)(CSGuildMissionConf*, uint32_t))(Il2CppBase() + 0x51DC558))(this, value);
	}
	template <typename T = uint32_t> T get_guild_level() {
		return ((T (*)(CSGuildMissionConf*))(Il2CppBase() + 0x51DC560))(this);
	}
	template <typename T = void> T set_guild_level(uint32_t value) {
		return ((T (*)(CSGuildMissionConf*, uint32_t))(Il2CppBase() + 0x51DC568))(this, value);
	}
	template <typename T = Il2CppString*> T get_locid_mission_title() {
		return ((T (*)(CSGuildMissionConf*))(Il2CppBase() + 0x51DC570))(this);
	}
	template <typename T = void> T set_locid_mission_title(Il2CppString* value) {
		return ((T (*)(CSGuildMissionConf*, Il2CppString*))(Il2CppBase() + 0x51DC578))(this, value);
	}
	template <typename T = Il2CppString*> T get_locid_mission_desc() {
		return ((T (*)(CSGuildMissionConf*))(Il2CppBase() + 0x51DC580))(this);
	}
	template <typename T = void> T set_locid_mission_desc(Il2CppString* value) {
		return ((T (*)(CSGuildMissionConf*, Il2CppString*))(Il2CppBase() + 0x51DC588))(this, value);
	}
	template <typename T = uint64_t> T get_personal_value() {
		return ((T (*)(CSGuildMissionConf*))(Il2CppBase() + 0x51DC590))(this);
	}
	template <typename T = void> T set_personal_value(uint64_t value) {
		return ((T (*)(CSGuildMissionConf*, uint64_t))(Il2CppBase() + 0x51DC598))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_award() {
		return ((T (*)(CSGuildMissionConf*))(Il2CppBase() + 0x51DC5A8))(this);
	}
	template <typename T = uint32_t> T get_mission_type() {
		return ((T (*)(CSGuildMissionConf*))(Il2CppBase() + 0x51DC5B0))(this);
	}
	template <typename T = void> T set_mission_type(uint32_t value) {
		return ((T (*)(CSGuildMissionConf*, uint32_t))(Il2CppBase() + 0x51DC5B8))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSGuildMissionConf*, bool))(Il2CppBase() + 0x51DC5C0))(this, createIfMissing);
	}

};

}
