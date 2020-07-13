#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class AbtestHitEntry
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "AbtestHitEntry"));
	}

	template <typename T = uint32_t> T& _group_id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint32_t> T& _task_id() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uint32_t> T& _timestamp() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& _hide_record() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uint32_t> T& _hit_timestamp() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& _gm_index() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = uint32_t> T get_group_id() {
		return ((T (*)(AbtestHitEntry*))(Il2CppBase() + 0x510A69C))(this);
	}
	template <typename T = void> T set_group_id(uint32_t value) {
		return ((T (*)(AbtestHitEntry*, uint32_t))(Il2CppBase() + 0x510A6A4))(this, value);
	}
	template <typename T = uint32_t> T get_task_id() {
		return ((T (*)(AbtestHitEntry*))(Il2CppBase() + 0x510A6AC))(this);
	}
	template <typename T = void> T set_task_id(uint32_t value) {
		return ((T (*)(AbtestHitEntry*, uint32_t))(Il2CppBase() + 0x510A6B4))(this, value);
	}
	template <typename T = uint32_t> T get_timestamp() {
		return ((T (*)(AbtestHitEntry*))(Il2CppBase() + 0x510A6BC))(this);
	}
	template <typename T = void> T set_timestamp(uint32_t value) {
		return ((T (*)(AbtestHitEntry*, uint32_t))(Il2CppBase() + 0x510A6C4))(this, value);
	}
	template <typename T = bool> T get_hide_record() {
		return ((T (*)(AbtestHitEntry*))(Il2CppBase() + 0x510A6CC))(this);
	}
	template <typename T = void> T set_hide_record(bool value) {
		return ((T (*)(AbtestHitEntry*, bool))(Il2CppBase() + 0x510A6D4))(this, value);
	}
	template <typename T = uint32_t> T get_hit_timestamp() {
		return ((T (*)(AbtestHitEntry*))(Il2CppBase() + 0x510A6DC))(this);
	}
	template <typename T = void> T set_hit_timestamp(uint32_t value) {
		return ((T (*)(AbtestHitEntry*, uint32_t))(Il2CppBase() + 0x510A6E4))(this, value);
	}
	template <typename T = int32_t> T get_gm_index() {
		return ((T (*)(AbtestHitEntry*))(Il2CppBase() + 0x510A6EC))(this);
	}
	template <typename T = void> T set_gm_index(int32_t value) {
		return ((T (*)(AbtestHitEntry*, int32_t))(Il2CppBase() + 0x510A6F4))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(AbtestHitEntry*, bool))(Il2CppBase() + 0x510A6FC))(this, createIfMissing);
	}

};

}
