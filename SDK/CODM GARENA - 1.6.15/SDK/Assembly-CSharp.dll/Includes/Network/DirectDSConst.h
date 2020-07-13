#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Network {

class DirectDSConst
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Network", "DirectDSConst"));
	}

	template <typename T = uint32_t> static T& DIRECTCONN_MAGIC_CODE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uint32_t> static T& WNZ_CRYPT_KEY_SIZE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
