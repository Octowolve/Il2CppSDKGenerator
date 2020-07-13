#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSPveLevelGetRoundCountPrizeRes
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSPveLevel_GetRoundCountPrizeRes"));
	}

	template <typename T = int32_t> T& _result() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _props() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = bool> T& _turn_to_mail() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = int32_t> T get_result() {
		return ((T (*)(CSPveLevelGetRoundCountPrizeRes*))(Il2CppBase() + 0x51F20BC))(this);
	}
	template <typename T = void> T set_result(int32_t value) {
		return ((T (*)(CSPveLevelGetRoundCountPrizeRes*, int32_t))(Il2CppBase() + 0x51F20C4))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_props() {
		return ((T (*)(CSPveLevelGetRoundCountPrizeRes*))(Il2CppBase() + 0x51F20CC))(this);
	}
	template <typename T = bool> T get_turn_to_mail() {
		return ((T (*)(CSPveLevelGetRoundCountPrizeRes*))(Il2CppBase() + 0x51F20D4))(this);
	}
	template <typename T = void> T set_turn_to_mail(bool value) {
		return ((T (*)(CSPveLevelGetRoundCountPrizeRes*, bool))(Il2CppBase() + 0x51F20DC))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSPveLevelGetRoundCountPrizeRes*, bool))(Il2CppBase() + 0x51F20E4))(this, createIfMissing);
	}

};

}
