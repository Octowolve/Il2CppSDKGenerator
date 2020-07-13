#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSGspGMEndMatchReq
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSGsp_GMEndMatchReq"));
	}

	template <typename T = uint32_t> T& _player_id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = uint32_t> T get_player_id() {
		return ((T (*)(CSGspGMEndMatchReq*))(Il2CppBase() + 0x51D9D6C))(this);
	}
	template <typename T = void> T set_player_id(uint32_t value) {
		return ((T (*)(CSGspGMEndMatchReq*, uint32_t))(Il2CppBase() + 0x51D9D74))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSGspGMEndMatchReq*, bool))(Il2CppBase() + 0x51D9D7C))(this, createIfMissing);
	}

};

}
