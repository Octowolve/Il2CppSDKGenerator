#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class AbtestLoginRecord
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "AbtestLoginRecord"));
	}

	template <typename T = uint32_t> T& _group_id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint32_t> T& _task_id() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& _abtest_type() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uint32_t> T& _timestamp() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uint64_t> T& _login_seq() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = uint32_t> T get_group_id() {
		return ((T (*)(AbtestLoginRecord*))(Il2CppBase() + 0x510A720))(this);
	}
	template <typename T = void> T set_group_id(uint32_t value) {
		return ((T (*)(AbtestLoginRecord*, uint32_t))(Il2CppBase() + 0x510A728))(this, value);
	}
	template <typename T = uint32_t> T get_task_id() {
		return ((T (*)(AbtestLoginRecord*))(Il2CppBase() + 0x510A730))(this);
	}
	template <typename T = void> T set_task_id(uint32_t value) {
		return ((T (*)(AbtestLoginRecord*, uint32_t))(Il2CppBase() + 0x510A738))(this, value);
	}
	template <typename T = uintptr_t> T get_abtest_type() {
		return ((T (*)(AbtestLoginRecord*))(Il2CppBase() + 0x510A740))(this);
	}
	template <typename T = void> T set_abtest_type(uintptr_t value) {
		return ((T (*)(AbtestLoginRecord*, uintptr_t))(Il2CppBase() + 0x510A748))(this, value);
	}
	template <typename T = uint32_t> T get_timestamp() {
		return ((T (*)(AbtestLoginRecord*))(Il2CppBase() + 0x510A750))(this);
	}
	template <typename T = void> T set_timestamp(uint32_t value) {
		return ((T (*)(AbtestLoginRecord*, uint32_t))(Il2CppBase() + 0x510A758))(this, value);
	}
	template <typename T = uint64_t> T get_login_seq() {
		return ((T (*)(AbtestLoginRecord*))(Il2CppBase() + 0x510A760))(this);
	}
	template <typename T = void> T set_login_seq(uint64_t value) {
		return ((T (*)(AbtestLoginRecord*, uint64_t))(Il2CppBase() + 0x510A768))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(AbtestLoginRecord*, bool))(Il2CppBase() + 0x510A778))(this, createIfMissing);
	}

};

}
