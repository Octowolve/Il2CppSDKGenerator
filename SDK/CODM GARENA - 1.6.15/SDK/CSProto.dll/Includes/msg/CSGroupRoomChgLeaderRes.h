#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSGroupRoomChgLeaderRes
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSGroupRoomChgLeaderRes"));
	}

	template <typename T = int32_t> T& _result() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint64_t> T& _new_owner_id() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = int32_t> T get_result() {
		return ((T (*)(CSGroupRoomChgLeaderRes*))(Il2CppBase() + 0x51DDFA4))(this);
	}
	template <typename T = void> T set_result(int32_t value) {
		return ((T (*)(CSGroupRoomChgLeaderRes*, int32_t))(Il2CppBase() + 0x51DDFAC))(this, value);
	}
	template <typename T = uint64_t> T get_new_owner_id() {
		return ((T (*)(CSGroupRoomChgLeaderRes*))(Il2CppBase() + 0x51DDFB4))(this);
	}
	template <typename T = void> T set_new_owner_id(uint64_t value) {
		return ((T (*)(CSGroupRoomChgLeaderRes*, uint64_t))(Il2CppBase() + 0x51DDFBC))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSGroupRoomChgLeaderRes*, bool))(Il2CppBase() + 0x51DDFCC))(this, createIfMissing);
	}

};

}
