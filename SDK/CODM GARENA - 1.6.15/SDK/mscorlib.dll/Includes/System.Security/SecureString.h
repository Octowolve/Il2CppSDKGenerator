#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Security {

class SecureString
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Security", "SecureString"));
	}

	template <typename T = int32_t> T& length() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = bool> T& disposed() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& data() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = int32_t> T get_Length() {
		return ((T (*)(SecureString*))(Il2CppBase() + 0x42830DC))(this);
	}
	template <typename T = void> T Dispose() {
		return ((T (*)(SecureString*))(Il2CppBase() + 0x4283198))(this);
	}
	template <typename T = void> T Encrypt() {
		return ((T (*)(SecureString*))(Il2CppBase() + 0x42831E8))(this);
	}
	template <typename T = void> T Decrypt() {
		return ((T (*)(SecureString*))(Il2CppBase() + 0x42831EC))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T GetBuffer() {
		return ((T (*)(SecureString*))(Il2CppBase() + 0x42831F0))(this);
	}

};

}
