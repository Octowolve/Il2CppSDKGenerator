#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSGroupRoomChgLoadMapStateReq
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSGroupRoomChgLoadMapStateReq"));
	}

	template <typename T = int32_t> T& _state() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint32_t> T& _mapid() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = int32_t> T get_state() {
		return ((T (*)(CSGroupRoomChgLoadMapStateReq*))(Il2CppBase() + 0x51DE03C))(this);
	}
	template <typename T = void> T set_state(int32_t value) {
		return ((T (*)(CSGroupRoomChgLoadMapStateReq*, int32_t))(Il2CppBase() + 0x51DE044))(this, value);
	}
	template <typename T = uint32_t> T get_mapid() {
		return ((T (*)(CSGroupRoomChgLoadMapStateReq*))(Il2CppBase() + 0x51DE04C))(this);
	}
	template <typename T = void> T set_mapid(uint32_t value) {
		return ((T (*)(CSGroupRoomChgLoadMapStateReq*, uint32_t))(Il2CppBase() + 0x51DE054))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSGroupRoomChgLoadMapStateReq*, bool))(Il2CppBase() + 0x51DE05C))(this, createIfMissing);
	}

};

}
