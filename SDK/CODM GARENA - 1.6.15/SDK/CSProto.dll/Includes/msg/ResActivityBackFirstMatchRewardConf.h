#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class ResActivityBackFirstMatchRewardConf
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "ResActivityBackFirstMatchRewardConf"));
	}

	template <typename T = uint64_t> T& _activity_id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& _group_id() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& _mail_id() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _reward() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x1C);
	}

	template <typename T = uint64_t> T get_activity_id() {
		return ((T (*)(ResActivityBackFirstMatchRewardConf*))(Il2CppBase() + 0x5070C34))(this);
	}
	template <typename T = void> T set_activity_id(uint64_t value) {
		return ((T (*)(ResActivityBackFirstMatchRewardConf*, uint64_t))(Il2CppBase() + 0x5070C3C))(this, value);
	}
	template <typename T = int32_t> T get_group_id() {
		return ((T (*)(ResActivityBackFirstMatchRewardConf*))(Il2CppBase() + 0x5070C4C))(this);
	}
	template <typename T = void> T set_group_id(int32_t value) {
		return ((T (*)(ResActivityBackFirstMatchRewardConf*, int32_t))(Il2CppBase() + 0x5070C54))(this, value);
	}
	template <typename T = int32_t> T get_mail_id() {
		return ((T (*)(ResActivityBackFirstMatchRewardConf*))(Il2CppBase() + 0x5070C5C))(this);
	}
	template <typename T = void> T set_mail_id(int32_t value) {
		return ((T (*)(ResActivityBackFirstMatchRewardConf*, int32_t))(Il2CppBase() + 0x5070C64))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_reward() {
		return ((T (*)(ResActivityBackFirstMatchRewardConf*))(Il2CppBase() + 0x5070C6C))(this);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(ResActivityBackFirstMatchRewardConf*, bool))(Il2CppBase() + 0x5070C74))(this, createIfMissing);
	}

};

}
