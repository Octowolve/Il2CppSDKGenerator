#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSStateGetReq
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSStateGetReq"));
	}

	template <typename T = uint64_t> T& _player_id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = uint64_t> T get_player_id() {
		return ((T (*)(CSStateGetReq*))(Il2CppBase() + 0x51E2D30))(this);
	}
	template <typename T = void> T set_player_id(uint64_t value) {
		return ((T (*)(CSStateGetReq*, uint64_t))(Il2CppBase() + 0x51E2D38))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSStateGetReq*, bool))(Il2CppBase() + 0x51E2D48))(this, createIfMissing);
	}

};

}
