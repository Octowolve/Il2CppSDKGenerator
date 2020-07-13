#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSGspSetMedalReq
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSGsp_SetMedalReq"));
	}

	template <typename T = int32_t> T& _medal_key() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& _medel_index() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = int32_t> T get_medal_key() {
		return ((T (*)(CSGspSetMedalReq*))(Il2CppBase() + 0x51D9ED0))(this);
	}
	template <typename T = void> T set_medal_key(int32_t value) {
		return ((T (*)(CSGspSetMedalReq*, int32_t))(Il2CppBase() + 0x51D9ED8))(this, value);
	}
	template <typename T = int32_t> T get_medel_index() {
		return ((T (*)(CSGspSetMedalReq*))(Il2CppBase() + 0x51D9EE0))(this);
	}
	template <typename T = void> T set_medel_index(int32_t value) {
		return ((T (*)(CSGspSetMedalReq*, int32_t))(Il2CppBase() + 0x51D9EE8))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSGspSetMedalReq*, bool))(Il2CppBase() + 0x51D9EF0))(this, createIfMissing);
	}

};

}
