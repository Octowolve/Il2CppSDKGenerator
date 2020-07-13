#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSLobbySwitchLangReq
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSLobbySwitchLangReq"));
	}

	template <typename T = uint32_t> T& _language_code() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = uint32_t> T get_language_code() {
		return ((T (*)(CSLobbySwitchLangReq*))(Il2CppBase() + 0x51EEB10))(this);
	}
	template <typename T = void> T set_language_code(uint32_t value) {
		return ((T (*)(CSLobbySwitchLangReq*, uint32_t))(Il2CppBase() + 0x51EEB18))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSLobbySwitchLangReq*, bool))(Il2CppBase() + 0x51EEB20))(this, createIfMissing);
	}

};

}
