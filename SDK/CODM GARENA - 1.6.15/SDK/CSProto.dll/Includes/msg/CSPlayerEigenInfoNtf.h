#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSPlayerEigenInfoNtf
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSPlayerEigenInfoNtf"));
	}

	template <typename T = uint32_t> T& _upload_interval() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _eigeninfo_list() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = uint32_t> T get_upload_interval() {
		return ((T (*)(CSPlayerEigenInfoNtf*))(Il2CppBase() + 0x51F13B8))(this);
	}
	template <typename T = void> T set_upload_interval(uint32_t value) {
		return ((T (*)(CSPlayerEigenInfoNtf*, uint32_t))(Il2CppBase() + 0x51F13C0))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_eigeninfo_list() {
		return ((T (*)(CSPlayerEigenInfoNtf*))(Il2CppBase() + 0x51F13C8))(this);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSPlayerEigenInfoNtf*, bool))(Il2CppBase() + 0x51F13D0))(this, createIfMissing);
	}

};

}
