#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class PropChangeDelta
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "PropChangeDelta"));
	}

	template <typename T = uint64_t> T& _prop_id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& _type() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& _value() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = uint64_t> T get_prop_id() {
		return ((T (*)(PropChangeDelta*))(Il2CppBase() + 0x506EB38))(this);
	}
	template <typename T = void> T set_prop_id(uint64_t value) {
		return ((T (*)(PropChangeDelta*, uint64_t))(Il2CppBase() + 0x506EB40))(this, value);
	}
	template <typename T = int32_t> T get_type() {
		return ((T (*)(PropChangeDelta*))(Il2CppBase() + 0x506EB50))(this);
	}
	template <typename T = void> T set_type(int32_t value) {
		return ((T (*)(PropChangeDelta*, int32_t))(Il2CppBase() + 0x506EB58))(this, value);
	}
	template <typename T = int32_t> T get_value() {
		return ((T (*)(PropChangeDelta*))(Il2CppBase() + 0x506EB60))(this);
	}
	template <typename T = void> T set_value(int32_t value) {
		return ((T (*)(PropChangeDelta*, int32_t))(Il2CppBase() + 0x506EB68))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(PropChangeDelta*, bool))(Il2CppBase() + 0x506EB70))(this, createIfMissing);
	}

};

}
