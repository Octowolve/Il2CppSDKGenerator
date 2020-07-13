#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSInventoryChgLoadoutNameReq
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSInventoryChgLoadoutNameReq"));
	}

	template <typename T = int32_t> T& _loadout_idx() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppString*> T& _new_name() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uint32_t> T& _game_type() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = int32_t> T get_loadout_idx() {
		return ((T (*)(CSInventoryChgLoadoutNameReq*))(Il2CppBase() + 0x51DCF34))(this);
	}
	template <typename T = void> T set_loadout_idx(int32_t value) {
		return ((T (*)(CSInventoryChgLoadoutNameReq*, int32_t))(Il2CppBase() + 0x51DCF3C))(this, value);
	}
	template <typename T = Il2CppString*> T get_new_name() {
		return ((T (*)(CSInventoryChgLoadoutNameReq*))(Il2CppBase() + 0x51DCF44))(this);
	}
	template <typename T = void> T set_new_name(Il2CppString* value) {
		return ((T (*)(CSInventoryChgLoadoutNameReq*, Il2CppString*))(Il2CppBase() + 0x51DCF4C))(this, value);
	}
	template <typename T = uint32_t> T get_game_type() {
		return ((T (*)(CSInventoryChgLoadoutNameReq*))(Il2CppBase() + 0x51DCF54))(this);
	}
	template <typename T = void> T set_game_type(uint32_t value) {
		return ((T (*)(CSInventoryChgLoadoutNameReq*, uint32_t))(Il2CppBase() + 0x51DCF5C))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSInventoryChgLoadoutNameReq*, bool))(Il2CppBase() + 0x51DCF64))(this, createIfMissing);
	}

};

}
