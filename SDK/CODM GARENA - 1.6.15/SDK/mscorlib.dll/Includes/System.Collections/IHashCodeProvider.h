#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace System.Collections {

class IHashCodeProvider
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "System.Collections", "IHashCodeProvider"));
	}


	template <typename T = int32_t> T GetHashCode(uintptr_t obj) {
		return ((T (*)(IHashCodeProvider*, uintptr_t))(Il2CppBase() + 0x0))(this, obj);
	}

};

}
