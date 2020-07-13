#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Security.Cryptography {

class DeriveBytes
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Security.Cryptography", "DeriveBytes"));
	}


	template <typename T = Il2CppArray<uintptr_t>*> T GetBytes(int32_t cb) {
		return ((T (*)(DeriveBytes*, int32_t))(Il2CppBase() + 0x0))(this, cb);
	}

};

}
