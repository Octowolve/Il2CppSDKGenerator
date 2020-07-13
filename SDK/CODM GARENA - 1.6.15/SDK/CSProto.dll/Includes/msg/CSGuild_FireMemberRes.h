#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSGuildFireMemberRes
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSGuild_FireMemberRes"));
	}

	template <typename T = int32_t> T& _result() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppList<uint64_t>*> T& _succ_member_list() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppList<uint64_t>*> T& _fail_member_list() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = int32_t> T get_result() {
		return ((T (*)(CSGuildFireMemberRes*))(Il2CppBase() + 0x51DA9EC))(this);
	}
	template <typename T = void> T set_result(int32_t value) {
		return ((T (*)(CSGuildFireMemberRes*, int32_t))(Il2CppBase() + 0x51DA9F4))(this, value);
	}
	template <typename T = Il2CppList<uint64_t>*> T get_succ_member_list() {
		return ((T (*)(CSGuildFireMemberRes*))(Il2CppBase() + 0x51DA9FC))(this);
	}
	template <typename T = Il2CppList<uint64_t>*> T get_fail_member_list() {
		return ((T (*)(CSGuildFireMemberRes*))(Il2CppBase() + 0x51DAA04))(this);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSGuildFireMemberRes*, bool))(Il2CppBase() + 0x51DAA0C))(this, createIfMissing);
	}

};

}
