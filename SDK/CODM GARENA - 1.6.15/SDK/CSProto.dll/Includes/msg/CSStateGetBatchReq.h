#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSStateGetBatchReq
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSStateGetBatchReq"));
	}

	template <typename T = Il2CppList<uint64_t>*> T& _player_id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = Il2CppList<uint64_t>*> T get_player_id() {
		return ((T (*)(CSStateGetBatchReq*))(Il2CppBase() + 0x51E2C34))(this);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSStateGetBatchReq*, bool))(Il2CppBase() + 0x51E2C3C))(this, createIfMissing);
	}

};

}
