#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSGuildGetGuildMissionReq
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSGuild_GetGuildMissionReq"));
	}

	template <typename T = uint64_t> T& _guild_id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint32_t> T& _online_sec() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = uint64_t> T get_guild_id() {
		return ((T (*)(CSGuildGetGuildMissionReq*))(Il2CppBase() + 0x51DB2C4))(this);
	}
	template <typename T = void> T set_guild_id(uint64_t value) {
		return ((T (*)(CSGuildGetGuildMissionReq*, uint64_t))(Il2CppBase() + 0x51DB2CC))(this, value);
	}
	template <typename T = uint32_t> T get_online_sec() {
		return ((T (*)(CSGuildGetGuildMissionReq*))(Il2CppBase() + 0x51DB2DC))(this);
	}
	template <typename T = void> T set_online_sec(uint32_t value) {
		return ((T (*)(CSGuildGetGuildMissionReq*, uint32_t))(Il2CppBase() + 0x51DB2E4))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSGuildGetGuildMissionReq*, bool))(Il2CppBase() + 0x51DB2EC))(this, createIfMissing);
	}

};

}
