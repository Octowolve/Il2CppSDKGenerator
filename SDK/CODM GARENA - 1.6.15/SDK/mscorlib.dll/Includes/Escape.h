#pragma once
#include <Il2Cpp/Il2Cpp.h>

class Escape
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("mscorlib.dll", "", "Escape"));
	}

	template <typename T = Il2CppString*> T& Source() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = int32_t> T& Index() {
		return *(T*)((uintptr_t)this + 0x4);
	}
	template <typename T = int32_t> T& Start() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& End() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = int32_t> T& Optional() {
		return *(T*)((uintptr_t)this + 0x10);
	}


};

}
