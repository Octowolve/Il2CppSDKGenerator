#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class BlessBuff
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "BlessBuff"));
	}

	template <typename T = int32_t> T& _mode_id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& _buff_type() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& _buff_value() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uint32_t> T& _buy_time() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = int32_t> T get_mode_id() {
		return ((T (*)(BlessBuff*))(Il2CppBase() + 0x510D388))(this);
	}
	template <typename T = void> T set_mode_id(int32_t value) {
		return ((T (*)(BlessBuff*, int32_t))(Il2CppBase() + 0x510D390))(this, value);
	}
	template <typename T = int32_t> T get_buff_type() {
		return ((T (*)(BlessBuff*))(Il2CppBase() + 0x510D398))(this);
	}
	template <typename T = void> T set_buff_type(int32_t value) {
		return ((T (*)(BlessBuff*, int32_t))(Il2CppBase() + 0x510D3A0))(this, value);
	}
	template <typename T = int32_t> T get_buff_value() {
		return ((T (*)(BlessBuff*))(Il2CppBase() + 0x510D3A8))(this);
	}
	template <typename T = void> T set_buff_value(int32_t value) {
		return ((T (*)(BlessBuff*, int32_t))(Il2CppBase() + 0x510D3B0))(this, value);
	}
	template <typename T = uint32_t> T get_buy_time() {
		return ((T (*)(BlessBuff*))(Il2CppBase() + 0x510D3B8))(this);
	}
	template <typename T = void> T set_buy_time(uint32_t value) {
		return ((T (*)(BlessBuff*, uint32_t))(Il2CppBase() + 0x510D3C0))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(BlessBuff*, bool))(Il2CppBase() + 0x510D3C8))(this, createIfMissing);
	}

};

}
