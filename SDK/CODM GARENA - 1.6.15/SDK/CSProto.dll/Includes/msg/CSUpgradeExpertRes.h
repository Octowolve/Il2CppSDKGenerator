#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSUpgradeExpertRes
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSUpgradeExpertRes"));
	}

	template <typename T = int32_t> T& _result() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint32_t> T& _expert_id() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uint32_t> T& _expert_lvl() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uint32_t> T& _gold_lack() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uint32_t> T& _expert_point_lack() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uint32_t> T& _need_diamond_value() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& _data_change() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x24);
	}

	template <typename T = int32_t> T get_result() {
		return ((T (*)(CSUpgradeExpertRes*))(Il2CppBase() + 0x51B66EC))(this);
	}
	template <typename T = void> T set_result(int32_t value) {
		return ((T (*)(CSUpgradeExpertRes*, int32_t))(Il2CppBase() + 0x51B66F4))(this, value);
	}
	template <typename T = uint32_t> T get_expert_id() {
		return ((T (*)(CSUpgradeExpertRes*))(Il2CppBase() + 0x51B66FC))(this);
	}
	template <typename T = void> T set_expert_id(uint32_t value) {
		return ((T (*)(CSUpgradeExpertRes*, uint32_t))(Il2CppBase() + 0x51B6704))(this, value);
	}
	template <typename T = uint32_t> T get_expert_lvl() {
		return ((T (*)(CSUpgradeExpertRes*))(Il2CppBase() + 0x51B670C))(this);
	}
	template <typename T = void> T set_expert_lvl(uint32_t value) {
		return ((T (*)(CSUpgradeExpertRes*, uint32_t))(Il2CppBase() + 0x51B6714))(this, value);
	}
	template <typename T = uint32_t> T get_gold_lack() {
		return ((T (*)(CSUpgradeExpertRes*))(Il2CppBase() + 0x51B671C))(this);
	}
	template <typename T = void> T set_gold_lack(uint32_t value) {
		return ((T (*)(CSUpgradeExpertRes*, uint32_t))(Il2CppBase() + 0x51B6724))(this, value);
	}
	template <typename T = uint32_t> T get_expert_point_lack() {
		return ((T (*)(CSUpgradeExpertRes*))(Il2CppBase() + 0x51B672C))(this);
	}
	template <typename T = void> T set_expert_point_lack(uint32_t value) {
		return ((T (*)(CSUpgradeExpertRes*, uint32_t))(Il2CppBase() + 0x51B6734))(this, value);
	}
	template <typename T = uint32_t> T get_need_diamond_value() {
		return ((T (*)(CSUpgradeExpertRes*))(Il2CppBase() + 0x51B673C))(this);
	}
	template <typename T = void> T set_need_diamond_value(uint32_t value) {
		return ((T (*)(CSUpgradeExpertRes*, uint32_t))(Il2CppBase() + 0x51B6744))(this, value);
	}
	template <typename T = uintptr_t> T get_data_change() {
		return ((T (*)(CSUpgradeExpertRes*))(Il2CppBase() + 0x51B674C))(this);
	}
	template <typename T = void> T set_data_change(uintptr_t value) {
		return ((T (*)(CSUpgradeExpertRes*, uintptr_t))(Il2CppBase() + 0x51B6754))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSUpgradeExpertRes*, bool))(Il2CppBase() + 0x51B675C))(this, createIfMissing);
	}

};

}
