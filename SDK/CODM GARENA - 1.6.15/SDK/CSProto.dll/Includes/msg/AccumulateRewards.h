#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class AccumulateRewards
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "AccumulateRewards"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& _accumulate_rewards() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = Il2CppList<uintptr_t>*> T get_accumulate_rewards() {
		return ((T (*)(AccumulateRewards*))(Il2CppBase() + 0x510A930))(this);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(AccumulateRewards*, bool))(Il2CppBase() + 0x510A938))(this, createIfMissing);
	}

};

}
