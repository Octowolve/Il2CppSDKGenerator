#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSInventoryCompoundReq
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSInventoryCompoundReq"));
	}

	template <typename T = uint32_t> T& _id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint32_t> T& _num() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = uint32_t> T get_id() {
		return ((T (*)(CSInventoryCompoundReq*))(Il2CppBase() + 0x5137864))(this);
	}
	template <typename T = void> T set_id(uint32_t value) {
		return ((T (*)(CSInventoryCompoundReq*, uint32_t))(Il2CppBase() + 0x513786C))(this, value);
	}
	template <typename T = uint32_t> T get_num() {
		return ((T (*)(CSInventoryCompoundReq*))(Il2CppBase() + 0x5137874))(this);
	}
	template <typename T = void> T set_num(uint32_t value) {
		return ((T (*)(CSInventoryCompoundReq*, uint32_t))(Il2CppBase() + 0x513787C))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSInventoryCompoundReq*, bool))(Il2CppBase() + 0x5137884))(this, createIfMissing);
	}

};

}
