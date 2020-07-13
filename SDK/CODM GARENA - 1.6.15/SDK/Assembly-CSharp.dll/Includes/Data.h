#pragma once
#include <Il2Cpp/Il2Cpp.h>

class Data
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "Data"));
	}

	template <typename T = uintptr_t> T& material() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = int32_t> T& submeshIndex() {
		return *(T*)((uintptr_t)this + 0x4);
	}
	template <typename T = bool> T& transparent() {
		return *(T*)((uintptr_t)this + 0x8);
	}


};

}
