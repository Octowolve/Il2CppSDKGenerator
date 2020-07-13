#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Network {

class MAXPACKEDPKGNUMFORPINGSTAT
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Network", "MAX_PACKED_PKG_NUM_FOR_PINGSTAT"));
	}

	template <typename T = int32_t> static T& VALUE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
