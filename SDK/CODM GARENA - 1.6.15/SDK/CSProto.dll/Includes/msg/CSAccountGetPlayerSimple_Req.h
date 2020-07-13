#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSAccountGetPlayerSimpleReq
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSAccountGetPlayerSimple_Req"));
	}

	template <typename T = uint64_t> T& _query_player_id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = uint64_t> T get_query_player_id() {
		return ((T (*)(CSAccountGetPlayerSimpleReq*))(Il2CppBase() + 0x51700D4))(this);
	}
	template <typename T = void> T set_query_player_id(uint64_t value) {
		return ((T (*)(CSAccountGetPlayerSimpleReq*, uint64_t))(Il2CppBase() + 0x51700DC))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSAccountGetPlayerSimpleReq*, bool))(Il2CppBase() + 0x51700EC))(this, createIfMissing);
	}

};

}
