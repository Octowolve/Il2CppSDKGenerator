#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace msg {

class CSAccountRegisterRes
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("CSProto.dll", "msg", "CSAccountRegister_Res"));
	}

	template <typename T = int32_t> T& _result() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppString*> T& _err_msg() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& _is_hard() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& extensionObject() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = int32_t> T get_result() {
		return ((T (*)(CSAccountRegisterRes*))(Il2CppBase() + 0x51704BC))(this);
	}
	template <typename T = void> T set_result(int32_t value) {
		return ((T (*)(CSAccountRegisterRes*, int32_t))(Il2CppBase() + 0x51704C4))(this, value);
	}
	template <typename T = Il2CppString*> T get_err_msg() {
		return ((T (*)(CSAccountRegisterRes*))(Il2CppBase() + 0x51704CC))(this);
	}
	template <typename T = void> T set_err_msg(Il2CppString* value) {
		return ((T (*)(CSAccountRegisterRes*, Il2CppString*))(Il2CppBase() + 0x51704D4))(this, value);
	}
	template <typename T = int32_t> T get_is_hard() {
		return ((T (*)(CSAccountRegisterRes*))(Il2CppBase() + 0x51704DC))(this);
	}
	template <typename T = void> T set_is_hard(int32_t value) {
		return ((T (*)(CSAccountRegisterRes*, int32_t))(Il2CppBase() + 0x51704E4))(this, value);
	}
	template <typename T = uintptr_t> T global_ProtoBuf_IExtensible_GetExtensionObject(bool createIfMissing) {
		return ((T (*)(CSAccountRegisterRes*, bool))(Il2CppBase() + 0x51704EC))(this, createIfMissing);
	}

};

}
