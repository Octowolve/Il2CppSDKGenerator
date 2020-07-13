#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSGetFacepicRes
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSGetFacepicRes"));
	}

	template <typename T = int32_t> T& _result() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _confs() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& _total_times() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& _show_times_per_login() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = int32_t> T get_result() {
		return ((T (*)(CSGetFacepicRes*))(Il2CppBase() + 0x52164C0))(this);
	}
	template <typename T = void> T set_result(int32_t value) {
		return ((T (*)(CSGetFacepicRes*, int32_t))(Il2CppBase() + 0x52164C8))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_confs() {
		return ((T (*)(CSGetFacepicRes*))(Il2CppBase() + 0x52164D0))(this);
	}
	template <typename T = int32_t> T get_total_times() {
		return ((T (*)(CSGetFacepicRes*))(Il2CppBase() + 0x52164D8))(this);
	}
	template <typename T = void> T set_total_times(int32_t value) {
		return ((T (*)(CSGetFacepicRes*, int32_t))(Il2CppBase() + 0x52164E0))(this, value);
	}
	template <typename T = int32_t> T get_show_times_per_login() {
		return ((T (*)(CSGetFacepicRes*))(Il2CppBase() + 0x52164E8))(this);
	}
	template <typename T = void> T set_show_times_per_login(int32_t value) {
		return ((T (*)(CSGetFacepicRes*, int32_t))(Il2CppBase() + 0x52164F0))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSGetFacepicRes*, bool))(Il2CppBase() + 0x52164F8))(this, createIfMissing);
	}

};

}
