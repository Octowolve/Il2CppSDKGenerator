#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSTeamChangeMatchReq
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSTeamChangeMatchReq"));
	}

	template <typename T = int32_t> T& _map_id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = int32_t> T get_map_id() {
		return ((T (*)(CSTeamChangeMatchReq*))(Il2CppBase() + 0x51E2DE4))(this);
	}
	template <typename T = void> T set_map_id(int32_t value) {
		return ((T (*)(CSTeamChangeMatchReq*, int32_t))(Il2CppBase() + 0x51E2DEC))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSTeamChangeMatchReq*, bool))(Il2CppBase() + 0x51E2DF4))(this, createIfMissing);
	}

};

}
