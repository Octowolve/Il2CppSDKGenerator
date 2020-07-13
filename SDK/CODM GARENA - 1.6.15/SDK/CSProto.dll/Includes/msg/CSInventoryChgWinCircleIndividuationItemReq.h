#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSInventoryChgWinCircleIndividuationItemReq
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSInventoryChgWinCircleIndividuationItemReq"));
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
		return ((T (*)(CSInventoryChgWinCircleIndividuationItemReq*))(Il2CppBase() + 0x5137764))(this);
	}
	template <typename T = void> T set_item_id(uint32_t value) {
		return ((T (*)(CSInventoryChgWinCircleIndividuationItemReq*, uint32_t))(Il2CppBase() + 0x513776C))(this, value);
	}
	template <typename T = uint64_t> T get_item_guid() {
		return ((T (*)(CSInventoryChgWinCircleIndividuationItemReq*))(Il2CppBase() + 0x5137774))(this);
	}
	template <typename T = void> T set_item_guid(uint64_t value) {
		return ((T (*)(CSInventoryChgWinCircleIndividuationItemReq*, uint64_t))(Il2CppBase() + 0x513777C))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSInventoryChgWinCircleIndividuationItemReq*, bool))(Il2CppBase() + 0x513778C))(this, createIfMissing);
	}

};

}
