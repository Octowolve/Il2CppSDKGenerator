#pragma once
#include <Il2Cpp/Il2Cpp.h>

class BankInfo
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BankInfo"));
	}

	template <typename T = float> T& LoadTime() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = float> T& UpdateTime() {
		return *(T*)((uintptr_t)this + 0x4);
	}
	template <typename T = int32_t> T& ReferenceCount() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& FailTime() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = bool> T& IsLoadSuccess() {
		return *(T*)((uintptr_t)this + 0x10);
	}


};

}
