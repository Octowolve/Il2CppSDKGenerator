#pragma once
#include <Il2Cpp/Il2Cpp.h>

class capuserdatat
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.dll", "", "cap_user_data_t"));
	}

	template <typename T = uint32_t> T& effective() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uint32_t> T& permitted() {
		return *(T*)((uintptr_t)this + 0x4);
	}
	template <typename T = uint32_t> T& inheritable() {
		return *(T*)((uintptr_t)this + 0x8);
	}


};

}
