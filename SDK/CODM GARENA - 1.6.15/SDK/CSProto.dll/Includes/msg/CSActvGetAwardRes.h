#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSActvGetAwardRes
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSActvGetAwardRes"));
	}

	template <typename T = int32_t> T& _result() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint64_t> T& _actv_id() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& _award_layer() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uint64_t> T& _item_id() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& _DataChange() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& _finish_times() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _prop() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = bool> T& _turn_to_mail() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = int32_t> T& _sub_type() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _back_active_prop() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x40);
	}

	template <typename T = int32_t> T get_result() {
		return ((T (*)(CSActvGetAwardRes*))(Il2CppBase() + 0x51E3430))(this);
	}
	template <typename T = void> T set_result(int32_t value) {
		return ((T (*)(CSActvGetAwardRes*, int32_t))(Il2CppBase() + 0x51E3438))(this, value);
	}
	template <typename T = uint64_t> T get_actv_id() {
		return ((T (*)(CSActvGetAwardRes*))(Il2CppBase() + 0x51E3440))(this);
	}
	template <typename T = void> T set_actv_id(uint64_t value) {
		return ((T (*)(CSActvGetAwardRes*, uint64_t))(Il2CppBase() + 0x51E3448))(this, value);
	}
	template <typename T = int32_t> T get_award_layer() {
		return ((T (*)(CSActvGetAwardRes*))(Il2CppBase() + 0x51E3458))(this);
	}
	template <typename T = void> T set_award_layer(int32_t value) {
		return ((T (*)(CSActvGetAwardRes*, int32_t))(Il2CppBase() + 0x51E3460))(this, value);
	}
	template <typename T = uint64_t> T get_item_id() {
		return ((T (*)(CSActvGetAwardRes*))(Il2CppBase() + 0x51E3468))(this);
	}
	template <typename T = void> T set_item_id(uint64_t value) {
		return ((T (*)(CSActvGetAwardRes*, uint64_t))(Il2CppBase() + 0x51E3470))(this, value);
	}
	template <typename T = uintptr_t> T get_DataChange() {
		return ((T (*)(CSActvGetAwardRes*))(Il2CppBase() + 0x51E3480))(this);
	}
	template <typename T = void> T set_DataChange(uintptr_t value) {
		return ((T (*)(CSActvGetAwardRes*, uintptr_t))(Il2CppBase() + 0x51E3488))(this, value);
	}
	template <typename T = int32_t> T get_finish_times() {
		return ((T (*)(CSActvGetAwardRes*))(Il2CppBase() + 0x51E3490))(this);
	}
	template <typename T = void> T set_finish_times(int32_t value) {
		return ((T (*)(CSActvGetAwardRes*, int32_t))(Il2CppBase() + 0x51E3498))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_prop() {
		return ((T (*)(CSActvGetAwardRes*))(Il2CppBase() + 0x51E34A0))(this);
	}
	template <typename T = bool> T get_turn_to_mail() {
		return ((T (*)(CSActvGetAwardRes*))(Il2CppBase() + 0x51E34A8))(this);
	}
	template <typename T = void> T set_turn_to_mail(bool value) {
		return ((T (*)(CSActvGetAwardRes*, bool))(Il2CppBase() + 0x51E34B0))(this, value);
	}
	template <typename T = int32_t> T get_sub_type() {
		return ((T (*)(CSActvGetAwardRes*))(Il2CppBase() + 0x51E34B8))(this);
	}
	template <typename T = void> T set_sub_type(int32_t value) {
		return ((T (*)(CSActvGetAwardRes*, int32_t))(Il2CppBase() + 0x51E34C0))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_back_active_prop() {
		return ((T (*)(CSActvGetAwardRes*))(Il2CppBase() + 0x51E34C8))(this);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSActvGetAwardRes*, bool))(Il2CppBase() + 0x51E34D0))(this, createIfMissing);
	}

};

}
