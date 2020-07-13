#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSInventoryDefaultLoadoutReq
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSInventoryDefaultLoadoutReq"));
	}

	template <typename T = int32_t> T& _loadout_idx() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint32_t> T& _game_type() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = int32_t> T get_loadout_idx() {
		return ((T (*)(CSInventoryDefaultLoadoutReq*))(Il2CppBase() + 0x5137998))(this);
	}
	template <typename T = void> T set_loadout_idx(int32_t value) {
		return ((T (*)(CSInventoryDefaultLoadoutReq*, int32_t))(Il2CppBase() + 0x51379A0))(this, value);
	}
	template <typename T = uint32_t> T get_game_type() {
		return ((T (*)(CSInventoryDefaultLoadoutReq*))(Il2CppBase() + 0x51379A8))(this);
	}
	template <typename T = void> T set_game_type(uint32_t value) {
		return ((T (*)(CSInventoryDefaultLoadoutReq*, uint32_t))(Il2CppBase() + 0x51379B0))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSInventoryDefaultLoadoutReq*, bool))(Il2CppBase() + 0x51379B8))(this, createIfMissing);
	}

};

}
