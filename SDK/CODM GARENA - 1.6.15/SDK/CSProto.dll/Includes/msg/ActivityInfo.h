#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class ActivityInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "ActivityInfo"));
	}

	template <typename T = int32_t> T& _group() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& _id() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& _data() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& _state() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int64_t> T& _update_time() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int64_t> T& _clear_time() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& _BoxState() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& _is_spm_first() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = int32_t> T& _is_zombies_first() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> T& _is_apvp_first() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = int32_t> T& _is_spvp_first() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x3C);
	}

	template <typename T = int32_t> T get_group() {
		return ((T (*)(ActivityInfo*))(Il2CppBase() + 0x510AF88))(this);
	}
	template <typename T = void> T set_group(int32_t value) {
		return ((T (*)(ActivityInfo*, int32_t))(Il2CppBase() + 0x510AF90))(this, value);
	}
	template <typename T = int32_t> T get_id() {
		return ((T (*)(ActivityInfo*))(Il2CppBase() + 0x510AF98))(this);
	}
	template <typename T = void> T set_id(int32_t value) {
		return ((T (*)(ActivityInfo*, int32_t))(Il2CppBase() + 0x510AFA0))(this, value);
	}
	template <typename T = int32_t> T get_data() {
		return ((T (*)(ActivityInfo*))(Il2CppBase() + 0x510AFA8))(this);
	}
	template <typename T = void> T set_data(int32_t value) {
		return ((T (*)(ActivityInfo*, int32_t))(Il2CppBase() + 0x510AFB0))(this, value);
	}
	template <typename T = int32_t> T get_state() {
		return ((T (*)(ActivityInfo*))(Il2CppBase() + 0x510AFB8))(this);
	}
	template <typename T = void> T set_state(int32_t value) {
		return ((T (*)(ActivityInfo*, int32_t))(Il2CppBase() + 0x510AFC0))(this, value);
	}
	template <typename T = int64_t> T get_update_time() {
		return ((T (*)(ActivityInfo*))(Il2CppBase() + 0x510AFC8))(this);
	}
	template <typename T = void> T set_update_time(int64_t value) {
		return ((T (*)(ActivityInfo*, int64_t))(Il2CppBase() + 0x510AFD0))(this, value);
	}
	template <typename T = int64_t> T get_clear_time() {
		return ((T (*)(ActivityInfo*))(Il2CppBase() + 0x510AFE0))(this);
	}
	template <typename T = void> T set_clear_time(int64_t value) {
		return ((T (*)(ActivityInfo*, int64_t))(Il2CppBase() + 0x510AFE8))(this, value);
	}
	template <typename T = int32_t> T get_BoxState() {
		return ((T (*)(ActivityInfo*))(Il2CppBase() + 0x510AFF8))(this);
	}
	template <typename T = void> T set_BoxState(int32_t value) {
		return ((T (*)(ActivityInfo*, int32_t))(Il2CppBase() + 0x510B000))(this, value);
	}
	template <typename T = int32_t> T get_is_spm_first() {
		return ((T (*)(ActivityInfo*))(Il2CppBase() + 0x510B008))(this);
	}
	template <typename T = void> T set_is_spm_first(int32_t value) {
		return ((T (*)(ActivityInfo*, int32_t))(Il2CppBase() + 0x510B010))(this, value);
	}
	template <typename T = int32_t> T get_is_zombies_first() {
		return ((T (*)(ActivityInfo*))(Il2CppBase() + 0x510B018))(this);
	}
	template <typename T = void> T set_is_zombies_first(int32_t value) {
		return ((T (*)(ActivityInfo*, int32_t))(Il2CppBase() + 0x510B020))(this, value);
	}
	template <typename T = int32_t> T get_is_apvp_first() {
		return ((T (*)(ActivityInfo*))(Il2CppBase() + 0x510B028))(this);
	}
	template <typename T = void> T set_is_apvp_first(int32_t value) {
		return ((T (*)(ActivityInfo*, int32_t))(Il2CppBase() + 0x510B030))(this, value);
	}
	template <typename T = int32_t> T get_is_spvp_first() {
		return ((T (*)(ActivityInfo*))(Il2CppBase() + 0x510B038))(this);
	}
	template <typename T = void> T set_is_spvp_first(int32_t value) {
		return ((T (*)(ActivityInfo*, int32_t))(Il2CppBase() + 0x510B040))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(ActivityInfo*, bool))(Il2CppBase() + 0x510B048))(this, createIfMissing);
	}

};

}
