#pragma once
#include <Il2Cpp/Il2Cpp.h>

class timeval
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "timeval"));
	}

	template <typename T = int32_t> T& tv_sec() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = int32_t> T& tv_usec() {
		return *(T*)((uintptr_t)this + 0x4);
	}


};

}
