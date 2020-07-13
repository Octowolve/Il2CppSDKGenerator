#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSExpBufEntry
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSExpBufEntry"));
	}

	template <typename T = uintptr_t> T& _type() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& _buf_value() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppList<uint32_t>*> T& _effect_mode() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uint32_t> T& _timeout_timestamp() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uint32_t> T& _left_times() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uint64_t> T& _buf_key() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uint32_t> T& _start_timestamp() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _loc_desc() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& _durable_type() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x34);
	}

	template <typename T = uintptr_t> T get_type() {
		return ((T (*)(CSExpBufEntry*))(Il2CppBase() + 0x51D1A28))(this);
	}
	template <typename T = void> T set_type(uintptr_t value) {
		return ((T (*)(CSExpBufEntry*, uintptr_t))(Il2CppBase() + 0x51D1A30))(this, value);
	}
	template <typename T = int32_t> T get_buf_value() {
		return ((T (*)(CSExpBufEntry*))(Il2CppBase() + 0x51D1A38))(this);
	}
	template <typename T = void> T set_buf_value(int32_t value) {
		return ((T (*)(CSExpBufEntry*, int32_t))(Il2CppBase() + 0x51D1A40))(this, value);
	}
	template <typename T = Il2CppList<uint32_t>*> T get_effect_mode() {
		return ((T (*)(CSExpBufEntry*))(Il2CppBase() + 0x51D1A48))(this);
	}
	template <typename T = uint32_t> T get_timeout_timestamp() {
		return ((T (*)(CSExpBufEntry*))(Il2CppBase() + 0x51D1A50))(this);
	}
	template <typename T = void> T set_timeout_timestamp(uint32_t value) {
		return ((T (*)(CSExpBufEntry*, uint32_t))(Il2CppBase() + 0x51D1A58))(this, value);
	}
	template <typename T = uint32_t> T get_left_times() {
		return ((T (*)(CSExpBufEntry*))(Il2CppBase() + 0x51D1A60))(this);
	}
	template <typename T = void> T set_left_times(uint32_t value) {
		return ((T (*)(CSExpBufEntry*, uint32_t))(Il2CppBase() + 0x51D1A68))(this, value);
	}
	template <typename T = uint64_t> T get_buf_key() {
		return ((T (*)(CSExpBufEntry*))(Il2CppBase() + 0x51D1A70))(this);
	}
	template <typename T = void> T set_buf_key(uint64_t value) {
		return ((T (*)(CSExpBufEntry*, uint64_t))(Il2CppBase() + 0x51D1A78))(this, value);
	}
	template <typename T = uint32_t> T get_start_timestamp() {
		return ((T (*)(CSExpBufEntry*))(Il2CppBase() + 0x51D1A88))(this);
	}
	template <typename T = void> T set_start_timestamp(uint32_t value) {
		return ((T (*)(CSExpBufEntry*, uint32_t))(Il2CppBase() + 0x51D1A90))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_loc_desc() {
		return ((T (*)(CSExpBufEntry*))(Il2CppBase() + 0x51D1A98))(this);
	}
	template <typename T = void> T set_loc_desc(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(CSExpBufEntry*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x51D1AA0))(this, value);
	}
	template <typename T = uintptr_t> T get_durable_type() {
		return ((T (*)(CSExpBufEntry*))(Il2CppBase() + 0x51D1AA8))(this);
	}
	template <typename T = void> T set_durable_type(uintptr_t value) {
		return ((T (*)(CSExpBufEntry*, uintptr_t))(Il2CppBase() + 0x51D1AB0))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSExpBufEntry*, bool))(Il2CppBase() + 0x51D1AB8))(this, createIfMissing);
	}

};

}
