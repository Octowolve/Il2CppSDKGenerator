#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSOpenBoxRes
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSOpenBoxRes"));
	}

	template <typename T = int32_t> T& _result() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& _box() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& _delta_inventory() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppList<uint64_t>*> T& _item_id_ary() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = bool> T& _turn_to_mail() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x1C);
	}

	template <typename T = int32_t> T get_result() {
		return ((T (*)(CSOpenBoxRes*))(Il2CppBase() + 0x51F1060))(this);
	}
	template <typename T = void> T set_result(int32_t value) {
		return ((T (*)(CSOpenBoxRes*, int32_t))(Il2CppBase() + 0x51F1068))(this, value);
	}
	template <typename T = uintptr_t> T get_box() {
		return ((T (*)(CSOpenBoxRes*))(Il2CppBase() + 0x51F1070))(this);
	}
	template <typename T = void> T set_box(uintptr_t value) {
		return ((T (*)(CSOpenBoxRes*, uintptr_t))(Il2CppBase() + 0x51F1078))(this, value);
	}
	template <typename T = uintptr_t> T get_delta_inventory() {
		return ((T (*)(CSOpenBoxRes*))(Il2CppBase() + 0x51F1080))(this);
	}
	template <typename T = void> T set_delta_inventory(uintptr_t value) {
		return ((T (*)(CSOpenBoxRes*, uintptr_t))(Il2CppBase() + 0x51F1088))(this, value);
	}
	template <typename T = Il2CppList<uint64_t>*> T get_item_id_ary() {
		return ((T (*)(CSOpenBoxRes*))(Il2CppBase() + 0x51F1090))(this);
	}
	template <typename T = bool> T get_turn_to_mail() {
		return ((T (*)(CSOpenBoxRes*))(Il2CppBase() + 0x51F1098))(this);
	}
	template <typename T = void> T set_turn_to_mail(bool value) {
		return ((T (*)(CSOpenBoxRes*, bool))(Il2CppBase() + 0x51F10A0))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSOpenBoxRes*, bool))(Il2CppBase() + 0x51F10A8))(this, createIfMissing);
	}

};

}
