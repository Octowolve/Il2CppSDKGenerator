#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSChallengeBuyPlayCountRes
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSChallenge_BuyPlayCount_Res"));
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
	template <typename T = int32_t> T& _next_diamand() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = int32_t> T get_result() {
		return ((T (*)(CSChallengeBuyPlayCountRes*))(Il2CppBase() + 0x51E5D34))(this);
	}
	template <typename T = void> T set_result(int32_t value) {
		return ((T (*)(CSChallengeBuyPlayCountRes*, int32_t))(Il2CppBase() + 0x51E5D3C))(this, value);
	}
	template <typename T = int32_t> T get_buy_times() {
		return ((T (*)(CSChallengeBuyPlayCountRes*))(Il2CppBase() + 0x51E5D44))(this);
	}
	template <typename T = void> T set_buy_times(int32_t value) {
		return ((T (*)(CSChallengeBuyPlayCountRes*, int32_t))(Il2CppBase() + 0x51E5D4C))(this, value);
	}
	template <typename T = uintptr_t> T get_player_data_change() {
		return ((T (*)(CSChallengeBuyPlayCountRes*))(Il2CppBase() + 0x51E5D54))(this);
	}
	template <typename T = void> T set_player_data_change(uintptr_t value) {
		return ((T (*)(CSChallengeBuyPlayCountRes*, uintptr_t))(Il2CppBase() + 0x51E5D5C))(this, value);
	}
	template <typename T = int32_t> T get_next_diamand() {
		return ((T (*)(CSChallengeBuyPlayCountRes*))(Il2CppBase() + 0x51E5D64))(this);
	}
	template <typename T = void> T set_next_diamand(int32_t value) {
		return ((T (*)(CSChallengeBuyPlayCountRes*, int32_t))(Il2CppBase() + 0x51E5D6C))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSChallengeBuyPlayCountRes*, bool))(Il2CppBase() + 0x51E5D74))(this, createIfMissing);
	}

};

}
