#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class RechareReward
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "RechareReward"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& _recharge_awards() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = Il2CppList<uintptr_t>*> T get_recharge_awards() {
		return ((T (*)(RechareReward*))(Il2CppBase() + 0x5070788))(this);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(RechareReward*, bool))(Il2CppBase() + 0x5070790))(this, createIfMissing);
	}

};

}
