#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSGroupRoomSearchRoomReq
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSGroupRoomSearchRoomReq"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& _room_id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = Il2CppArray<uintptr_t>*> T get_room_id() {
		return ((T (*)(CSGroupRoomSearchRoomReq*))(Il2CppBase() + 0x51DF1FC))(this);
	}
	template <typename T = void> T set_room_id(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(CSGroupRoomSearchRoomReq*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x51DF204))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSGroupRoomSearchRoomReq*, bool))(Il2CppBase() + 0x51DF20C))(this, createIfMissing);
	}

};

}
