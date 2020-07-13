#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class AidInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "AidInfo"));
	}

	template <typename T = uint64_t> T& _id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint32_t> T& _aid_time() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& _curr_times() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = uint64_t> T get_id() {
		return ((T (*)(AidInfo*))(Il2CppBase() + 0x510B5C0))(this);
	}
	template <typename T = void> T set_id(uint64_t value) {
		return ((T (*)(AidInfo*, uint64_t))(Il2CppBase() + 0x510B5C8))(this, value);
	}
	template <typename T = uint32_t> T get_aid_time() {
		return ((T (*)(AidInfo*))(Il2CppBase() + 0x510B5D8))(this);
	}
	template <typename T = void> T set_aid_time(uint32_t value) {
		return ((T (*)(AidInfo*, uint32_t))(Il2CppBase() + 0x510B5E0))(this, value);
	}
	template <typename T = int32_t> T get_curr_times() {
		return ((T (*)(AidInfo*))(Il2CppBase() + 0x510B5E8))(this);
	}
	template <typename T = void> T set_curr_times(int32_t value) {
		return ((T (*)(AidInfo*, int32_t))(Il2CppBase() + 0x510B5F0))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(AidInfo*, bool))(Il2CppBase() + 0x510B5F8))(this, createIfMissing);
	}

};

}
