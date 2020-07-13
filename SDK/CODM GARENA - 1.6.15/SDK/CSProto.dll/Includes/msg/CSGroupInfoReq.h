#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSGroupInfoReq
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSGroupInfoReq"));
	}

	template <typename T = int32_t> T& _reserve() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = int32_t> T get_reserve() {
		return ((T (*)(CSGroupInfoReq*))(Il2CppBase() + 0x51DD404))(this);
	}
	template <typename T = void> T set_reserve(int32_t value) {
		return ((T (*)(CSGroupInfoReq*, int32_t))(Il2CppBase() + 0x51DD40C))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSGroupInfoReq*, bool))(Il2CppBase() + 0x51DD414))(this, createIfMissing);
	}

};

}
