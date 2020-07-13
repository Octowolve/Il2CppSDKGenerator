#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSGspGetGameMapStatReq
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSGsp_GetGameMapStatReq"));
	}

	template <typename T = uint64_t> T& _player_id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppList<uint32_t>*> T& _map_id_ary() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = uint64_t> T get_player_id() {
		return ((T (*)(CSGspGetGameMapStatReq*))(Il2CppBase() + 0x51DF840))(this);
	}
	template <typename T = void> T set_player_id(uint64_t value) {
		return ((T (*)(CSGspGetGameMapStatReq*, uint64_t))(Il2CppBase() + 0x51DF848))(this, value);
	}
	template <typename T = Il2CppList<uint32_t>*> T get_map_id_ary() {
		return ((T (*)(CSGspGetGameMapStatReq*))(Il2CppBase() + 0x51DF858))(this);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSGspGetGameMapStatReq*, bool))(Il2CppBase() + 0x51DF860))(this, createIfMissing);
	}

};

}
