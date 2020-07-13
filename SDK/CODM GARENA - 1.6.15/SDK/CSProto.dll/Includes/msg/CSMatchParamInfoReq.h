#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSMatchParamInfoReq
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSMatchParamInfoReq"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& _ping_info() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& _country_id() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uint32_t> T& _game_mode() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = Il2CppList<uintptr_t>*> T get_ping_info() {
		return ((T (*)(CSMatchParamInfoReq*))(Il2CppBase() + 0x51F09D4))(this);
	}
	template <typename T = int32_t> T get_country_id() {
		return ((T (*)(CSMatchParamInfoReq*))(Il2CppBase() + 0x51F09DC))(this);
	}
	template <typename T = void> T set_country_id(int32_t value) {
		return ((T (*)(CSMatchParamInfoReq*, int32_t))(Il2CppBase() + 0x51F09E4))(this, value);
	}
	template <typename T = uint32_t> T get_game_mode() {
		return ((T (*)(CSMatchParamInfoReq*))(Il2CppBase() + 0x51F09EC))(this);
	}
	template <typename T = void> T set_game_mode(uint32_t value) {
		return ((T (*)(CSMatchParamInfoReq*, uint32_t))(Il2CppBase() + 0x51F09F4))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSMatchParamInfoReq*, bool))(Il2CppBase() + 0x51F09FC))(this, createIfMissing);
	}

};

}
