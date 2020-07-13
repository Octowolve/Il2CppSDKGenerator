#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ProcInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("System.dll", "", "ProcInfo"));
	}

	template <typename T = uintptr_t> T& process_handle() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> T& thread_handle() {
		return *(T*)((uintptr_t)this + 0x4);
	}
	template <typename T = int32_t> T& pid() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& tid() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& envKeys() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& envValues() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppString*> T& UserName() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& Domain() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = uintptr_t> T& Password() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = bool> T& LoadUserProfile() {
		return *(T*)((uintptr_t)this + 0x24);
	}


};

}
