#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSGuildTaskGuildDailyActivePrizeReq
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSGuild_TaskGuildDailyActivePrizeReq"));
	}

	template <typename T = uint64_t> T& _guild_id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& _type() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& _index() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = uint64_t> T get_guild_id() {
		return ((T (*)(CSGuildTaskGuildDailyActivePrizeReq*))(Il2CppBase() + 0x51DBFA4))(this);
	}
	template <typename T = void> T set_guild_id(uint64_t value) {
		return ((T (*)(CSGuildTaskGuildDailyActivePrizeReq*, uint64_t))(Il2CppBase() + 0x51DBFAC))(this, value);
	}
	template <typename T = int32_t> T get_type() {
		return ((T (*)(CSGuildTaskGuildDailyActivePrizeReq*))(Il2CppBase() + 0x51DBFBC))(this);
	}
	template <typename T = void> T set_type(int32_t value) {
		return ((T (*)(CSGuildTaskGuildDailyActivePrizeReq*, int32_t))(Il2CppBase() + 0x51DBFC4))(this, value);
	}
	template <typename T = int32_t> T get_index() {
		return ((T (*)(CSGuildTaskGuildDailyActivePrizeReq*))(Il2CppBase() + 0x51DBFCC))(this);
	}
	template <typename T = void> T set_index(int32_t value) {
		return ((T (*)(CSGuildTaskGuildDailyActivePrizeReq*, int32_t))(Il2CppBase() + 0x51DBFD4))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSGuildTaskGuildDailyActivePrizeReq*, bool))(Il2CppBase() + 0x51DBFDC))(this, createIfMissing);
	}

};

}
