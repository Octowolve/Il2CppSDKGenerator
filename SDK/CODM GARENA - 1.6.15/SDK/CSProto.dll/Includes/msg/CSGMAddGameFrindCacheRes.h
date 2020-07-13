#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSGMAddGameFrindCacheRes
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSGMAddGameFrindCacheRes"));
	}

	template <typename T = int32_t> T& _result() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = int32_t> T get_result() {
		return ((T (*)(CSGMAddGameFrindCacheRes*))(Il2CppBase() + 0x51DD124))(this);
	}
	template <typename T = void> T set_result(int32_t value) {
		return ((T (*)(CSGMAddGameFrindCacheRes*, int32_t))(Il2CppBase() + 0x51DD12C))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSGMAddGameFrindCacheRes*, bool))(Il2CppBase() + 0x51DD134))(this, createIfMissing);
	}

};

}
