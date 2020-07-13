#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GCloudTdr {

class IUnpackable
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GCloudTdr", "IUnpackable"));
	}


	template <typename T = uintptr_t> T unpackTLV(Il2CppArray<uintptr_t>* buffer, int32_t size, uintptr_t used) {
		return ((T (*)(IUnpackable*, Il2CppArray<uintptr_t>*, int32_t, uintptr_t))(Il2CppBase() + 0x0))(this, buffer, size, used);
	}

};

}
