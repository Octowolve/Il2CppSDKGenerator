#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSAttendAwardRes
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSAttendAwardRes"));
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
	template <typename T = uint32_t> T& _attend_type() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = bool> T& _turn_to_mail() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x1C);
	}

	template <typename T = int32_t> T get_result() {
		return ((T (*)(CSAttendAwardRes*))(Il2CppBase() + 0x51E48EC))(this);
	}
	template <typename T = void> T set_result(int32_t value) {
		return ((T (*)(CSAttendAwardRes*, int32_t))(Il2CppBase() + 0x51E48F4))(this, value);
	}
	template <typename T = uintptr_t> T get_desc() {
		return ((T (*)(CSAttendAwardRes*))(Il2CppBase() + 0x51E48FC))(this);
	}
	template <typename T = void> T set_desc(uintptr_t value) {
		return ((T (*)(CSAttendAwardRes*, uintptr_t))(Il2CppBase() + 0x51E4904))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_prop() {
		return ((T (*)(CSAttendAwardRes*))(Il2CppBase() + 0x51E490C))(this);
	}
	template <typename T = uint32_t> T get_attend_type() {
		return ((T (*)(CSAttendAwardRes*))(Il2CppBase() + 0x51E4914))(this);
	}
	template <typename T = void> T set_attend_type(uint32_t value) {
		return ((T (*)(CSAttendAwardRes*, uint32_t))(Il2CppBase() + 0x51E491C))(this, value);
	}
	template <typename T = bool> T get_turn_to_mail() {
		return ((T (*)(CSAttendAwardRes*))(Il2CppBase() + 0x51E4924))(this);
	}
	template <typename T = void> T set_turn_to_mail(bool value) {
		return ((T (*)(CSAttendAwardRes*, bool))(Il2CppBase() + 0x51E492C))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSAttendAwardRes*, bool))(Il2CppBase() + 0x51E4934))(this, createIfMissing);
	}

};

}
