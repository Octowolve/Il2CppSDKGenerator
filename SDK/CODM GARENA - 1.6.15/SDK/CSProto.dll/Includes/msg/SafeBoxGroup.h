#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class SafeBoxGroup
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "SafeBoxGroup"));
	}

	template <typename T = uint64_t> T& _id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint64_t> T& _begin_time() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uint64_t> T& _end_time() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _box_list() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x24);
	}

	template <typename T = uint64_t> T get_id() {
		return ((T (*)(SafeBoxGroup*))(Il2CppBase() + 0x50724B0))(this);
	}
	template <typename T = void> T set_id(uint64_t value) {
		return ((T (*)(SafeBoxGroup*, uint64_t))(Il2CppBase() + 0x50724B8))(this, value);
	}
	template <typename T = uint64_t> T get_begin_time() {
		return ((T (*)(SafeBoxGroup*))(Il2CppBase() + 0x50724C8))(this);
	}
	template <typename T = void> T set_begin_time(uint64_t value) {
		return ((T (*)(SafeBoxGroup*, uint64_t))(Il2CppBase() + 0x50724D0))(this, value);
	}
	template <typename T = uint64_t> T get_end_time() {
		return ((T (*)(SafeBoxGroup*))(Il2CppBase() + 0x50724E0))(this);
	}
	template <typename T = void> T set_end_time(uint64_t value) {
		return ((T (*)(SafeBoxGroup*, uint64_t))(Il2CppBase() + 0x50724E8))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_box_list() {
		return ((T (*)(SafeBoxGroup*))(Il2CppBase() + 0x50724F8))(this);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(SafeBoxGroup*, bool))(Il2CppBase() + 0x5072500))(this, createIfMissing);
	}

};

}
