#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Net {

class FtpStatus
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.dll", "System.Net", "FtpStatus"));
	}

	template <typename T = uintptr_t> T& statusCode() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppString*> T& statusDescription() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = uintptr_t> T get_StatusCode() {
		return ((T (*)(FtpStatus*))(Il2CppBase() + 0x42CCC84))(this);
	}
	template <typename T = Il2CppString*> T get_StatusDescription() {
		return ((T (*)(FtpStatus*))(Il2CppBase() + 0x42CCC8C))(this);
	}

};

}
