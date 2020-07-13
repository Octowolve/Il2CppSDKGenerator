#pragma once
#include <Il2Cpp/Il2Cpp.h>

class rusage
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "rusage"));
	}

	template <typename T = uintptr_t> T& ru_utime() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> T& ru_stime() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& ru_ixrss() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& ru_idrss() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = int32_t> T& ru_isrss() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& ru_minflt() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = int32_t> T& ru_majflt() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& ru_nswap() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int32_t> T& ru_inblock() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& ru_oublock() {
		return *(T*)((uintptr_t)this + 0x2C);
	}
	template <typename T = int32_t> T& ru_msgsnd() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> T& ru_msgrcv() {
		return *(T*)((uintptr_t)this + 0x34);
	}
	template <typename T = int32_t> T& ru_nsignals() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = int32_t> T& ru_nvcsw() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = int32_t> T& ru_nivcsw() {
		return *(T*)((uintptr_t)this + 0x40);
	}


};

}
