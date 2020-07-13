#pragma once
#include <Il2Cpp/Il2Cpp.h>

class capuserheadert
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.dll", "", "cap_user_header_t"));
	}

	template <typename T = uint32_t> T& version() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = int32_t> T& pid() {
		return *(T*)((uintptr_t)this + 0x4);
	}


};

}
