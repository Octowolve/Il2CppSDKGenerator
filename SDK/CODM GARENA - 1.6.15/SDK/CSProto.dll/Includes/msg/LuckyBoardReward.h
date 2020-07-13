#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class LuckyBoardReward
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "LuckyBoardReward"));
	}

	template <typename T = uint32_t> T& _time_line_point() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint32_t> T& _related_box() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _reward_list() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& _receive_flag() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = uint32_t> T get_time_line_point() {
		return ((T (*)(LuckyBoardReward*))(Il2CppBase() + 0x4EA35DC))(this);
	}
	template <typename T = void> T set_time_line_point(uint32_t value) {
		return ((T (*)(LuckyBoardReward*, uint32_t))(Il2CppBase() + 0x4EA35E4))(this, value);
	}
	template <typename T = uint32_t> T get_related_box() {
		return ((T (*)(LuckyBoardReward*))(Il2CppBase() + 0x4EA35EC))(this);
	}
	template <typename T = void> T set_related_box(uint32_t value) {
		return ((T (*)(LuckyBoardReward*, uint32_t))(Il2CppBase() + 0x4EA35F4))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_reward_list() {
		return ((T (*)(LuckyBoardReward*))(Il2CppBase() + 0x4EA35FC))(this);
	}
	template <typename T = bool> T get_receive_flag() {
		return ((T (*)(LuckyBoardReward*))(Il2CppBase() + 0x4EA3604))(this);
	}
	template <typename T = void> T set_receive_flag(bool value) {
		return ((T (*)(LuckyBoardReward*, bool))(Il2CppBase() + 0x4EA360C))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(LuckyBoardReward*, bool))(Il2CppBase() + 0x4EA3614))(this, createIfMissing);
	}

};

}
