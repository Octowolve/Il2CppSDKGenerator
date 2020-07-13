#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSInventoryUseChangeNickCardRes
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSInventoryUseChangeNickCardRes"));
	}

	template <typename T = int32_t> T& _result() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& _use_card() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uint32_t> T& _cd_time() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = int32_t> T get_result() {
		return ((T (*)(CSInventoryUseChangeNickCardRes*))(Il2CppBase() + 0x5138A50))(this);
	}
	template <typename T = void> T set_result(int32_t value) {
		return ((T (*)(CSInventoryUseChangeNickCardRes*, int32_t))(Il2CppBase() + 0x5138A58))(this, value);
	}
	template <typename T = uintptr_t> T get_use_card() {
		return ((T (*)(CSInventoryUseChangeNickCardRes*))(Il2CppBase() + 0x5138A60))(this);
	}
	template <typename T = void> T set_use_card(uintptr_t value) {
		return ((T (*)(CSInventoryUseChangeNickCardRes*, uintptr_t))(Il2CppBase() + 0x5138A68))(this, value);
	}
	template <typename T = uint32_t> T get_cd_time() {
		return ((T (*)(CSInventoryUseChangeNickCardRes*))(Il2CppBase() + 0x5138A70))(this);
	}
	template <typename T = void> T set_cd_time(uint32_t value) {
		return ((T (*)(CSInventoryUseChangeNickCardRes*, uint32_t))(Il2CppBase() + 0x5138A78))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSInventoryUseChangeNickCardRes*, bool))(Il2CppBase() + 0x5138A80))(this, createIfMissing);
	}

};

}
