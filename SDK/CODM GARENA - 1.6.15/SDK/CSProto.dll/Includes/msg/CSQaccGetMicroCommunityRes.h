#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSQaccGetMicroCommunityRes
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSQaccGetMicroCommunityRes"));
	}

	template <typename T = int32_t> T& _result() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uint32_t> T& _last_update_time() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = int32_t> T get_result() {
		return ((T (*)(CSQaccGetMicroCommunityRes*))(Il2CppBase() + 0x51E0014))(this);
	}
	template <typename T = void> T set_result(int32_t value) {
		return ((T (*)(CSQaccGetMicroCommunityRes*, int32_t))(Il2CppBase() + 0x51E001C))(this, value);
	}
	template <typename T = uint32_t> T get_last_update_time() {
		return ((T (*)(CSQaccGetMicroCommunityRes*))(Il2CppBase() + 0x51E0024))(this);
	}
	template <typename T = void> T set_last_update_time(uint32_t value) {
		return ((T (*)(CSQaccGetMicroCommunityRes*, uint32_t))(Il2CppBase() + 0x51E002C))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSQaccGetMicroCommunityRes*, bool))(Il2CppBase() + 0x51E0034))(this, createIfMissing);
	}

};

}
