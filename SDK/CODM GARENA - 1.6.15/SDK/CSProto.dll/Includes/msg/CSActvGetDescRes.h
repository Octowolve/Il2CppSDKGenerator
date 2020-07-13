#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSActvGetDescRes
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSActvGetDescRes"));
	}

	template <typename T = int32_t> T& _result() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = bool> T& _is_end() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uint64_t> T& _cur_sys_time() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _cookie() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _desc() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& _task() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x24);
	}

	template <typename T = int32_t> T get_result() {
		return ((T (*)(CSActvGetDescRes*))(Il2CppBase() + 0x51E3734))(this);
	}
	template <typename T = void> T set_result(int32_t value) {
		return ((T (*)(CSActvGetDescRes*, int32_t))(Il2CppBase() + 0x51E373C))(this, value);
	}
	template <typename T = bool> T get_is_end() {
		return ((T (*)(CSActvGetDescRes*))(Il2CppBase() + 0x51E3744))(this);
	}
	template <typename T = void> T set_is_end(bool value) {
		return ((T (*)(CSActvGetDescRes*, bool))(Il2CppBase() + 0x51E374C))(this, value);
	}
	template <typename T = uint64_t> T get_cur_sys_time() {
		return ((T (*)(CSActvGetDescRes*))(Il2CppBase() + 0x51E3754))(this);
	}
	template <typename T = void> T set_cur_sys_time(uint64_t value) {
		return ((T (*)(CSActvGetDescRes*, uint64_t))(Il2CppBase() + 0x51E375C))(this, value);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_cookie() {
		return ((T (*)(CSActvGetDescRes*))(Il2CppBase() + 0x51E376C))(this);
	}
	template <typename T = void> T set_cookie(Il2CppArray<uintptr_t>* value) {
		return ((T (*)(CSActvGetDescRes*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x51E3774))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_desc() {
		return ((T (*)(CSActvGetDescRes*))(Il2CppBase() + 0x51E377C))(this);
	}
	template <typename T = uintptr_t> T get_task() {
		return ((T (*)(CSActvGetDescRes*))(Il2CppBase() + 0x51E3784))(this);
	}
	template <typename T = void> T set_task(uintptr_t value) {
		return ((T (*)(CSActvGetDescRes*, uintptr_t))(Il2CppBase() + 0x51E378C))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSActvGetDescRes*, bool))(Il2CppBase() + 0x51E3794))(this, createIfMissing);
	}

};

}
