#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSMailList
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSMailList"));
	}

	template <typename T = int32_t> T& _type() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _mails() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = int32_t> T get_type() {
		return ((T (*)(CSMailList*))(Il2CppBase() + 0x51EFFD4))(this);
	}
	template <typename T = void> T set_type(int32_t value) {
		return ((T (*)(CSMailList*, int32_t))(Il2CppBase() + 0x51EFFDC))(this, value);
	}
	template <typename T = Il2CppList<uintptr_t>*> T get_mails() {
		return ((T (*)(CSMailList*))(Il2CppBase() + 0x51EFFE4))(this);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSMailList*, bool))(Il2CppBase() + 0x51EFFEC))(this, createIfMissing);
	}

};

}
