#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class InnerSafeBoxShipItemReq
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "InnerSafeBoxShipItemReq"));
	}

	template <typename T = uint64_t> T& _id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint64_t> T& _group_id() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uint32_t> T& _method() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x1C);
	}

	template <typename T = uint64_t> T get_id() {
		return ((T (*)(InnerSafeBoxShipItemReq*))(Il2CppBase() + 0x50D04B4))(this);
	}
	template <typename T = void> T set_id(uint64_t value) {
		return ((T (*)(InnerSafeBoxShipItemReq*, uint64_t))(Il2CppBase() + 0x50D04BC))(this, value);
	}
	template <typename T = uint64_t> T get_group_id() {
		return ((T (*)(InnerSafeBoxShipItemReq*))(Il2CppBase() + 0x50D04CC))(this);
	}
	template <typename T = void> T set_group_id(uint64_t value) {
		return ((T (*)(InnerSafeBoxShipItemReq*, uint64_t))(Il2CppBase() + 0x50D04D4))(this, value);
	}
	template <typename T = uint32_t> T get_method() {
		return ((T (*)(InnerSafeBoxShipItemReq*))(Il2CppBase() + 0x50D04E4))(this);
	}
	template <typename T = void> T set_method(uint32_t value) {
		return ((T (*)(InnerSafeBoxShipItemReq*, uint32_t))(Il2CppBase() + 0x50D04EC))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(InnerSafeBoxShipItemReq*, bool))(Il2CppBase() + 0x50D04F4))(this, createIfMissing);
	}

};

}
