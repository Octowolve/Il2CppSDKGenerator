#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSCardLotteryEndRes
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSCardLotteryEndRes"));
	}

	template <typename T = int32_t> T& _result() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint64_t> T& _player_id() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = int32_t> T get_result() {
		return ((T (*)(CSCardLotteryEndRes*))(Il2CppBase() + 0x51E5B24))(this);
	}
	template <typename T = void> T set_result(int32_t value) {
		return ((T (*)(CSCardLotteryEndRes*, int32_t))(Il2CppBase() + 0x51E5B2C))(this, value);
	}
	template <typename T = uint64_t> T get_player_id() {
		return ((T (*)(CSCardLotteryEndRes*))(Il2CppBase() + 0x51E5B34))(this);
	}
	template <typename T = void> T set_player_id(uint64_t value) {
		return ((T (*)(CSCardLotteryEndRes*, uint64_t))(Il2CppBase() + 0x51E5B3C))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSCardLotteryEndRes*, bool))(Il2CppBase() + 0x51E5B4C))(this, createIfMissing);
	}

};

}
