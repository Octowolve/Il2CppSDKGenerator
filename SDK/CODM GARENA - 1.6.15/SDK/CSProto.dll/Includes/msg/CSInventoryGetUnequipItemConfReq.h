#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSInventoryGetUnequipItemConfReq
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSInventoryGetUnequipItemConfReq"));
	}

	template <typename T = int32_t> T& _loadout_idx() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint32_t> T& _game_type() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uint32_t> T& _loadout_conf_type() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = int32_t> T get_loadout_idx() {
		return ((T (*)(CSInventoryGetUnequipItemConfReq*))(Il2CppBase() + 0x5138218))(this);
	}
	template <typename T = void> T set_loadout_idx(int32_t value) {
		return ((T (*)(CSInventoryGetUnequipItemConfReq*, int32_t))(Il2CppBase() + 0x5138220))(this, value);
	}
	template <typename T = uint32_t> T get_game_type() {
		return ((T (*)(CSInventoryGetUnequipItemConfReq*))(Il2CppBase() + 0x5138228))(this);
	}
	template <typename T = void> T set_game_type(uint32_t value) {
		return ((T (*)(CSInventoryGetUnequipItemConfReq*, uint32_t))(Il2CppBase() + 0x5138230))(this, value);
	}
	template <typename T = uint32_t> T get_loadout_conf_type() {
		return ((T (*)(CSInventoryGetUnequipItemConfReq*))(Il2CppBase() + 0x5138238))(this);
	}
	template <typename T = void> T set_loadout_conf_type(uint32_t value) {
		return ((T (*)(CSInventoryGetUnequipItemConfReq*, uint32_t))(Il2CppBase() + 0x5138240))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSInventoryGetUnequipItemConfReq*, bool))(Il2CppBase() + 0x5138248))(this, createIfMissing);
	}

};

}
