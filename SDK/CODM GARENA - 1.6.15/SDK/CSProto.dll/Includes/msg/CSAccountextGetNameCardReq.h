#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSAccountextGetNameCardReq
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSAccountextGetNameCardReq"));
	}

	template <typename T = Il2CppList<uint64_t>*> T& _player_id_list() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = Il2CppList<uint64_t>*> T get_player_id_list() {
		return ((T (*)(CSAccountextGetNameCardReq*))(Il2CppBase() + 0x516FDCC))(this);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSAccountextGetNameCardReq*, bool))(Il2CppBase() + 0x516FDD4))(this, createIfMissing);
	}

};

}
