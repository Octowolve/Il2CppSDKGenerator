#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSAccountSetGenderRes
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSAccountSetGenderRes"));
	}

	template <typename T = uint32_t> T& _result() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint32_t> T& _last_update_gender_time() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uint32_t> T& _gender_cd_time() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = uint32_t> T get_result() {
		return ((T (*)(CSAccountSetGenderRes*))(Il2CppBase() + 0x51707D4))(this);
	}
	template <typename T = void> T set_result(uint32_t value) {
		return ((T (*)(CSAccountSetGenderRes*, uint32_t))(Il2CppBase() + 0x51707DC))(this, value);
	}
	template <typename T = uint32_t> T get_last_update_gender_time() {
		return ((T (*)(CSAccountSetGenderRes*))(Il2CppBase() + 0x51707E4))(this);
	}
	template <typename T = void> T set_last_update_gender_time(uint32_t value) {
		return ((T (*)(CSAccountSetGenderRes*, uint32_t))(Il2CppBase() + 0x51707EC))(this, value);
	}
	template <typename T = uint32_t> T get_gender_cd_time() {
		return ((T (*)(CSAccountSetGenderRes*))(Il2CppBase() + 0x51707F4))(this);
	}
	template <typename T = void> T set_gender_cd_time(uint32_t value) {
		return ((T (*)(CSAccountSetGenderRes*, uint32_t))(Il2CppBase() + 0x51707FC))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSAccountSetGenderRes*, bool))(Il2CppBase() + 0x5170804))(this, createIfMissing);
	}

};

}
