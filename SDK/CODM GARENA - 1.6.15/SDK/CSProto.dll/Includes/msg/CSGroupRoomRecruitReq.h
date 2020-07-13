#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSGroupRoomRecruitReq
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSGroupRoomRecruitReq"));
	}

	template <typename T = int32_t> T& _recruit_type() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint64_t> T& _guild_id() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = int32_t> T get_recruit_type() {
		return ((T (*)(CSGroupRoomRecruitReq*))(Il2CppBase() + 0x51DF134))(this);
	}
	template <typename T = void> T set_recruit_type(int32_t value) {
		return ((T (*)(CSGroupRoomRecruitReq*, int32_t))(Il2CppBase() + 0x51DF13C))(this, value);
	}
	template <typename T = uint64_t> T get_guild_id() {
		return ((T (*)(CSGroupRoomRecruitReq*))(Il2CppBase() + 0x51DF144))(this);
	}
	template <typename T = void> T set_guild_id(uint64_t value) {
		return ((T (*)(CSGroupRoomRecruitReq*, uint64_t))(Il2CppBase() + 0x51DF14C))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSGroupRoomRecruitReq*, bool))(Il2CppBase() + 0x51DF15C))(this, createIfMissing);
	}

};

}
