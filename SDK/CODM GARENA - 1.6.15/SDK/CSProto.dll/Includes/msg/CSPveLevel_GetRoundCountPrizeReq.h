#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSPveLevelGetRoundCountPrizeReq
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSPveLevel_GetRoundCountPrizeReq"));
	}

	template <typename T = uint32_t> T& _pve_level_id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint32_t> T& _reward_num() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = uint32_t> T get_pve_level_id() {
		return ((T (*)(CSPveLevelGetRoundCountPrizeReq*))(Il2CppBase() + 0x51F1FDC))(this);
	}
	template <typename T = void> T set_pve_level_id(uint32_t value) {
		return ((T (*)(CSPveLevelGetRoundCountPrizeReq*, uint32_t))(Il2CppBase() + 0x51F1FE4))(this, value);
	}
	template <typename T = uint32_t> T get_reward_num() {
		return ((T (*)(CSPveLevelGetRoundCountPrizeReq*))(Il2CppBase() + 0x51F1FEC))(this);
	}
	template <typename T = void> T set_reward_num(uint32_t value) {
		return ((T (*)(CSPveLevelGetRoundCountPrizeReq*, uint32_t))(Il2CppBase() + 0x51F1FF4))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSPveLevelGetRoundCountPrizeReq*, bool))(Il2CppBase() + 0x51F1FFC))(this, createIfMissing);
	}

};

}
