#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSGuildGetGuildConfRes
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSGuild_GetGuildConfRes"));
	}

	template <typename T = int32_t> T& _result() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _week_prize() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _season_prize() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _event_conf() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _level_conf() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& _enable_welfare() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& _base_conf() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x24);
	}

	template <typename T = int32_t> T get_result() {
		return ((T (*)(CSGuildGetGuildConfRes*))(Il2CppBase() + 0x51DAD68))(this);
	}
	template <typename T = void> T set_result(int32_t value) {
		return ((T (*)(CSGuildGetGuildConfRes*, int32_t))(Il2CppBase() + 0x51DAD70))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_week_prize() {
		return ((T (*)(CSGuildGetGuildConfRes*))(Il2CppBase() + 0x51DAD78))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_season_prize() {
		return ((T (*)(CSGuildGetGuildConfRes*))(Il2CppBase() + 0x51DAD80))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_event_conf() {
		return ((T (*)(CSGuildGetGuildConfRes*))(Il2CppBase() + 0x51DAD88))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_level_conf() {
		return ((T (*)(CSGuildGetGuildConfRes*))(Il2CppBase() + 0x51DAD90))(this);
	}
	template <typename T = bool> T get_enable_welfare() {
		return ((T (*)(CSGuildGetGuildConfRes*))(Il2CppBase() + 0x51DAD98))(this);
	}
	template <typename T = void> T set_enable_welfare(bool value) {
		return ((T (*)(CSGuildGetGuildConfRes*, bool))(Il2CppBase() + 0x51DADA0))(this, value);
	}
	template <typename T = uintptr_t> T get_base_conf() {
		return ((T (*)(CSGuildGetGuildConfRes*))(Il2CppBase() + 0x51DADA8))(this);
	}
	template <typename T = void> T set_base_conf(uintptr_t value) {
		return ((T (*)(CSGuildGetGuildConfRes*, uintptr_t))(Il2CppBase() + 0x51DADB0))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSGuildGetGuildConfRes*, bool))(Il2CppBase() + 0x51DADB8))(this, createIfMissing);
	}

};

}
