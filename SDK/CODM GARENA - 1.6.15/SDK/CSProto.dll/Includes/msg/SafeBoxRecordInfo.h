#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class SafeBoxRecordInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "SafeBoxRecordInfo"));
	}

	template <typename T = uint64_t> T& _last_update_time() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _box_list() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _last_box_list() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uint64_t> T& _last_reset_time() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = uint64_t> T get_last_update_time() {
		return ((T (*)(SafeBoxRecordInfo*))(Il2CppBase() + 0x50725D8))(this);
	}
	template <typename T = void> T set_last_update_time(uint64_t value) {
		return ((T (*)(SafeBoxRecordInfo*, uint64_t))(Il2CppBase() + 0x50725E0))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_box_list() {
		return ((T (*)(SafeBoxRecordInfo*))(Il2CppBase() + 0x50725F0))(this);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_last_box_list() {
		return ((T (*)(SafeBoxRecordInfo*))(Il2CppBase() + 0x50725F8))(this);
	}
	template <typename T = uint64_t> T get_last_reset_time() {
		return ((T (*)(SafeBoxRecordInfo*))(Il2CppBase() + 0x5072600))(this);
	}
	template <typename T = void> T set_last_reset_time(uint64_t value) {
		return ((T (*)(SafeBoxRecordInfo*, uint64_t))(Il2CppBase() + 0x5072608))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(SafeBoxRecordInfo*, bool))(Il2CppBase() + 0x5072618))(this, createIfMissing);
	}

};

}
