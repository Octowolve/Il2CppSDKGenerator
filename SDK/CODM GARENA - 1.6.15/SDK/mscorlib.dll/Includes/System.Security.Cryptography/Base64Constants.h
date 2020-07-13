#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Security.Cryptography {

class Base64Constants
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Security.Cryptography", "Base64Constants"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> static T& EncodeTable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T& DecodeTable() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}


};

}
