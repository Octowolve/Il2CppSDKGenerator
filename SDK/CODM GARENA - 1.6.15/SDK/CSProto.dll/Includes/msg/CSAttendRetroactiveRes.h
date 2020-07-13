#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSAttendRetroactiveRes
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSAttendRetroactiveRes"));
	}

	template <typename T = int32_t> T& _result() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& _desc() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _prop() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& _turn_to_mail() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = int32_t> T get_result() {
		return ((T (*)(CSAttendRetroactiveRes*))(Il2CppBase() + 0x51E4CB0))(this);
	}
	template <typename T = void> T set_result(int32_t value) {
		return ((T (*)(CSAttendRetroactiveRes*, int32_t))(Il2CppBase() + 0x51E4CB8))(this, value);
	}
	template <typename T = uintptr_t> T get_desc() {
		return ((T (*)(CSAttendRetroactiveRes*))(Il2CppBase() + 0x51E4CC0))(this);
	}
	template <typename T = void> T set_desc(uintptr_t value) {
		return ((T (*)(CSAttendRetroactiveRes*, uintptr_t))(Il2CppBase() + 0x51E4CC8))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_prop() {
		return ((T (*)(CSAttendRetroactiveRes*))(Il2CppBase() + 0x51E4CD0))(this);
	}
	template <typename T = bool> T get_turn_to_mail() {
		return ((T (*)(CSAttendRetroactiveRes*))(Il2CppBase() + 0x51E4CD8))(this);
	}
	template <typename T = void> T set_turn_to_mail(bool value) {
		return ((T (*)(CSAttendRetroactiveRes*, bool))(Il2CppBase() + 0x51E4CE0))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSAttendRetroactiveRes*, bool))(Il2CppBase() + 0x51E4CE8))(this, createIfMissing);
	}

};

}
