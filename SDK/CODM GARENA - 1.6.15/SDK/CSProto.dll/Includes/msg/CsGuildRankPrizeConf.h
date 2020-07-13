#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CsGuildRankPrizeConf
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CsGuildRankPrizeConf"));
	}

	template <typename T = uint32_t> T& _min_value() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint32_t> T& _max_value() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& _on_rank_list() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _props() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = uint32_t> T get_min_value() {
		return ((T (*)(CsGuildRankPrizeConf*))(Il2CppBase() + 0x51DC804))(this);
	}
	template <typename T = void> T set_min_value(uint32_t value) {
		return ((T (*)(CsGuildRankPrizeConf*, uint32_t))(Il2CppBase() + 0x51DC80C))(this, value);
	}
	template <typename T = uint32_t> T get_max_value() {
		return ((T (*)(CsGuildRankPrizeConf*))(Il2CppBase() + 0x51DC814))(this);
	}
	template <typename T = void> T set_max_value(uint32_t value) {
		return ((T (*)(CsGuildRankPrizeConf*, uint32_t))(Il2CppBase() + 0x51DC81C))(this, value);
	}
	template <typename T = int32_t> T get_on_rank_list() {
		return ((T (*)(CsGuildRankPrizeConf*))(Il2CppBase() + 0x51DC824))(this);
	}
	template <typename T = void> T set_on_rank_list(int32_t value) {
		return ((T (*)(CsGuildRankPrizeConf*, int32_t))(Il2CppBase() + 0x51DC82C))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_props() {
		return ((T (*)(CsGuildRankPrizeConf*))(Il2CppBase() + 0x51DC834))(this);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CsGuildRankPrizeConf*, bool))(Il2CppBase() + 0x51DC83C))(this, createIfMissing);
	}

};

}
