#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class SuperBoxTask
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "SuperBoxTask"));
	}

	template <typename T = int32_t> T& _super_box_pr() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& _task_status() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& _update_flag() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = int32_t> T get_super_box_pr() {
		return ((T (*)(SuperBoxTask*))(Il2CppBase() + 0x51A9D3C))(this);
	}
	template <typename T = void> T set_super_box_pr(int32_t value) {
		return ((T (*)(SuperBoxTask*, int32_t))(Il2CppBase() + 0x51A9D44))(this, value);
	}
	template <typename T = uintptr_t> T get_task_status() {
		return ((T (*)(SuperBoxTask*))(Il2CppBase() + 0x51A9D4C))(this);
	}
	template <typename T = void> T set_task_status(uintptr_t value) {
		return ((T (*)(SuperBoxTask*, uintptr_t))(Il2CppBase() + 0x51A9D54))(this, value);
	}
	template <typename T = uintptr_t> T get_update_flag() {
		return ((T (*)(SuperBoxTask*))(Il2CppBase() + 0x51A9D5C))(this);
	}
	template <typename T = void> T set_update_flag(uintptr_t value) {
		return ((T (*)(SuperBoxTask*, uintptr_t))(Il2CppBase() + 0x51A9D64))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(SuperBoxTask*, bool))(Il2CppBase() + 0x51A9D6C))(this, createIfMissing);
	}

};

}
