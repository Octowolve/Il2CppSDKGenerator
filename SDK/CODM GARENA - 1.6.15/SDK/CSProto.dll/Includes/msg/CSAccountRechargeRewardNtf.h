#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSAccountRechargeRewardNtf
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSAccountRechargeRewardNtf"));
	}

	template <typename T = int32_t> T& _recharge_type() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _prop() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = bool> T& _turn_to_mail() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = int32_t> T get_recharge_type() {
		return ((T (*)(CSAccountRechargeRewardNtf*))(Il2CppBase() + 0x51702F0))(this);
	}
	template <typename T = void> T set_recharge_type(int32_t value) {
		return ((T (*)(CSAccountRechargeRewardNtf*, int32_t))(Il2CppBase() + 0x51702F8))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_prop() {
		return ((T (*)(CSAccountRechargeRewardNtf*))(Il2CppBase() + 0x5170300))(this);
	}
	template <typename T = bool> T get_turn_to_mail() {
		return ((T (*)(CSAccountRechargeRewardNtf*))(Il2CppBase() + 0x5170308))(this);
	}
	template <typename T = void> T set_turn_to_mail(bool value) {
		return ((T (*)(CSAccountRechargeRewardNtf*, bool))(Il2CppBase() + 0x5170310))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSAccountRechargeRewardNtf*, bool))(Il2CppBase() + 0x5170318))(this, createIfMissing);
	}

};

}
