#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class BpAwardData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "BpAwardData"));
	}

	template <typename T = int32_t> T& _id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& _num() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& _agingtime() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& _reserve() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = int32_t> T get_id() {
		return ((T (*)(BpAwardData*))(Il2CppBase() + 0x510DB40))(this);
	}
	template <typename T = void> T set_id(int32_t value) {
		return ((T (*)(BpAwardData*, int32_t))(Il2CppBase() + 0x510DB48))(this, value);
	}
	template <typename T = int32_t> T get_num() {
		return ((T (*)(BpAwardData*))(Il2CppBase() + 0x510DB50))(this);
	}
	template <typename T = void> T set_num(int32_t value) {
		return ((T (*)(BpAwardData*, int32_t))(Il2CppBase() + 0x510DB58))(this, value);
	}
	template <typename T = int32_t> T get_agingtime() {
		return ((T (*)(BpAwardData*))(Il2CppBase() + 0x510DB60))(this);
	}
	template <typename T = void> T set_agingtime(int32_t value) {
		return ((T (*)(BpAwardData*, int32_t))(Il2CppBase() + 0x510DB68))(this, value);
	}
	template <typename T = int32_t> T get_reserve() {
		return ((T (*)(BpAwardData*))(Il2CppBase() + 0x510DB70))(this);
	}
	template <typename T = void> T set_reserve(int32_t value) {
		return ((T (*)(BpAwardData*, int32_t))(Il2CppBase() + 0x510DB78))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(BpAwardData*, bool))(Il2CppBase() + 0x510DB80))(this, createIfMissing);
	}

};

}
