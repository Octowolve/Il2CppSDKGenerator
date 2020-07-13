#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class ActvGetListCookie
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "ActvGetListCookie"));
	}

	template <typename T = int32_t> T& _select_method() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& _select_type() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uint64_t> T& _activity_id() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uint64_t> T& _seq_id() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = int32_t> T get_select_method() {
		return ((T (*)(ActvGetListCookie*))(Il2CppBase() + 0x510B288))(this);
	}
	template <typename T = void> T set_select_method(int32_t value) {
		return ((T (*)(ActvGetListCookie*, int32_t))(Il2CppBase() + 0x510B290))(this, value);
	}
	template <typename T = int32_t> T get_select_type() {
		return ((T (*)(ActvGetListCookie*))(Il2CppBase() + 0x510B298))(this);
	}
	template <typename T = void> T set_select_type(int32_t value) {
		return ((T (*)(ActvGetListCookie*, int32_t))(Il2CppBase() + 0x510B2A0))(this, value);
	}
	template <typename T = uint64_t> T get_activity_id() {
		return ((T (*)(ActvGetListCookie*))(Il2CppBase() + 0x510B2A8))(this);
	}
	template <typename T = void> T set_activity_id(uint64_t value) {
		return ((T (*)(ActvGetListCookie*, uint64_t))(Il2CppBase() + 0x510B2B0))(this, value);
	}
	template <typename T = uint64_t> T get_seq_id() {
		return ((T (*)(ActvGetListCookie*))(Il2CppBase() + 0x510B2C0))(this);
	}
	template <typename T = void> T set_seq_id(uint64_t value) {
		return ((T (*)(ActvGetListCookie*, uint64_t))(Il2CppBase() + 0x510B2C8))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(ActvGetListCookie*, bool))(Il2CppBase() + 0x510B2D8))(this, createIfMissing);
	}

};

}
