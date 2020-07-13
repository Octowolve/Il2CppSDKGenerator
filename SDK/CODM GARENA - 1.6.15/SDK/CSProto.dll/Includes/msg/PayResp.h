#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class PayResp
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "PayResp"));
	}

	template <typename T = uint32_t> T& _cost_sum() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = uint32_t> T get_cost_sum() {
		return ((T (*)(PayResp*))(Il2CppBase() + 0x4EA6068))(this);
	}
	template <typename T = void> T set_cost_sum(uint32_t value) {
		return ((T (*)(PayResp*, uint32_t))(Il2CppBase() + 0x4EA6070))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(PayResp*, bool))(Il2CppBase() + 0x4EA6078))(this, createIfMissing);
	}

};

}
