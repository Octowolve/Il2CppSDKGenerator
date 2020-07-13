#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSGroupRoomGameStartNtf
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSGroupRoomGameStartNtf"));
	}

	template <typename T = uint32_t> T& _match_expire_time() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint64_t> T& _owner_id() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = uint32_t> T get_match_expire_time() {
		return ((T (*)(CSGroupRoomGameStartNtf*))(Il2CppBase() + 0x51DE6FC))(this);
	}
	template <typename T = void> T set_match_expire_time(uint32_t value) {
		return ((T (*)(CSGroupRoomGameStartNtf*, uint32_t))(Il2CppBase() + 0x51DE704))(this, value);
	}
	template <typename T = uint64_t> T get_owner_id() {
		return ((T (*)(CSGroupRoomGameStartNtf*))(Il2CppBase() + 0x51DE70C))(this);
	}
	template <typename T = void> T set_owner_id(uint64_t value) {
		return ((T (*)(CSGroupRoomGameStartNtf*, uint64_t))(Il2CppBase() + 0x51DE714))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSGroupRoomGameStartNtf*, bool))(Il2CppBase() + 0x51DE724))(this, createIfMissing);
	}

};

}
