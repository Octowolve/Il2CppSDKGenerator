#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class FirearmUpgradeRecord
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "FirearmUpgradeRecord"));
	}

	template <typename T = uint32_t> T& _id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint32_t> T& _level() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uint32_t> T& _exp() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = uint32_t> T get_id() {
		return ((T (*)(FirearmUpgradeRecord*))(Il2CppBase() + 0x5227448))(this);
	}
	template <typename T = void> T set_id(uint32_t value) {
		return ((T (*)(FirearmUpgradeRecord*, uint32_t))(Il2CppBase() + 0x5227450))(this, value);
	}
	template <typename T = uint32_t> T get_level() {
		return ((T (*)(FirearmUpgradeRecord*))(Il2CppBase() + 0x5227458))(this);
	}
	template <typename T = void> T set_level(uint32_t value) {
		return ((T (*)(FirearmUpgradeRecord*, uint32_t))(Il2CppBase() + 0x5227460))(this, value);
	}
	template <typename T = uint32_t> T get_exp() {
		return ((T (*)(FirearmUpgradeRecord*))(Il2CppBase() + 0x5227468))(this);
	}
	template <typename T = void> T set_exp(uint32_t value) {
		return ((T (*)(FirearmUpgradeRecord*, uint32_t))(Il2CppBase() + 0x5227470))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(FirearmUpgradeRecord*, bool))(Il2CppBase() + 0x5227478))(this, createIfMissing);
	}

};

}
