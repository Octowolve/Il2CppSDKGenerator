#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CsGuildLevelConf
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CsGuildLevelConf"));
	}

	template <typename T = uint32_t> T& _guild_level() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint32_t> T& _level_exp() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uint32_t> T& _member_max_number() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uint32_t> T& _daily_exp_limit() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppList<float>*> T& _exp_coefficient() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x1C);
	}

	template <typename T = uint32_t> T get_guild_level() {
		return ((T (*)(CsGuildLevelConf*))(Il2CppBase() + 0x51DC34C))(this);
	}
	template <typename T = void> T set_guild_level(uint32_t value) {
		return ((T (*)(CsGuildLevelConf*, uint32_t))(Il2CppBase() + 0x51DC354))(this, value);
	}
	template <typename T = uint32_t> T get_level_exp() {
		return ((T (*)(CsGuildLevelConf*))(Il2CppBase() + 0x51DC35C))(this);
	}
	template <typename T = void> T set_level_exp(uint32_t value) {
		return ((T (*)(CsGuildLevelConf*, uint32_t))(Il2CppBase() + 0x51DC364))(this, value);
	}
	template <typename T = uint32_t> T get_member_max_number() {
		return ((T (*)(CsGuildLevelConf*))(Il2CppBase() + 0x51DC36C))(this);
	}
	template <typename T = void> T set_member_max_number(uint32_t value) {
		return ((T (*)(CsGuildLevelConf*, uint32_t))(Il2CppBase() + 0x51DC374))(this, value);
	}
	template <typename T = uint32_t> T get_daily_exp_limit() {
		return ((T (*)(CsGuildLevelConf*))(Il2CppBase() + 0x51DC37C))(this);
	}
	template <typename T = void> T set_daily_exp_limit(uint32_t value) {
		return ((T (*)(CsGuildLevelConf*, uint32_t))(Il2CppBase() + 0x51DC384))(this, value);
	}
	template <typename T = Il2CppList<float>*> T get_exp_coefficient() {
		return ((T (*)(CsGuildLevelConf*))(Il2CppBase() + 0x51DC38C))(this);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CsGuildLevelConf*, bool))(Il2CppBase() + 0x51DC394))(this, createIfMissing);
	}

};

}
