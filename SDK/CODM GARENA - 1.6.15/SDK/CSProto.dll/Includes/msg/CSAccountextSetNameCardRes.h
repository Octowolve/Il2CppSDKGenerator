#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSAccountextSetNameCardRes
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSAccountextSetNameCardRes"));
	}

	template <typename T = int32_t> T& _result() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int64_t> T& _name_card_id() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int64_t> T& _name_card_gid() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = int32_t> T get_result() {
		return ((T (*)(CSAccountextSetNameCardRes*))(Il2CppBase() + 0x516FFC8))(this);
	}
	template <typename T = void> T set_result(int32_t value) {
		return ((T (*)(CSAccountextSetNameCardRes*, int32_t))(Il2CppBase() + 0x516FFD0))(this, value);
	}
	template <typename T = int64_t> T get_name_card_id() {
		return ((T (*)(CSAccountextSetNameCardRes*))(Il2CppBase() + 0x516FFD8))(this);
	}
	template <typename T = void> T set_name_card_id(int64_t value) {
		return ((T (*)(CSAccountextSetNameCardRes*, int64_t))(Il2CppBase() + 0x516FFE0))(this, value);
	}
	template <typename T = int64_t> T get_name_card_gid() {
		return ((T (*)(CSAccountextSetNameCardRes*))(Il2CppBase() + 0x516FFF0))(this);
	}
	template <typename T = void> T set_name_card_gid(int64_t value) {
		return ((T (*)(CSAccountextSetNameCardRes*, int64_t))(Il2CppBase() + 0x516FFF8))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSAccountextSetNameCardRes*, bool))(Il2CppBase() + 0x5170008))(this, createIfMissing);
	}

};

}
