#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class WelfarePreview
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "WelfarePreview"));
	}

	template <typename T = uint32_t> T& _id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& _sender() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uint32_t> T& _receiver_number() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uint32_t> T& _max_number() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = bool> T& _claimed() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x1C);
	}

	template <typename T = uint32_t> T get_id() {
		return ((T (*)(WelfarePreview*))(Il2CppBase() + 0x51AB290))(this);
	}
	template <typename T = void> T set_id(uint32_t value) {
		return ((T (*)(WelfarePreview*, uint32_t))(Il2CppBase() + 0x51AB298))(this, value);
	}
	template <typename T = uintptr_t> T get_sender() {
		return ((T (*)(WelfarePreview*))(Il2CppBase() + 0x51AB2A0))(this);
	}
	template <typename T = void> T set_sender(uintptr_t value) {
		return ((T (*)(WelfarePreview*, uintptr_t))(Il2CppBase() + 0x51AB2A8))(this, value);
	}
	template <typename T = uint32_t> T get_receiver_number() {
		return ((T (*)(WelfarePreview*))(Il2CppBase() + 0x51AB2B0))(this);
	}
	template <typename T = void> T set_receiver_number(uint32_t value) {
		return ((T (*)(WelfarePreview*, uint32_t))(Il2CppBase() + 0x51AB2B8))(this, value);
	}
	template <typename T = uint32_t> T get_max_number() {
		return ((T (*)(WelfarePreview*))(Il2CppBase() + 0x51AB2C0))(this);
	}
	template <typename T = void> T set_max_number(uint32_t value) {
		return ((T (*)(WelfarePreview*, uint32_t))(Il2CppBase() + 0x51AB2C8))(this, value);
	}
	template <typename T = bool> T get_claimed() {
		return ((T (*)(WelfarePreview*))(Il2CppBase() + 0x51AB2D0))(this);
	}
	template <typename T = void> T set_claimed(bool value) {
		return ((T (*)(WelfarePreview*, bool))(Il2CppBase() + 0x51AB2D8))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(WelfarePreview*, bool))(Il2CppBase() + 0x51AB2E0))(this, createIfMissing);
	}

};

}
