#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSLobbySwitchLangRes
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSLobbySwitchLangRes"));
	}

	template <typename T = int32_t> T& _result() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = int32_t> T get_result() {
		return ((T (*)(CSLobbySwitchLangRes*))(Il2CppBase() + 0x51EEB3C))(this);
	}
	template <typename T = void> T set_result(int32_t value) {
		return ((T (*)(CSLobbySwitchLangRes*, int32_t))(Il2CppBase() + 0x51EEB44))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSLobbySwitchLangRes*, bool))(Il2CppBase() + 0x51EEB4C))(this, createIfMissing);
	}

};

}
