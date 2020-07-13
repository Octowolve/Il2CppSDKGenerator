#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSUpgradeExpertReq
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSUpgradeExpertReq"));
	}

	template <typename T = uint32_t> T& _expert_id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = bool> T& _is_use_diamond() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = uint32_t> T get_expert_id() {
		return ((T (*)(CSUpgradeExpertReq*))(Il2CppBase() + 0x51B66B0))(this);
	}
	template <typename T = void> T set_expert_id(uint32_t value) {
		return ((T (*)(CSUpgradeExpertReq*, uint32_t))(Il2CppBase() + 0x51B66B8))(this, value);
	}
	template <typename T = bool> T get_is_use_diamond() {
		return ((T (*)(CSUpgradeExpertReq*))(Il2CppBase() + 0x51B66C0))(this);
	}
	template <typename T = void> T set_is_use_diamond(bool value) {
		return ((T (*)(CSUpgradeExpertReq*, bool))(Il2CppBase() + 0x51B66C8))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSUpgradeExpertReq*, bool))(Il2CppBase() + 0x51B66D0))(this, createIfMissing);
	}

};

}
