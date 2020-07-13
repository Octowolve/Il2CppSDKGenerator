#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class PlusAward
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "PlusAward"));
	}

	template <typename T = int32_t> T& _id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& _num() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& _time() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = int32_t> T get_id() {
		return ((T (*)(PlusAward*))(Il2CppBase() + 0x506DE3C))(this);
	}
	template <typename T = void> T set_id(int32_t value) {
		return ((T (*)(PlusAward*, int32_t))(Il2CppBase() + 0x506DE44))(this, value);
	}
	template <typename T = int32_t> T get_num() {
		return ((T (*)(PlusAward*))(Il2CppBase() + 0x506DE4C))(this);
	}
	template <typename T = void> T set_num(int32_t value) {
		return ((T (*)(PlusAward*, int32_t))(Il2CppBase() + 0x506DE54))(this, value);
	}
	template <typename T = int32_t> T get_time() {
		return ((T (*)(PlusAward*))(Il2CppBase() + 0x506DE5C))(this);
	}
	template <typename T = void> T set_time(int32_t value) {
		return ((T (*)(PlusAward*, int32_t))(Il2CppBase() + 0x506DE64))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(PlusAward*, bool))(Il2CppBase() + 0x506DE6C))(this, createIfMissing);
	}

};

}
