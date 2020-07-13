#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSInventoryChgIndividuationItemReq
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSInventoryChgIndividuationItemReq"));
	}

	template <typename T = uint32_t> T& _item_id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint64_t> T& _item_guid() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uint32_t> T& _pos() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x1C);
	}

	template <typename T = uint32_t> T get_item_id() {
		return ((T (*)(CSInventoryChgIndividuationItemReq*))(Il2CppBase() + 0x51DCC94))(this);
	}
	template <typename T = void> T set_item_id(uint32_t value) {
		return ((T (*)(CSInventoryChgIndividuationItemReq*, uint32_t))(Il2CppBase() + 0x51DCC9C))(this, value);
	}
	template <typename T = uint64_t> T get_item_guid() {
		return ((T (*)(CSInventoryChgIndividuationItemReq*))(Il2CppBase() + 0x51DCCA4))(this);
	}
	template <typename T = void> T set_item_guid(uint64_t value) {
		return ((T (*)(CSInventoryChgIndividuationItemReq*, uint64_t))(Il2CppBase() + 0x51DCCAC))(this, value);
	}
	template <typename T = uint32_t> T get_pos() {
		return ((T (*)(CSInventoryChgIndividuationItemReq*))(Il2CppBase() + 0x51DCCBC))(this);
	}
	template <typename T = void> T set_pos(uint32_t value) {
		return ((T (*)(CSInventoryChgIndividuationItemReq*, uint32_t))(Il2CppBase() + 0x51DCCC4))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSInventoryChgIndividuationItemReq*, bool))(Il2CppBase() + 0x51DCCCC))(this, createIfMissing);
	}

};

}
