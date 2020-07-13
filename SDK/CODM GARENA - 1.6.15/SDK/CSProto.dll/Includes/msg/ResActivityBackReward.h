#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class ResActivityBackReward
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "ResActivityBackReward"));
	}

	template <typename T = uint64_t> T& _id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint32_t> T& _num() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uint32_t> T& _durable() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& _condition() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x1C);
	}

	template <typename T = uint64_t> T get_id() {
		return ((T (*)(ResActivityBackReward*))(Il2CppBase() + 0x507106C))(this);
	}
	template <typename T = void> T set_id(uint64_t value) {
		return ((T (*)(ResActivityBackReward*, uint64_t))(Il2CppBase() + 0x5071074))(this, value);
	}
	template <typename T = uint32_t> T get_num() {
		return ((T (*)(ResActivityBackReward*))(Il2CppBase() + 0x5071084))(this);
	}
	template <typename T = void> T set_num(uint32_t value) {
		return ((T (*)(ResActivityBackReward*, uint32_t))(Il2CppBase() + 0x507108C))(this, value);
	}
	template <typename T = uint32_t> T get_durable() {
		return ((T (*)(ResActivityBackReward*))(Il2CppBase() + 0x5071094))(this);
	}
	template <typename T = void> T set_durable(uint32_t value) {
		return ((T (*)(ResActivityBackReward*, uint32_t))(Il2CppBase() + 0x507109C))(this, value);
	}
	template <typename T = int32_t> T get_condition() {
		return ((T (*)(ResActivityBackReward*))(Il2CppBase() + 0x50710A4))(this);
	}
	template <typename T = void> T set_condition(int32_t value) {
		return ((T (*)(ResActivityBackReward*, int32_t))(Il2CppBase() + 0x50710AC))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(ResActivityBackReward*, bool))(Il2CppBase() + 0x50710B4))(this, createIfMissing);
	}

};

}
