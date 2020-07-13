#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSAccountextGetLadderPercentReq
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSAccountextGetLadderPercentReq"));
	}

	template <typename T = int32_t> T& _mp_season_no() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& _mp_ladder_score() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& _br_season_no() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& _br_ladder_score() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = int32_t> T get_mp_season_no() {
		return ((T (*)(CSAccountextGetLadderPercentReq*))(Il2CppBase() + 0x516FC90))(this);
	}
	template <typename T = void> T set_mp_season_no(int32_t value) {
		return ((T (*)(CSAccountextGetLadderPercentReq*, int32_t))(Il2CppBase() + 0x516FC98))(this, value);
	}
	template <typename T = int32_t> T get_mp_ladder_score() {
		return ((T (*)(CSAccountextGetLadderPercentReq*))(Il2CppBase() + 0x516FCA0))(this);
	}
	template <typename T = void> T set_mp_ladder_score(int32_t value) {
		return ((T (*)(CSAccountextGetLadderPercentReq*, int32_t))(Il2CppBase() + 0x516FCA8))(this, value);
	}
	template <typename T = int32_t> T get_br_season_no() {
		return ((T (*)(CSAccountextGetLadderPercentReq*))(Il2CppBase() + 0x516FCB0))(this);
	}
	template <typename T = void> T set_br_season_no(int32_t value) {
		return ((T (*)(CSAccountextGetLadderPercentReq*, int32_t))(Il2CppBase() + 0x516FCB8))(this, value);
	}
	template <typename T = int32_t> T get_br_ladder_score() {
		return ((T (*)(CSAccountextGetLadderPercentReq*))(Il2CppBase() + 0x516FCC0))(this);
	}
	template <typename T = void> T set_br_ladder_score(int32_t value) {
		return ((T (*)(CSAccountextGetLadderPercentReq*, int32_t))(Il2CppBase() + 0x516FCC8))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSAccountextGetLadderPercentReq*, bool))(Il2CppBase() + 0x516FCD0))(this, createIfMissing);
	}

};

}
