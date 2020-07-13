#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSBattlePassConsumeBpCardRes
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSBattlePassConsumeBpCardRes"));
	}

	template <typename T = int32_t> T& _result() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint64_t> T& _item_id() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uint64_t> T& _item_guid() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& _bp_exp_item() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x24);
	}

	template <typename T = int32_t> T get_result() {
		return ((T (*)(CSBattlePassConsumeBpCardRes*))(Il2CppBase() + 0x51E4ED4))(this);
	}
	template <typename T = void> T set_result(int32_t value) {
		return ((T (*)(CSBattlePassConsumeBpCardRes*, int32_t))(Il2CppBase() + 0x51E4EDC))(this, value);
	}
	template <typename T = uint64_t> T get_item_id() {
		return ((T (*)(CSBattlePassConsumeBpCardRes*))(Il2CppBase() + 0x51E4EE4))(this);
	}
	template <typename T = void> T set_item_id(uint64_t value) {
		return ((T (*)(CSBattlePassConsumeBpCardRes*, uint64_t))(Il2CppBase() + 0x51E4EEC))(this, value);
	}
	template <typename T = uint64_t> T get_item_guid() {
		return ((T (*)(CSBattlePassConsumeBpCardRes*))(Il2CppBase() + 0x51E4EFC))(this);
	}
	template <typename T = void> T set_item_guid(uint64_t value) {
		return ((T (*)(CSBattlePassConsumeBpCardRes*, uint64_t))(Il2CppBase() + 0x51E4F04))(this, value);
	}
	template <typename T = uintptr_t> T get_bp_exp_item() {
		return ((T (*)(CSBattlePassConsumeBpCardRes*))(Il2CppBase() + 0x51E4F14))(this);
	}
	template <typename T = void> T set_bp_exp_item(uintptr_t value) {
		return ((T (*)(CSBattlePassConsumeBpCardRes*, uintptr_t))(Il2CppBase() + 0x51E4F1C))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSBattlePassConsumeBpCardRes*, bool))(Il2CppBase() + 0x51E4F24))(this, createIfMissing);
	}

};

}
