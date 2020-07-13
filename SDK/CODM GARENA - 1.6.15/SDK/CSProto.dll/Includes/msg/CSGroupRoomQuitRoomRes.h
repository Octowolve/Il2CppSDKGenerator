#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSGroupRoomQuitRoomRes
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSGroupRoomQuitRoomRes"));
	}

	template <typename T = int32_t> T& _result() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint32_t> T& _flag() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = int32_t> T get_result() {
		return ((T (*)(CSGroupRoomQuitRoomRes*))(Il2CppBase() + 0x51DEF8C))(this);
	}
	template <typename T = void> T set_result(int32_t value) {
		return ((T (*)(CSGroupRoomQuitRoomRes*, int32_t))(Il2CppBase() + 0x51DEF94))(this, value);
	}
	template <typename T = uint32_t> T get_flag() {
		return ((T (*)(CSGroupRoomQuitRoomRes*))(Il2CppBase() + 0x51DEF9C))(this);
	}
	template <typename T = void> T set_flag(uint32_t value) {
		return ((T (*)(CSGroupRoomQuitRoomRes*, uint32_t))(Il2CppBase() + 0x51DEFA4))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSGroupRoomQuitRoomRes*, bool))(Il2CppBase() + 0x51DEFAC))(this, createIfMissing);
	}

};

}
