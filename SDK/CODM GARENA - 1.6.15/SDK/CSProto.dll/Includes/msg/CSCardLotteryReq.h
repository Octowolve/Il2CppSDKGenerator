#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSCardLotteryReq
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSCardLotteryReq"));
	}

	template <typename T = bool> T& _buy_all() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = bool> T get_buy_all() {
		return ((T (*)(CSCardLotteryReq*))(Il2CppBase() + 0x51E5B68))(this);
	}
	template <typename T = void> T set_buy_all(bool value) {
		return ((T (*)(CSCardLotteryReq*, bool))(Il2CppBase() + 0x51E5B70))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSCardLotteryReq*, bool))(Il2CppBase() + 0x51E5B78))(this, createIfMissing);
	}

};

}
