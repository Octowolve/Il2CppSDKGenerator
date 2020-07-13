#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSMailPushNewMailNtf
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSMailPushNewMailNtf"));
	}

	template <typename T = uintptr_t> T& _mail_list() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = uintptr_t> T get_mail_list() {
		return ((T (*)(CSMailPushNewMailNtf*))(Il2CppBase() + 0x51F0024))(this);
	}
	template <typename T = void> T set_mail_list(uintptr_t value) {
		return ((T (*)(CSMailPushNewMailNtf*, uintptr_t))(Il2CppBase() + 0x51F002C))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSMailPushNewMailNtf*, bool))(Il2CppBase() + 0x51F0034))(this, createIfMissing);
	}

};

}
