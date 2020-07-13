#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class WelfareDetail
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "WelfareDetail"));
	}

	template <typename T = uint32_t> T& _id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& _sender() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _receivers() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uint32_t> T& _max_number() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = uint32_t> T get_id() {
		return ((T (*)(WelfareDetail*))(Il2CppBase() + 0x51AB144))(this);
	}
	template <typename T = void> T set_id(uint32_t value) {
		return ((T (*)(WelfareDetail*, uint32_t))(Il2CppBase() + 0x51AB14C))(this, value);
	}
	template <typename T = uintptr_t> T get_sender() {
		return ((T (*)(WelfareDetail*))(Il2CppBase() + 0x51AB154))(this);
	}
	template <typename T = void> T set_sender(uintptr_t value) {
		return ((T (*)(WelfareDetail*, uintptr_t))(Il2CppBase() + 0x51AB15C))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_receivers() {
		return ((T (*)(WelfareDetail*))(Il2CppBase() + 0x51AB164))(this);
	}
	template <typename T = uint32_t> T get_max_number() {
		return ((T (*)(WelfareDetail*))(Il2CppBase() + 0x51AB16C))(this);
	}
	template <typename T = void> T set_max_number(uint32_t value) {
		return ((T (*)(WelfareDetail*, uint32_t))(Il2CppBase() + 0x51AB174))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(WelfareDetail*, bool))(Il2CppBase() + 0x51AB17C))(this, createIfMissing);
	}

};

}
