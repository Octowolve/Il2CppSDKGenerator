#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSInventoryChgWinCircleSprayItemReq
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSInventoryChgWinCircleSprayItemReq"));
	}

	template <typename T = uint32_t> T& _item_id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint64_t> T& _item_guid() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = uint32_t> T get_item_id() {
		return ((T (*)(CSInventoryChgWinCircleSprayItemReq*))(Il2CppBase() + 0x51377E4))(this);
	}
	template <typename T = void> T set_item_id(uint32_t value) {
		return ((T (*)(CSInventoryChgWinCircleSprayItemReq*, uint32_t))(Il2CppBase() + 0x51377EC))(this, value);
	}
	template <typename T = uint64_t> T get_item_guid() {
		return ((T (*)(CSInventoryChgWinCircleSprayItemReq*))(Il2CppBase() + 0x51377F4))(this);
	}
	template <typename T = void> T set_item_guid(uint64_t value) {
		return ((T (*)(CSInventoryChgWinCircleSprayItemReq*, uint64_t))(Il2CppBase() + 0x51377FC))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSInventoryChgWinCircleSprayItemReq*, bool))(Il2CppBase() + 0x513780C))(this, createIfMissing);
	}

};

}
