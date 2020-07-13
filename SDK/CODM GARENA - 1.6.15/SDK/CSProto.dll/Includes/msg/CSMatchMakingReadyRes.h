#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSMatchMakingReadyRes
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSMatchMakingReadyRes"));
	}

	template <typename T = int32_t> T& _result() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = int32_t> T get_result() {
		return ((T (*)(CSMatchMakingReadyRes*))(Il2CppBase() + 0x51F0718))(this);
	}
	template <typename T = void> T set_result(int32_t value) {
		return ((T (*)(CSMatchMakingReadyRes*, int32_t))(Il2CppBase() + 0x51F0720))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSMatchMakingReadyRes*, bool))(Il2CppBase() + 0x51F0728))(this, createIfMissing);
	}

};

}
