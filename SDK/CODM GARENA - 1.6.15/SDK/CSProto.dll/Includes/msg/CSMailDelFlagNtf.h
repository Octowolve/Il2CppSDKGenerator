#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSMailDelFlagNtf
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSMailDelFlagNtf"));
	}

	template <typename T = bool> T& _IsDelMail() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = bool> T get_IsDelMail() {
		return ((T (*)(CSMailDelFlagNtf*))(Il2CppBase() + 0x51EFE00))(this);
	}
	template <typename T = void> T set_IsDelMail(bool value) {
		return ((T (*)(CSMailDelFlagNtf*, bool))(Il2CppBase() + 0x51EFE08))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSMailDelFlagNtf*, bool))(Il2CppBase() + 0x51EFE10))(this, createIfMissing);
	}

};

}
