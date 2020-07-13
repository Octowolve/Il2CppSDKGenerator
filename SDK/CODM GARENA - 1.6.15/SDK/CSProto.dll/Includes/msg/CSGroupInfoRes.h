#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSGroupInfoRes
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSGroupInfoRes"));
	}

	template <typename T = int32_t> T& _result() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& _group_info() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = int32_t> T get_result() {
		return ((T (*)(CSGroupInfoRes*))(Il2CppBase() + 0x51DD430))(this);
	}
	template <typename T = void> T set_result(int32_t value) {
		return ((T (*)(CSGroupInfoRes*, int32_t))(Il2CppBase() + 0x51DD438))(this, value);
	}
	template <typename T = uintptr_t> T get_group_info() {
		return ((T (*)(CSGroupInfoRes*))(Il2CppBase() + 0x51DD440))(this);
	}
	template <typename T = void> T set_group_info(uintptr_t value) {
		return ((T (*)(CSGroupInfoRes*, uintptr_t))(Il2CppBase() + 0x51DD448))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSGroupInfoRes*, bool))(Il2CppBase() + 0x51DD450))(this, createIfMissing);
	}

};

}
