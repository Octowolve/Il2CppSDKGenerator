#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSGuildMissionCompletedNtf
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSGuild_MissionCompletedNtf"));
	}

	template <typename T = uint64_t> T& _guild_id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = uint64_t> T get_guild_id() {
		return ((T (*)(CSGuildMissionCompletedNtf*))(Il2CppBase() + 0x51DBA00))(this);
	}
	template <typename T = void> T set_guild_id(uint64_t value) {
		return ((T (*)(CSGuildMissionCompletedNtf*, uint64_t))(Il2CppBase() + 0x51DBA08))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSGuildMissionCompletedNtf*, bool))(Il2CppBase() + 0x51DBA18))(this, createIfMissing);
	}

};

}
