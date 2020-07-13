#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Net {

class CookieParser
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.dll", "System.Net", "CookieParser"));
	}

	template <typename T = Il2CppString*> T& header() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& pos() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& length() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = bool> T GetNextNameValue(uintptr_t* name, uintptr_t* val) {
		return ((T (*)(CookieParser*, uintptr_t*, uintptr_t*))(Il2CppBase() + 0x42BE450))(this, name, val);
	}
	template <typename T = Il2CppString*> T GetCookieName() {
		return ((T (*)(CookieParser*))(Il2CppBase() + 0x42BE530))(this);
	}
	template <typename T = Il2CppString*> T GetCookieValue() {
		return ((T (*)(CookieParser*))(Il2CppBase() + 0x42BE6C0))(this);
	}

};

}
