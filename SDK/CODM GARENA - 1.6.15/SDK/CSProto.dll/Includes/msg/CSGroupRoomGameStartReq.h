#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSGroupRoomGameStartReq
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSGroupRoomGameStartReq"));
	}

	template <typename T = bool> T& _is_match_stranger() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint64_t> T& _client_flag() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = bool> T get_is_match_stranger() {
		return ((T (*)(CSGroupRoomGameStartReq*))(Il2CppBase() + 0x51DE740))(this);
	}
	template <typename T = void> T set_is_match_stranger(bool value) {
		return ((T (*)(CSGroupRoomGameStartReq*, bool))(Il2CppBase() + 0x51DE748))(this, value);
	}
	template <typename T = uint64_t> T get_client_flag() {
		return ((T (*)(CSGroupRoomGameStartReq*))(Il2CppBase() + 0x51DE750))(this);
	}
	template <typename T = void> T set_client_flag(uint64_t value) {
		return ((T (*)(CSGroupRoomGameStartReq*, uint64_t))(Il2CppBase() + 0x51DE758))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSGroupRoomGameStartReq*, bool))(Il2CppBase() + 0x51DE768))(this, createIfMissing);
	}

};

}
