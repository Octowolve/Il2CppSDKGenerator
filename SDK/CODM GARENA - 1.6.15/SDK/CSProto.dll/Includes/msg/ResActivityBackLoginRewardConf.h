#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class ResActivityBackLoginRewardConf
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "ResActivityBackLoginRewardConf"));
	}

	template <typename T = uint64_t> T& _activity_id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& _group_id() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _first_reward() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _login_reward() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppList<int32_t>*> T& _special_day() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = uint64_t> T get_activity_id() {
		return ((T (*)(ResActivityBackLoginRewardConf*))(Il2CppBase() + 0x5070D80))(this);
	}
	template <typename T = void> T set_activity_id(uint64_t value) {
		return ((T (*)(ResActivityBackLoginRewardConf*, uint64_t))(Il2CppBase() + 0x5070D88))(this, value);
	}
	template <typename T = int32_t> T get_group_id() {
		return ((T (*)(ResActivityBackLoginRewardConf*))(Il2CppBase() + 0x5070D98))(this);
	}
	template <typename T = void> T set_group_id(int32_t value) {
		return ((T (*)(ResActivityBackLoginRewardConf*, int32_t))(Il2CppBase() + 0x5070DA0))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_first_reward() {
		return ((T (*)(ResActivityBackLoginRewardConf*))(Il2CppBase() + 0x5070DA8))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_login_reward() {
		return ((T (*)(ResActivityBackLoginRewardConf*))(Il2CppBase() + 0x5070DB0))(this);
	}
	template <typename T = Il2CppList<int32_t>*> T get_special_day() {
		return ((T (*)(ResActivityBackLoginRewardConf*))(Il2CppBase() + 0x5070DB8))(this);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(ResActivityBackLoginRewardConf*, bool))(Il2CppBase() + 0x5070DC0))(this, createIfMissing);
	}

};

}
