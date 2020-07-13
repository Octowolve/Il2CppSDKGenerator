#pragma once
#include <Il2Cpp/Il2Cpp.h>

class OpenidRet
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "OpenidRet"));
	}

	template <typename T = int32_t> T& ret() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppString*> T& msg() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppString*> T& openid() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& uid() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppString*> T& seq() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = int32_t> T get_ret() {
		return ((T (*)(OpenidRet*))(Il2CppBase() + 0x3EEAA0C))(this);
	}
	template <typename T = void> T set_ret(int32_t value) {
		return ((T (*)(OpenidRet*, int32_t))(Il2CppBase() + 0x3EEAA14))(this, value);
	}
	template <typename T = Il2CppString*> T get_msg() {
		return ((T (*)(OpenidRet*))(Il2CppBase() + 0x3EEAA1C))(this);
	}
	template <typename T = void> T set_msg(Il2CppString* value) {
		return ((T (*)(OpenidRet*, Il2CppString*))(Il2CppBase() + 0x3EEAA24))(this, value);
	}
	template <typename T = Il2CppString*> T get_openid() {
		return ((T (*)(OpenidRet*))(Il2CppBase() + 0x3EEAA2C))(this);
	}
	template <typename T = void> T set_openid(Il2CppString* value) {
		return ((T (*)(OpenidRet*, Il2CppString*))(Il2CppBase() + 0x3EEAA34))(this, value);
	}
	template <typename T = Il2CppString*> T get_uid() {
		return ((T (*)(OpenidRet*))(Il2CppBase() + 0x3EEAA3C))(this);
	}
	template <typename T = void> T set_uid(Il2CppString* value) {
		return ((T (*)(OpenidRet*, Il2CppString*))(Il2CppBase() + 0x3EEAA44))(this, value);
	}
	template <typename T = Il2CppString*> T get_seq() {
		return ((T (*)(OpenidRet*))(Il2CppBase() + 0x3EEAA4C))(this);
	}
	template <typename T = void> T set_seq(Il2CppString* value) {
		return ((T (*)(OpenidRet*, Il2CppString*))(Il2CppBase() + 0x3EEAA54))(this, value);
	}

};

}
