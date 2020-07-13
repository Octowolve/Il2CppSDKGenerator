#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace FrontEnd {

class ShareArkRet
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "FrontEnd", "ShareArkRet"));
	}

	template <typename T = int32_t> T& ret() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppString*> T& msg() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppString*> T& seq() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = int32_t> T get_ret() {
		return ((T (*)(ShareArkRet*))(Il2CppBase() + 0x384DC1C))(this);
	}
	template <typename T = void> T set_ret(int32_t value) {
		return ((T (*)(ShareArkRet*, int32_t))(Il2CppBase() + 0x3856904))(this, value);
	}
	template <typename T = Il2CppString*> T get_msg() {
		return ((T (*)(ShareArkRet*))(Il2CppBase() + 0x384DC24))(this);
	}
	template <typename T = void> T set_msg(Il2CppString* value) {
		return ((T (*)(ShareArkRet*, Il2CppString*))(Il2CppBase() + 0x385690C))(this, value);
	}
	template <typename T = Il2CppString*> T get_seq() {
		return ((T (*)(ShareArkRet*))(Il2CppBase() + 0x3856914))(this);
	}
	template <typename T = void> T set_seq(Il2CppString* value) {
		return ((T (*)(ShareArkRet*, Il2CppString*))(Il2CppBase() + 0x385691C))(this, value);
	}

};

}
