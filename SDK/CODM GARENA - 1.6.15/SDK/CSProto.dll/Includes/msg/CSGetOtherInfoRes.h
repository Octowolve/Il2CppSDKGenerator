#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSGetOtherInfoRes
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSGetOtherInfoRes"));
	}

	template <typename T = int32_t> T& _result() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& _gamestat_info() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& _profile_simpleinfo() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = int32_t> T get_result() {
		return ((T (*)(CSGetOtherInfoRes*))(Il2CppBase() + 0x5217504))(this);
	}
	template <typename T = void> T set_result(int32_t value) {
		return ((T (*)(CSGetOtherInfoRes*, int32_t))(Il2CppBase() + 0x521750C))(this, value);
	}
	template <typename T = uintptr_t> T get_gamestat_info() {
		return ((T (*)(CSGetOtherInfoRes*))(Il2CppBase() + 0x5217514))(this);
	}
	template <typename T = void> T set_gamestat_info(uintptr_t value) {
		return ((T (*)(CSGetOtherInfoRes*, uintptr_t))(Il2CppBase() + 0x521751C))(this, value);
	}
	template <typename T = uintptr_t> T get_profile_simpleinfo() {
		return ((T (*)(CSGetOtherInfoRes*))(Il2CppBase() + 0x5217524))(this);
	}
	template <typename T = void> T set_profile_simpleinfo(uintptr_t value) {
		return ((T (*)(CSGetOtherInfoRes*, uintptr_t))(Il2CppBase() + 0x521752C))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSGetOtherInfoRes*, bool))(Il2CppBase() + 0x5217534))(this, createIfMissing);
	}

};

}
