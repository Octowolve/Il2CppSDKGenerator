#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSGroupRoomAnswerApplyRes
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSGroupRoomAnswerApplyRes"));
	}

	template <typename T = int32_t> T& _result() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = bool> T& _is_pvp_ladderlevel_allowed() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& _pvp_laddermatch_lower_level() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& _pvp_laddermatch_upper_level() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = int32_t> T get_result() {
		return ((T (*)(CSGroupRoomAnswerApplyRes*))(Il2CppBase() + 0x51DD54C))(this);
	}
	template <typename T = void> T set_result(int32_t value) {
		return ((T (*)(CSGroupRoomAnswerApplyRes*, int32_t))(Il2CppBase() + 0x51DD554))(this, value);
	}
	template <typename T = bool> T get_is_pvp_ladderlevel_allowed() {
		return ((T (*)(CSGroupRoomAnswerApplyRes*))(Il2CppBase() + 0x51DD55C))(this);
	}
	template <typename T = void> T set_is_pvp_ladderlevel_allowed(bool value) {
		return ((T (*)(CSGroupRoomAnswerApplyRes*, bool))(Il2CppBase() + 0x51DD564))(this, value);
	}
	template <typename T = int32_t> T get_pvp_laddermatch_lower_level() {
		return ((T (*)(CSGroupRoomAnswerApplyRes*))(Il2CppBase() + 0x51DD56C))(this);
	}
	template <typename T = void> T set_pvp_laddermatch_lower_level(int32_t value) {
		return ((T (*)(CSGroupRoomAnswerApplyRes*, int32_t))(Il2CppBase() + 0x51DD574))(this, value);
	}
	template <typename T = int32_t> T get_pvp_laddermatch_upper_level() {
		return ((T (*)(CSGroupRoomAnswerApplyRes*))(Il2CppBase() + 0x51DD57C))(this);
	}
	template <typename T = void> T set_pvp_laddermatch_upper_level(int32_t value) {
		return ((T (*)(CSGroupRoomAnswerApplyRes*, int32_t))(Il2CppBase() + 0x51DD584))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSGroupRoomAnswerApplyRes*, bool))(Il2CppBase() + 0x51DD58C))(this, createIfMissing);
	}

};

}
