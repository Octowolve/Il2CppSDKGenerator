#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSActvSelectStoreRateRes
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSActvSelectStoreRateRes"));
	}

	template <typename T = int32_t> T& _result() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint64_t> T& _actv_id() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& _actv_state() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x1C);
	}

	template <typename T = int32_t> T get_result() {
		return ((T (*)(CSActvSelectStoreRateRes*))(Il2CppBase() + 0x51E3D54))(this);
	}
	template <typename T = void> T set_result(int32_t value) {
		return ((T (*)(CSActvSelectStoreRateRes*, int32_t))(Il2CppBase() + 0x51E3D5C))(this, value);
	}
	template <typename T = uint64_t> T get_actv_id() {
		return ((T (*)(CSActvSelectStoreRateRes*))(Il2CppBase() + 0x51E3D64))(this);
	}
	template <typename T = void> T set_actv_id(uint64_t value) {
		return ((T (*)(CSActvSelectStoreRateRes*, uint64_t))(Il2CppBase() + 0x51E3D6C))(this, value);
	}
	template <typename T = int32_t> T get_actv_state() {
		return ((T (*)(CSActvSelectStoreRateRes*))(Il2CppBase() + 0x51E3D7C))(this);
	}
	template <typename T = void> T set_actv_state(int32_t value) {
		return ((T (*)(CSActvSelectStoreRateRes*, int32_t))(Il2CppBase() + 0x51E3D84))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSActvSelectStoreRateRes*, bool))(Il2CppBase() + 0x51E3D8C))(this, createIfMissing);
	}

};

}
