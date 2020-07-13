#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSAccountSetFlagPicRes
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSAccountSetFlagPicRes"));
	}

	template <typename T = uint32_t> T& _result() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint32_t> T& _last_update_flagpic_time() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uint32_t> T& _flag_cd_time() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = uint32_t> T get_result() {
		return ((T (*)(CSAccountSetFlagPicRes*))(Il2CppBase() + 0x51706E4))(this);
	}
	template <typename T = void> T set_result(uint32_t value) {
		return ((T (*)(CSAccountSetFlagPicRes*, uint32_t))(Il2CppBase() + 0x51706EC))(this, value);
	}
	template <typename T = uint32_t> T get_last_update_flagpic_time() {
		return ((T (*)(CSAccountSetFlagPicRes*))(Il2CppBase() + 0x51706F4))(this);
	}
	template <typename T = void> T set_last_update_flagpic_time(uint32_t value) {
		return ((T (*)(CSAccountSetFlagPicRes*, uint32_t))(Il2CppBase() + 0x51706FC))(this, value);
	}
	template <typename T = uint32_t> T get_flag_cd_time() {
		return ((T (*)(CSAccountSetFlagPicRes*))(Il2CppBase() + 0x5170704))(this);
	}
	template <typename T = void> T set_flag_cd_time(uint32_t value) {
		return ((T (*)(CSAccountSetFlagPicRes*, uint32_t))(Il2CppBase() + 0x517070C))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSAccountSetFlagPicRes*, bool))(Il2CppBase() + 0x5170714))(this, createIfMissing);
	}

};

}
