#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSPveLevelGetAllRoundCountPrizeRes
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSPveLevel_GetAllRoundCountPrizeRes"));
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
		return ((T (*)(CSPveLevelGetAllRoundCountPrizeRes*))(Il2CppBase() + 0x51F1D54))(this);
	}
	template <typename T = void> T set_result(int32_t value) {
		return ((T (*)(CSPveLevelGetAllRoundCountPrizeRes*, int32_t))(Il2CppBase() + 0x51F1D5C))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_props() {
		return ((T (*)(CSPveLevelGetAllRoundCountPrizeRes*))(Il2CppBase() + 0x51F1D64))(this);
	}
	template <typename T = bool> T get_turn_to_mail() {
		return ((T (*)(CSPveLevelGetAllRoundCountPrizeRes*))(Il2CppBase() + 0x51F1D6C))(this);
	}
	template <typename T = void> T set_turn_to_mail(bool value) {
		return ((T (*)(CSPveLevelGetAllRoundCountPrizeRes*, bool))(Il2CppBase() + 0x51F1D74))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSPveLevelGetAllRoundCountPrizeRes*, bool))(Il2CppBase() + 0x51F1D7C))(this, createIfMissing);
	}

};

}
