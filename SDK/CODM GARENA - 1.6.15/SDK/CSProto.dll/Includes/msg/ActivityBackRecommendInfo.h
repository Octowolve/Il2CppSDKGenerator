#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class ActivityBackRecommendInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "ActivityBackRecommendInfo"));
	}

	template <typename T = int32_t> T& _id() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& _status() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = int32_t> T get_id() {
		return ((T (*)(ActivityBackRecommendInfo*))(Il2CppBase() + 0x510AD68))(this);
	}
	template <typename T = void> T set_id(int32_t value) {
		return ((T (*)(ActivityBackRecommendInfo*, int32_t))(Il2CppBase() + 0x510AD70))(this, value);
	}
	template <typename T = int32_t> T get_status() {
		return ((T (*)(ActivityBackRecommendInfo*))(Il2CppBase() + 0x510AD78))(this);
	}
	template <typename T = void> T set_status(int32_t value) {
		return ((T (*)(ActivityBackRecommendInfo*, int32_t))(Il2CppBase() + 0x510AD80))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(ActivityBackRecommendInfo*, bool))(Il2CppBase() + 0x510AD88))(this, createIfMissing);
	}

};

}
