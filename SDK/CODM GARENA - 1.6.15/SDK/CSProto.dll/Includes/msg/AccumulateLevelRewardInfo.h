#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class AccumulateLevelRewardInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "AccumulateLevelRewardInfo"));
	}

	template <typename T = int32_t> T& _levelId() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& _levelNum() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uint32_t> T& _itemId() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& _itemNum() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = int32_t> T get_levelId() {
		return ((T (*)(AccumulateLevelRewardInfo*))(Il2CppBase() + 0x510A830))(this);
	}
	template <typename T = void> T set_levelId(int32_t value) {
		return ((T (*)(AccumulateLevelRewardInfo*, int32_t))(Il2CppBase() + 0x510A838))(this, value);
	}
	template <typename T = int32_t> T get_levelNum() {
		return ((T (*)(AccumulateLevelRewardInfo*))(Il2CppBase() + 0x510A840))(this);
	}
	template <typename T = void> T set_levelNum(int32_t value) {
		return ((T (*)(AccumulateLevelRewardInfo*, int32_t))(Il2CppBase() + 0x510A848))(this, value);
	}
	template <typename T = uint32_t> T get_itemId() {
		return ((T (*)(AccumulateLevelRewardInfo*))(Il2CppBase() + 0x510A850))(this);
	}
	template <typename T = void> T set_itemId(uint32_t value) {
		return ((T (*)(AccumulateLevelRewardInfo*, uint32_t))(Il2CppBase() + 0x510A858))(this, value);
	}
	template <typename T = int32_t> T get_itemNum() {
		return ((T (*)(AccumulateLevelRewardInfo*))(Il2CppBase() + 0x510A860))(this);
	}
	template <typename T = void> T set_itemNum(int32_t value) {
		return ((T (*)(AccumulateLevelRewardInfo*, int32_t))(Il2CppBase() + 0x510A868))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(AccumulateLevelRewardInfo*, bool))(Il2CppBase() + 0x510A870))(this, createIfMissing);
	}

};

}
