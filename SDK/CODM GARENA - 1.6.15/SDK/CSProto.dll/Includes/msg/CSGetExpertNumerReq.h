#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSGetExpertNumerReq
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSGetExpertNumerReq"));
	}

	template <typename T = int32_t> T& _game_type() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = int32_t> T get_game_type() {
		return ((T (*)(CSGetExpertNumerReq*))(Il2CppBase() + 0x52161E8))(this);
	}
	template <typename T = void> T set_game_type(int32_t value) {
		return ((T (*)(CSGetExpertNumerReq*, int32_t))(Il2CppBase() + 0x52161F0))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSGetExpertNumerReq*, bool))(Il2CppBase() + 0x52161F8))(this, createIfMissing);
	}

};

}
