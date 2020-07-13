#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class GspBufEntry
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "GspBufEntry"));
	}

	template <typename T = uintptr_t> T& _type() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& _durable_type() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& _buf_value() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uint32_t> T& _expire_time() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& _left_times() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x1C);
	}

	template <typename T = uintptr_t> T get_type() {
		return ((T (*)(GspBufEntry*))(Il2CppBase() + 0x50CEC68))(this);
	}
	template <typename T = void> T set_type(uintptr_t value) {
		return ((T (*)(GspBufEntry*, uintptr_t))(Il2CppBase() + 0x50CEC70))(this, value);
	}
	template <typename T = uintptr_t> T get_durable_type() {
		return ((T (*)(GspBufEntry*))(Il2CppBase() + 0x50CEC78))(this);
	}
	template <typename T = void> T set_durable_type(uintptr_t value) {
		return ((T (*)(GspBufEntry*, uintptr_t))(Il2CppBase() + 0x50CEC80))(this, value);
	}
	template <typename T = int32_t> T get_buf_value() {
		return ((T (*)(GspBufEntry*))(Il2CppBase() + 0x50CEC88))(this);
	}
	template <typename T = void> T set_buf_value(int32_t value) {
		return ((T (*)(GspBufEntry*, int32_t))(Il2CppBase() + 0x50CEC90))(this, value);
	}
	template <typename T = uint32_t> T get_expire_time() {
		return ((T (*)(GspBufEntry*))(Il2CppBase() + 0x50CEC98))(this);
	}
	template <typename T = void> T set_expire_time(uint32_t value) {
		return ((T (*)(GspBufEntry*, uint32_t))(Il2CppBase() + 0x50CECA0))(this, value);
	}
	template <typename T = int32_t> T get_left_times() {
		return ((T (*)(GspBufEntry*))(Il2CppBase() + 0x50CECA8))(this);
	}
	template <typename T = void> T set_left_times(int32_t value) {
		return ((T (*)(GspBufEntry*, int32_t))(Il2CppBase() + 0x50CECB0))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(GspBufEntry*, bool))(Il2CppBase() + 0x50CECB8))(this, createIfMissing);
	}

};

}
