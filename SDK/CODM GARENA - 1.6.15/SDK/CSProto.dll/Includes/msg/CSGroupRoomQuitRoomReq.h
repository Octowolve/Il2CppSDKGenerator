#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSGroupRoomQuitRoomReq
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSGroupRoomQuitRoomReq"));
	}

	template <typename T = uint32_t> T& _flag() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = uint32_t> T get_flag() {
		return ((T (*)(CSGroupRoomQuitRoomReq*))(Il2CppBase() + 0x51DEF60))(this);
	}
	template <typename T = void> T set_flag(uint32_t value) {
		return ((T (*)(CSGroupRoomQuitRoomReq*, uint32_t))(Il2CppBase() + 0x51DEF68))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSGroupRoomQuitRoomReq*, bool))(Il2CppBase() + 0x51DEF70))(this, createIfMissing);
	}

};

}
