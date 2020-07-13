#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSAccountSeasonResetNtf
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSAccountSeasonResetNtf"));
	}

	template <typename T = bool> T& _reset_mp_ladder() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = bool> T& _reset_br_ladder() {
		return *(T*)((uintptr_t)this + 0x9);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = bool> T get_reset_mp_ladder() {
		return ((T (*)(CSAccountSeasonResetNtf*))(Il2CppBase() + 0x517067C))(this);
	}
	template <typename T = void> T set_reset_mp_ladder(bool value) {
		return ((T (*)(CSAccountSeasonResetNtf*, bool))(Il2CppBase() + 0x5170684))(this, value);
	}
	template <typename T = bool> T get_reset_br_ladder() {
		return ((T (*)(CSAccountSeasonResetNtf*))(Il2CppBase() + 0x517068C))(this);
	}
	template <typename T = void> T set_reset_br_ladder(bool value) {
		return ((T (*)(CSAccountSeasonResetNtf*, bool))(Il2CppBase() + 0x5170694))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSAccountSeasonResetNtf*, bool))(Il2CppBase() + 0x517069C))(this, createIfMissing);
	}

};

}
