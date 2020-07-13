#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSChallengeBuySentryTowerRes
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSChallenge_BuySentryTower_Res"));
	}

	template <typename T = int32_t> T& _result() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& _player_data_change() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = int32_t> T get_result() {
		return ((T (*)(CSChallengeBuySentryTowerRes*))(Il2CppBase() + 0x51E5DCC))(this);
	}
	template <typename T = void> T set_result(int32_t value) {
		return ((T (*)(CSChallengeBuySentryTowerRes*, int32_t))(Il2CppBase() + 0x51E5DD4))(this, value);
	}
	template <typename T = uintptr_t> T get_player_data_change() {
		return ((T (*)(CSChallengeBuySentryTowerRes*))(Il2CppBase() + 0x51E5DDC))(this);
	}
	template <typename T = void> T set_player_data_change(uintptr_t value) {
		return ((T (*)(CSChallengeBuySentryTowerRes*, uintptr_t))(Il2CppBase() + 0x51E5DE4))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSChallengeBuySentryTowerRes*, bool))(Il2CppBase() + 0x51E5DEC))(this, createIfMissing);
	}

};

}
