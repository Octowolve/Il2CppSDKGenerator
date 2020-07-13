#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSInventoryUseAddNumbericCardRes
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSInventoryUseAddNumbericCardRes"));
	}

	template <typename T = int32_t> T& _result() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _props() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _use_card() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _pve_mp_reward_limitation() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = int32_t> T get_result() {
		return ((T (*)(CSInventoryUseAddNumbericCardRes*))(Il2CppBase() + 0x51388BC))(this);
	}
	template <typename T = void> T set_result(int32_t value) {
		return ((T (*)(CSInventoryUseAddNumbericCardRes*, int32_t))(Il2CppBase() + 0x51388C4))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_props() {
		return ((T (*)(CSInventoryUseAddNumbericCardRes*))(Il2CppBase() + 0x51388CC))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_use_card() {
		return ((T (*)(CSInventoryUseAddNumbericCardRes*))(Il2CppBase() + 0x51388D4))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_pve_mp_reward_limitation() {
		return ((T (*)(CSInventoryUseAddNumbericCardRes*))(Il2CppBase() + 0x51388DC))(this);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSInventoryUseAddNumbericCardRes*, bool))(Il2CppBase() + 0x51388E4))(this, createIfMissing);
	}

};

}
