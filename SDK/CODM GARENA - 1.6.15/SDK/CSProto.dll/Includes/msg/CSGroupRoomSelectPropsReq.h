#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSGroupRoomSelectPropsReq
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSGroupRoomSelectPropsReq"));
	}

	template <typename T = uint32_t> T& _room_id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _props() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = uint32_t> T get_room_id() {
		return ((T (*)(CSGroupRoomSelectPropsReq*))(Il2CppBase() + 0x51DF308))(this);
	}
	template <typename T = void> T set_room_id(uint32_t value) {
		return ((T (*)(CSGroupRoomSelectPropsReq*, uint32_t))(Il2CppBase() + 0x51DF310))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_props() {
		return ((T (*)(CSGroupRoomSelectPropsReq*))(Il2CppBase() + 0x51DF318))(this);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSGroupRoomSelectPropsReq*, bool))(Il2CppBase() + 0x51DF320))(this, createIfMissing);
	}

};

}
