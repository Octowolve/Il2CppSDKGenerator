#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSPveLevelGetAllRoundCountPrizeReq
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSPveLevel_GetAllRoundCountPrizeReq"));
	}

	template <typename T = uint32_t> T& _pve_level_id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = uint32_t> T get_pve_level_id() {
		return ((T (*)(CSPveLevelGetAllRoundCountPrizeReq*))(Il2CppBase() + 0x51F1C84))(this);
	}
	template <typename T = void> T set_pve_level_id(uint32_t value) {
		return ((T (*)(CSPveLevelGetAllRoundCountPrizeReq*, uint32_t))(Il2CppBase() + 0x51F1C8C))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSPveLevelGetAllRoundCountPrizeReq*, bool))(Il2CppBase() + 0x51F1C94))(this, createIfMissing);
	}

};

}
