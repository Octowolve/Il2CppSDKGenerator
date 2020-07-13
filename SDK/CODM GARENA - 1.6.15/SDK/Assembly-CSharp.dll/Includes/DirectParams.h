#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DirectParams
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DirectParams"));
	}

	template <typename T = float> T& x0() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = float> T& y0() {
		return *(T*)((uintptr_t)this + 0x4);
	}
	template <typename T = float> T& x1() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = float> T& y1() {
		return *(T*)((uintptr_t)this + 0xC);
	}
	template <typename T = float> T& W() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& overshootX() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = float> T& overshootY() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& gamma() {
		return *(T*)((uintptr_t)this + 0x1C);
	}


};

}
