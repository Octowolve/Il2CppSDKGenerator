#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSBattlePassGetAwardRes
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSBattlePassGetAwardRes"));
	}

	template <typename T = int32_t> T& _result() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& _award_type() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& _award_key() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& _battle_pass_data() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _prop() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& _turn_to_mail() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = int32_t> T get_result() {
		return ((T (*)(CSBattlePassGetAwardRes*))(Il2CppBase() + 0x51E5040))(this);
	}
	template <typename T = void> T set_result(int32_t value) {
		return ((T (*)(CSBattlePassGetAwardRes*, int32_t))(Il2CppBase() + 0x51E5048))(this, value);
	}
	template <typename T = uintptr_t> T get_award_type() {
		return ((T (*)(CSBattlePassGetAwardRes*))(Il2CppBase() + 0x51E5050))(this);
	}
	template <typename T = void> T set_award_type(uintptr_t value) {
		return ((T (*)(CSBattlePassGetAwardRes*, uintptr_t))(Il2CppBase() + 0x51E5058))(this, value);
	}
	template <typename T = int32_t> T get_award_key() {
		return ((T (*)(CSBattlePassGetAwardRes*))(Il2CppBase() + 0x51E5060))(this);
	}
	template <typename T = void> T set_award_key(int32_t value) {
		return ((T (*)(CSBattlePassGetAwardRes*, int32_t))(Il2CppBase() + 0x51E5068))(this, value);
	}
	template <typename T = uintptr_t> T get_battle_pass_data() {
		return ((T (*)(CSBattlePassGetAwardRes*))(Il2CppBase() + 0x51E5070))(this);
	}
	template <typename T = void> T set_battle_pass_data(uintptr_t value) {
		return ((T (*)(CSBattlePassGetAwardRes*, uintptr_t))(Il2CppBase() + 0x51E5078))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_prop() {
		return ((T (*)(CSBattlePassGetAwardRes*))(Il2CppBase() + 0x51E5080))(this);
	}
	template <typename T = bool> T get_turn_to_mail() {
		return ((T (*)(CSBattlePassGetAwardRes*))(Il2CppBase() + 0x51E5088))(this);
	}
	template <typename T = void> T set_turn_to_mail(bool value) {
		return ((T (*)(CSBattlePassGetAwardRes*, bool))(Il2CppBase() + 0x51E5090))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSBattlePassGetAwardRes*, bool))(Il2CppBase() + 0x51E5098))(this, createIfMissing);
	}

};

}
