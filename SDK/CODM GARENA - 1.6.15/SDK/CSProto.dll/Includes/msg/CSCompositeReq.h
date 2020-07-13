#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSCompositeReq
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSCompositeReq"));
	}

	template <typename T = int32_t> T& _id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _common_material() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _special_material() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = int32_t> T get_id() {
		return ((T (*)(CSCompositeReq*))(Il2CppBase() + 0x51D0118))(this);
	}
	template <typename T = void> T set_id(int32_t value) {
		return ((T (*)(CSCompositeReq*, int32_t))(Il2CppBase() + 0x51D0120))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_common_material() {
		return ((T (*)(CSCompositeReq*))(Il2CppBase() + 0x51D0128))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_special_material() {
		return ((T (*)(CSCompositeReq*))(Il2CppBase() + 0x51D0130))(this);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSCompositeReq*, bool))(Il2CppBase() + 0x51D0138))(this, createIfMissing);
	}

};

}
