#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Runtime.Remoting.Activation {

class UrlAttribute
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Runtime.Remoting.Activation", "UrlAttribute"));
	}

	template <typename T = Il2CppString*> T& url() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = Il2CppString*> T get_UrlValue() {
		return ((T (*)(UrlAttribute*))(Il2CppBase() + 0x4B1ACBC))(this);
	}
	template <typename T = bool> T Equals(uintptr_t o) {
		return ((T (*)(UrlAttribute*, uintptr_t))(Il2CppBase() + 0x4B1C3F4))(this, o);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(UrlAttribute*))(Il2CppBase() + 0x4B1C4E0))(this);
	}
	template <typename T = void> T GetPropertiesForNewContext(uintptr_t ctorMsg) {
		return ((T (*)(UrlAttribute*, uintptr_t))(Il2CppBase() + 0x4B1C50C))(this, ctorMsg);
	}
	template <typename T = bool> T IsContextOK(uintptr_t ctx, uintptr_t msg) {
		return ((T (*)(UrlAttribute*, uintptr_t, uintptr_t))(Il2CppBase() + 0x4B1C510))(this, ctx, msg);
	}

};

}
