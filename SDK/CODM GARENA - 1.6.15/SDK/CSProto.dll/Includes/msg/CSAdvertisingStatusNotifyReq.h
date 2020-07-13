#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSAdvertisingStatusNotifyReq
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSAdvertisingStatusNotifyReq"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& _placement_name() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& _plantform_type() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& _status() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& _current_ad_index() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = Il2CppArray<uintptr_t>*> T get_placement_name() {
		return ((T (*)(CSAdvertisingStatusNotifyReq*))(Il2CppBase() + 0x51E4428))(this);
	}
	template <typename T = void> T set_placement_name(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(CSAdvertisingStatusNotifyReq*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x51E4430))(this, value);
	}
	template <typename T = int32_t> T get_plantform_type() {
		return ((T (*)(CSAdvertisingStatusNotifyReq*))(Il2CppBase() + 0x51E4438))(this);
	}
	template <typename T = void> T set_plantform_type(int32_t value) {
		return ((T (*)(CSAdvertisingStatusNotifyReq*, int32_t))(Il2CppBase() + 0x51E4440))(this, value);
	}
	template <typename T = uintptr_t> T get_status() {
		return ((T (*)(CSAdvertisingStatusNotifyReq*))(Il2CppBase() + 0x51E4448))(this);
	}
	template <typename T = void> T set_status(uintptr_t value) {
		return ((T (*)(CSAdvertisingStatusNotifyReq*, uintptr_t))(Il2CppBase() + 0x51E4450))(this, value);
	}
	template <typename T = int32_t> T get_current_ad_index() {
		return ((T (*)(CSAdvertisingStatusNotifyReq*))(Il2CppBase() + 0x51E4458))(this);
	}
	template <typename T = void> T set_current_ad_index(int32_t value) {
		return ((T (*)(CSAdvertisingStatusNotifyReq*, int32_t))(Il2CppBase() + 0x51E4460))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSAdvertisingStatusNotifyReq*, bool))(Il2CppBase() + 0x51E4468))(this, createIfMissing);
	}

};

}
