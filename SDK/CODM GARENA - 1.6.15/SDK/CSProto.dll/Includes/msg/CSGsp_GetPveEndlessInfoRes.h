#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSGspGetPveEndlessInfoRes
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSGsp_GetPveEndlessInfoRes"));
	}

	template <typename T = uint32_t> T& _result() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& _pve_endless_info() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = uint32_t> T get_result() {
		return ((T (*)(CSGspGetPveEndlessInfoRes*))(Il2CppBase() + 0x51DFB54))(this);
	}
	template <typename T = void> T set_result(uint32_t value) {
		return ((T (*)(CSGspGetPveEndlessInfoRes*, uint32_t))(Il2CppBase() + 0x51DFB5C))(this, value);
	}
	template <typename T = uintptr_t> T get_pve_endless_info() {
		return ((T (*)(CSGspGetPveEndlessInfoRes*))(Il2CppBase() + 0x51DFB64))(this);
	}
	template <typename T = void> T set_pve_endless_info(uintptr_t value) {
		return ((T (*)(CSGspGetPveEndlessInfoRes*, uintptr_t))(Il2CppBase() + 0x51DFB6C))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSGspGetPveEndlessInfoRes*, bool))(Il2CppBase() + 0x51DFB74))(this, createIfMissing);
	}

};

}
