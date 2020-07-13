#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GCloudTdr {

class IPackable
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GCloudTdr", "IPackable"));
	}


	template <typename T = uintptr_t> T packTLV(Il2CppArray<uintptr_t>* buffer, int32_t size, uintptr_t used, bool useVarInt) {
		return ((T (*)(IPackable*, Il2CppArray<uintptr_t>*, int32_t, uintptr_t, bool))(Il2CppBase() + 0x0))(this, buffer, size, used, useVarInt);
	}

};

}
