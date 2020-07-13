#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSGspGetPveEndlessInfoReq
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSGsp_GetPveEndlessInfoReq"));
	}

	template <typename T = uint32_t> T& _map_id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = uint32_t> T get_map_id() {
		return ((T (*)(CSGspGetPveEndlessInfoReq*))(Il2CppBase() + 0x51DFB28))(this);
	}
	template <typename T = void> T set_map_id(uint32_t value) {
		return ((T (*)(CSGspGetPveEndlessInfoReq*, uint32_t))(Il2CppBase() + 0x51DFB30))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSGspGetPveEndlessInfoReq*, bool))(Il2CppBase() + 0x51DFB38))(this, createIfMissing);
	}

};

}
