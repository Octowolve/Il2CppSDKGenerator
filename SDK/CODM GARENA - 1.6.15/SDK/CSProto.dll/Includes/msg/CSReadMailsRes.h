#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSReadMailsRes
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSReadMailsRes"));
	}

	template <typename T = int32_t> T& _result() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& _change() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& _type() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppList<int32_t>*> T& _read_indexs() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& _friend_mail_read_count_today() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& _friend_mail_read_count() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& _friend_mail_limit() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _props() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> T& _read_type() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x2C);
	}

	template <typename T = int32_t> T get_result() {
		return ((T (*)(CSReadMailsRes*))(Il2CppBase() + 0x51E0424))(this);
	}
	template <typename T = void> T set_result(int32_t value) {
		return ((T (*)(CSReadMailsRes*, int32_t))(Il2CppBase() + 0x51E042C))(this, value);
	}
	template <typename T = uintptr_t> T get_change() {
		return ((T (*)(CSReadMailsRes*))(Il2CppBase() + 0x51E0434))(this);
	}
	template <typename T = void> T set_change(uintptr_t value) {
		return ((T (*)(CSReadMailsRes*, uintptr_t))(Il2CppBase() + 0x51E043C))(this, value);
	}
	template <typename T = int32_t> T get_type() {
		return ((T (*)(CSReadMailsRes*))(Il2CppBase() + 0x51E0444))(this);
	}
	template <typename T = void> T set_type(int32_t value) {
		return ((T (*)(CSReadMailsRes*, int32_t))(Il2CppBase() + 0x51E044C))(this, value);
	}
	template <typename T = Il2CppList<int32_t>*> T get_read_indexs() {
		return ((T (*)(CSReadMailsRes*))(Il2CppBase() + 0x51E0454))(this);
	}
	template <typename T = int32_t> T get_friend_mail_read_count_today() {
		return ((T (*)(CSReadMailsRes*))(Il2CppBase() + 0x51E045C))(this);
	}
	template <typename T = void> T set_friend_mail_read_count_today(int32_t value) {
		return ((T (*)(CSReadMailsRes*, int32_t))(Il2CppBase() + 0x51E0464))(this, value);
	}
	template <typename T = int32_t> T get_friend_mail_read_count() {
		return ((T (*)(CSReadMailsRes*))(Il2CppBase() + 0x51E046C))(this);
	}
	template <typename T = void> T set_friend_mail_read_count(int32_t value) {
		return ((T (*)(CSReadMailsRes*, int32_t))(Il2CppBase() + 0x51E0474))(this, value);
	}
	template <typename T = int32_t> T get_friend_mail_limit() {
		return ((T (*)(CSReadMailsRes*))(Il2CppBase() + 0x51E047C))(this);
	}
	template <typename T = void> T set_friend_mail_limit(int32_t value) {
		return ((T (*)(CSReadMailsRes*, int32_t))(Il2CppBase() + 0x51E0484))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_props() {
		return ((T (*)(CSReadMailsRes*))(Il2CppBase() + 0x51E048C))(this);
	}
	template <typename T = int32_t> T get_read_type() {
		return ((T (*)(CSReadMailsRes*))(Il2CppBase() + 0x51E0494))(this);
	}
	template <typename T = void> T set_read_type(int32_t value) {
		return ((T (*)(CSReadMailsRes*, int32_t))(Il2CppBase() + 0x51E049C))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSReadMailsRes*, bool))(Il2CppBase() + 0x51E04A4))(this, createIfMissing);
	}

};

}
