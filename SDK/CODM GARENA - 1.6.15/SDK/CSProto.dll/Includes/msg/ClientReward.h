#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class ClientReward
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "ClientReward"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& _client_reward() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = Il2CppList<uintptr_t>*> T get_client_reward() {
		return ((T (*)(ClientReward*))(Il2CppBase() + 0x516EBE0))(this);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(ClientReward*, bool))(Il2CppBase() + 0x516EBE8))(this, createIfMissing);
	}

};

}
