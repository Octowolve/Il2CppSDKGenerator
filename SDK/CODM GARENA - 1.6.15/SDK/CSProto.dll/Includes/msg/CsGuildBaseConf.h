#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CsGuildBaseConf
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CsGuildBaseConf"));
	}

	template <typename T = uint32_t> T& _impeach_time_limit() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& _create_guild_item_id() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& _create_guild_item_num() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& _personal_award_condition() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uint32_t> T& _impeachment_offline_time_sec() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uint32_t> T& _invitation_times_limit() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = uint32_t> T get_impeach_time_limit() {
		return ((T (*)(CsGuildBaseConf*))(Il2CppBase() + 0x51DC100))(this);
	}
	template <typename T = void> T set_impeach_time_limit(uint32_t value) {
		return ((T (*)(CsGuildBaseConf*, uint32_t))(Il2CppBase() + 0x51DC108))(this, value);
	}
	template <typename T = int32_t> T get_create_guild_item_id() {
		return ((T (*)(CsGuildBaseConf*))(Il2CppBase() + 0x51DC110))(this);
	}
	template <typename T = void> T set_create_guild_item_id(int32_t value) {
		return ((T (*)(CsGuildBaseConf*, int32_t))(Il2CppBase() + 0x51DC118))(this, value);
	}
	template <typename T = int32_t> T get_create_guild_item_num() {
		return ((T (*)(CsGuildBaseConf*))(Il2CppBase() + 0x51DC120))(this);
	}
	template <typename T = void> T set_create_guild_item_num(int32_t value) {
		return ((T (*)(CsGuildBaseConf*, int32_t))(Il2CppBase() + 0x51DC128))(this, value);
	}
	template <typename T = int32_t> T get_personal_award_condition() {
		return ((T (*)(CsGuildBaseConf*))(Il2CppBase() + 0x51DC130))(this);
	}
	template <typename T = void> T set_personal_award_condition(int32_t value) {
		return ((T (*)(CsGuildBaseConf*, int32_t))(Il2CppBase() + 0x51DC138))(this, value);
	}
	template <typename T = uint32_t> T get_impeachment_offline_time_sec() {
		return ((T (*)(CsGuildBaseConf*))(Il2CppBase() + 0x51DC140))(this);
	}
	template <typename T = void> T set_impeachment_offline_time_sec(uint32_t value) {
		return ((T (*)(CsGuildBaseConf*, uint32_t))(Il2CppBase() + 0x51DC148))(this, value);
	}
	template <typename T = uint32_t> T get_invitation_times_limit() {
		return ((T (*)(CsGuildBaseConf*))(Il2CppBase() + 0x51DC150))(this);
	}
	template <typename T = void> T set_invitation_times_limit(uint32_t value) {
		return ((T (*)(CsGuildBaseConf*, uint32_t))(Il2CppBase() + 0x51DC158))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CsGuildBaseConf*, bool))(Il2CppBase() + 0x51DC160))(this, createIfMissing);
	}

};

}
