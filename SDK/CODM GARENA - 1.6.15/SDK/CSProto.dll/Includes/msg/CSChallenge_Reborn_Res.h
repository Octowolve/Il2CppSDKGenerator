#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSChallengeRebornRes
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSChallenge_Reborn_Res"));
	}

	template <typename T = int32_t> T& _result() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& _buy_times() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& _player_data_change() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = int32_t> T get_result() {
		return ((T (*)(CSChallengeRebornRes*))(Il2CppBase() + 0x51E63FC))(this);
	}
	template <typename T = void> T set_result(int32_t value) {
		return ((T (*)(CSChallengeRebornRes*, int32_t))(Il2CppBase() + 0x51E6404))(this, value);
	}
	template <typename T = int32_t> T get_buy_times() {
		return ((T (*)(CSChallengeRebornRes*))(Il2CppBase() + 0x51E640C))(this);
	}
	template <typename T = void> T set_buy_times(int32_t value) {
		return ((T (*)(CSChallengeRebornRes*, int32_t))(Il2CppBase() + 0x51E6414))(this, value);
	}
	template <typename T = uintptr_t> T get_player_data_change() {
		return ((T (*)(CSChallengeRebornRes*))(Il2CppBase() + 0x51E641C))(this);
	}
	template <typename T = void> T set_player_data_change(uintptr_t value) {
		return ((T (*)(CSChallengeRebornRes*, uintptr_t))(Il2CppBase() + 0x51E6424))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSChallengeRebornRes*, bool))(Il2CppBase() + 0x51E642C))(this, createIfMissing);
	}

};

}
