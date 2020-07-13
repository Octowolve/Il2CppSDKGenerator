#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSGspGetLadderGradingInfoRes
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSGsp_GetLadderGradingInfoRes"));
	}

	template <typename T = uint32_t> T& _result() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& _ladder_grading_info() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uint32_t> T& _ladder_grading_total_times() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppList<uint32_t>*> T& _game_mode() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = uint32_t> T get_result() {
		return ((T (*)(CSGspGetLadderGradingInfoRes*))(Il2CppBase() + 0x51DFA2C))(this);
	}
	template <typename T = void> T set_result(uint32_t value) {
		return ((T (*)(CSGspGetLadderGradingInfoRes*, uint32_t))(Il2CppBase() + 0x51DFA34))(this, value);
	}
	template <typename T = uintptr_t> T get_ladder_grading_info() {
		return ((T (*)(CSGspGetLadderGradingInfoRes*))(Il2CppBase() + 0x51DFA3C))(this);
	}
	template <typename T = void> T set_ladder_grading_info(uintptr_t value) {
		return ((T (*)(CSGspGetLadderGradingInfoRes*, uintptr_t))(Il2CppBase() + 0x51DFA44))(this, value);
	}
	template <typename T = uint32_t> T get_ladder_grading_total_times() {
		return ((T (*)(CSGspGetLadderGradingInfoRes*))(Il2CppBase() + 0x51DFA4C))(this);
	}
	template <typename T = void> T set_ladder_grading_total_times(uint32_t value) {
		return ((T (*)(CSGspGetLadderGradingInfoRes*, uint32_t))(Il2CppBase() + 0x51DFA54))(this, value);
	}
	template <typename T = Il2CppList<uint32_t>*> T get_game_mode() {
		return ((T (*)(CSGspGetLadderGradingInfoRes*))(Il2CppBase() + 0x51DFA5C))(this);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSGspGetLadderGradingInfoRes*, bool))(Il2CppBase() + 0x51DFA64))(this, createIfMissing);
	}

};

}
