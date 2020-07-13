#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Security.Cryptography {

class SHAConstants
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Security.Cryptography", "SHAConstants"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> static T& K1() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& K2() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}


};

}
