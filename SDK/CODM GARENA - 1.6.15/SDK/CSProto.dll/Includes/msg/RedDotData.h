#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class RedDotData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "RedDotData"));
	}

	template <typename T = uint32_t> T& _type() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint32_t> T& _host_id() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uint64_t> T& _host_guid() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uint32_t> T& _target_id() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uint64_t> T& _target_guid() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uint32_t> T& _timestamp() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uint32_t> T& _data_flag() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = uint32_t> T get_type() {
		return ((T (*)(RedDotData*))(Il2CppBase() + 0x507084C))(this);
	}
	template <typename T = void> T set_type(uint32_t value) {
		return ((T (*)(RedDotData*, uint32_t))(Il2CppBase() + 0x5070854))(this, value);
	}
	template <typename T = uint32_t> T get_host_id() {
		return ((T (*)(RedDotData*))(Il2CppBase() + 0x507085C))(this);
	}
	template <typename T = void> T set_host_id(uint32_t value) {
		return ((T (*)(RedDotData*, uint32_t))(Il2CppBase() + 0x5070864))(this, value);
	}
	template <typename T = uint64_t> T get_host_guid() {
		return ((T (*)(RedDotData*))(Il2CppBase() + 0x507086C))(this);
	}
	template <typename T = void> T set_host_guid(uint64_t value) {
		return ((T (*)(RedDotData*, uint64_t))(Il2CppBase() + 0x5070874))(this, value);
	}
	template <typename T = uint32_t> T get_target_id() {
		return ((T (*)(RedDotData*))(Il2CppBase() + 0x5070884))(this);
	}
	template <typename T = void> T set_target_id(uint32_t value) {
		return ((T (*)(RedDotData*, uint32_t))(Il2CppBase() + 0x507088C))(this, value);
	}
	template <typename T = uint64_t> T get_target_guid() {
		return ((T (*)(RedDotData*))(Il2CppBase() + 0x5070894))(this);
	}
	template <typename T = void> T set_target_guid(uint64_t value) {
		return ((T (*)(RedDotData*, uint64_t))(Il2CppBase() + 0x507089C))(this, value);
	}
	template <typename T = uint32_t> T get_timestamp() {
		return ((T (*)(RedDotData*))(Il2CppBase() + 0x50708AC))(this);
	}
	template <typename T = void> T set_timestamp(uint32_t value) {
		return ((T (*)(RedDotData*, uint32_t))(Il2CppBase() + 0x50708B4))(this, value);
	}
	template <typename T = uint32_t> T get_data_flag() {
		return ((T (*)(RedDotData*))(Il2CppBase() + 0x50708BC))(this);
	}
	template <typename T = void> T set_data_flag(uint32_t value) {
		return ((T (*)(RedDotData*, uint32_t))(Il2CppBase() + 0x50708C4))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(RedDotData*, bool))(Il2CppBase() + 0x50708CC))(this, createIfMissing);
	}

};

}
