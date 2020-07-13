#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSInventoryChgCopyLoadoutReq
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSInventoryChgCopyLoadoutReq"));
	}

	template <typename T = int32_t> T& _src_loadout_idx() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& _dst_loadout_idx() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uint32_t> T& _game_type() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = int32_t> T get_src_loadout_idx() {
		return ((T (*)(CSInventoryChgCopyLoadoutReq*))(Il2CppBase() + 0x51DCBEC))(this);
	}
	template <typename T = void> T set_src_loadout_idx(int32_t value) {
		return ((T (*)(CSInventoryChgCopyLoadoutReq*, int32_t))(Il2CppBase() + 0x51DCBF4))(this, value);
	}
	template <typename T = int32_t> T get_dst_loadout_idx() {
		return ((T (*)(CSInventoryChgCopyLoadoutReq*))(Il2CppBase() + 0x51DCBFC))(this);
	}
	template <typename T = void> T set_dst_loadout_idx(int32_t value) {
		return ((T (*)(CSInventoryChgCopyLoadoutReq*, int32_t))(Il2CppBase() + 0x51DCC04))(this, value);
	}
	template <typename T = uint32_t> T get_game_type() {
		return ((T (*)(CSInventoryChgCopyLoadoutReq*))(Il2CppBase() + 0x51DCC0C))(this);
	}
	template <typename T = void> T set_game_type(uint32_t value) {
		return ((T (*)(CSInventoryChgCopyLoadoutReq*, uint32_t))(Il2CppBase() + 0x51DCC14))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSInventoryChgCopyLoadoutReq*, bool))(Il2CppBase() + 0x51DCC1C))(this, createIfMissing);
	}

};

}
