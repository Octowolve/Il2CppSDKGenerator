#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class ResOtoRewardItem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "ResOtoRewardItem"));
	}

	template <typename T = uint32_t> T& _RewardId() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& _RewardNum() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& _Expire() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = uint32_t> T get_RewardId() {
		return ((T (*)(ResOtoRewardItem*))(Il2CppBase() + 0x5071A14))(this);
	}
	template <typename T = void> T set_RewardId(uint32_t value) {
		return ((T (*)(ResOtoRewardItem*, uint32_t))(Il2CppBase() + 0x5071A1C))(this, value);
	}
	template <typename T = int32_t> T get_RewardNum() {
		return ((T (*)(ResOtoRewardItem*))(Il2CppBase() + 0x5071A24))(this);
	}
	template <typename T = void> T set_RewardNum(int32_t value) {
		return ((T (*)(ResOtoRewardItem*, int32_t))(Il2CppBase() + 0x5071A2C))(this, value);
	}
	template <typename T = int32_t> T get_Expire() {
		return ((T (*)(ResOtoRewardItem*))(Il2CppBase() + 0x5071A34))(this);
	}
	template <typename T = void> T set_Expire(int32_t value) {
		return ((T (*)(ResOtoRewardItem*, int32_t))(Il2CppBase() + 0x5071A3C))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(ResOtoRewardItem*, bool))(Il2CppBase() + 0x5071A44))(this, createIfMissing);
	}

};

}
